<?php
/**
 * @file
 * ask_user.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ask_user_user_default_roles() {
  $roles = array();

  // Exported role: Moderator.
  $roles['Moderator'] = array(
    'name' => 'Moderator',
    'weight' => 2,
  );

  return $roles;
}
