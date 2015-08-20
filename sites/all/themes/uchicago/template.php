<?php

/**
 * Add body classes if certain regions have content.
 */
function uchicago_preprocess_html(&$variables) {
  // Add conditional stylesheets for IE
  drupal_add_css(path_to_theme() . '/css/ie7.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'lte IE 7', '!IE' => FALSE), 'preprocess' => FALSE));
  drupal_add_css(path_to_theme() . '/css/ie6.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'IE 6', '!IE' => FALSE), 'preprocess' => FALSE));
  drupal_add_css(path_to_theme() . '/css/ie.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'IE', '!IE' => FALSE), 'preprocess' => FALSE));
  // Add the selected theme stylesheets
  $colorscheme =  theme_get_setting('colorscheme');
  drupal_add_css(path_to_theme() . '/css/colors/' . $colorscheme. '.css', array('group' => CSS_THEME, 'every_page' => TRUE));
  drupal_add_css(path_to_theme() . '/css/colors/' . $colorscheme. '_ie.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'lte IE 9', '!IE' => FALSE), 'preprocess' => FALSE));
  drupal_add_css(path_to_theme() . '/css/small.css', array('group' => CSS_THEME, 'every_page' => TRUE));
  drupal_add_css((variable_get('file_public_path', conf_path() . '/files') . '/template/background.css'), array('group' => CSS_THEME, 'every_page' => TRUE));
}

/**
 * Override or insert variables into the page template.
 */
function uchicago_process_page(&$variables) {
  // If an alternate frontpage is defined, set the toggle_simplehomepage variable
  switch (variable_get('site_frontpage', NULL)) {
    case NULL:
    case 'node':
      $variables['toggle_simplehomepage'] = FALSE;
      break;
    default:
      $variables['toggle_simplehomepage'] = TRUE;
      break;
  }
  // Since the title and the shortcut link are both block level elements,
  // positioning them next to each other is much simpler with a wrapper div.
  if (!empty($variables['title_suffix']['add_or_remove_shortcut']) && $variables['title']) {
    // Add a wrapper div using the title_prefix and title_suffix render elements.
    $variables['title_prefix']['shortcut_wrapper'] = array(
      '#markup' => '<div class="shortcut-wrapper clearfix">',
      '#weight' => 100,
    );
    $variables['title_suffix']['shortcut_wrapper'] = array(
      '#markup' => '</div>',
      '#weight' => -99,
    );
    // Make sure the shortcut link is the first item in title_suffix.
    $variables['title_suffix']['add_or_remove_shortcut']['#weight'] = -100;
  }
  // Change the title of the contact form
  if (module_exists('contact')) {
    if ( arg(0) == 'contact' ) { $variables['title'] = t('Contact Us'); }
  }
  // If we're on the events page, set fullwidth to true
  $curr_uri = check_plain(request_uri());
  if (($curr_uri == '/events') || ($curr_uri == '/events/')) { $variables['fullwidth'] = TRUE; } else { $variables['fullwidth'] = FALSE; }
  // If we're on the site request view, set fullwidth to true
  $curr_path = current_path();
  if ($curr_path == 'uc-site-request-view') { $variables['fullwidth'] = TRUE; }
  // Get the https version of the login page
  global $base_url;
  $this_page = current_path();
  $variables['secure_login'] = str_replace("http:", "https:", $base_url) . "/user?destination=" . $this_page;
  // Hacky way of saying if we're on a full view directories page, set to full width
  if (in_array('page__directories__full',$variables['theme_hook_suggestions']) || in_array('page__directories__table',$variables['theme_hook_suggestions'])) {
    $variables['fullwidth'] = TRUE;
  }
  // If we're looking at a homepage feature or mini-feature node page, set to full width
  if (isset($variables['node'])) {
    if ($variables['node']->type == 'homepage_feature' || $variables['node']->type == 'homepage_mini_feature') {
      $variables['fullwidth'] = TRUE;
    }
  }
  // If the field_fullwidth variable is set to 1, then set fullwidth accordingly
  if (isset($variables['node']->field_fullwidth['und'])) {
    if ($variables['node']->field_fullwidth['und'][0]['value'] == 1) {
      $variables['fullwidth'] = TRUE;
    }
  }
  // If we are on the main blog page, alter the title
  $blog_title = variable_get('ucblog_title');
  if ((drupal_get_path_alias() == 'blog') && ($blog_title != '')) {
    $variables['title'] = check_plain($blog_title);
  }
  // Get the text for the link back home from the blog
  $variables['blog_return_text'] = check_plain(variable_get('ucblog_return_text','Return to Main Site'));
}

/**
 * Implements hook_preprocess_maintenance_page().
 */
function uchicago_preprocess_maintenance_page(&$variables) {
  if (!$variables['db_is_active']) {
    unset($variables['site_name']);
  }
  drupal_add_css(drupal_get_path('theme', 'uchicago') . '/css/maintenance-page.css');
}

/**
 * Override or insert variables into the node template.
 */
function uchicago_preprocess_node(&$variables) {
  $formatted_date = format_date($variables['created'], 'custom', 'M j, Y');
  if ($variables['type'] == 'blog_entry') {
    $variables['submitted'] = t('Published by !username on !datetime', array('!username' => $variables['node']->name, '!datetime' => $formatted_date));
  } else {
    $variables['submitted'] = t('Published on !datetime', array('!datetime' => $formatted_date));
  }
  if ($variables['view_mode'] == 'full' && node_is_page($variables['node'])) {
    $variables['classes_array'][] = 'node-full';
  }
}

/**
 * Override or insert variables into the block template.
 */
function uchicago_preprocess_block(&$variables) {
  // In the header region visually hide block titles.
  if ($variables['block']->region == 'header') {
    $variables['title_attributes_array']['class'][] = 'element-invisible';
  }
}

/**
 * Implements theme_menu_tree().
 */
function uchicago_menu_tree($variables) {
  return '<ul class="menu clearfix">' . $variables['tree'] . '</ul>';
}

/**
 * Implements theme_field__field_type().
 */
function uchicago_field__taxonomy_term_reference($variables) {
  // Modify the category taxonomy links so that they do not go to the default taxonomy term page
  if ($variables['element']['#field_name'] == 'field_blogcategories') {
    foreach ($variables['items'] as $delta => $item) {
      $variables['items'][$delta]['#href'] = 'blog/category/' . $variables['items'][$delta]['#title'];
    }
  }

  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<h3 class="field-label">' . $variables['label'] . ': </h3>';
  }

  // Render the items.
  $output .= ($variables['element']['#label_display'] == 'inline') ? '<ul class="links inline">' : '<ul class="links">';
  foreach ($variables['items'] as $delta => $item) {
    $output .= '<li class="taxonomy-term-reference-' . $delta . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</li>';
  }
  $output .= '</ul>';

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . (!in_array('clearfix', $variables['classes_array']) ? ' clearfix' : '') . '">' . $output . '</div>';

  return $output;
}

/* Add a template suggestion for page.tpl.php based on content type */
function uchicago_preprocess_page(&$variables, $hook) {
  if (isset($variables['node'])) {
    // If the node type is "landing_page" the template suggestion will be "page--landing-page.tpl.php
    $variables['theme_hook_suggestions'][] = 'page__' . str_replace('_', '__', $variables['node']->type);
  }
  // Kind of a hacky way of saying if we are on the blog landing page, use the blog--entry template
  if (in_array('page__blog',$variables['theme_hook_suggestions'])) {
    $variables['theme_hook_suggestions'][] = 'page__blog__entry';
  }
}

function uchicago_preprocess_toolbar(&$variables) {
  $variables['empty_toolbar'] = TRUE;
  if (count($variables['user']->roles) > 1) { // If the user has more than one role, meaning they are something more than just an authenticated user
    $variables['empty_toolbar'] = FALSE;
  }
}

/* Content Access: remove excess options */
function uchicago_form_content_access_page_alter(&$form, &$form_state, $form_id) {
        // modify description & titles
        $form['per_role']['#description'] = '';
        $form['per_role']['view']['#title'] = 'To restrict this page so that only visitors with a valid CNET ID/password can view the page, uncheck the first box below for Anonymous visitors. If a page is restricted, users will be presented with a log in screen when they try to access the page.';

        // hide all irrelevant access options
        $form['per_role']['view']['#options'] = array(1 => 'Anonymous visitors (not logged-in)', 2 => 'Logged-in users (anyone with a valid CNET ID/password)');
        $form['per_role']['view_own'] = array();
        $form['per_role']['update'] = array();
        $form['per_role']['update_own'] = array();
        $form['per_role']['delete'] = array();
        $form['per_role']['delete_own'] = array();

        // clear cache on submit
       $form['#submit'][] = 'drupal_flush_all_caches';
}

