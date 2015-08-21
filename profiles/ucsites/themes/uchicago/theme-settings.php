<?php
function uchicago_form_system_theme_settings_alter(&$form, &$form_state) {
  // Add a checkbox to toggle the breadcrumb trail.
//  $form['toggle_simplehomepage'] = array(
//    '#type' => 'checkbox', 
//    '#title' => t('Simple homepage'), 
//    '#default_value' => theme_get_setting('toggle_simplehomepage'), 
//    '#description' => t('Check this box if you would like to have a simple homepage.'),
//  );
  // Allow user to select color scheme
	if (user_access('administer site configuration')) {
		$theme_options = array(
			'phoenix' => t('Phoenix'),
			'light' => t('Phoenix Light'),
			'alice' => t('Alice'),
			'history' => t('History'),
		);
	} elseif (user_access('allow college themes')) {
		$theme_options = array(
			'phoenix' => t('Phoenix'),
			'light' => t('Phoenix Light'),
			'alice' => t('Alice'),
		);
	} elseif (user_access('allow history theme')) {
		$theme_options = array(
			'phoenix' => t('Phoenix'),
			'light' => t('Phoenix Light'),
			'history' => t('History'),
		);
	} else {
		$theme_options = array(
			'phoenix' => t('Phoenix'),
			'light' => t('Phoenix Light'),
		);
	}

	$form['colorscheme'] = array(
		'#type' => 'select',
		'#title' => t('Select your preferred theme'),
		'#default_value' => theme_get_setting('colorscheme'),
		'#options' => $theme_options,
		'#weight' => -10
	);
	
	$form['calendar_api_key'] = array(
		'#type' => 'textfield',
		'#title' => t('Events calendar API key'),
		'#default_value' => theme_get_setting('calendar_api_key'),
		'#size' => 50,
		'#maxlength' => 128,
		'#required' => FALSE,
		'#weight' => -9,
	);
	
	$form['calendar_id'] = array(
		'#type' => 'textfield',
		'#title' => t('Events calendar widget ID'),
		'#default_value' => theme_get_setting('calendar_id'),
		'#size' => 10,
		'#maxlength' => 128,
		'#required' => FALSE,
		'#weight' => -8,
	);	
	
	$form['calendar_list_id'] = array(
		'#type' => 'textfield',
		'#title' => t('Events list widget ID'),
		'#default_value' => theme_get_setting('calendar_list_id'),
		'#size' => 10,
		'#maxlength' => 128,
		'#required' => FALSE,
		'#weight' => -7,
	);	
	
	$form['calendar_rss_id'] = array(
		'#type' => 'textfield',
		'#title' => t('Events RSS widget ID'),
		'#default_value' => theme_get_setting('calendar_rss_id'),
		'#size' => 10,
		'#maxlength' => 128,
		'#required' => FALSE,
		'#weight' => -6,
	);		
	
	$form['theme_settings'] = array(
		'#disabled' => TRUE,
	);
			
}
