<?php
/**
 * @file
 * beekeeper_users.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function beekeeper_users_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: beekeeper-menu.
  $menus['beekeeper-menu'] = array(
    'menu_name' => 'beekeeper-menu',
    'title' => 'Beekeeper',
    'description' => 'Beekeeper site menu for custom menu links',
  );
  // Exported menu: navigation.
  $menus['navigation'] = array(
    'menu_name' => 'navigation',
    'title' => 'Navigation',
    'description' => 'The <em>Navigation</em> menu contains links intended for site visitors. Links are added to the <em>Navigation</em> menu automatically by some modules.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Beekeeper');
  t('Beekeeper site menu for custom menu links');
  t('Navigation');
  t('The <em>Navigation</em> menu contains links intended for site visitors. Links are added to the <em>Navigation</em> menu automatically by some modules.');

  return $menus;
}
