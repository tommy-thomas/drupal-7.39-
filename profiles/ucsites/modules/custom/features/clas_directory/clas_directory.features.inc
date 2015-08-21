<?php
/**
 * @file
 * clas_directory.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function clas_directory_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function clas_directory_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function clas_directory_node_info() {
  $items = array(
    'clas_directory_entry' => array(
      'name' => t('CLAS Directory Entry'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
