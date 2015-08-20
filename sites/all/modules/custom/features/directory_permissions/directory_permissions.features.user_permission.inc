<?php
/**
 * @file
 * directory_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function directory_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: create directory_listing content
  $permissions['create directory_listing content'] = array(
    'name' => 'create directory_listing content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content contributor',
      2 => 'content editor',
      3 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any directory_listing content
  $permissions['delete any directory_listing content'] = array(
    'name' => 'delete any directory_listing content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content editor',
      2 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own directory_listing content
  $permissions['delete own directory_listing content'] = array(
    'name' => 'delete own directory_listing content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content contributor',
      2 => 'content editor',
      3 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any directory_listing content
  $permissions['edit any directory_listing content'] = array(
    'name' => 'edit any directory_listing content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content editor',
      2 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own directory_listing content
  $permissions['edit own directory_listing content'] = array(
    'name' => 'edit own directory_listing content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content contributor',
      2 => 'content editor',
      3 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: enter directory_listing revision log entry
  $permissions['enter directory_listing revision log entry'] = array(
    'name' => 'enter directory_listing revision log entry',
    'roles' => array(
      0 => 'content editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override directory_listing authored by option
  $permissions['override directory_listing authored by option'] = array(
    'name' => 'override directory_listing authored by option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override directory_listing authored on option
  $permissions['override directory_listing authored on option'] = array(
    'name' => 'override directory_listing authored on option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override directory_listing promote to front page option
  $permissions['override directory_listing promote to front page option'] = array(
    'name' => 'override directory_listing promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override directory_listing published option
  $permissions['override directory_listing published option'] = array(
    'name' => 'override directory_listing published option',
    'roles' => array(
      0 => 'content editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override directory_listing revision option
  $permissions['override directory_listing revision option'] = array(
    'name' => 'override directory_listing revision option',
    'roles' => array(
      0 => 'content editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override directory_listing sticky option
  $permissions['override directory_listing sticky option'] = array(
    'name' => 'override directory_listing sticky option',
    'roles' => array(
      0 => 'content editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: view any unpublished directory_listing content
  $permissions['view any unpublished directory_listing content'] = array(
    'name' => 'view any unpublished directory_listing content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
