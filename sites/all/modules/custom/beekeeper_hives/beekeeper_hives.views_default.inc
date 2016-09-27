<?php
/**
 * @file
 * beekeeper_hives.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function beekeeper_hives_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'hive_management';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Hive Management';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Hive Inspectors';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    9 => '9',
    8 => '8',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: User: Primary membership */
  $handler->display->display_options['relationships']['membership_entity']['id'] = 'membership_entity';
  $handler->display->display_options['relationships']['membership_entity']['table'] = 'users';
  $handler->display->display_options['relationships']['membership_entity']['field'] = 'membership_entity';
  $handler->display->display_options['relationships']['membership_entity']['required'] = TRUE;
  $handler->display->display_options['relationships']['membership_entity']['bundle_types'] = array(
    'life_membership' => 'life_membership',
    'standard_membership' => 'standard_membership',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: Telephone */
  $handler->display->display_options['fields']['field_phone_number']['id'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['table'] = 'field_data_field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['field'] = 'field_phone_number';
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
  /* Filter criterion: Membership: Membership status */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'membership_entity';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'membership_entity';
  $handler->display->display_options['filters']['status_1']['value'] = array(
    1 => '1',
    3 => '3',
  );
  /* Filter criterion: User: Hive inspection (field_hive_inspection) */
  $handler->display->display_options['filters']['field_hive_inspection_value']['id'] = 'field_hive_inspection_value';
  $handler->display->display_options['filters']['field_hive_inspection_value']['table'] = 'field_data_field_hive_inspection';
  $handler->display->display_options['filters']['field_hive_inspection_value']['field'] = 'field_hive_inspection_value';
  $handler->display->display_options['filters']['field_hive_inspection_value']['value'] = array(
    1 => '1',
  );

  /* Display: Page: List Hive inspectors */
  $handler = $view->new_display('page', 'Page: List Hive inspectors', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: Telephone */
  $handler->display->display_options['fields']['field_phone_number']['id'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['table'] = 'field_data_field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['field'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_phone_number']['delta_offset'] = '0';
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
  $handler->display->display_options['path'] = 'hives/list-inspectors';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'List hive inspectors';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page: View Hive Inspectors */
  $handler = $view->new_display('page', 'Page: View Hive Inspectors', 'page_1');
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
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_map';
  $handler->display->display_options['style_options']['map_height'] = '640px';
  $handler->display->display_options['style_options']['map_min_zoom'] = '7';
  $handler->display->display_options['style_options']['map_max_zoom'] = '14';
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
    'name' => 'name',
    'field_phone_number' => 'field_phone_number',
  );
  $handler->display->display_options['row_options']['separator'] = '; ';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: Telephone */
  $handler->display->display_options['fields']['field_phone_number']['id'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['table'] = 'field_data_field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['field'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_phone_number']['delta_offset'] = '0';
  /* Field: User: My Location */
  $handler->display->display_options['fields']['field_user_location']['id'] = 'field_user_location';
  $handler->display->display_options['fields']['field_user_location']['table'] = 'field_data_field_user_location';
  $handler->display->display_options['fields']['field_user_location']['field'] = 'field_user_location';
  $handler->display->display_options['fields']['field_user_location']['label'] = '';
  $handler->display->display_options['fields']['field_user_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_location']['click_sort_column'] = 'lat';
  /* Field: User: Hive inspect details */
  $handler->display->display_options['fields']['field_hive_inspect_details']['id'] = 'field_hive_inspect_details';
  $handler->display->display_options['fields']['field_hive_inspect_details']['table'] = 'field_data_field_hive_inspect_details';
  $handler->display->display_options['fields']['field_hive_inspect_details']['field'] = 'field_hive_inspect_details';
  $handler->display->display_options['fields']['field_hive_inspect_details']['label'] = '';
  $handler->display->display_options['fields']['field_hive_inspect_details']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_hive_inspect_details']['element_label_colon'] = FALSE;
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
    1 => '1',
    3 => '3',
  );
  /* Filter criterion: User: Hive inspection (field_hive_inspection) */
  $handler->display->display_options['filters']['field_hive_inspection_value']['id'] = 'field_hive_inspection_value';
  $handler->display->display_options['filters']['field_hive_inspection_value']['table'] = 'field_data_field_hive_inspection';
  $handler->display->display_options['filters']['field_hive_inspection_value']['field'] = 'field_hive_inspection_value';
  $handler->display->display_options['filters']['field_hive_inspection_value']['value'] = array(
    1 => '1',
  );
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
  $handler->display->display_options['path'] = 'hives/view-inspectors';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'View hive inspectors';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['hive_management'] = $view;

  return $export;
}
