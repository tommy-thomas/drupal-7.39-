<?php
/**
 * @file
 * basic_page_with_multiple_columns.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function basic_page_with_multiple_columns_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function basic_page_with_multiple_columns_node_info() {
  $items = array(
    'multi_column_basic_page' => array(
      'name' => t('Basic page with multiple columns'),
      'base' => 'node_content',
      'description' => t('Like a basic page, but with multiple columns. Any blocks assigned to the right column will not appear on this page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
