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
  // Exported menu link: user-menu_join---junior-membership:user/join/junior-membership.
  $menu_links['user-menu_join---junior-membership:user/join/junior-membership'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/join/junior-membership',
    'router_path' => 'user/join/junior-membership',
    'link_title' => 'Join - Junior Membership',
    'options' => array(
      'attributes' => array(
        'title' => 'Membership at reduced rate for young beekeepers',
      ),
      'identifier' => 'user-menu_join---junior-membership:user/join/junior-membership',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
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
  // Exported menu link: user-menu_join---standard-membership:user/join/standard-membership.
  $menu_links['user-menu_join---standard-membership:user/join/standard-membership'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/join/standard-membership',
    'router_path' => 'user/join/standard-membership',
    'link_title' => 'Join - Standard Membership',
    'options' => array(
      'attributes' => array(
        'title' => 'Standard membership for regular members',
      ),
      'identifier' => 'user-menu_join---standard-membership:user/join/standard-membership',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
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
  // Exported menu link: user-menu_log-out:user/logout.
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
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
  // Exported menu link: user-menu_renew---junior-membership:user/renew/junior-membership.
  $menu_links['user-menu_renew---junior-membership:user/renew/junior-membership'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/renew/junior-membership',
    'router_path' => 'user/renew/junior-membership',
    'link_title' => 'Renew - Junior Membership',
    'options' => array(
      'attributes' => array(
        'title' => 'Membership at reduced rate for young beekeepers',
      ),
      'identifier' => 'user-menu_renew---junior-membership:user/renew/junior-membership',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
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
  // Exported menu link: user-menu_renew---standard-membership:user/renew/standard-membership.
  $menu_links['user-menu_renew---standard-membership:user/renew/standard-membership'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/renew/standard-membership',
    'router_path' => 'user/renew/standard-membership',
    'link_title' => 'Renew - Standard Membership',
    'options' => array(
      'attributes' => array(
        'title' => 'Standard membership for regular members',
      ),
      'identifier' => 'user-menu_renew---standard-membership:user/renew/standard-membership',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
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
  // Exported menu link: user-menu_user-account:user.
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Join');
  t('Join - Dummy Membership');
  t('Join - Honorary Membership');
  t('Join - Junior Membership');
  t('Join - Life Membership');
  t('Join - Standard Membership');
  t('Log out');
  t('Renew');
  t('Renew - Dummy Membership');
  t('Renew - Honorary Membership');
  t('Renew - Junior Membership');
  t('Renew - Life Membership');
  t('Renew - Standard Membership');
  t('User account');

  return $menu_links;
}
