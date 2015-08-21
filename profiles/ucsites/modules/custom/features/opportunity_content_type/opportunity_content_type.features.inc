<?php
/**
 * @file
 * opportunity_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function opportunity_content_type_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function opportunity_content_type_node_info() {
  $items = array(
    'opportunity' => array(
      'name' => t('Opportunity'),
      'base' => 'node_content',
      'description' => t('Funding, employment and enrichment opportunities'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
