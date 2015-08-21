<?php
/**
 * @file
 * Contains the theme's functions to manipulate Drupal's default markup.
 *
 * A QUICK OVERVIEW OF DRUPAL THEMING
 *
 *   The default HTML for all of Drupal's markup is specified by its modules.
 *   For example, the comment.module provides the default HTML markup and CSS
 *   styling that is wrapped around each comment. Fortunately, each piece of
 *   markup can optionally be overridden by the theme.
 *
 *   Drupal deals with each chunk of content using a "theme hook". The raw
 *   content is placed in PHP variables and passed through the theme hook, which
 *   can either be a template file (which you should already be familiary with)
 *   or a theme function. For example, the "comment" theme hook is implemented
 *   with a comment.tpl.php template file, but the "breadcrumb" theme hooks is
 *   implemented with a theme_breadcrumb() theme function. Regardless if the
 *   theme hook uses a template file or theme function, the template or function
 *   does the same kind of work; it takes the PHP variables passed to it and
 *   wraps the raw content with the desired HTML markup.
 *
 *   Most theme hooks are implemented with template files. Theme hooks that use
 *   theme functions do so for performance reasons - theme_field() is faster
 *   than a field.tpl.php - or for legacy reasons - theme_breadcrumb() has "been
 *   that way forever."
 *
 *   The variables used by theme functions or template files come from a handful
 *   of sources:
 *   - the contents of other theme hooks that have already been rendered into
 *     HTML. For example, the HTML from theme_breadcrumb() is put into the
 *     $breadcrumb variable of the page.tpl.php template file.
 *   - raw data provided directly by a module (often pulled from a database)
 *   - a "render element" provided directly by a module. A render element is a
 *     nested PHP array which contains both content and meta data with hints on
 *     how the content should be rendered. If a variable in a template file is a
 *     render element, it needs to be rendered with the render() function and
 *     then printed using:
 *       <?php print render($variable); ?>
 *
 * ABOUT THE TEMPLATE.PHP FILE
 *
 *   The template.php file is one of the most useful files when creating or
 *   modifying Drupal themes. With this file you can do three things:
 *   - Modify any theme hooks variables or add your own variables, using
 *     preprocess or process functions.
 *   - Override any theme function. That is, replace a module's default theme
 *     function with one you write.
 *   - Call hook_*_alter() functions which allow you to alter various parts of
 *     Drupal's internals, including the render elements in forms. The most
 *     useful of which include hook_form_alter(), hook_form_FORM_ID_alter(),
 *     and hook_page_alter(). See api.drupal.org for more information about
 *     _alter functions.
 *
 * OVERRIDING THEME FUNCTIONS
 *
 *   If a theme hook uses a theme function, Drupal will use the default theme
 *   function unless your theme overrides it. To override a theme function, you
 *   have to first find the theme function that generates the output. (The
 *   api.drupal.org website is a good place to find which file contains which
 *   function.) Then you can copy the original function in its entirety and
 *   paste it in this template.php file, changing the prefix from theme_ to
 *   ul_plaisance_. For example:
 *
 *     original, found in modules/field/field.module: theme_field()
 *     theme override, found in template.php: ul_plaisance_field()
 *
 *   where plaisance is the name of your sub-theme. For example, the
 *   zen_classic theme would define a zen_classic_field() function.
 *
 *   Note that base themes can also override theme functions. And those
 *   overrides will be used by sub-themes unless the sub-theme chooses to
 *   override again.
 *
 *   Zen core only overrides one theme function. If you wish to override it, you
 *   should first look at how Zen core implements this function:
 *     theme_breadcrumbs()      in zen/template.php
 *
 *   For more information, please visit the Theme Developer's Guide on
 *   Drupal.org: http://drupal.org/node/173880
 *
 * CREATE OR MODIFY VARIABLES FOR YOUR THEME
 *
 *   Each tpl.php template file has several variables which hold various pieces
 *   of content. You can modify those variables (or add new ones) before they
 *   are used in the template files by using preprocess functions.
 *
 *   This makes THEME_preprocess_HOOK() functions the most powerful functions
 *   available to themers.
 *
 *   It works by having one preprocess function for each template file or its
 *   derivatives (called theme hook suggestions). For example:
 *     THEME_preprocess_page    alters the variables for page.tpl.php
 *     THEME_preprocess_node    alters the variables for node.tpl.php or
 *                              for node--forum.tpl.php
 *     THEME_preprocess_comment alters the variables for comment.tpl.php
 *     THEME_preprocess_block   alters the variables for block.tpl.php
 *
 *   For more information on preprocess functions and theme hook suggestions,
 *   please visit the Theme Developer's Guide on Drupal.org:
 *   http://drupal.org/node/223440 and http://drupal.org/node/1089656
 */

