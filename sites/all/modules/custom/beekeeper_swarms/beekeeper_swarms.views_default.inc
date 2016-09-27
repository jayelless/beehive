<?php
/**
 * @file
 * beekeeper_swarms.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function beekeeper_swarms_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'swarm_collection';
  $view->description = '';
  $view->tag = 'beekeepers';
  $view->base_table = 'users';
  $view->human_name = 'Swarm collection';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Swarm collectors';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer users';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'google_map';
  $handler->display->display_options['style_options']['map_height'] = '640px';
  $handler->display->display_options['style_options']['map_center'] = '-41.278423,174.776692';
  $handler->display->display_options['style_options']['map_zoom'] = '10';
  $handler->display->display_options['style_options']['map_min_zoom'] = '6';
  $handler->display->display_options['style_options']['map_max_zoom'] = '12';
  $handler->display->display_options['style_options']['marker_title_field'] = 'realname';
  $handler->display->display_options['style_options']['use_marker_clusterer'] = 0;
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
  $handler->display->display_options['row_options']['inline'] = array(
    'realname' => 'realname',
    'field_phone_number' => 'field_phone_number',
  );
  $handler->display->display_options['row_options']['separator'] = ', ';
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
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['label'] = 'Name';
  /* Field: User: Telephone */
  $handler->display->display_options['fields']['field_phone_number']['id'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['table'] = 'field_data_field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['field'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_phone_number']['settings'] = array(
    'title' => '',
  );
  $handler->display->display_options['fields']['field_phone_number']['delta_offset'] = '0';
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
  /* Filter criterion: User: Swarm collector (field_swarm_collector) */
  $handler->display->display_options['filters']['field_swarm_collector_value']['id'] = 'field_swarm_collector_value';
  $handler->display->display_options['filters']['field_swarm_collector_value']['table'] = 'field_data_field_swarm_collector';
  $handler->display->display_options['filters']['field_swarm_collector_value']['field'] = 'field_swarm_collector_value';
  $handler->display->display_options['filters']['field_swarm_collector_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_swarm_collector_value']['group'] = 1;
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
  $handler->display->display_options['filters']['field_user_location_distance']['group'] = 1;
  $handler->display->display_options['filters']['field_user_location_distance']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['label'] = 'Swarm location';
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
    9 => 0,
  );
  /* Filter criterion: Membership: Membership status */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'membership_entity';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'membership_entity';
  $handler->display->display_options['filters']['status_1']['value'] = array(
    1 => '1',
    3 => '3',
  );

  /* Display: Page: List swarm collectors */
  $handler = $view->new_display('page', 'Page: List swarm collectors', 'page_2');
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
    'field_user_location' => 'field_user_location',
    'field_phone_number' => 'field_phone_number',
    'field_postal_address_dependent_locality' => 'field_postal_address_dependent_locality',
    'field_postal_address_locality' => 'field_postal_address_locality',
  );
  $handler->display->display_options['style_options']['default'] = 'field_postal_address_dependent_locality';
  $handler->display->display_options['style_options']['info'] = array(
    'realname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_location' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_phone_number' => array(
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
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: My Location */
  $handler->display->display_options['fields']['field_user_location']['id'] = 'field_user_location';
  $handler->display->display_options['fields']['field_user_location']['table'] = 'field_data_field_user_location';
  $handler->display->display_options['fields']['field_user_location']['field'] = 'field_user_location';
  $handler->display->display_options['fields']['field_user_location']['label'] = '';
  $handler->display->display_options['fields']['field_user_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_location']['click_sort_column'] = 'lat';
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['label'] = 'Name';
  /* Field: User: Telephone */
  $handler->display->display_options['fields']['field_phone_number']['id'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['table'] = 'field_data_field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['field'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_phone_number']['type'] = 'telephone_link';
  $handler->display->display_options['fields']['field_phone_number']['settings'] = array(
    'title' => '',
  );
  $handler->display->display_options['fields']['field_phone_number']['delta_offset'] = '0';
  /* Field: User: Postal address - Dependent locality */
  $handler->display->display_options['fields']['field_postal_address_dependent_locality']['id'] = 'field_postal_address_dependent_locality';
  $handler->display->display_options['fields']['field_postal_address_dependent_locality']['table'] = 'field_data_field_postal_address';
  $handler->display->display_options['fields']['field_postal_address_dependent_locality']['field'] = 'field_postal_address_dependent_locality';
  $handler->display->display_options['fields']['field_postal_address_dependent_locality']['label'] = 'Suburb`';
  /* Field: User: Postal address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_postal_address_locality']['id'] = 'field_postal_address_locality';
  $handler->display->display_options['fields']['field_postal_address_locality']['table'] = 'field_data_field_postal_address';
  $handler->display->display_options['fields']['field_postal_address_locality']['field'] = 'field_postal_address_locality';
  $handler->display->display_options['fields']['field_postal_address_locality']['label'] = 'Town/City';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Swarm collector (field_swarm_collector) */
  $handler->display->display_options['filters']['field_swarm_collector_value']['id'] = 'field_swarm_collector_value';
  $handler->display->display_options['filters']['field_swarm_collector_value']['table'] = 'field_data_field_swarm_collector';
  $handler->display->display_options['filters']['field_swarm_collector_value']['field'] = 'field_swarm_collector_value';
  $handler->display->display_options['filters']['field_swarm_collector_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_swarm_collector_value']['group'] = 1;
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
  $handler->display->display_options['filters']['field_user_location_distance']['group'] = 1;
  $handler->display->display_options['filters']['field_user_location_distance']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['label'] = 'Swarm location';
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
    9 => 0,
  );
  /* Filter criterion: Membership: Membership status */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'membership_entity';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'membership_entity';
  $handler->display->display_options['filters']['status_1']['value'] = array(
    1 => '1',
    3 => '3',
  );
  $handler->display->display_options['filters']['status_1']['group'] = 1;
  $handler->display->display_options['path'] = 'swarms/list-collectors';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'List swarm collectors';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page: View swarm collectors */
  $handler = $view->new_display('page', 'Page: View swarm collectors', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Swarm collectors';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    1 => '1',
    2 => '2',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: My Location */
  $handler->display->display_options['fields']['field_user_location']['id'] = 'field_user_location';
  $handler->display->display_options['fields']['field_user_location']['table'] = 'field_data_field_user_location';
  $handler->display->display_options['fields']['field_user_location']['field'] = 'field_user_location';
  $handler->display->display_options['fields']['field_user_location']['label'] = '';
  $handler->display->display_options['fields']['field_user_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_location']['click_sort_column'] = 'lat';
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['label'] = 'Name';
  /* Field: User: Telephone */
  $handler->display->display_options['fields']['field_phone_number']['id'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['table'] = 'field_data_field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['field'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_phone_number']['settings'] = array(
    'title' => '',
  );
  $handler->display->display_options['fields']['field_phone_number']['delta_offset'] = '0';
  /* Field: User: Swarm collect details */
  $handler->display->display_options['fields']['field_swarm_collect_details']['id'] = 'field_swarm_collect_details';
  $handler->display->display_options['fields']['field_swarm_collect_details']['table'] = 'field_data_field_swarm_collect_details';
  $handler->display->display_options['fields']['field_swarm_collect_details']['field'] = 'field_swarm_collect_details';
  $handler->display->display_options['fields']['field_swarm_collect_details']['label'] = '';
  $handler->display->display_options['fields']['field_swarm_collect_details']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_swarm_collect_details']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'swarms/view-collectors';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Swarm collectors';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Pane: Swarm collectors */
  $handler = $view->new_display('panel_pane', 'Pane: Swarm collectors', 'panel_pane_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    1 => '1',
    2 => '2',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_map';
  $handler->display->display_options['style_options']['map_height'] = '640px';
  $handler->display->display_options['style_options']['map_center'] = '-41.2784228,174.776692';
  $handler->display->display_options['style_options']['map_zoom'] = '10';
  $handler->display->display_options['style_options']['map_min_zoom'] = '6';
  $handler->display->display_options['style_options']['map_max_zoom'] = '12';
  $handler->display->display_options['style_options']['marker_title_field'] = 'realname';
  $handler->display->display_options['style_options']['use_marker_clusterer'] = 0;
  $handler->display->display_options['style_options']['marker_clusterer'] = array(
    'grid_size' => '',
    'max_zoom' => '',
    'icon_url' => '',
    'icon_size' => '',
  );
  $handler->display->display_options['style_options']['map_auto_center_and_zoom'] = 1;
  $handler->display->display_options['style_options']['map_disable_scroll_wheel'] = 0;
  $handler->display->display_options['style_options']['map_disable_double_click_zoom'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'realname' => 'realname',
    'field_phone_number' => 'field_phone_number',
  );
  $handler->display->display_options['row_options']['separator'] = ', ';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Page: List swarm recipients */
  $handler = $view->new_display('page', 'Page: List swarm recipients', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Swarm recipients';
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
    'field_user_location' => 'field_user_location',
    'field_phone_number' => 'field_phone_number',
    'field_postal_address_dependent_locality' => 'field_postal_address_dependent_locality',
    'field_postal_address_locality' => 'field_postal_address_locality',
  );
  $handler->display->display_options['style_options']['default'] = 'field_postal_address_dependent_locality';
  $handler->display->display_options['style_options']['info'] = array(
    'realname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_location' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_phone_number' => array(
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
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: My Location */
  $handler->display->display_options['fields']['field_user_location']['id'] = 'field_user_location';
  $handler->display->display_options['fields']['field_user_location']['table'] = 'field_data_field_user_location';
  $handler->display->display_options['fields']['field_user_location']['field'] = 'field_user_location';
  $handler->display->display_options['fields']['field_user_location']['label'] = '';
  $handler->display->display_options['fields']['field_user_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_location']['click_sort_column'] = 'lat';
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['label'] = 'Name';
  /* Field: User: Telephone */
  $handler->display->display_options['fields']['field_phone_number']['id'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['table'] = 'field_data_field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['field'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_phone_number']['type'] = 'telephone_link';
  $handler->display->display_options['fields']['field_phone_number']['settings'] = array(
    'title' => '',
  );
  $handler->display->display_options['fields']['field_phone_number']['delta_offset'] = '0';
  /* Field: User: Postal address - Dependent locality */
  $handler->display->display_options['fields']['field_postal_address_dependent_locality']['id'] = 'field_postal_address_dependent_locality';
  $handler->display->display_options['fields']['field_postal_address_dependent_locality']['table'] = 'field_data_field_postal_address';
  $handler->display->display_options['fields']['field_postal_address_dependent_locality']['field'] = 'field_postal_address_dependent_locality';
  $handler->display->display_options['fields']['field_postal_address_dependent_locality']['label'] = 'Suburb`';
  /* Field: User: Postal address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_postal_address_locality']['id'] = 'field_postal_address_locality';
  $handler->display->display_options['fields']['field_postal_address_locality']['table'] = 'field_data_field_postal_address';
  $handler->display->display_options['fields']['field_postal_address_locality']['field'] = 'field_postal_address_locality';
  $handler->display->display_options['fields']['field_postal_address_locality']['label'] = 'Town/City';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Swarm recipient (field_swarm_recipient) */
  $handler->display->display_options['filters']['field_swarm_recipient_value']['id'] = 'field_swarm_recipient_value';
  $handler->display->display_options['filters']['field_swarm_recipient_value']['table'] = 'field_data_field_swarm_recipient';
  $handler->display->display_options['filters']['field_swarm_recipient_value']['field'] = 'field_swarm_recipient_value';
  $handler->display->display_options['filters']['field_swarm_recipient_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_swarm_recipient_value']['group'] = 1;
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
  $handler->display->display_options['filters']['field_user_location_distance']['group'] = 1;
  $handler->display->display_options['filters']['field_user_location_distance']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['label'] = 'Swarm location';
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
    9 => 0,
  );
  /* Filter criterion: Membership: Membership status */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'membership_entity';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'membership_entity';
  $handler->display->display_options['filters']['status_1']['value'] = array(
    1 => '1',
    3 => '3',
  );
  $handler->display->display_options['filters']['status_1']['group'] = 1;
  $handler->display->display_options['path'] = 'swarms/list-recipients';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'List swarm recipients';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page: View swarm recipients */
  $handler = $view->new_display('page', 'Page: View swarm recipients', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Swarm recipients';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    7 => '7',
    4 => '4',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: My Location */
  $handler->display->display_options['fields']['field_user_location']['id'] = 'field_user_location';
  $handler->display->display_options['fields']['field_user_location']['table'] = 'field_data_field_user_location';
  $handler->display->display_options['fields']['field_user_location']['field'] = 'field_user_location';
  $handler->display->display_options['fields']['field_user_location']['label'] = '';
  $handler->display->display_options['fields']['field_user_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_location']['click_sort_column'] = 'lat';
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['label'] = 'Name';
  /* Field: User: Telephone */
  $handler->display->display_options['fields']['field_phone_number']['id'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['table'] = 'field_data_field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['field'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_phone_number']['settings'] = array(
    'title' => '',
  );
  $handler->display->display_options['fields']['field_phone_number']['delta_offset'] = '0';
  /* Field: User: Swarm receipt details */
  $handler->display->display_options['fields']['field_swarm_receipt_details']['id'] = 'field_swarm_receipt_details';
  $handler->display->display_options['fields']['field_swarm_receipt_details']['table'] = 'field_data_field_swarm_receipt_details';
  $handler->display->display_options['fields']['field_swarm_receipt_details']['field'] = 'field_swarm_receipt_details';
  $handler->display->display_options['fields']['field_swarm_receipt_details']['label'] = '';
  $handler->display->display_options['fields']['field_swarm_receipt_details']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_swarm_receipt_details']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Swarm recipient (field_swarm_recipient) */
  $handler->display->display_options['filters']['field_swarm_recipient_value']['id'] = 'field_swarm_recipient_value';
  $handler->display->display_options['filters']['field_swarm_recipient_value']['table'] = 'field_data_field_swarm_recipient';
  $handler->display->display_options['filters']['field_swarm_recipient_value']['field'] = 'field_swarm_recipient_value';
  $handler->display->display_options['filters']['field_swarm_recipient_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_swarm_recipient_value']['group'] = 1;
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
  $handler->display->display_options['filters']['field_user_location_distance']['group'] = 1;
  $handler->display->display_options['filters']['field_user_location_distance']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['label'] = 'Swarm location';
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
    9 => 0,
  );
  /* Filter criterion: Membership: Membership status */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'membership_entity';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'membership_entity';
  $handler->display->display_options['filters']['status_1']['value'] = array(
    1 => '1',
    3 => '3',
  );
  $handler->display->display_options['path'] = 'swarms/view-recipients';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Swarm recipients';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['swarm_collection'] = $view;

  return $export;
}
