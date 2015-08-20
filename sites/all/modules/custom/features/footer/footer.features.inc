<?php
/**
 * @file
 * footer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function footer_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function footer_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function footer_node_info() {
  $items = array(
    'footer' => array(
      'name' => t('Footer'),
      'base' => 'node_content',
      'description' => t('Only one footer node should exist and it should always be published. Site owners can only edit but not add or delete footers.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
