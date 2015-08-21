<?php
/**
 * @file
 * ldap_configuration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ldap_configuration_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ldap_authorization" && $api == "ldap_authorization") {
    return array("version" => "1");
  }
}
