<?php
/**
 * @file
 * site_developer_role_and_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function site_developer_role_and_permissions_user_default_roles() {
  $roles = array();

  // Exported role: site developer.
  $roles['site developer'] = array(
    'name' => 'site developer',
    'weight' => '8',
    'machine_name' => 'site_developer',
  );

  return $roles;
}
