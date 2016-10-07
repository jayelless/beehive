<?php
/**
 * @file
 * beekeeper_users.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function beekeeper_users_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'member_lists';
  $view->description = '';
  $view->tag = 'beekeepers';
  $view->base_table = 'users';
  $view->human_name = 'Member lists';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Members';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer users';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'google_map';
  $handler->display->display_options['style_options']['map_height'] = '640px';
  $handler->display->display_options['style_options']['map_center'] = '-41.278423,174.776692';
  $handler->display->display_options['style_options']['map_zoom'] = '10';
  $handler->display->display_options['style_options']['map_min_zoom'] = '6';
  $handler->display->display_options['style_options']['map_max_zoom'] = '14';
  $handler->display->display_options['style_options']['marker_title_field'] = 'realname';
  $handler->display->display_options['style_options']['use_marker_clusterer'] = 1;
  $handler->display->display_options['style_options']['marker_clusterer'] = array(
    'grid_size' => '',
    'max_zoom' => '',
    'icon_url' => '',
    'icon_size' => '',
  );
  $handler->display->display_options['style_options']['map_auto_center_and_zoom'] = 1;
  $handler->display->display_options['style_options']['map_disable_scroll_wheel'] = 0;
  $handler->display->display_options['style_options']['map_disable_double_click_zoom'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: User: Primary membership */
  $handler->display->display_options['relationships']['membership_entity']['id'] = 'membership_entity';
  $handler->display->display_options['relationships']['membership_entity']['table'] = 'users';
  $handler->display->display_options['relationships']['membership_entity']['field'] = 'membership_entity';
  $handler->display->display_options['relationships']['membership_entity']['bundle_types'] = array(
    'honorary_membership' => 'honorary_membership',
    'junior_membership' => 'junior_membership',
    'life_membership' => 'life_membership',
    'standard_membership' => 'standard_membership',
  );
  /* Field: User: My Location */
  $handler->display->display_options['fields']['field_user_location']['id'] = 'field_user_location';
  $handler->display->display_options['fields']['field_user_location']['table'] = 'field_data_field_user_location';
  $handler->display->display_options['fields']['field_user_location']['field'] = 'field_user_location';
  $handler->display->display_options['fields']['field_user_location']['label'] = '';
  $handler->display->display_options['fields']['field_user_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_location']['click_sort_column'] = 'lat';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['label'] = 'Name';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Geolocation: Distance */
  $handler->display->display_options['filters']['field_user_location_distance']['id'] = 'field_user_location_distance';
  $handler->display->display_options['filters']['field_user_location_distance']['table'] = 'field_data_field_user_location';
  $handler->display->display_options['filters']['field_user_location_distance']['field'] = 'field_user_location_distance';
  $handler->display->display_options['filters']['field_user_location_distance']['value'] = array(
    'latitude' => '',
    'longitude' => '',
    'search_distance' => '15',
    'search_units' => 'kilometers',
    'type' => 'googlemap',
  );
  $handler->display->display_options['filters']['field_user_location_distance']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['label'] = 'Distance';
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['operator'] = 'field_user_location_distance_op';
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['identifier'] = 'field_user_location_distance';
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );

  /* Display: Members view all */
  $handler = $view->new_display('page', 'Members view all', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All Members';
  $handler->display->display_options['display_description'] = 'Location of all members for administrators';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    9 => '9',
    8 => '8',
  );
  $handler->display->display_options['path'] = 'members/view-all';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'View all members';
  $handler->display->display_options['menu']['description'] = 'Location of all members (for administrators)';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Members view */
  $handler = $view->new_display('page', 'Members view', 'page_1');
  $handler->display->display_options['display_description'] = 'Location of members who have agreed to share their details';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    6 => '6',
    5 => '5',
    7 => '7',
    4 => '4',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Location Privacy (field_location_privacy) */
  $handler->display->display_options['filters']['field_location_privacy_value']['id'] = 'field_location_privacy_value';
  $handler->display->display_options['filters']['field_location_privacy_value']['table'] = 'field_data_field_location_privacy';
  $handler->display->display_options['filters']['field_location_privacy_value']['field'] = 'field_location_privacy_value';
  $handler->display->display_options['filters']['field_location_privacy_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_location_privacy_value']['group'] = 1;
  /* Filter criterion: Geolocation: Distance */
  $handler->display->display_options['filters']['field_user_location_distance']['id'] = 'field_user_location_distance';
  $handler->display->display_options['filters']['field_user_location_distance']['table'] = 'field_data_field_user_location';
  $handler->display->display_options['filters']['field_user_location_distance']['field'] = 'field_user_location_distance';
  $handler->display->display_options['filters']['field_user_location_distance']['value'] = array(
    'latitude' => '',
    'longitude' => '',
    'search_distance' => '100',
    'search_units' => 'kilometers',
    'type' => 'googlemap',
  );
  $handler->display->display_options['filters']['field_user_location_distance']['group'] = 1;
  $handler->display->display_options['filters']['field_user_location_distance']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['label'] = 'Distance';
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['operator'] = 'field_user_location_distance_op';
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['identifier'] = 'field_user_location_distance';
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['path'] = 'members/view';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'View members';
  $handler->display->display_options['menu']['description'] = 'Location of members who have agreed to share their details';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Members list */
  $handler = $view->new_display('page', 'Members list', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All Members';
  $handler->display->display_options['display_description'] = 'List of all members for administrators';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    8 => '8',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'realname' => 'realname',
    'username' => 'username',
    'mail' => 'mail',
    'field_postal_address_dependent_locality' => 'field_postal_address_dependent_locality',
    'field_postal_address_locality' => 'field_postal_address_locality',
    'status' => 'status',
    'type' => 'type',
  );
  $handler->display->display_options['style_options']['default'] = 'realname';
  $handler->display->display_options['style_options']['info'] = array(
    'realname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'username' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_postal_address_dependent_locality' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_postal_address_locality' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['label'] = 'Name';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Login';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: User: Postal address - Dependent locality */
  $handler->display->display_options['fields']['field_postal_address_dependent_locality']['id'] = 'field_postal_address_dependent_locality';
  $handler->display->display_options['fields']['field_postal_address_dependent_locality']['table'] = 'field_data_field_postal_address';
  $handler->display->display_options['fields']['field_postal_address_dependent_locality']['field'] = 'field_postal_address_dependent_locality';
  $handler->display->display_options['fields']['field_postal_address_dependent_locality']['label'] = 'Suburb';
  /* Field: User: Postal address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_postal_address_locality']['id'] = 'field_postal_address_locality';
  $handler->display->display_options['fields']['field_postal_address_locality']['table'] = 'field_data_field_postal_address';
  $handler->display->display_options['fields']['field_postal_address_locality']['field'] = 'field_postal_address_locality';
  $handler->display->display_options['fields']['field_postal_address_locality']['label'] = 'Town/City';
  /* Field: Membership: Membership status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'membership_entity';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['relationship'] = 'membership_entity';
  /* Field: Membership: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'membership_entity';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'membership_entity';
  $handler->display->display_options['fields']['type']['label'] = 'Membership Type';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Membership: Membership status */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'membership_entity';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'membership_entity';
  $handler->display->display_options['filters']['status_1']['value'] = array(
    0 => '0',
    1 => '1',
    2 => '2',
    3 => '3',
  );
  $handler->display->display_options['filters']['status_1']['group'] = 1;
  /* Filter criterion: Realname: Name */
  $handler->display->display_options['filters']['realname']['id'] = 'realname';
  $handler->display->display_options['filters']['realname']['table'] = 'realname';
  $handler->display->display_options['filters']['realname']['field'] = 'realname';
  $handler->display->display_options['filters']['realname']['operator'] = 'contains';
  $handler->display->display_options['filters']['realname']['group'] = 1;
  $handler->display->display_options['filters']['realname']['exposed'] = TRUE;
  $handler->display->display_options['filters']['realname']['expose']['operator_id'] = 'realname_op';
  $handler->display->display_options['filters']['realname']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['realname']['expose']['operator'] = 'realname_op';
  $handler->display->display_options['filters']['realname']['expose']['identifier'] = 'realname';
  $handler->display->display_options['filters']['realname']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['realname']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = 1;
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Login';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['operator'] = 'contains';
  $handler->display->display_options['filters']['mail']['group'] = 1;
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['filters']['mail']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  /* Filter criterion: User: Postal address - Dependent locality */
  $handler->display->display_options['filters']['field_postal_address_dependent_locality']['id'] = 'field_postal_address_dependent_locality';
  $handler->display->display_options['filters']['field_postal_address_dependent_locality']['table'] = 'field_data_field_postal_address';
  $handler->display->display_options['filters']['field_postal_address_dependent_locality']['field'] = 'field_postal_address_dependent_locality';
  $handler->display->display_options['filters']['field_postal_address_dependent_locality']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_postal_address_dependent_locality']['group'] = 1;
  $handler->display->display_options['filters']['field_postal_address_dependent_locality']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_postal_address_dependent_locality']['expose']['operator_id'] = 'field_postal_address_dependent_locality_op';
  $handler->display->display_options['filters']['field_postal_address_dependent_locality']['expose']['label'] = 'Suburb';
  $handler->display->display_options['filters']['field_postal_address_dependent_locality']['expose']['operator'] = 'field_postal_address_dependent_locality_op';
  $handler->display->display_options['filters']['field_postal_address_dependent_locality']['expose']['identifier'] = 'field_postal_address_dependent_locality';
  $handler->display->display_options['filters']['field_postal_address_dependent_locality']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_postal_address_dependent_locality']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  /* Filter criterion: User: Postal address - Locality (i.e. City) */
  $handler->display->display_options['filters']['field_postal_address_locality']['id'] = 'field_postal_address_locality';
  $handler->display->display_options['filters']['field_postal_address_locality']['table'] = 'field_data_field_postal_address';
  $handler->display->display_options['filters']['field_postal_address_locality']['field'] = 'field_postal_address_locality';
  $handler->display->display_options['filters']['field_postal_address_locality']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_postal_address_locality']['group'] = 1;
  $handler->display->display_options['filters']['field_postal_address_locality']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_postal_address_locality']['expose']['operator_id'] = 'field_postal_address_locality_op';
  $handler->display->display_options['filters']['field_postal_address_locality']['expose']['label'] = 'Town/city';
  $handler->display->display_options['filters']['field_postal_address_locality']['expose']['operator'] = 'field_postal_address_locality_op';
  $handler->display->display_options['filters']['field_postal_address_locality']['expose']['identifier'] = 'field_postal_address_locality';
  $handler->display->display_options['filters']['field_postal_address_locality']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_postal_address_locality']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  /* Filter criterion: Membership: Membership status */
  $handler->display->display_options['filters']['status_2']['id'] = 'status_2';
  $handler->display->display_options['filters']['status_2']['table'] = 'membership_entity';
  $handler->display->display_options['filters']['status_2']['field'] = 'status';
  $handler->display->display_options['filters']['status_2']['relationship'] = 'membership_entity';
  $handler->display->display_options['filters']['status_2']['value'] = array(
    0 => '0',
    1 => '1',
    2 => '2',
    3 => '3',
  );
  $handler->display->display_options['filters']['status_2']['group'] = 1;
  $handler->display->display_options['filters']['status_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status_2']['expose']['operator_id'] = 'status_2_op';
  $handler->display->display_options['filters']['status_2']['expose']['label'] = 'Membership status';
  $handler->display->display_options['filters']['status_2']['expose']['operator'] = 'status_2_op';
  $handler->display->display_options['filters']['status_2']['expose']['identifier'] = 'status_2';
  $handler->display->display_options['filters']['status_2']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['status_2']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['status_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  /* Filter criterion: Membership: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'membership_entity';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'membership_entity';
  $handler->display->display_options['filters']['type']['value'] = array(
    'honorary_membership' => 'honorary_membership',
    'junior_membership' => 'junior_membership',
    'life_membership' => 'life_membership',
    'standard_membership' => 'standard_membership',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  $handler->display->display_options['path'] = 'members/list';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'List members';
  $handler->display->display_options['menu']['description'] = 'List of all members for administrators';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Members export */
  $handler = $view->new_display('views_data_export', 'Members export', 'views_data_export_1');
  $handler->display->display_options['display_description'] = 'Export all member details as CSV file';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    8 => '8',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['label'] = 'Name';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Login';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: User: Telephone */
  $handler->display->display_options['fields']['field_phone_number']['id'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['table'] = 'field_data_field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['field'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_phone_number']['delta_offset'] = '0';
  /* Field: User: Postal address - Thoroughfare (i.e. Street address) */
  $handler->display->display_options['fields']['field_postal_address_thoroughfare']['id'] = 'field_postal_address_thoroughfare';
  $handler->display->display_options['fields']['field_postal_address_thoroughfare']['table'] = 'field_data_field_postal_address';
  $handler->display->display_options['fields']['field_postal_address_thoroughfare']['field'] = 'field_postal_address_thoroughfare';
  $handler->display->display_options['fields']['field_postal_address_thoroughfare']['label'] = 'Street';
  /* Field: User: Postal address - Premise (i.e. Apartment / Suite number) */
  $handler->display->display_options['fields']['field_postal_address_premise']['id'] = 'field_postal_address_premise';
  $handler->display->display_options['fields']['field_postal_address_premise']['table'] = 'field_data_field_postal_address';
  $handler->display->display_options['fields']['field_postal_address_premise']['field'] = 'field_postal_address_premise';
  $handler->display->display_options['fields']['field_postal_address_premise']['label'] = 'Address-2';
  /* Field: User: Postal address - Dependent locality */
  $handler->display->display_options['fields']['field_postal_address_dependent_locality']['id'] = 'field_postal_address_dependent_locality';
  $handler->display->display_options['fields']['field_postal_address_dependent_locality']['table'] = 'field_data_field_postal_address';
  $handler->display->display_options['fields']['field_postal_address_dependent_locality']['field'] = 'field_postal_address_dependent_locality';
  $handler->display->display_options['fields']['field_postal_address_dependent_locality']['label'] = 'Suburb';
  /* Field: User: Postal address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_postal_address_locality']['id'] = 'field_postal_address_locality';
  $handler->display->display_options['fields']['field_postal_address_locality']['table'] = 'field_data_field_postal_address';
  $handler->display->display_options['fields']['field_postal_address_locality']['field'] = 'field_postal_address_locality';
  $handler->display->display_options['fields']['field_postal_address_locality']['label'] = 'Town-City';
  /* Field: User: Postal address - Postal code */
  $handler->display->display_options['fields']['field_postal_address_postal_code']['id'] = 'field_postal_address_postal_code';
  $handler->display->display_options['fields']['field_postal_address_postal_code']['table'] = 'field_data_field_postal_address';
  $handler->display->display_options['fields']['field_postal_address_postal_code']['field'] = 'field_postal_address_postal_code';
  $handler->display->display_options['fields']['field_postal_address_postal_code']['label'] = 'Postcode';
  /* Field: Membership: Membership status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'membership_entity';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['relationship'] = 'membership_entity';
  $handler->display->display_options['fields']['status']['label'] = 'Membership-status';
  /* Field: Membership: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'membership_entity';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'membership_entity';
  $handler->display->display_options['fields']['type']['label'] = 'Membership-type';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'members/export';

  /* Display: Members newsletter */
  $handler = $view->new_display('page', 'Members newsletter', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Newsletter subscriptions';
  $handler->display->display_options['display_description'] = 'List of all members with newsletter subscriptions';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    8 => '8',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'realname' => 'realname',
    'username' => 'username',
    'mail' => 'mail',
    'field_postal_address_dependent_locality' => 'field_postal_address_dependent_locality',
    'field_postal_address_locality' => 'field_postal_address_locality',
    'status' => 'status',
    'type' => 'type',
  );
  $handler->display->display_options['style_options']['default'] = 'realname';
  $handler->display->display_options['style_options']['info'] = array(
    'realname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'username' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_postal_address_dependent_locality' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_postal_address_locality' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['label'] = 'Name';
  /* Field: User: Postal address - Thoroughfare (i.e. Street address) */
  $handler->display->display_options['fields']['field_postal_address_thoroughfare']['id'] = 'field_postal_address_thoroughfare';
  $handler->display->display_options['fields']['field_postal_address_thoroughfare']['table'] = 'field_data_field_postal_address';
  $handler->display->display_options['fields']['field_postal_address_thoroughfare']['field'] = 'field_postal_address_thoroughfare';
  $handler->display->display_options['fields']['field_postal_address_thoroughfare']['label'] = 'Street';
  /* Field: User: Postal address - Dependent locality */
  $handler->display->display_options['fields']['field_postal_address_dependent_locality']['id'] = 'field_postal_address_dependent_locality';
  $handler->display->display_options['fields']['field_postal_address_dependent_locality']['table'] = 'field_data_field_postal_address';
  $handler->display->display_options['fields']['field_postal_address_dependent_locality']['field'] = 'field_postal_address_dependent_locality';
  $handler->display->display_options['fields']['field_postal_address_dependent_locality']['label'] = 'Suburb';
  /* Field: User: Postal address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_postal_address_locality']['id'] = 'field_postal_address_locality';
  $handler->display->display_options['fields']['field_postal_address_locality']['table'] = 'field_data_field_postal_address';
  $handler->display->display_options['fields']['field_postal_address_locality']['field'] = 'field_postal_address_locality';
  $handler->display->display_options['fields']['field_postal_address_locality']['label'] = 'Town/City';
  /* Field: User: Postal address - Postal code */
  $handler->display->display_options['fields']['field_postal_address_postal_code']['id'] = 'field_postal_address_postal_code';
  $handler->display->display_options['fields']['field_postal_address_postal_code']['table'] = 'field_data_field_postal_address';
  $handler->display->display_options['fields']['field_postal_address_postal_code']['field'] = 'field_postal_address_postal_code';
  $handler->display->display_options['fields']['field_postal_address_postal_code']['label'] = 'Post code';
  /* Field: Membership: Membership status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'membership_entity';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['relationship'] = 'membership_entity';
  /* Field: Membership: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'membership_entity';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'membership_entity';
  $handler->display->display_options['fields']['type']['label'] = 'Membership Type';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Membership: Membership status */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'membership_entity';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'membership_entity';
  $handler->display->display_options['filters']['status_1']['value'] = array(
    0 => '0',
    1 => '1',
    3 => '3',
  );
  $handler->display->display_options['filters']['status_1']['group'] = 1;
  /* Filter criterion: User: Subscription expiry (field_beekeeper_magazine_expiry) */
  $handler->display->display_options['filters']['field_beekeeper_magazine_expiry_value']['id'] = 'field_beekeeper_magazine_expiry_value';
  $handler->display->display_options['filters']['field_beekeeper_magazine_expiry_value']['table'] = 'field_data_field_beekeeper_magazine_expiry';
  $handler->display->display_options['filters']['field_beekeeper_magazine_expiry_value']['field'] = 'field_beekeeper_magazine_expiry_value';
  $handler->display->display_options['filters']['field_beekeeper_magazine_expiry_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_beekeeper_magazine_expiry_value']['group'] = 1;
  $handler->display->display_options['filters']['field_beekeeper_magazine_expiry_value']['granularity'] = 'month';
  $handler->display->display_options['filters']['field_beekeeper_magazine_expiry_value']['default_date'] = 'today';
  /* Filter criterion: Realname: Name */
  $handler->display->display_options['filters']['realname']['id'] = 'realname';
  $handler->display->display_options['filters']['realname']['table'] = 'realname';
  $handler->display->display_options['filters']['realname']['field'] = 'realname';
  $handler->display->display_options['filters']['realname']['operator'] = 'contains';
  $handler->display->display_options['filters']['realname']['group'] = 1;
  $handler->display->display_options['filters']['realname']['exposed'] = TRUE;
  $handler->display->display_options['filters']['realname']['expose']['operator_id'] = 'realname_op';
  $handler->display->display_options['filters']['realname']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['realname']['expose']['operator'] = 'realname_op';
  $handler->display->display_options['filters']['realname']['expose']['identifier'] = 'realname';
  $handler->display->display_options['filters']['realname']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['realname']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  /* Filter criterion: User: Postal address - Dependent locality */
  $handler->display->display_options['filters']['field_postal_address_dependent_locality']['id'] = 'field_postal_address_dependent_locality';
  $handler->display->display_options['filters']['field_postal_address_dependent_locality']['table'] = 'field_data_field_postal_address';
  $handler->display->display_options['filters']['field_postal_address_dependent_locality']['field'] = 'field_postal_address_dependent_locality';
  $handler->display->display_options['filters']['field_postal_address_dependent_locality']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_postal_address_dependent_locality']['group'] = 1;
  $handler->display->display_options['filters']['field_postal_address_dependent_locality']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_postal_address_dependent_locality']['expose']['operator_id'] = 'field_postal_address_dependent_locality_op';
  $handler->display->display_options['filters']['field_postal_address_dependent_locality']['expose']['label'] = 'Suburb';
  $handler->display->display_options['filters']['field_postal_address_dependent_locality']['expose']['operator'] = 'field_postal_address_dependent_locality_op';
  $handler->display->display_options['filters']['field_postal_address_dependent_locality']['expose']['identifier'] = 'field_postal_address_dependent_locality';
  $handler->display->display_options['filters']['field_postal_address_dependent_locality']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_postal_address_dependent_locality']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  /* Filter criterion: User: Postal address - Locality (i.e. City) */
  $handler->display->display_options['filters']['field_postal_address_locality']['id'] = 'field_postal_address_locality';
  $handler->display->display_options['filters']['field_postal_address_locality']['table'] = 'field_data_field_postal_address';
  $handler->display->display_options['filters']['field_postal_address_locality']['field'] = 'field_postal_address_locality';
  $handler->display->display_options['filters']['field_postal_address_locality']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_postal_address_locality']['group'] = 1;
  $handler->display->display_options['filters']['field_postal_address_locality']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_postal_address_locality']['expose']['operator_id'] = 'field_postal_address_locality_op';
  $handler->display->display_options['filters']['field_postal_address_locality']['expose']['label'] = 'Town/city';
  $handler->display->display_options['filters']['field_postal_address_locality']['expose']['operator'] = 'field_postal_address_locality_op';
  $handler->display->display_options['filters']['field_postal_address_locality']['expose']['identifier'] = 'field_postal_address_locality';
  $handler->display->display_options['filters']['field_postal_address_locality']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_postal_address_locality']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  /* Filter criterion: Membership: Membership status */
  $handler->display->display_options['filters']['status_2']['id'] = 'status_2';
  $handler->display->display_options['filters']['status_2']['table'] = 'membership_entity';
  $handler->display->display_options['filters']['status_2']['field'] = 'status';
  $handler->display->display_options['filters']['status_2']['relationship'] = 'membership_entity';
  $handler->display->display_options['filters']['status_2']['value'] = array(
    0 => '0',
    1 => '1',
    2 => '2',
    3 => '3',
  );
  $handler->display->display_options['filters']['status_2']['group'] = 1;
  $handler->display->display_options['filters']['status_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status_2']['expose']['operator_id'] = 'status_2_op';
  $handler->display->display_options['filters']['status_2']['expose']['label'] = 'Membership status';
  $handler->display->display_options['filters']['status_2']['expose']['operator'] = 'status_2_op';
  $handler->display->display_options['filters']['status_2']['expose']['identifier'] = 'status_2';
  $handler->display->display_options['filters']['status_2']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['status_2']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['status_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  /* Filter criterion: Membership: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'membership_entity';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'membership_entity';
  $handler->display->display_options['filters']['type']['value'] = array(
    'honorary_membership' => 'honorary_membership',
    'junior_membership' => 'junior_membership',
    'life_membership' => 'life_membership',
    'standard_membership' => 'standard_membership',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  $handler->display->display_options['path'] = 'members/newsletter';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Members - newsletter ';
  $handler->display->display_options['menu']['description'] = 'Members subscribed to printed newsletter';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['member_lists'] = $view;

  $view = new view();
  $view->name = 'user_admin';
  $view->description = '';
  $view->tag = 'beekeepers';
  $view->base_table = 'users';
  $view->human_name = 'User admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Users';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer users';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'google_map';
  $handler->display->display_options['style_options']['map_height'] = '640px';
  $handler->display->display_options['style_options']['map_center'] = '-41.278423,174.776692';
  $handler->display->display_options['style_options']['map_zoom'] = '10';
  $handler->display->display_options['style_options']['map_min_zoom'] = '6';
  $handler->display->display_options['style_options']['map_max_zoom'] = '14';
  $handler->display->display_options['style_options']['marker_title_field'] = 'realname';
  $handler->display->display_options['style_options']['use_marker_clusterer'] = 1;
  $handler->display->display_options['style_options']['marker_clusterer'] = array(
    'grid_size' => '',
    'max_zoom' => '',
    'icon_url' => '',
    'icon_size' => '',
  );
  $handler->display->display_options['style_options']['map_auto_center_and_zoom'] = 1;
  $handler->display->display_options['style_options']['map_disable_scroll_wheel'] = 0;
  $handler->display->display_options['style_options']['map_disable_double_click_zoom'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: User: Primary membership */
  $handler->display->display_options['relationships']['membership_entity']['id'] = 'membership_entity';
  $handler->display->display_options['relationships']['membership_entity']['table'] = 'users';
  $handler->display->display_options['relationships']['membership_entity']['field'] = 'membership_entity';
  $handler->display->display_options['relationships']['membership_entity']['bundle_types'] = array(
    'honorary_membership' => 'honorary_membership',
    'junior_membership' => 'junior_membership',
    'life_membership' => 'life_membership',
    'standard_membership' => 'standard_membership',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: User: My Location */
  $handler->display->display_options['fields']['field_user_location']['id'] = 'field_user_location';
  $handler->display->display_options['fields']['field_user_location']['table'] = 'field_data_field_user_location';
  $handler->display->display_options['fields']['field_user_location']['field'] = 'field_user_location';
  $handler->display->display_options['fields']['field_user_location']['label'] = '';
  $handler->display->display_options['fields']['field_user_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_location']['click_sort_column'] = 'lat';
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['label'] = 'Name';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page: View */
  $handler = $view->new_display('page', 'Page: View', 'page_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    8 => '8',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Geolocation: Distance */
  $handler->display->display_options['filters']['field_user_location_distance']['id'] = 'field_user_location_distance';
  $handler->display->display_options['filters']['field_user_location_distance']['table'] = 'field_data_field_user_location';
  $handler->display->display_options['filters']['field_user_location_distance']['field'] = 'field_user_location_distance';
  $handler->display->display_options['filters']['field_user_location_distance']['value'] = array(
    'latitude' => '',
    'longitude' => '',
    'search_distance' => '100',
    'search_units' => 'kilometers',
    'type' => 'googlemap',
  );
  $handler->display->display_options['filters']['field_user_location_distance']['group'] = 1;
  $handler->display->display_options['filters']['field_user_location_distance']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['label'] = 'Distance';
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['operator'] = 'field_user_location_distance_op';
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['identifier'] = 'field_user_location_distance';
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: User: Location Privacy (field_location_privacy) */
  $handler->display->display_options['filters']['field_location_privacy_value']['id'] = 'field_location_privacy_value';
  $handler->display->display_options['filters']['field_location_privacy_value']['table'] = 'field_data_field_location_privacy';
  $handler->display->display_options['filters']['field_location_privacy_value']['field'] = 'field_location_privacy_value';
  $handler->display->display_options['filters']['field_location_privacy_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_location_privacy_value']['group'] = 1;
  $handler->display->display_options['path'] = 'users/view';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'View users';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page: View All */
  $handler = $view->new_display('page', 'Page: View All', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All Users';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Geolocation: Distance */
  $handler->display->display_options['filters']['field_user_location_distance']['id'] = 'field_user_location_distance';
  $handler->display->display_options['filters']['field_user_location_distance']['table'] = 'field_data_field_user_location';
  $handler->display->display_options['filters']['field_user_location_distance']['field'] = 'field_user_location_distance';
  $handler->display->display_options['filters']['field_user_location_distance']['value'] = array(
    'latitude' => '',
    'longitude' => '',
    'search_distance' => '15',
    'search_units' => 'kilometers',
    'type' => 'direct_input',
  );
  $handler->display->display_options['path'] = 'users/view-all';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'View all users';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page: List */
  $handler = $view->new_display('page', 'Page: List', 'page_3');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    8 => '8',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'realname' => 'realname',
    'username' => 'username',
    'mail' => 'mail',
    'status' => 'status',
    'type' => 'type',
  );
  $handler->display->display_options['style_options']['default'] = 'realname';
  $handler->display->display_options['style_options']['info'] = array(
    'realname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'username' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['label'] = 'Name';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Login';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: User: Postal address */
  $handler->display->display_options['fields']['field_postal_address']['id'] = 'field_postal_address';
  $handler->display->display_options['fields']['field_postal_address']['table'] = 'field_data_field_postal_address';
  $handler->display->display_options['fields']['field_postal_address']['field'] = 'field_postal_address';
  $handler->display->display_options['fields']['field_postal_address']['label'] = 'Address';
  $handler->display->display_options['fields']['field_postal_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_postal_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Location Privacy (field_location_privacy) */
  $handler->display->display_options['filters']['field_location_privacy_value']['id'] = 'field_location_privacy_value';
  $handler->display->display_options['filters']['field_location_privacy_value']['table'] = 'field_data_field_location_privacy';
  $handler->display->display_options['filters']['field_location_privacy_value']['field'] = 'field_location_privacy_value';
  $handler->display->display_options['filters']['field_location_privacy_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_location_privacy_value']['group'] = 1;
  /* Filter criterion: Realname: Name */
  $handler->display->display_options['filters']['realname']['id'] = 'realname';
  $handler->display->display_options['filters']['realname']['table'] = 'realname';
  $handler->display->display_options['filters']['realname']['field'] = 'realname';
  $handler->display->display_options['filters']['realname']['group'] = 1;
  $handler->display->display_options['filters']['realname']['exposed'] = TRUE;
  $handler->display->display_options['filters']['realname']['expose']['operator_id'] = 'realname_op';
  $handler->display->display_options['filters']['realname']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['realname']['expose']['operator'] = 'realname_op';
  $handler->display->display_options['filters']['realname']['expose']['identifier'] = 'realname';
  $handler->display->display_options['filters']['realname']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['group'] = 1;
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Login';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['operator'] = 'contains';
  $handler->display->display_options['filters']['mail']['group'] = 1;
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['filters']['mail']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  /* Filter criterion: User: Postal address (field_postal_address:data) */
  $handler->display->display_options['filters']['field_postal_address_data']['id'] = 'field_postal_address_data';
  $handler->display->display_options['filters']['field_postal_address_data']['table'] = 'field_data_field_postal_address';
  $handler->display->display_options['filters']['field_postal_address_data']['field'] = 'field_postal_address_data';
  $handler->display->display_options['filters']['field_postal_address_data']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_postal_address_data']['group'] = 1;
  $handler->display->display_options['filters']['field_postal_address_data']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_postal_address_data']['expose']['operator_id'] = 'field_postal_address_data_op';
  $handler->display->display_options['filters']['field_postal_address_data']['expose']['label'] = 'Address';
  $handler->display->display_options['filters']['field_postal_address_data']['expose']['operator'] = 'field_postal_address_data_op';
  $handler->display->display_options['filters']['field_postal_address_data']['expose']['identifier'] = 'field_postal_address_data';
  $handler->display->display_options['filters']['field_postal_address_data']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_postal_address_data']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['path'] = 'users/list';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'List users';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page: List All */
  $handler = $view->new_display('page', 'Page: List All', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All Users';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'realname' => 'realname',
    'username' => 'username',
    'mail' => 'mail',
    'status' => 'status',
    'type' => 'type',
  );
  $handler->display->display_options['style_options']['default'] = 'realname';
  $handler->display->display_options['style_options']['info'] = array(
    'realname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'username' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['label'] = 'Name';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Login';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: User: Postal address */
  $handler->display->display_options['fields']['field_postal_address']['id'] = 'field_postal_address';
  $handler->display->display_options['fields']['field_postal_address']['table'] = 'field_data_field_postal_address';
  $handler->display->display_options['fields']['field_postal_address']['field'] = 'field_postal_address';
  $handler->display->display_options['fields']['field_postal_address']['label'] = 'Address';
  $handler->display->display_options['fields']['field_postal_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_postal_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Realname: Name */
  $handler->display->display_options['filters']['realname']['id'] = 'realname';
  $handler->display->display_options['filters']['realname']['table'] = 'realname';
  $handler->display->display_options['filters']['realname']['field'] = 'realname';
  $handler->display->display_options['filters']['realname']['operator'] = 'contains';
  $handler->display->display_options['filters']['realname']['group'] = 1;
  $handler->display->display_options['filters']['realname']['exposed'] = TRUE;
  $handler->display->display_options['filters']['realname']['expose']['operator_id'] = 'realname_op';
  $handler->display->display_options['filters']['realname']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['realname']['expose']['operator'] = 'realname_op';
  $handler->display->display_options['filters']['realname']['expose']['identifier'] = 'realname';
  $handler->display->display_options['filters']['realname']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['realname']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['group'] = 1;
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Login';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['operator'] = 'contains';
  $handler->display->display_options['filters']['mail']['group'] = 1;
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['filters']['mail']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  /* Filter criterion: User: Postal address (field_postal_address:data) */
  $handler->display->display_options['filters']['field_postal_address_data']['id'] = 'field_postal_address_data';
  $handler->display->display_options['filters']['field_postal_address_data']['table'] = 'field_data_field_postal_address';
  $handler->display->display_options['filters']['field_postal_address_data']['field'] = 'field_postal_address_data';
  $handler->display->display_options['filters']['field_postal_address_data']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_postal_address_data']['group'] = 1;
  $handler->display->display_options['filters']['field_postal_address_data']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_postal_address_data']['expose']['operator_id'] = 'field_postal_address_data_op';
  $handler->display->display_options['filters']['field_postal_address_data']['expose']['label'] = 'Address';
  $handler->display->display_options['filters']['field_postal_address_data']['expose']['operator'] = 'field_postal_address_data_op';
  $handler->display->display_options['filters']['field_postal_address_data']['expose']['identifier'] = 'field_postal_address_data';
  $handler->display->display_options['filters']['field_postal_address_data']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_postal_address_data']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['path'] = 'users/list-all';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'List all users';
  $handler->display->display_options['menu']['description'] = 'List all users fro administrators';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: User export */
  $handler = $view->new_display('views_data_export', 'User export', 'views_data_export_1');
  $handler->display->display_options['display_description'] = 'Export all user details as a CSV file';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    8 => '8',
  );
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 1;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['label'] = 'Name';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Login';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: User: Postal address (field_postal_address:data) */
  $handler->display->display_options['fields']['field_postal_address_data']['id'] = 'field_postal_address_data';
  $handler->display->display_options['fields']['field_postal_address_data']['table'] = 'field_data_field_postal_address';
  $handler->display->display_options['fields']['field_postal_address_data']['field'] = 'field_postal_address_data';
  $handler->display->display_options['path'] = 'users/export';
  $export['user_admin'] = $view;

  $view = new view();
  $view->name = 'user_bulk_update';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'User Bulk Update';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'User Bulk Update';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer users';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations_1' => 'views_bulk_operations_1',
    'name' => 'name',
    'mail' => 'mail',
    'field_postal_address_first_name' => 'field_postal_address_first_name',
    'field_postal_address_last_name' => 'field_postal_address_last_name',
    'field_postal_address_thoroughfare' => 'field_postal_address_thoroughfare',
    'field_postal_address_dependent_locality' => 'field_postal_address_dependent_locality',
    'field_postal_address_locality' => 'field_postal_address_locality',
    'field_postal_address_postal_code' => 'field_postal_address_postal_code',
    'rid' => 'rid',
  );
  $handler->display->display_options['style_options']['default'] = 'name';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_postal_address_first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_postal_address_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_postal_address_thoroughfare' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_postal_address_dependent_locality' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_postal_address_locality' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_postal_address_postal_code' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'rid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Bulk operations: User */
  $handler->display->display_options['fields']['views_bulk_operations_1']['id'] = 'views_bulk_operations_1';
  $handler->display->display_options['fields']['views_bulk_operations_1']['table'] = 'users';
  $handler->display->display_options['fields']['views_bulk_operations_1']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['row_clickable'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_operations'] = array(
    'action::user_block_user_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_user_cancel_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::flag_user_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_user_roles_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_beekeeper_magazine_subscription_end' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_beekeeper_magazine_subscription_start' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::realname_action_realname_update' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_user_update_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: User: Postal address - First name */
  $handler->display->display_options['fields']['field_postal_address_first_name']['id'] = 'field_postal_address_first_name';
  $handler->display->display_options['fields']['field_postal_address_first_name']['table'] = 'field_data_field_postal_address';
  $handler->display->display_options['fields']['field_postal_address_first_name']['field'] = 'field_postal_address_first_name';
  $handler->display->display_options['fields']['field_postal_address_first_name']['label'] = 'First name';
  /* Field: User: Postal address - Last name */
  $handler->display->display_options['fields']['field_postal_address_last_name']['id'] = 'field_postal_address_last_name';
  $handler->display->display_options['fields']['field_postal_address_last_name']['table'] = 'field_data_field_postal_address';
  $handler->display->display_options['fields']['field_postal_address_last_name']['field'] = 'field_postal_address_last_name';
  $handler->display->display_options['fields']['field_postal_address_last_name']['label'] = 'Last name';
  /* Field: User: Postal address - Thoroughfare (i.e. Street address) */
  $handler->display->display_options['fields']['field_postal_address_thoroughfare']['id'] = 'field_postal_address_thoroughfare';
  $handler->display->display_options['fields']['field_postal_address_thoroughfare']['table'] = 'field_data_field_postal_address';
  $handler->display->display_options['fields']['field_postal_address_thoroughfare']['field'] = 'field_postal_address_thoroughfare';
  $handler->display->display_options['fields']['field_postal_address_thoroughfare']['label'] = 'Street';
  /* Field: User: Postal address - Dependent locality */
  $handler->display->display_options['fields']['field_postal_address_dependent_locality']['id'] = 'field_postal_address_dependent_locality';
  $handler->display->display_options['fields']['field_postal_address_dependent_locality']['table'] = 'field_data_field_postal_address';
  $handler->display->display_options['fields']['field_postal_address_dependent_locality']['field'] = 'field_postal_address_dependent_locality';
  $handler->display->display_options['fields']['field_postal_address_dependent_locality']['label'] = 'Suburb';
  /* Field: User: Postal address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_postal_address_locality']['id'] = 'field_postal_address_locality';
  $handler->display->display_options['fields']['field_postal_address_locality']['table'] = 'field_data_field_postal_address';
  $handler->display->display_options['fields']['field_postal_address_locality']['field'] = 'field_postal_address_locality';
  $handler->display->display_options['fields']['field_postal_address_locality']['label'] = 'Town/City';
  /* Field: User: Postal address - Postal code */
  $handler->display->display_options['fields']['field_postal_address_postal_code']['id'] = 'field_postal_address_postal_code';
  $handler->display->display_options['fields']['field_postal_address_postal_code']['table'] = 'field_data_field_postal_address';
  $handler->display->display_options['fields']['field_postal_address_postal_code']['field'] = 'field_postal_address_postal_code';
  $handler->display->display_options['fields']['field_postal_address_postal_code']['label'] = 'Post code';
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Postal address - Dependent locality */
  $handler->display->display_options['filters']['field_postal_address_dependent_locality']['id'] = 'field_postal_address_dependent_locality';
  $handler->display->display_options['filters']['field_postal_address_dependent_locality']['table'] = 'field_data_field_postal_address';
  $handler->display->display_options['filters']['field_postal_address_dependent_locality']['field'] = 'field_postal_address_dependent_locality';
  $handler->display->display_options['filters']['field_postal_address_dependent_locality']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_postal_address_dependent_locality']['expose']['operator_id'] = 'field_postal_address_dependent_locality_op';
  $handler->display->display_options['filters']['field_postal_address_dependent_locality']['expose']['label'] = 'Suburb';
  $handler->display->display_options['filters']['field_postal_address_dependent_locality']['expose']['operator'] = 'field_postal_address_dependent_locality_op';
  $handler->display->display_options['filters']['field_postal_address_dependent_locality']['expose']['identifier'] = 'field_postal_address_dependent_locality';
  $handler->display->display_options['filters']['field_postal_address_dependent_locality']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  /* Filter criterion: User: Postal address - Locality (i.e. City) */
  $handler->display->display_options['filters']['field_postal_address_locality']['id'] = 'field_postal_address_locality';
  $handler->display->display_options['filters']['field_postal_address_locality']['table'] = 'field_data_field_postal_address';
  $handler->display->display_options['filters']['field_postal_address_locality']['field'] = 'field_postal_address_locality';
  $handler->display->display_options['filters']['field_postal_address_locality']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_postal_address_locality']['expose']['operator_id'] = 'field_postal_address_locality_op';
  $handler->display->display_options['filters']['field_postal_address_locality']['expose']['label'] = 'Town/City';
  $handler->display->display_options['filters']['field_postal_address_locality']['expose']['operator'] = 'field_postal_address_locality_op';
  $handler->display->display_options['filters']['field_postal_address_locality']['expose']['identifier'] = 'field_postal_address_locality';
  $handler->display->display_options['filters']['field_postal_address_locality']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  /* Filter criterion: User: Postal address - Postal code */
  $handler->display->display_options['filters']['field_postal_address_postal_code']['id'] = 'field_postal_address_postal_code';
  $handler->display->display_options['filters']['field_postal_address_postal_code']['table'] = 'field_data_field_postal_address';
  $handler->display->display_options['filters']['field_postal_address_postal_code']['field'] = 'field_postal_address_postal_code';
  $handler->display->display_options['filters']['field_postal_address_postal_code']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_postal_address_postal_code']['expose']['operator_id'] = 'field_postal_address_postal_code_op';
  $handler->display->display_options['filters']['field_postal_address_postal_code']['expose']['label'] = 'Post code';
  $handler->display->display_options['filters']['field_postal_address_postal_code']['expose']['operator'] = 'field_postal_address_postal_code_op';
  $handler->display->display_options['filters']['field_postal_address_postal_code']['expose']['identifier'] = 'field_postal_address_postal_code';
  $handler->display->display_options['filters']['field_postal_address_postal_code']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['rid']['expose']['operator_id'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['label'] = 'Roles';
  $handler->display->display_options['filters']['rid']['expose']['operator'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['identifier'] = 'rid';
  $handler->display->display_options['filters']['rid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['rid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'user-bulk-update';
  $export['user_bulk_update'] = $view;

  return $export;
}
