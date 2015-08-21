<?php
/**
 * @file
 * business_directory.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function business_directory_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function business_directory_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function business_directory_node_info() {
  $items = array(
    'business_directory_entry' => array(
      'name' => t('Business Directory Entry'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
