<?php
/**
 * @file
 * ask_settings.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ask_settings_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'view post access counter'.
  $permissions['view post access counter'] = array(
    'name' => 'view post access counter',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'statistics',
  );

  return $permissions;
}