/**
 * Override or insert variables into the page templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */
function ul_plaisance_preprocess_page(&$variables, $hook) {
  // Define some basic variables and set default values
  $this_page = current_path();
  $variables['login_link'] = '/user?destination=' . $this_page; // The login link on the copyright
  $variables['maincontent'] = TRUE; // Whether or not to print the maincontent class (used with homepage mini-feature node pages)
  $variables['is_blog'] = FALSE; // Used to indicate if it's a blog page
  $variables['blog_return_text'] = check_plain(variable_get('ucblog_return_text', 'Return to Main Site')); // Get the text for the link back home from the blog
  $variables['templatron_site_name_size'] = variable_get('templatron_site_name_size', 'medium');
  $variables['templatron_feature_align'] = 'features-' . variable_get('templatron_feature_align', 'right');
  $variables['templatron_navigation'] = variable_get('templatron_navigation', 'left');

  // Get the templatron site name and make it safe
  $variables['templatron_site_name'] = check_plain(variable_get('templatron_site_name'));
  // Then, replace == with a BR, and replace small brackets in the templatron_site_name
  $variables['templatron_site_name'] = str_replace('[br]', '<br />',$variables['templatron_site_name']);
  $variables['templatron_site_name'] = str_replace('[sm]', '<small>', $variables['templatron_site_name']);
  $variables['templatron_site_name'] = str_replace('[/sm]', '</small>', $variables['templatron_site_name']);

  $templatron_logo_path = variable_get('templatron_logo_path');
  if ($templatron_logo_path) {
    // If the logo exists, set the variable to the full path to the logo image
    $variables['templatron_logo'] = file_create_url($templatron_logo_path);
  }

  // Add a template suggestion for page.tpl.php based on content type
  if (isset($variables['node'])) {
    // If the node type is "landing_page" the template suggestion will be "page--landing--page.tpl.php
    $variables['theme_hook_suggestions'][] = 'page__' . str_replace('_', '__', $variables['node']->type);
  }

  // Kind of a hacky way of saying if we are on the blog landing page, use the blog template
  if (in_array('page__blog',$variables['theme_hook_suggestions']) || (isset($variables['node']) && $variables['node']-> type == 'blog_entry')) {
    $variables['is_blog'] = TRUE;
  }

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

  // If we're looking at a homepage feature or mini-feature node page, set to full width
  if (isset($variables['node'])) {
    // If we're looking at a homepage feature or mini-feature node page, do not print the maincontent class
    if ($variables['node']->type == 'homepage_mini_feature' || $variables['node']->type == 'homepage_feature') {
      $variables['maincontent'] = FALSE;
    }
  }

  // If we are on the main blog page, alter the title
  $blog_title = variable_get('ucblog_title');
  if ((drupal_get_path_alias() == 'blog') && ($blog_title != '')) {
    $variables['title'] = check_plain($blog_title);
  }

  // If there is no left column, then left-align the feature
  if (empty($variables['page']['sidebar_first'])) {
    $variables['templatron_feature_align'] = 'features-left';
  }
 
}

/**
 * Override or insert variables into the node template.
 */
