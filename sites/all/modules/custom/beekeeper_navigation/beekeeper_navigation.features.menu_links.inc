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

  // Exported menu link: beekeeper-menu_calendar:calendar/events.
  $menu_links['beekeeper-menu_calendar:calendar/events'] = array(
    'menu_name' => 'beekeeper-menu',
    'link_path' => 'calendar/events',
    'router_path' => 'calendar/events',
    'link_title' => 'Calendar',
    'options' => array(
      'identifier' => 'beekeeper-menu_calendar:calendar/events',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: beekeeper-menu_club-info:node/1014.
  $menu_links['beekeeper-menu_club-info:node/1014'] = array(
    'menu_name' => 'beekeeper-menu',
    'link_path' => 'node/1014',
    'router_path' => 'node/%',
    'link_title' => 'Club info',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'beekeeper-menu_club-info:node/1014',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
    'customized' => 1,
  );
  // Exported menu link: beekeeper-menu_join-club:beekeeper/membership/join.
  $menu_links['beekeeper-menu_join-club:beekeeper/membership/join'] = array(
    'menu_name' => 'beekeeper-menu',
    'link_path' => 'beekeeper/membership/join',
    'router_path' => 'beekeeper/membership/join',
    'link_title' => 'Join club',
    'options' => array(
      'attributes' => array(
        'title' => 'Join the Wellington Beekeepers Association',
      ),
      'identifier' => 'beekeeper-menu_join-club:beekeeper/membership/join',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
  );
  // Exported menu link: beekeeper-menu_messages:messages.
  $menu_links['beekeeper-menu_messages:messages'] = array(
    'menu_name' => 'beekeeper-menu',
    'link_path' => 'messages',
    'router_path' => 'messages',
    'link_title' => 'Messages',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'beekeeper-menu_messages:messages',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 1,
  );
  // Exported menu link: beekeeper-menu_newsletters:newsletters.
  $menu_links['beekeeper-menu_newsletters:newsletters'] = array(
    'menu_name' => 'beekeeper-menu',
    'link_path' => 'newsletters',
    'router_path' => 'newsletters',
    'link_title' => 'Newsletters',
    'options' => array(
      'attributes' => array(
        'title' => 'Recent club newsletters',
      ),
      'identifier' => 'beekeeper-menu_newsletters:newsletters',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 0,
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
  // Exported menu link: beekeeper-menu_renew-membership:beekeeper/membership/renew.
  $menu_links['beekeeper-menu_renew-membership:beekeeper/membership/renew'] = array(
    'menu_name' => 'beekeeper-menu',
    'link_path' => 'beekeeper/membership/renew',
    'router_path' => 'beekeeper/membership/renew',
    'link_title' => 'Renew membership',
    'options' => array(
      'attributes' => array(
        'title' => 'Renew membership of the Wellington Beekeepers Association',
      ),
      'identifier' => 'beekeeper-menu_renew-membership:beekeeper/membership/renew',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 11,
    'customized' => 1,
  );
  // Exported menu link: beekeeper-menu_swarms:node/1019.
  $menu_links['beekeeper-menu_swarms:node/1019'] = array(
    'menu_name' => 'beekeeper-menu',
    'link_path' => 'node/1019',
    'router_path' => 'node/%',
    'link_title' => 'Swarms',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'beekeeper-menu_swarms:node/1019',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
  );
  // Exported menu link: main-menu_events:events.
  $menu_links['main-menu_events:events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events',
    'options' => array(
      'identifier' => 'main-menu_events:events',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 0,
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
  // Exported menu link: main-menu_groups:groups.
  $menu_links['main-menu_groups:groups'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'groups',
    'router_path' => 'groups',
    'link_title' => 'Groups',
    'options' => array(
      'identifier' => 'main-menu_groups:groups',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -1,
    'customized' => 0,
  );
  // Exported menu link: main-menu_help:user-guides.
  $menu_links['main-menu_help:user-guides'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user-guides',
    'router_path' => 'user-guides',
    'link_title' => 'Help',
    'options' => array(
      'attributes' => array(
        'title' => 'User guides providing help and advice',
      ),
      'identifier' => 'main-menu_help:user-guides',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_home:home.
  $menu_links['main-menu_home:home'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'home',
    'router_path' => 'home',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:home',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
  );
  // Exported menu link: main-menu_search:search.
  $menu_links['main-menu_search:search'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => 'Search',
    'options' => array(
      'identifier' => 'main-menu_search:search',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 0,
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
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
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
    'weight' => -47,
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
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: navigation_answer:node/add/answer.
  $menu_links['navigation_answer:node/add/answer'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/answer',
    'router_path' => 'node/add/answer',
    'link_title' => 'Answer',
    'options' => array(
      'attributes' => array(
        'title' => 'Use answers for responses to Question content, which can be rated by user votes.',
      ),
      'identifier' => 'navigation_answer:node/add/answer',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_apiaries:apiaries/view-all.
  $menu_links['navigation_apiaries:apiaries/view-all'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'apiaries/view-all',
    'router_path' => 'apiaries/view-all',
    'link_title' => 'Apiaries',
    'options' => array(
      'identifier' => 'navigation_apiaries:apiaries/view-all',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -36,
    'customized' => 1,
  );
  // Exported menu link: navigation_apiary:node/add/apiary.
  $menu_links['navigation_apiary:node/add/apiary'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/apiary',
    'router_path' => 'node/add/apiary',
    'link_title' => 'Apiary',
    'options' => array(
      'attributes' => array(
        'title' => 'An <em>apiary</em> records the location of your beehives and provides an opportunity to keep brief notes',
      ),
      'identifier' => 'navigation_apiary:node/add/apiary',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_book-page:node/add/book.
  $menu_links['navigation_book-page:node/add/book'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/book',
    'router_path' => 'node/add/book',
    'link_title' => 'Book page',
    'options' => array(
      'attributes' => array(
        'title' => '<em>Books</em> have a built-in hierarchical navigation. Use for handbooks or tutorials.',
      ),
      'identifier' => 'navigation_book-page:node/add/book',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_books:book.
  $menu_links['navigation_books:book'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'book',
    'router_path' => 'book',
    'link_title' => 'Books',
    'options' => array(
      'identifier' => 'navigation_books:book',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: navigation_club-info:node/1014.
  $menu_links['navigation_club-info:node/1014'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/1014',
    'router_path' => 'node/%',
    'link_title' => 'Club Info',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'navigation_club-info:node/1014',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: navigation_compose-tips:filter/tips.
  $menu_links['navigation_compose-tips:filter/tips'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'filter/tips',
    'router_path' => 'filter/tips',
    'link_title' => 'Compose tips',
    'options' => array(
      'identifier' => 'navigation_compose-tips:filter/tips',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: navigation_content-pages:content/pages.
  $menu_links['navigation_content-pages:content/pages'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'content/pages',
    'router_path' => 'content/pages',
    'link_title' => 'Content pages',
    'options' => array(
      'attributes' => array(
        'title' => 'Pages of interesting detail related to beekeeping.',
      ),
      'identifier' => 'navigation_content-pages:content/pages',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
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
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
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
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'navigation_add-subscription:notifications/subscription/add',
  );
  // Exported menu link: navigation_document:node/add/document.
  $menu_links['navigation_document:node/add/document'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/document',
    'router_path' => 'node/add/document',
    'link_title' => 'Document',
    'options' => array(
      'attributes' => array(
        'title' => 'Upload and display files or attachments to share with others.',
      ),
      'identifier' => 'navigation_document:node/add/document',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_event:node/add/event.
  $menu_links['navigation_event:node/add/event'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/event',
    'router_path' => 'node/add/event',
    'link_title' => 'Event',
    'options' => array(
      'attributes' => array(
        'title' => 'Post information about planned activities or meetings.',
      ),
      'identifier' => 'navigation_event:node/add/event',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_forum-topic:node/add/forum.
  $menu_links['navigation_forum-topic:node/add/forum'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/forum',
    'router_path' => 'node/add/forum',
    'link_title' => 'Forum topic',
    'options' => array(
      'attributes' => array(
        'title' => 'A <em>forum topic</em> starts a new discussion thread within a forum.',
      ),
      'identifier' => 'navigation_forum-topic:node/add/forum',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'navigation_add-content:node/add',
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
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: navigation_group:node/add/group.
  $menu_links['navigation_group:node/add/group'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/group',
    'router_path' => 'node/add/group',
    'link_title' => 'Group',
    'options' => array(
      'attributes' => array(
        'title' => 'Use groups to contain people and content related by a shared interest or purpose.',
      ),
      'identifier' => 'navigation_group:node/add/group',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_join-club:buy-membership.
  $menu_links['navigation_join-club:buy-membership'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'buy-membership',
    'router_path' => 'buy-membership',
    'link_title' => 'Join Club',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'navigation_join-club:buy-membership',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
  );
  // Exported menu link: navigation_join-wellington-beekeepers:user/join.
  $menu_links['navigation_join-wellington-beekeepers:user/join'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'user/join',
    'router_path' => 'user/join',
    'link_title' => 'Join Wellington Beekeepers',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'navigation_join-wellington-beekeepers:user/join',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: navigation_list-all-users:users/list-all.
  $menu_links['navigation_list-all-users:users/list-all'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'users/list-all',
    'router_path' => 'users/list-all',
    'link_title' => 'List all users',
    'options' => array(
      'attributes' => array(
        'title' => 'List all users fro administrators',
      ),
      'identifier' => 'navigation_list-all-users:users/list-all',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -28,
    'customized' => 1,
  );
  // Exported menu link: navigation_list-hive-inspectors:hives/list-inspectors.
  $menu_links['navigation_list-hive-inspectors:hives/list-inspectors'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'hives/list-inspectors',
    'router_path' => 'hives/list-inspectors',
    'link_title' => 'List hive inspectors',
    'options' => array(
      'identifier' => 'navigation_list-hive-inspectors:hives/list-inspectors',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -32,
    'customized' => 1,
  );
  // Exported menu link: navigation_list-members:members/list.
  $menu_links['navigation_list-members:members/list'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'members/list',
    'router_path' => 'members/list',
    'link_title' => 'List members',
    'options' => array(
      'attributes' => array(
        'title' => 'List of all members for administrators',
      ),
      'identifier' => 'navigation_list-members:members/list',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -33,
    'customized' => 1,
  );
  // Exported menu link: navigation_list-swarm-collectors:swarms/list-collectors.
  $menu_links['navigation_list-swarm-collectors:swarms/list-collectors'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'swarms/list-collectors',
    'router_path' => 'swarms/list-collectors',
    'link_title' => 'List swarm collectors',
    'options' => array(
      'identifier' => 'navigation_list-swarm-collectors:swarms/list-collectors',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -31,
    'customized' => 1,
  );
  // Exported menu link: navigation_list-swarm-recipients:swarms/list-recipients.
  $menu_links['navigation_list-swarm-recipients:swarms/list-recipients'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'swarms/list-recipients',
    'router_path' => 'swarms/list-recipients',
    'link_title' => 'List swarm recipients',
    'options' => array(
      'identifier' => 'navigation_list-swarm-recipients:swarms/list-recipients',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -30,
    'customized' => 1,
  );
  // Exported menu link: navigation_list-users:users/list.
  $menu_links['navigation_list-users:users/list'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'users/list',
    'router_path' => 'users/list',
    'link_title' => 'List users',
    'options' => array(
      'identifier' => 'navigation_list-users:users/list',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -29,
    'customized' => 1,
  );
  // Exported menu link: navigation_members---newsletter-:members/newsletter.
  $menu_links['navigation_members---newsletter-:members/newsletter'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'members/newsletter',
    'router_path' => 'members/newsletter',
    'link_title' => 'Members - newsletter ',
    'options' => array(
      'attributes' => array(
        'title' => 'Members subscribed to printed newsletter',
      ),
      'identifier' => 'navigation_members---newsletter-:members/newsletter',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
  );
  // Exported menu link: navigation_merchandise-display:node/add/merchandise-display.
  $menu_links['navigation_merchandise-display:node/add/merchandise-display'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/merchandise-display',
    'router_path' => 'node/add/merchandise-display',
    'link_title' => 'Merchandise display',
    'options' => array(
      'attributes' => array(
        'title' => 'Content type for displaying merchandise products',
      ),
      'identifier' => 'navigation_merchandise-display:node/add/merchandise-display',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'navigation_add-content:node/add',
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
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'navigation_add-subscription:notifications/subscription/add',
  );
  // Exported menu link: navigation_my-apiaries:apiaries/mine.
  $menu_links['navigation_my-apiaries:apiaries/mine'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'apiaries/mine',
    'router_path' => 'apiaries/mine',
    'link_title' => 'My apiaries',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'navigation_my-apiaries:apiaries/mine',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -37,
    'customized' => 1,
  );
  // Exported menu link: navigation_newsletter:node/add/newsletter.
  $menu_links['navigation_newsletter:node/add/newsletter'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/newsletter',
    'router_path' => 'node/add/newsletter',
    'link_title' => 'Newsletter',
    'options' => array(
      'attributes' => array(
        'title' => 'Club newsletter',
      ),
      'identifier' => 'navigation_newsletter:node/add/newsletter',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_page:node/add/page.
  $menu_links['navigation_page:node/add/page'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Page',
    'options' => array(
      'attributes' => array(
        'title' => 'Use <em>basic pages</em> for your static content, such as an \'About us\' page.',
      ),
      'identifier' => 'navigation_page:node/add/page',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_poll:node/add/poll.
  $menu_links['navigation_poll:node/add/poll'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/poll',
    'router_path' => 'node/add/poll',
    'link_title' => 'Poll',
    'options' => array(
      'attributes' => array(
        'title' => 'A <em>poll</em> is a question with a set of possible responses. A <em>poll</em>, once created, automatically provides a simple running count of the number of votes received for each response.',
      ),
      'identifier' => 'navigation_poll:node/add/poll',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_polls:poll.
  $menu_links['navigation_polls:poll'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'poll',
    'router_path' => 'poll',
    'link_title' => 'Polls',
    'options' => array(
      'identifier' => 'navigation_polls:poll',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: navigation_post:node/add/post.
  $menu_links['navigation_post:node/add/post'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/post',
    'router_path' => 'node/add/post',
    'link_title' => 'Post',
    'options' => array(
      'attributes' => array(
        'title' => 'Start a conversation or share some information.',
      ),
      'identifier' => 'navigation_post:node/add/post',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_product-display:node/add/product-display.
  $menu_links['navigation_product-display:node/add/product-display'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/product-display',
    'router_path' => 'node/add/product-display',
    'link_title' => 'Product display',
    'options' => array(
      'attributes' => array(
        'title' => 'Display a product from the store',
      ),
      'identifier' => 'navigation_product-display:node/add/product-display',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_question:node/add/question.
  $menu_links['navigation_question:node/add/question'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/question',
    'router_path' => 'node/add/question',
    'link_title' => 'Question',
    'options' => array(
      'attributes' => array(
        'title' => 'Ask a question to receive answers from other community members',
      ),
      'identifier' => 'navigation_question:node/add/question',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_shopping-cart--items:cart/my.
  $menu_links['navigation_shopping-cart--items:cart/my'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'cart/my',
    'router_path' => 'cart/my',
    'link_title' => 'Shopping cart (# items)',
    'options' => array(
      'identifier' => 'navigation_shopping-cart--items:cart/my',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_shopping-cart:cart',
  );
  // Exported menu link: navigation_shopping-cart:cart.
  $menu_links['navigation_shopping-cart:cart'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'cart',
    'router_path' => 'cart',
    'link_title' => 'Shopping cart',
    'options' => array(
      'identifier' => 'navigation_shopping-cart:cart',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -38,
    'customized' => 1,
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
    'weight' => -35,
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
    'weight' => -34,
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
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
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
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'navigation_add-subscription:notifications/subscription/add',
  );
  // Exported menu link: navigation_view-all-members:members/view-all.
  $menu_links['navigation_view-all-members:members/view-all'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'members/view-all',
    'router_path' => 'members/view-all',
    'link_title' => 'View all members',
    'options' => array(
      'attributes' => array(
        'title' => 'Location of all members (for administrators)',
      ),
      'identifier' => 'navigation_view-all-members:members/view-all',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -26,
    'customized' => 1,
  );
  // Exported menu link: navigation_view-all-users:users/view-all.
  $menu_links['navigation_view-all-users:users/view-all'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'users/view-all',
    'router_path' => 'users/view-all',
    'link_title' => 'View all users',
    'options' => array(
      'identifier' => 'navigation_view-all-users:users/view-all',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -23,
    'customized' => 1,
  );
  // Exported menu link: navigation_view-hive-inspectors:hives/view-inspectors.
  $menu_links['navigation_view-hive-inspectors:hives/view-inspectors'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'hives/view-inspectors',
    'router_path' => 'hives/view-inspectors',
    'link_title' => 'View hive inspectors',
    'options' => array(
      'identifier' => 'navigation_view-hive-inspectors:hives/view-inspectors',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -25,
    'customized' => 1,
  );
  // Exported menu link: navigation_view-members:members/view.
  $menu_links['navigation_view-members:members/view'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'members/view',
    'router_path' => 'members/view',
    'link_title' => 'View members',
    'options' => array(
      'attributes' => array(
        'title' => 'Location of members who have agreed to share their details',
      ),
      'identifier' => 'navigation_view-members:members/view',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -27,
    'customized' => 1,
  );
  // Exported menu link: navigation_view-users:users/view.
  $menu_links['navigation_view-users:users/view'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'users/view',
    'router_path' => 'users/view',
    'link_title' => 'View users',
    'options' => array(
      'identifier' => 'navigation_view-users:users/view',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -24,
    'customized' => 1,
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
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'navigation_add-subscription:notifications/subscription/add',
  );
  // Exported menu link: navigation_webform:node/add/webform.
  $menu_links['navigation_webform:node/add/webform'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/webform',
    'router_path' => 'node/add/webform',
    'link_title' => 'Webform',
    'options' => array(
      'attributes' => array(
        'title' => 'Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.',
      ),
      'identifier' => 'navigation_webform:node/add/webform',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_wiki:node/add/wiki.
  $menu_links['navigation_wiki:node/add/wiki'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/wiki',
    'router_path' => 'node/add/wiki',
    'link_title' => 'Wiki',
    'options' => array(
      'attributes' => array(
        'title' => 'Create a collaborative document, allowing users to add, delete, or revise content. Provides document version controls.',
      ),
      'identifier' => 'navigation_wiki:node/add/wiki',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'navigation_add-content:node/add',
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
    'hidden' => 1,
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
  // Exported menu link: user-menu_messages:messages.
  $menu_links['user-menu_messages:messages'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'messages',
    'router_path' => 'messages',
    'link_title' => 'Messages',
    'options' => array(
      'identifier' => 'user-menu_messages:messages',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
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
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
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
  t('Add content');
  t('Add file');
  t('Add subscription');
  t('Answer');
  t('Apiaries');
  t('Apiary');
  t('Book page');
  t('Books');
  t('Calendar');
  t('Club Info');
  t('Club info');
  t('Compose tips');
  t('Content pages');
  t('Content type');
  t('Content type and term');
  t('Document');
  t('Event');
  t('Events');
  t('Forum topic');
  t('Forums');
  t('Group');
  t('Groups');
  t('Help');
  t('Home');
  t('Join');
  t('Join - Dummy Membership');
  t('Join - Honorary Membership');
  t('Join - Junior Membership');
  t('Join - Life Membership');
  t('Join - Standard Membership');
  t('Join Club');
  t('Join Wellington Beekeepers');
  t('Join club');
  t('List all users');
  t('List hive inspectors');
  t('List members');
  t('List swarm collectors');
  t('List swarm recipients');
  t('List users');
  t('Log out');
  t('Members - newsletter ');
  t('Merchandise display');
  t('Messages');
  t('Multiple tags');
  t('My apiaries');
  t('Newsletter');
  t('Newsletters');
  t('Orders');
  t('Page');
  t('Poll');
  t('Polls');
  t('Post');
  t('Product display');
  t('Question');
  t('Renew');
  t('Renew - Dummy Membership');
  t('Renew - Honorary Membership');
  t('Renew - Junior Membership');
  t('Renew - Life Membership');
  t('Renew - Standard Membership');
  t('Renew membership');
  t('Search');
  t('Shopping cart');
  t('Shopping cart (# items)');
  t('Swarm collectors');
  t('Swarm recipients');
  t('Swarms');
  t('Tag');
  t('Thread');
  t('User account');
  t('View all members');
  t('View all users');
  t('View hive inspectors');
  t('View members');
  t('View users');
  t('Vocabulary');
  t('Webform');
  t('Wiki');

  return $menu_links;
}
