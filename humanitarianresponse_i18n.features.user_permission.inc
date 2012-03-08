<?php
/**
 * @file
 * humanitarianresponse_i18n.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function humanitarianresponse_i18n_user_default_permissions() {
  $permissions = array();

  // Exported permission: translate content
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
    ),
    'module' => 'translation',
  );

  return $permissions;
}
