<?php
/**
 * @file
 * beekeeper_navigation.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function beekeeper_navigation_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: beekeeper-menu_club-info:node/14.
  $menu_links['beekeeper-menu_club-info:node/14'] = array(
    'menu_name' => 'beekeeper-menu',
    'link_path' => 'node/14',
    'router_path' => 'node/%',
    'link_title' => 'Club info',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'beekeeper-menu_club-info:node/14',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
    'customized' => 1,
  );
  // Exported menu link: beekeeper-menu_orders:admin/commerce/orders.
  $menu_links['beekeeper-menu_orders:admin/commerce/orders'] = array(
    'menu_name' => 'beekeeper-menu',
    'link_path' => 'admin/commerce/orders',
    'router_path' => 'admin/commerce/orders',
    'link_title' => 'Orders',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'beekeeper-menu_orders:admin/commerce/orders',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 6,
    'customized' => 1,
  );
  // Exported menu link: beekeeper-menu_swarms:node/19.
  $menu_links['beekeeper-menu_swarms:node/19'] = array(
    'menu_name' => 'beekeeper-menu',
    'link_path' => 'node/19',
    'router_path' => 'node/%',
    'link_title' => 'Swarms',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'beekeeper-menu_swarms:node/19',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
  );
  // Exported menu link: main-menu_forums:forum.
  $menu_links['main-menu_forums:forum'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'forum',
    'router_path' => 'forum',
    'link_title' => 'Forums',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_forums:forum',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: navigation_2016-nucs:node/140.
  $menu_links['navigation_2016-nucs:node/140'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/140',
    'router_path' => 'node/%',
    'link_title' => '2016 Nucs',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'navigation_2016-nucs:node/140',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: navigation_add-content:node/add.
  $menu_links['navigation_add-content:node/add'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add content',
    'options' => array(
      'identifier' => 'navigation_add-content:node/add',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: navigation_add-file:file/add.
  $menu_links['navigation_add-file:file/add'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'file/add',
    'router_path' => 'file/add',
    'link_title' => 'Add file',
    'options' => array(
      'identifier' => 'navigation_add-file:file/add',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: navigation_add-subscription:notifications/subscription/add.
  $menu_links['navigation_add-subscription:notifications/subscription/add'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'notifications/subscription/add',
    'router_path' => 'notifications/subscription/add',
    'link_title' => 'Add subscription',
    'options' => array(
      'identifier' => 'navigation_add-subscription:notifications/subscription/add',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: navigation_content-type-and-term:notifications/subscription/add/content_type_term.
  $menu_links['navigation_content-type-and-term:notifications/subscription/add/content_type_term'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'notifications/subscription/add/content_type_term',
    'router_path' => 'notifications/subscription/add/content_type_term',
    'link_title' => 'Content type and term',
    'options' => array(
      'attributes' => array(
        'title' => 'Subscribe to content of given type tagged with term.',
      ),
      'identifier' => 'navigation_content-type-and-term:notifications/subscription/add/content_type_term',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-subscription:notifications/subscription/add',
  );
  // Exported menu link: navigation_content-type:notifications/subscription/add/content_type.
  $menu_links['navigation_content-type:notifications/subscription/add/content_type'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'notifications/subscription/add/content_type',
    'router_path' => 'notifications/subscription/add/content_type',
    'link_title' => 'Content type',
    'options' => array(
      'attributes' => array(
        'title' => 'Subscribe to all content of a given type.',
      ),
      'identifier' => 'navigation_content-type:notifications/subscription/add/content_type',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-subscription:notifications/subscription/add',
  );
  // Exported menu link: navigation_forums:forum.
  $menu_links['navigation_forums:forum'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'forum',
    'router_path' => 'forum',
    'link_title' => 'Forums',
    'options' => array(
      'identifier' => 'navigation_forums:forum',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: navigation_multiple-tags:notifications/subscription/add/taxonomy_term_multiple.
  $menu_links['navigation_multiple-tags:notifications/subscription/add/taxonomy_term_multiple'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'notifications/subscription/add/taxonomy_term_multiple',
    'router_path' => 'notifications/subscription/add/taxonomy_term_multiple',
    'link_title' => 'Multiple tags',
    'options' => array(
      'attributes' => array(
        'title' => 'Subscribe to content tagged with multiple taxonomy terms.',
      ),
      'identifier' => 'navigation_multiple-tags:notifications/subscription/add/taxonomy_term_multiple',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-subscription:notifications/subscription/add',
  );
  // Exported menu link: navigation_swarm-collectors:swarms/view-collectors.
  $menu_links['navigation_swarm-collectors:swarms/view-collectors'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'swarms/view-collectors',
    'router_path' => 'swarms/view-collectors',
    'link_title' => 'Swarm collectors',
    'options' => array(
      'identifier' => 'navigation_swarm-collectors:swarms/view-collectors',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: navigation_swarm-recipients:swarms/view-recipients.
  $menu_links['navigation_swarm-recipients:swarms/view-recipients'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'swarms/view-recipients',
    'router_path' => 'swarms/view-recipients',
    'link_title' => 'Swarm recipients',
    'options' => array(
      'identifier' => 'navigation_swarm-recipients:swarms/view-recipients',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: navigation_tag:notifications/subscription/add/taxonomy_term.
  $menu_links['navigation_tag:notifications/subscription/add/taxonomy_term'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'notifications/subscription/add/taxonomy_term',
    'router_path' => 'notifications/subscription/add/taxonomy_term',
    'link_title' => 'Tag',
    'options' => array(
      'attributes' => array(
        'title' => 'Subscribe to content tagged with a given taxonomy term.',
      ),
      'identifier' => 'navigation_tag:notifications/subscription/add/taxonomy_term',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-subscription:notifications/subscription/add',
  );
  // Exported menu link: navigation_thread:notifications/subscription/add/content_thread.
  $menu_links['navigation_thread:notifications/subscription/add/content_thread'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'notifications/subscription/add/content_thread',
    'router_path' => 'notifications/subscription/add/content_thread',
    'link_title' => 'Thread',
    'options' => array(
      'attributes' => array(
        'title' => 'Subscribe to all changes and comments for a thread.',
      ),
      'identifier' => 'navigation_thread:notifications/subscription/add/content_thread',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-subscription:notifications/subscription/add',
  );
  // Exported menu link: navigation_vocabulary:notifications/subscription/add/taxonomy_vocabulary.
  $menu_links['navigation_vocabulary:notifications/subscription/add/taxonomy_vocabulary'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'notifications/subscription/add/taxonomy_vocabulary',
    'router_path' => 'notifications/subscription/add/taxonomy_vocabulary',
    'link_title' => 'Vocabulary',
    'options' => array(
      'attributes' => array(
        'title' => 'Subscribe to terms of a given vocabulary.',
      ),
      'identifier' => 'navigation_vocabulary:notifications/subscription/add/taxonomy_vocabulary',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-subscription:notifications/subscription/add',
  );
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
    'parent_identifier' => 'user-menu_join-club:user/join',
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
    'parent_identifier' => 'user-menu_join-club:user/join',
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
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'user-menu_join-club:user/join',
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
    'parent_identifier' => 'user-menu_join-club:user/join',
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
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'user-menu_join-club:user/join',
  );
  // Exported menu link: user-menu_join-club:user/join.
  $menu_links['user-menu_join-club:user/join'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/join',
    'router_path' => 'user/join',
    'link_title' => 'Join club',
    'options' => array(
      'identifier' => 'user-menu_join-club:user/join',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
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
    'parent_identifier' => 'user-menu_renew-membership:user/renew',
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
    'parent_identifier' => 'user-menu_renew-membership:user/renew',
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
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'user-menu_renew-membership:user/renew',
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
    'parent_identifier' => 'user-menu_renew-membership:user/renew',
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
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'user-menu_renew-membership:user/renew',
  );
  // Exported menu link: user-menu_renew-membership:user/renew.
  $menu_links['user-menu_renew-membership:user/renew'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/renew',
    'router_path' => 'user/renew',
    'link_title' => 'Renew membership',
    'options' => array(
      'identifier' => 'user-menu_renew-membership:user/renew',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
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
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('2016 Nucs');
  t('Add content');
  t('Add file');
  t('Add subscription');
  t('Club info');
  t('Content type');
  t('Content type and term');
  t('Forums');
  t('Join - Dummy Membership');
  t('Join - Honorary Membership');
  t('Join - Junior Membership');
  t('Join - Life Membership');
  t('Join - Standard Membership');
  t('Join club');
  t('Log out');
  t('Multiple tags');
  t('Orders');
  t('Renew - Dummy Membership');
  t('Renew - Honorary Membership');
  t('Renew - Junior Membership');
  t('Renew - Life Membership');
  t('Renew - Standard Membership');
  t('Renew membership');
  t('Swarm collectors');
  t('Swarm recipients');
  t('Swarms');
  t('Tag');
  t('Thread');
  t('User account');
  t('Vocabulary');

  return $menu_links;
}
