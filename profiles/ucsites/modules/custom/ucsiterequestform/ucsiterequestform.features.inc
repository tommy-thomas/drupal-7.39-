<?php
/**
 * @file
 * ucsiterequestform.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ucsiterequestform_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ucsiterequestform_node_info() {
  $items = array(
    'ucsiterequestform' => array(
      'name' => t('UChicago Sites Request Form'),
      'base' => 'node_content',
      'description' => t('The form used to capture requests for new UChicago Sites.'),
      'has_title' => '1',
      'title_label' => t('Please tell us the name of your site (this name will appear in the header)'),
      'help' => '',
    ),
  );
  return $items;
}
