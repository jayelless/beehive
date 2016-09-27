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

  // Exported menu link: user-menu_join---dummy-membership:user/join/membership.
  $menu_links['user-menu_join---dummy-membership:user/join/membership'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/join/membership',
    'router_path' => 'user/join/membership',
    'link_title' => 'Join - Dummy Membership',
    'options' => array(
      'attributes' => array(
        'title' => 'This is a dummy membership type that must be present to allow memberships to work. Refer http://drupal.org/node/2400737.',
      ),
      'identifier' => 'user-menu_join---dummy-membership:user/join/membership',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'user-menu_join:user/join',
  );
  // Exported menu link: user-menu_join---honorary-membership:user/join/honorary-membership.
  $menu_links['user-menu_join---honorary-membership:user/join/honorary-membership'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/join/honorary-membership',
    'router_path' => 'user/join/honorary-membership',
    'link_title' => 'Join - Honorary Membership',
    'options' => array(
      'attributes' => array(
        'title' => 'Honorary membership granted by the organisation',
      ),
      'identifier' => 'user-menu_join---honorary-membership:user/join/honorary-membership',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'user-menu_join:user/join',
  );
  // Exported menu link: user-menu_join---life-membership:user/join/life-membership.
  $menu_links['user-menu_join---life-membership:user/join/life-membership'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/join/life-membership',
    'router_path' => 'user/join/life-membership',
    'link_title' => 'Join - Life Membership',
    'options' => array(
      'attributes' => array(
        'title' => 'Non-expiring membership awarded to members who have made a significant contribution',
      ),
      'identifier' => 'user-menu_join---life-membership:user/join/life-membership',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'user-menu_join:user/join',
  );
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
  // Exported menu link: user-menu_renew---dummy-membership:user/renew/membership.
  $menu_links['user-menu_renew---dummy-membership:user/renew/membership'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/renew/membership',
    'router_path' => 'user/renew/membership',
    'link_title' => 'Renew - Dummy Membership',
    'options' => array(
      'attributes' => array(
        'title' => 'This is a dummy membership type that must be present to allow memberships to work. Refer http://drupal.org/node/2400737.',
      ),
      'identifier' => 'user-menu_renew---dummy-membership:user/renew/membership',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'user-menu_renew:user/renew',
  );
  // Exported menu link: user-menu_renew---honorary-membership:user/renew/honorary-membership.
  $menu_links['user-menu_renew---honorary-membership:user/renew/honorary-membership'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/renew/honorary-membership',
    'router_path' => 'user/renew/honorary-membership',
    'link_title' => 'Renew - Honorary Membership',
    'options' => array(
      'attributes' => array(
        'title' => 'Honorary membership granted by the organisation',
      ),
      'identifier' => 'user-menu_renew---honorary-membership:user/renew/honorary-membership',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'user-menu_renew:user/renew',
  );
  // Exported menu link: user-menu_renew---life-membership:user/renew/life-membership.
  $menu_links['user-menu_renew---life-membership:user/renew/life-membership'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/renew/life-membership',
    'router_path' => 'user/renew/life-membership',
    'link_title' => 'Renew - Life Membership',
    'options' => array(
      'attributes' => array(
        'title' => 'Non-expiring membership awarded to members who have made a significant contribution',
      ),
      'identifier' => 'user-menu_renew---life-membership:user/renew/life-membership',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'user-menu_renew:user/renew',
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
  t('Join - Dummy Membership');
  t('Join - Honorary Membership');
  t('Join - Life Membership');
  t('Renew');
  t('Renew - Dummy Membership');
  t('Renew - Honorary Membership');
  t('Renew - Life Membership');

  return $menu_links;
}
