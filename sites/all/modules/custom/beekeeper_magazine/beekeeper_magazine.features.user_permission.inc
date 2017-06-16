<?php
/**
 * @file
 * beekeeper_magazine.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function beekeeper_magazine_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_beekeeper_magazine_expiry'.
  $permissions['create field_beekeeper_magazine_expiry'] = array(
    'name' => 'create field_beekeeper_magazine_expiry',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_beekeeper_magazine_expiry'.
  $permissions['edit field_beekeeper_magazine_expiry'] = array(
    'name' => 'edit field_beekeeper_magazine_expiry',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_beekeeper_magazine_expiry'.
  $permissions['edit own field_beekeeper_magazine_expiry'] = array(
    'name' => 'edit own field_beekeeper_magazine_expiry',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_beekeeper_magazine_expiry'.
  $permissions['view field_beekeeper_magazine_expiry'] = array(
    'name' => 'view field_beekeeper_magazine_expiry',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_beekeeper_magazine_expiry'.
  $permissions['view own field_beekeeper_magazine_expiry'] = array(
    'name' => 'view own field_beekeeper_magazine_expiry',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
