<?php
/*
* Override filter.module's theme_filter_tips() function to disable tips display.
*/
function ucseven_filter_tips($variables) {
  return '';
}
function ucseven_filter_tips_more_info () {
  return '';
}

function ucseven_form_directory_listing_node_form_alter (&$form, &$form_state, $form_id) {
// Warn users if they are trying to create a directory entry without having first created a directory. Send them to the directory add term screen and then redirect them back to the node edit screen.
	$dirnum = count($form['field_directoryname']['und']['#options']);
	if ($dirnum == 0) {
		drupal_set_message(t('STOP! You need to <a href="/admin/structure/taxonomy/directories/add?destination=node/add/directory-listing">create a directory</a> before creating any directory entries.'), 'error');
		$form['#access'] = false;
	}
}

/**
 * Clear caches after updating theme
 */
function ucseven_form_system_theme_settings_alter(&$form, &$form_state, $form_id) {
  $form['#submit'][] = 'ucseven_theme_update';
}
function ucseven_theme_update(&$form, &$form_state, $form_id) {
  drupal_flush_all_caches();
}

/**
 * Implements hook_form_alter
 */
function ucseven_form_block_admin_configure_alter (&$form, &$form_state, $form_id) {

	// Only hide stuff is the user is not a site developer or admin
	global $user;
	$adminuser = FALSE;
	// Traverse through the array and check to see if the user is a site dev or admin
	foreach($user->roles as $rid => $role){
		if($role == 'administrator' || $role == 'site developer'){
			$adminuser = TRUE;
		}
	}

	if ($adminuser == FALSE) {
		//  Hide the admin theme
		unset($form['regions']['ucseven']);
		// Hide some regions from the dropdown
		unset($form['regions']['uchicago']['#options']['home_features']);
		unset($form['regions']['uchicago']['#options']['help']);
		unset($form['regions']['uchicago']['#options']['footer_column1']);
		unset($form['regions']['uchicago']['#options']['footer_column2']);
		unset($form['regions']['uchicago']['#options']['footer_column3']);
		unset($form['regions']['uchicago']['#options']['footer_column4']);
		unset($form['regions']['plaisance']['#options']['home_features']);
		unset($form['regions']['plaisance']['#options']['help']);
		unset($form['regions']['plaisance']['#options']['footer_column1']);
		unset($form['regions']['plaisance']['#options']['footer_column2']);
		unset($form['regions']['plaisance']['#options']['footer_column3']);
		unset($form['regions']['plaisance']['#options']['footer_column4']);

	}
}

/**
 * Implements hook_form_alter
 */
function ucseven_form_block_admin_display_form_alter (&$form, &$form_state, $form_id) {

	// Only hide stuff is the user is not a site developer or admin
	global $user;
	$adminuser = FALSE;
	// Traverse through the array and check to see if the user is a site dev or admin
	foreach($user->roles as $rid => $role){
		if($role == 'administrator' || $role == 'site developer'){
			$adminuser = TRUE;
		}
	}

	// Only hide stuff when editing the uchicago or plaisance themes
  	if(($form['edited_theme']['#value'] == 'uchicago' || $form['edited_theme']['#value'] == 'plaisance') && $adminuser == FALSE) {  

  	// Hide all the blocks we don't want users to move around
		unset($form['blocks']['shortcut_shortcuts']);
		unset($form['blocks']['system_powered-by']);
		unset($form['blocks']['cck_blocks_field_rightimage']);
		unset($form['blocks']['views_unpublished_content-block']);
		unset($form['blocks']['system_user-menu']);
		unset($form['blocks']['system_main']);
		unset($form['blocks']['devel_execute_php']);
		unset($form['blocks']['menu_features']);
		unset($form['blocks']['node_syndicate']);
		unset($form['blocks']['node_recent']);
		unset($form['blocks']['system_main-menu']);
		unset($form['blocks']['system_management']);
		unset($form['blocks']['system_navigation']);
		unset($form['blocks']['block_6']);
		unset($form['blocks']['user_new']);
		unset($form['blocks']['user_online']);
		unset($form['blocks']['blurgh']);

		// Hide some regions which users shouldn't be altering
		unset($form['block_regions']['#value']['home_features']);
		unset($form['block_regions']['#value']['help']);
		unset($form['block_regions']['#value']['footer_column1']);
		unset($form['block_regions']['#value']['footer_column2']);
		unset($form['block_regions']['#value']['footer_column3']);
		unset($form['block_regions']['#value']['footer_column4']);

		// Hide some region options in the dropdowns
		foreach ($form['blocks'] as &$value) {
			unset($value['region']['#options']['home_features']);
			unset($value['region']['#options']['help']);
			unset($value['region']['#options']['footer_column1']);
			unset($value['region']['#options']['footer_column2']);
			unset($value['region']['#options']['footer_column3']);
			unset($value['region']['#options']['footer_column4']);
		}
	}
}