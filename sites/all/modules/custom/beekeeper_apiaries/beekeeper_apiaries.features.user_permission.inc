<?php
/**
 * @file
 * beekeeper_apiaries.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function beekeeper_apiaries_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create apiary content'.
  $permissions['create apiary content'] = array(
    'name' => 'create apiary content',
    'roles' => array(
      'Honorary member' => 'Honorary member',
      'Junior member' => 'Junior member',
      'Lifetime member' => 'Lifetime member',
      'Standard member' => 'Standard member',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any apiary content'.
  $permissions['delete any apiary content'] = array(
    'name' => 'delete any apiary content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own apiary content'.
  $permissions['delete own apiary content'] = array(
    'name' => 'delete own apiary content',
    'roles' => array(
      'Honorary member' => 'Honorary member',
      'Junior member' => 'Junior member',
      'Lifetime member' => 'Lifetime member',
      'Standard member' => 'Standard member',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any apiary content'.
  $permissions['edit any apiary content'] = array(
    'name' => 'edit any apiary content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own apiary content'.
  $permissions['edit own apiary content'] = array(
    'name' => 'edit own apiary content',
    'roles' => array(
      'Honorary member' => 'Honorary member',
      'Junior member' => 'Junior member',
      'Lifetime member' => 'Lifetime member',
      'Standard member' => 'Standard member',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view any apiary content'.
  $permissions['view any apiary content'] = array(
    'name' => 'view any apiary content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view own apiary content'.
  $permissions['view own apiary content'] = array(
    'name' => 'view own apiary content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node_view_permissions',
  );

  return $permissions;
}