function ul_plaisance_preprocess_node(&$variables, $hook) {
  // Define a new date format
  $formatted_date = format_date($variables['created'], 'custom', 'M j, Y');

  // Alter the 'submmited by' text based on what kind of page is viewed
  if ($variables['type'] == 'blog_entry') {
    $variables['submitted'] = t('Published by !username on !datetime', array('!username' => $variables['node']->name, '!datetime' => $formatted_date));
  } else {
    $variables['submitted'] = t('Published on !datetime', array('!datetime' => $formatted_date));
  }

  // Add an extra class when viewing a full node page
  if ($variables['view_mode'] == 'full' && node_is_page($variables['node'])) {
    $variables['classes_array'][] = 'node-full';
  }

  // Check the length of the homepage feature title and add a class
  if ($variables['type'] == 'homepage_feature') {
    $title_length = strlen($variables['title']);
    $variables['title_class'] = ($title_length > 65 ? 'small' : 'large');
  }

  // If the field_fullwidth variable is set to 1, then add fullwidth to the node classes
  if (isset($variables['field_fullwidth']['und'][0]['value'])) {
    if ($variables['field_fullwidth']['und'][0]['value'] == 1) {
      $variables['classes_array'][] = 'fullwidth';
    }
  }

}

/**
 * Implements theme_field.
 * In this implementation, we just strip out a bunch of extra divs so that our markup is cleaner.
 */
function ul_plaisance_field($variables) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<div class="field-label"' . $variables['title_attributes'] . '>' . $variables['label'] . ':&nbsp;</div>';
  }

  // Just get rid of all the extra divs
  foreach ($variables['items'] as $delta => $item) {
    $classes = 'field-item ' . ($delta % 2 ? 'odd' : 'even');
    $output .= drupal_render($item);
  }

  return $output;
}

/**
 * Implements theme_field__field_type().
 */
function ul_plaisance_field__taxonomy_term_reference($variables) {
  // If rendering blog categories, modify the category links so that they do not go to the default taxonomy term page
  if ($variables['element']['#field_name'] == 'field_blogcategories') {
    foreach ($variables['items'] as $delta => $item) {
      $variables['items'][$delta]['#href'] = 'blog/category/' . $variables['items'][$delta]['#title'];
    }
  }

  // And then just render the field using the default code from theme_field()
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

/**
 * Implements hook_preprocess_toolbar().
 */
function ul_plaisance_preprocess_toolbar(&$variables) {
  $variables['empty_toolbar'] = TRUE;

  // If the user has more than one role, meaning they are something more than just an authenticated user
  if (count($variables['user']->roles) > 1) {
    $variables['empty_toolbar'] = FALSE;
  }
}

/**
 * Implements hook_form_alter().
 * Content Access: remove excess options.
 */
function ul_plaisance_form_content_access_page_alter(&$form, &$form_state, $form_id) {
  // Modify descriptions & titles
  $form['per_role']['#description'] = '';
  $form['per_role']['view']['#title'] = 'To restrict this page so that only visitors with a valid CNET ID/password can view the page, uncheck the first box below for Anonymous visitors. If a page is restricted, users will be presented with a log in screen when they try to access the page.';

  // Hide all irrelevant access options
  $form['per_role']['view']['#options'] = array(1 => 'Anonymous visitors (not logged-in)', 2 => 'Logged-in users (anyone with a valid CNET ID/password)');
  $form['per_role']['view_own'] = array();
  $form['per_role']['update'] = array();
  $form['per_role']['update_own'] = array();
  $form['per_role']['delete'] = array();
  $form['per_role']['delete_own'] = array();

  // Clear cache on submit
  $form['#submit'][] = 'drupal_flush_all_caches';
}

/**
 * Implements hook_preprocess_image().
 */
function ul_plaisance_preprocess_image(&$variables) {
  // Strip away width and height attributes so that images respond better
  if ($variables['style_name'] != 'homefeature' && $variables['style_name'] != 'slideshow-larger' && $variables['style_name'] != 'homefeature-large' && $variables['style_name'] != 'columnwidth-wider') {
    $variables['attributes']['data-original'] = $variables['path'];
    $variables['path'] = '/sites/all/themes/plaisance/i/template/transparent.gif';
    $variables['attributes']['class'][] = 'lazy';
  }
  foreach (array('width', 'height') as $key) {
    unset($variables[$key]);
    unset($variables['attributes'][$key]);
  }

  switch($variables['style_name']) {
    case 'homepage-videos-featured':
    case 'homepage-videos':
    case 'videogallery-featured':
    case 'hero-feature':
      $variables['path'] = $variables['attributes']['data-original'];
      unset($variables['attributes']['data-original']);
      unset($variables['attributes']['class']);
  }
}

function ul_plaisance_feed_icon($variables) {
  $text = t('Subscribe to !feed-title', array('!feed-title' => $variables['title']));
  $output = '<div class="ss-icon rss-icon"><a title="' . $text . '" href="' . $variables['url'] . '">RSS</a></div>';
  return $output;
}

/**
 * Implements hook_form_alter().
 */
function ul_plaisance_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id == 'search_block_form') {

    // Change the text on the label element
    $form['search_block_form']['#title'] = t('Search');

    // Toggle label visibilty
    $form['search_block_form']['#title_display'] = 'invisible';

    // Set a default value for the textfield
    $form['search_block_form']['#default_value'] = t('Search');
    // $form['actions']['submit'] = array('#type' => 'image_button', '#src' => base_path() . path_to_theme() . '/i/template/search-button.png');

    // Add extra attributes to the text box
    $form['search_block_form']['#attributes']['onblur'] = "if (this.value == '') {this.value = 'Search';}";
    $form['search_block_form']['#attributes']['onfocus'] = "if (this.value == 'Search') {this.value = '';}";

    // Prevent user from searching the default text
    $form['#attributes']['onsubmit'] = "if(this.search_block_form.value=='Search'){ alert('Please enter a search'); return false; }";
  }
}

