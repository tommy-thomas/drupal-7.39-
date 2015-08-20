<?php
/**
 * @file
 * blog_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function blog_roles_user_default_roles() {
  $roles = array();

  // Exported role: blog moderator.
  $roles['blog moderator'] = array(
    'name' => 'blog moderator',
    'weight' => '4',
    'machine_name' => 'blog_moderator',
  );

  // Exported role: blogger.
  $roles['blogger'] = array(
    'name' => 'blogger',
    'weight' => '3',
    'machine_name' => 'blogger',
  );

  return $roles;
}
