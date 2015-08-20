<?php
/**
 * @file
 * strongarm_variables_google_analytics.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function strongarm_variables_google_analytics_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