/**
 * Override or insert variables into the comment wrapper template.
 */
function ul_plaisance_preprocess_comment_wrapper(&$variables) {
  $this_page = current_path();
  $variables['login_link'] = '/user?destination=' . $this_page . '%23comment-form';
}

/**
 * Override or insert variables into the maintenance page template.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("maintenance_page" in this case.)
 */
/* -- Delete this line if you want to use this function
function ul_plaisance_preprocess_maintenance_page(&$variables, $hook) {
  // When a variable is manipulated or added in preprocess_html or
  // preprocess_page, that same work is probably needed for the maintenance page
  // as well, so we can just re-use those functions to do that work here.
  ul_plaisance_preprocess_html($variables, $hook);
  ul_plaisance_preprocess_page($variables, $hook);
}
// */

/**
 * Override or insert variables into the html templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("html" in this case.)
 */
function ul_plaisance_preprocess_html(&$variables, $hook) {
  # Add per-site custom CSS
  drupal_add_css((variable_get('file_public_path', conf_path() . '/files') . '/template/custom.css'), array('group' => CSS_THEME, 'every_page' => TRUE));

  # Add per-site custom JS, if it exists
  # Not sure why, but drupal_add_js throws a warning if custom.js does not exist,
  # but drupal_add_css does not. So here we first check to see if the file exsists.
  $custom_js = variable_get('file_public_path', conf_path() . '/files') . '/template/custom.js';
  if (file_exists($custom_js)) {
    drupal_add_js($custom_js,
      array(
        'group' => JS_THEME,
        'every_page' => TRUE,
      )
    );
  }
}

/**
 * Process variables for securesite-page.tpl.php
 *
 * @param $variables
 *   An array of variables from the theme system.
 */
function ul_plaisance_preprocess_securesite_page(&$variables) {
  // Clear out existing CSS
  $css = &drupal_static('drupal_add_css', array());
  $css = array();
  
  // Add our css file back, so it will be the only one
  drupal_add_css(drupal_get_path('theme', 'plaisance') . '/css/securesite.css');
}

/**
 * Override or insert variables into the comment templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("comment" in this case.)
 */
/* -- Delete this line if you want to use this function
function ul_plaisance_preprocess_comment(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the region templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("region" in this case.)
 */
/* -- Delete this line if you want to use this function
function ul_plaisance_preprocess_region(&$variables, $hook) {
  // Don't use Zen's region--sidebar.tpl.php template for sidebars.
  //if (strpos($variables['region'], 'sidebar_') === 0) {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('region__sidebar'));
  //}
}
// */

/**
 * Override or insert variables into the block templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
 */
/* -- Delete this line if you want to use this function
function ul_plaisance_preprocess_block(&$variables, $hook) {
  // Add a count to all the blocks in the region.
  // $variables['classes_array'][] = 'count-' . $variables['block_id'];

  // By default, Zen will use the block--no-wrapper.tpl.php for the main
  // content. This optional bit of code undoes that:
  //if ($variables['block_html_id'] == 'block-system-main') {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('block__no_wrapper'));
  //}
}
// */
