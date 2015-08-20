<?php
/**
 * @file
 * blog_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function blog_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: assign blog moderator role.
  $permissions['assign blog moderator role'] = array(
    'name' => 'assign blog moderator role',
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: assign blogger role.
  $permissions['assign blogger role'] = array(
    'name' => 'assign blogger role',
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: create blog_entry content.
  $permissions['create blog_entry content'] = array(
    'name' => 'create blog_entry content',
    'roles' => array(
      0 => 'blog moderator',
      1 => 'blogger',
      2 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any blog_entry content.
  $permissions['delete any blog_entry content'] = array(
    'name' => 'delete any blog_entry content',
    'roles' => array(
      0 => 'blog moderator',
      1 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own blog_entry content.
  $permissions['delete own blog_entry content'] = array(
    'name' => 'delete own blog_entry content',
    'roles' => array(
      0 => 'blog moderator',
      1 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any blog_entry content.
  $permissions['edit any blog_entry content'] = array(
    'name' => 'edit any blog_entry content',
    'roles' => array(
      0 => 'blog moderator',
      1 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own blog_entry content.
  $permissions['edit own blog_entry content'] = array(
    'name' => 'edit own blog_entry content',
    'roles' => array(
      0 => 'blog moderator',
      1 => 'blogger',
      2 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: enter blog_entry revision log entry.
  $permissions['enter blog_entry revision log entry'] = array(
    'name' => 'enter blog_entry revision log entry',
    'roles' => array(
      0 => 'blog moderator',
      1 => 'blogger',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override blog_entry authored by option.
  $permissions['override blog_entry authored by option'] = array(
    'name' => 'override blog_entry authored by option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override blog_entry authored on option.
  $permissions['override blog_entry authored on option'] = array(
    'name' => 'override blog_entry authored on option',
    'roles' => array(
      0 => 'blog moderator',
      1 => 'blogger',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override blog_entry promote to front page option.
  $permissions['override blog_entry promote to front page option'] = array(
    'name' => 'override blog_entry promote to front page option',
    'roles' => array(
      0 => 'blog moderator',
      1 => 'blogger',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override blog_entry published option.
  $permissions['override blog_entry published option'] = array(
    'name' => 'override blog_entry published option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override blog_entry revision option.
  $permissions['override blog_entry revision option'] = array(
    'name' => 'override blog_entry revision option',
    'roles' => array(
      0 => 'blog moderator',
      1 => 'blogger',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override blog_entry sticky option.
  $permissions['override blog_entry sticky option'] = array(
    'name' => 'override blog_entry sticky option',
    'roles' => array(
      0 => 'blog moderator',
      1 => 'blogger',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: view any unpublished blog_entry content.
  $permissions['view any unpublished blog_entry content'] = array(
    'name' => 'view any unpublished blog_entry content',
    'roles' => array(
      0 => 'administrator',
      1 => 'blog moderator',
      2 => 'blogger',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
