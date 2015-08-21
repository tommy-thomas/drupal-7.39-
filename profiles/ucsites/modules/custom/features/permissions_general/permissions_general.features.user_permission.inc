<?php
/**
 * @file
 * permissions_general.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function permissions_general_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration pages.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      0 => 'administrator',
      1 => 'blog moderator',
      2 => 'blogger',
      3 => 'content contributor',
      4 => 'content editor',
      5 => 'site owner',
    ),
    'module' => 'system',
  );

  // Exported permission: access ckeditor link.
  $permissions['access ckeditor link'] = array(
    'name' => 'access ckeditor link',
    'roles' => array(
      0 => 'administrator',
      1 => 'blog moderator',
      2 => 'blogger',
      3 => 'content contributor',
      4 => 'content editor',
      5 => 'site owner',
    ),
    'module' => 'ckeditor_link',
  );

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      0 => 'administrator',
      1 => 'blog moderator',
      2 => 'blogger',
      3 => 'content contributor',
      4 => 'content editor',
      5 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: access overlay.
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(
      0 => 'administrator',
      1 => 'blog moderator',
      2 => 'blogger',
      3 => 'content contributor',
      4 => 'content editor',
      5 => 'site owner',
    ),
    'module' => 'overlay',
  );

  // Exported permission: access site in maintenance mode.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      0 => 'administrator',
      1 => 'blog moderator',
      2 => 'blogger',
      3 => 'content contributor',
      4 => 'content editor',
      5 => 'site owner',
    ),
    'module' => 'system',
  );

  // Exported permission: access toolbar.
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
      2 => 'content editor',
      3 => 'site owner',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: administer content types.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer filters.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: administer redirects.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      0 => 'administrator',
      1 => 'content editor',
      2 => 'site owner',
    ),
    'module' => 'redirect',
  );

  // Exported permission: administer search.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: administer shortcuts.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: customize shortcut links.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      0 => 'administrator',
      1 => 'content editor',
      2 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: grant content access.
  $permissions['grant content access'] = array(
    'name' => 'grant content access',
    'roles' => array(
      0 => 'administrator',
      1 => 'content editor',
      2 => 'site developer',
      3 => 'site owner',
    ),
    'module' => 'content_access',
  );

  // Exported permission: grant own content access.
  $permissions['grant own content access'] = array(
    'name' => 'grant own content access',
    'roles' => array(
      0 => 'administrator',
      1 => 'content editor',
      2 => 'site developer',
      3 => 'site owner',
    ),
    'module' => 'content_access',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      0 => 'administrator',
      1 => 'content editor',
      2 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: save draft.
  $permissions['save draft'] = array(
    'name' => 'save draft',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
      2 => 'content contributor',
      3 => 'content editor',
      4 => 'site owner',
    ),
    'module' => 'save_draft',
  );

  // Exported permission: search content.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
      3 => 'content editor',
      4 => 'site owner',
    ),
    'module' => 'search',
  );

  // Exported permission: switch shortcut sets.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      0 => 'administrator',
      1 => 'blog moderator',
      2 => 'blogger',
      3 => 'content contributor',
      4 => 'content editor',
      5 => 'site owner',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: use advanced search.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
      3 => 'blog moderator',
      4 => 'blogger',
      5 => 'content contributor',
      6 => 'content editor',
      7 => 'site owner',
    ),
    'module' => 'search',
  );

  // Exported permission: use text format filtered_html.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      0 => 'administrator',
      1 => 'blog moderator',
      2 => 'blogger',
      3 => 'content contributor',
      4 => 'content editor',
      5 => 'site developer',
      6 => 'site owner',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format php_code.
  $permissions['use text format php_code'] = array(
    'name' => 'use text format php_code',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: view any unpublished content.
  $permissions['view any unpublished content'] = array(
    'name' => 'view any unpublished content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content contributor',
      2 => 'content editor',
      3 => 'site owner',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'administrator',
      1 => 'blog moderator',
      2 => 'blogger',
      3 => 'content contributor',
      4 => 'content editor',
      5 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      0 => 'administrator',
      1 => 'blog moderator',
      2 => 'blogger',
      3 => 'content contributor',
      4 => 'content editor',
      5 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: view the administration theme.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      0 => 'administrator',
      1 => 'blog moderator',
      2 => 'blogger',
      3 => 'content contributor',
      4 => 'content editor',
      5 => 'site owner',
    ),
    'module' => 'system',
  );

  return $permissions;
}
