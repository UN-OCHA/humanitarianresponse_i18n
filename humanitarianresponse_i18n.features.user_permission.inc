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

  // Exported permission: edit original values.
  $permissions['edit original values'] = array(
    'name' => 'edit original values',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: edit translation shared fields.
  $permissions['edit translation shared fields'] = array(
    'name' => 'edit translation shared fields',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: translate any entity.
  $permissions['translate any entity'] = array(
    'name' => 'translate any entity',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: translate node entities.
  $permissions['translate node entities'] = array(
    'name' => 'translate node entities',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
    ),
    'module' => 'entity_translation',
  );

  return $permissions;
}
