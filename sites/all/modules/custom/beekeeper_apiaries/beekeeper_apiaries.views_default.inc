<?php
/**
 * @file
 * beekeeper_apiaries.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function beekeeper_apiaries_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'apiaries';
  $view->description = '';
  $view->tag = 'Beekeepers';
  $view->base_table = 'node';
  $view->human_name = 'Apiaries';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Apiaries';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    7 => '7',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'google_map';
  $handler->display->display_options['style_options']['map_height'] = '640px';
  $handler->display->display_options['style_options']['map_center'] = '-41.2784452,174.7766105';
  $handler->display->display_options['style_options']['map_zoom'] = '10';
  $handler->display->display_options['style_options']['map_min_zoom'] = '6';
  $handler->display->display_options['style_options']['map_max_zoom'] = '14';
  $handler->display->display_options['style_options']['marker_title_field'] = 'title';
  $handler->display->display_options['style_options']['use_marker_clusterer'] = 1;
  $handler->display->display_options['style_options']['marker_clusterer'] = array(
    'grid_size' => '',
    'max_zoom' => '14',
    'icon_url' => '',
    'icon_size' => '',
  );
  $handler->display->display_options['style_options']['map_auto_center_and_zoom'] = 1;
  $handler->display->display_options['style_options']['map_disable_scroll_wheel'] = 0;
  $handler->display->display_options['style_options']['map_disable_double_click_zoom'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'Beekeeper';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['realname']['label'] = 'Name';
  $handler->display->display_options['fields']['realname']['link_to_user'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Apiary location */
  $handler->display->display_options['fields']['field_apiary_location']['id'] = 'field_apiary_location';
  $handler->display->display_options['fields']['field_apiary_location']['table'] = 'field_data_field_apiary_location';
  $handler->display->display_options['fields']['field_apiary_location']['field'] = 'field_apiary_location';
  $handler->display->display_options['fields']['field_apiary_location']['label'] = '';
  $handler->display->display_options['fields']['field_apiary_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apiary_location']['click_sort_column'] = 'lat';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'apiary' => 'apiary',
  );
  /* Filter criterion: Geolocation: Distance */
  $handler->display->display_options['filters']['field_apiary_location_distance']['id'] = 'field_apiary_location_distance';
  $handler->display->display_options['filters']['field_apiary_location_distance']['table'] = 'field_data_field_apiary_location';
  $handler->display->display_options['filters']['field_apiary_location_distance']['field'] = 'field_apiary_location_distance';
  $handler->display->display_options['filters']['field_apiary_location_distance']['value'] = array(
    'latitude' => '',
    'longitude' => '',
    'search_distance' => '25',
    'search_units' => 'kilometers',
    'type' => 'googlemap',
  );
  $handler->display->display_options['filters']['field_apiary_location_distance']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_apiary_location_distance']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_apiary_location_distance']['expose']['label'] = 'Distance';
  $handler->display->display_options['filters']['field_apiary_location_distance']['expose']['operator'] = 'field_apiary_location_distance_op';
  $handler->display->display_options['filters']['field_apiary_location_distance']['expose']['identifier'] = 'field_apiary_location_distance';
  $handler->display->display_options['filters']['field_apiary_location_distance']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_apiary_location_distance']['expose']['remember_roles'] = array(
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

  /* Display: Page: All apiaries */
  $handler = $view->new_display('page', 'Page: All apiaries', 'page');
  $handler->display->display_options['path'] = 'apiaries/view-all';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Apiaries';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page: My apiaries */
  $handler = $view->new_display('page', 'Page: My apiaries', 'page_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'apiaries/mine';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'My Apiaries';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['apiaries'] = $view;

  $view = new view();
  $view->name = 'user_apiaries';
  $view->description = '';
  $view->tag = 'beekeepers';
  $view->base_table = 'node';
  $view->human_name = 'User Apiaries';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'User Apiaries';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'apiary' => 'apiary',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'user/%/apiaries';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Apiaries';
  $handler->display->display_options['menu']['description'] = 'Summary of my apiaries';
  $handler->display->display_options['menu']['weight'] = '5';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['user_apiaries'] = $view;

  return $export;
}
