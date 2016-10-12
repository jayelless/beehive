<?php
/**
 * @file
 * beekeeper_memberships.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function beekeeper_memberships_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: user-menu_join:user/join.
  $menu_links['user-menu_join:user/join'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/join',
    'router_path' => 'user/join',
    'link_title' => 'Join',
    'options' => array(
      'identifier' => 'user-menu_join:user/join',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: user-menu_renew:user/renew.
  $menu_links['user-menu_renew:user/renew'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/renew',
    'router_path' => 'user/renew',
    'link_title' => 'Renew',
    'options' => array(
      'identifier' => 'user-menu_renew:user/renew',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Join');
  t('Renew');

  return $menu_links;
}
