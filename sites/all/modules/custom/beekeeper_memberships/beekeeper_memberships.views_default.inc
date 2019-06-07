<?php

/**
 * @file
 * beekeeper_memberships.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function beekeeper_memberships_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'buy_membership';
  $view->description = '';
  $view->tag = 'beekeepers';
  $view->base_table = 'commerce_product';
  $view->human_name = 'buy-membership';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Buy Membership';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Commerce Product: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_product'] = 0;
  /* Field: Commerce Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['label'] = '';
  $handler->display->display_options['fields']['commerce_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => '0',
  );
  /* Field: Commerce Product: Add to Cart form */
  $handler->display->display_options['fields']['add_to_cart_form']['id'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['table'] = 'views_entity_commerce_product';
  $handler->display->display_options['fields']['add_to_cart_form']['field'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['label'] = '';
  $handler->display->display_options['fields']['add_to_cart_form']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['add_to_cart_form']['show_quantity'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['default_quantity'] = '1';
  $handler->display->display_options['fields']['add_to_cart_form']['combine'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['display_path'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['line_item_type'] = 'product';
  /* Filter criterion: Commerce Product: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'membership_entity_product' => 'membership_entity_product',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'buy-membership';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Buy Membership';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['buy_membership'] = $view;

  $view = new view();
  $view->name = 'membership_details';
  $view->description = 'Display details of all memberships on the site.';
  $view->tag = 'membership_entity';
  $view->base_table = 'membership_entity';
  $view->human_name = 'Administration: Membership details';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Memberships';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer memberships';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'member_id' => 'member_id',
    'primary_member' => 'primary_member',
    'type' => 'type',
    'status' => 'status',
    'start' => 'start',
    'end' => 'end',
    'url' => 'url',
    'edit' => 'url',
    'renew' => 'url',
    'delete' => 'url',
  );
  $handler->display->display_options['style_options']['default'] = 'start';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'member_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'primary_member' => array(
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
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'start' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'end' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'url' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'edit' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'renew' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no memberships to display.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Last Term */
  $handler->display->display_options['relationships']['membership_entity_term_representative']['id'] = 'membership_entity_term_representative';
  $handler->display->display_options['relationships']['membership_entity_term_representative']['table'] = 'membership_entity';
  $handler->display->display_options['relationships']['membership_entity_term_representative']['field'] = 'membership_entity_term_representative';
  $handler->display->display_options['relationships']['membership_entity_term_representative']['ui_name'] = 'Last Term';
  $handler->display->display_options['relationships']['membership_entity_term_representative']['label'] = 'Last term';
  $handler->display->display_options['relationships']['membership_entity_term_representative']['subquery_sort'] = 'membership_entity_term.end';
  $handler->display->display_options['relationships']['membership_entity_term_representative']['subquery_view'] = '';
  $handler->display->display_options['relationships']['membership_entity_term_representative']['subquery_namespace'] = 'last';
  $handler->display->display_options['relationships']['membership_entity_term_representative']['subquery_status'] = array(
    1 => '1',
    -1 => '-1',
    2 => 0,
    3 => 0,
  );
  /* Relationship: First Term */
  $handler->display->display_options['relationships']['membership_entity_term_representative_1']['id'] = 'membership_entity_term_representative_1';
  $handler->display->display_options['relationships']['membership_entity_term_representative_1']['table'] = 'membership_entity';
  $handler->display->display_options['relationships']['membership_entity_term_representative_1']['field'] = 'membership_entity_term_representative';
  $handler->display->display_options['relationships']['membership_entity_term_representative_1']['ui_name'] = 'First Term';
  $handler->display->display_options['relationships']['membership_entity_term_representative_1']['label'] = 'First Term';
  $handler->display->display_options['relationships']['membership_entity_term_representative_1']['required'] = TRUE;
  $handler->display->display_options['relationships']['membership_entity_term_representative_1']['subquery_sort'] = 'membership_entity_term.start';
  $handler->display->display_options['relationships']['membership_entity_term_representative_1']['subquery_order'] = 'ASC';
  $handler->display->display_options['relationships']['membership_entity_term_representative_1']['subquery_view'] = '';
  $handler->display->display_options['relationships']['membership_entity_term_representative_1']['subquery_namespace'] = 'first';
  $handler->display->display_options['relationships']['membership_entity_term_representative_1']['subquery_status'] = array(
    1 => '1',
    3 => '3',
    -1 => '-1',
    2 => 0,
  );
  /* Field: Bulk operations: Membership */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_membership_entity';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::membership_entity_cancel_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => 'Delete membership',
    ),
    'action::membership_entity_pathauto_update_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Membership: Internal id */
  $handler->display->display_options['fields']['mid']['id'] = 'mid';
  $handler->display->display_options['fields']['mid']['table'] = 'membership_entity';
  $handler->display->display_options['fields']['mid']['field'] = 'mid';
  $handler->display->display_options['fields']['mid']['label'] = '';
  $handler->display->display_options['fields']['mid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mid']['separator'] = '';
  /* Field: Membership: Member id */
  $handler->display->display_options['fields']['member_id']['id'] = 'member_id';
  $handler->display->display_options['fields']['member_id']['table'] = 'membership_entity';
  $handler->display->display_options['fields']['member_id']['field'] = 'member_id';
  $handler->display->display_options['fields']['member_id']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['member_id']['alter']['path'] = 'membership/[mid]';
  $handler->display->display_options['fields']['member_id']['alter']['alt'] = 'View membership [member_id]';
  /* Field: Membership: Primary member */
  $handler->display->display_options['fields']['primary_member']['id'] = 'primary_member';
  $handler->display->display_options['fields']['primary_member']['table'] = 'membership_entity';
  $handler->display->display_options['fields']['primary_member']['field'] = 'primary_member';
  $handler->display->display_options['fields']['primary_member']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['primary_member']['view_mode'] = 'full';
  $handler->display->display_options['fields']['primary_member']['bypass_access'] = 1;
  /* Field: Membership: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'membership_entity';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Membership: Membership status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'membership_entity';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Status';
  /* Field: Membership term: Start date */
  $handler->display->display_options['fields']['start']['id'] = 'start';
  $handler->display->display_options['fields']['start']['table'] = 'membership_entity_term';
  $handler->display->display_options['fields']['start']['field'] = 'start';
  $handler->display->display_options['fields']['start']['relationship'] = 'membership_entity_term_representative_1';
  $handler->display->display_options['fields']['start']['label'] = 'Join date';
  $handler->display->display_options['fields']['start']['date_format'] = 'short';
  /* Field: Membership term: End date */
  $handler->display->display_options['fields']['end']['id'] = 'end';
  $handler->display->display_options['fields']['end']['table'] = 'membership_entity_term';
  $handler->display->display_options['fields']['end']['field'] = 'end';
  $handler->display->display_options['fields']['end']['relationship'] = 'membership_entity_term_representative';
  $handler->display->display_options['fields']['end']['label'] = 'Expiration date';
  $handler->display->display_options['fields']['end']['date_format'] = 'short';
  /* Field: Membership: Link */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'membership_entity';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = 'Operations';
  /* Field: Membership: Edit */
  $handler->display->display_options['fields']['edit']['id'] = 'edit';
  $handler->display->display_options['fields']['edit']['table'] = 'membership_entity';
  $handler->display->display_options['fields']['edit']['field'] = 'edit';
  /* Field: Membership: Renew */
  $handler->display->display_options['fields']['renew']['id'] = 'renew';
  $handler->display->display_options['fields']['renew']['table'] = 'membership_entity';
  $handler->display->display_options['fields']['renew']['field'] = 'renew';
  /* Field: Membership: Delete */
  $handler->display->display_options['fields']['delete']['id'] = 'delete';
  $handler->display->display_options['fields']['delete']['table'] = 'membership_entity';
  $handler->display->display_options['fields']['delete']['field'] = 'delete';
  /* Sort criterion: Membership: Member id */
  $handler->display->display_options['sorts']['member_id']['id'] = 'member_id';
  $handler->display->display_options['sorts']['member_id']['table'] = 'membership_entity';
  $handler->display->display_options['sorts']['member_id']['field'] = 'member_id';
  /* Filter criterion: Membership: Member id */
  $handler->display->display_options['filters']['member_id']['id'] = 'member_id';
  $handler->display->display_options['filters']['member_id']['table'] = 'membership_entity';
  $handler->display->display_options['filters']['member_id']['field'] = 'member_id';
  $handler->display->display_options['filters']['member_id']['operator'] = 'contains';
  $handler->display->display_options['filters']['member_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['member_id']['expose']['operator_id'] = 'member_id_op';
  $handler->display->display_options['filters']['member_id']['expose']['label'] = 'Member ID';
  $handler->display->display_options['filters']['member_id']['expose']['operator'] = 'member_id_op';
  $handler->display->display_options['filters']['member_id']['expose']['identifier'] = 'member_id';
  $handler->display->display_options['filters']['member_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Membership: Membership status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'membership_entity';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Membership: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'membership_entity';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );

  /* Display: Admin Details */
  $handler = $view->new_display('page', 'Admin Details', 'details');
  $handler->display->display_options['display_description'] = 'A list of memberships for administrators.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Last Term */
  $handler->display->display_options['relationships']['membership_entity_term_representative']['id'] = 'membership_entity_term_representative';
  $handler->display->display_options['relationships']['membership_entity_term_representative']['table'] = 'membership_entity';
  $handler->display->display_options['relationships']['membership_entity_term_representative']['field'] = 'membership_entity_term_representative';
  $handler->display->display_options['relationships']['membership_entity_term_representative']['ui_name'] = 'Last Term';
  $handler->display->display_options['relationships']['membership_entity_term_representative']['label'] = 'Last term';
  $handler->display->display_options['relationships']['membership_entity_term_representative']['subquery_sort'] = 'membership_entity_term.end';
  $handler->display->display_options['relationships']['membership_entity_term_representative']['subquery_view'] = '';
  $handler->display->display_options['relationships']['membership_entity_term_representative']['subquery_namespace'] = 'last';
  $handler->display->display_options['relationships']['membership_entity_term_representative']['subquery_status'] = array(
    1 => '1',
    -1 => '-1',
    2 => 0,
    3 => 0,
  );
  /* Relationship: First Term */
  $handler->display->display_options['relationships']['membership_entity_term_representative_1']['id'] = 'membership_entity_term_representative_1';
  $handler->display->display_options['relationships']['membership_entity_term_representative_1']['table'] = 'membership_entity';
  $handler->display->display_options['relationships']['membership_entity_term_representative_1']['field'] = 'membership_entity_term_representative';
  $handler->display->display_options['relationships']['membership_entity_term_representative_1']['ui_name'] = 'First Term';
  $handler->display->display_options['relationships']['membership_entity_term_representative_1']['label'] = 'First Term';
  $handler->display->display_options['relationships']['membership_entity_term_representative_1']['required'] = TRUE;
  $handler->display->display_options['relationships']['membership_entity_term_representative_1']['subquery_sort'] = 'membership_entity_term.start';
  $handler->display->display_options['relationships']['membership_entity_term_representative_1']['subquery_order'] = 'ASC';
  $handler->display->display_options['relationships']['membership_entity_term_representative_1']['subquery_view'] = '';
  $handler->display->display_options['relationships']['membership_entity_term_representative_1']['subquery_namespace'] = 'first';
  $handler->display->display_options['relationships']['membership_entity_term_representative_1']['subquery_status'] = array(
    1 => '1',
    3 => '3',
    -1 => '-1',
    2 => 0,
  );
  /* Relationship: Membership: Primary member */
  $handler->display->display_options['relationships']['primary_member']['id'] = 'primary_member';
  $handler->display->display_options['relationships']['primary_member']['table'] = 'membership_entity';
  $handler->display->display_options['relationships']['primary_member']['field'] = 'primary_member';
  /* Relationship: Secondary members: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'membership_entity_secondary_member';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Membership */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_membership_entity';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::membership_entity_cancel_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => 'Delete membership',
    ),
    'action::membership_entity_pathauto_update_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Membership: Internal id */
  $handler->display->display_options['fields']['mid']['id'] = 'mid';
  $handler->display->display_options['fields']['mid']['table'] = 'membership_entity';
  $handler->display->display_options['fields']['mid']['field'] = 'mid';
  $handler->display->display_options['fields']['mid']['label'] = '';
  $handler->display->display_options['fields']['mid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mid']['separator'] = '';
  /* Field: Membership: Member id */
  $handler->display->display_options['fields']['member_id']['id'] = 'member_id';
  $handler->display->display_options['fields']['member_id']['table'] = 'membership_entity';
  $handler->display->display_options['fields']['member_id']['field'] = 'member_id';
  $handler->display->display_options['fields']['member_id']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['member_id']['alter']['path'] = 'membership/[mid]';
  $handler->display->display_options['fields']['member_id']['alter']['alt'] = 'View membership [member_id]';
  /* Field: Membership: Primary member */
  $handler->display->display_options['fields']['primary_member']['id'] = 'primary_member';
  $handler->display->display_options['fields']['primary_member']['table'] = 'membership_entity';
  $handler->display->display_options['fields']['primary_member']['field'] = 'primary_member';
  $handler->display->display_options['fields']['primary_member']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['primary_member']['view_mode'] = 'full';
  $handler->display->display_options['fields']['primary_member']['bypass_access'] = 1;
  /* Field: Membership: Secondary members */
  $handler->display->display_options['fields']['secondary_members']['id'] = 'secondary_members';
  $handler->display->display_options['fields']['secondary_members']['table'] = 'membership_entity';
  $handler->display->display_options['fields']['secondary_members']['field'] = 'secondary_members';
  $handler->display->display_options['fields']['secondary_members']['type'] = 'ul';
  /* Field: Membership: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'membership_entity';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Membership: Membership status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'membership_entity';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Status';
  /* Field: Membership term: Start date */
  $handler->display->display_options['fields']['start']['id'] = 'start';
  $handler->display->display_options['fields']['start']['table'] = 'membership_entity_term';
  $handler->display->display_options['fields']['start']['field'] = 'start';
  $handler->display->display_options['fields']['start']['relationship'] = 'membership_entity_term_representative_1';
  $handler->display->display_options['fields']['start']['label'] = 'Join date';
  $handler->display->display_options['fields']['start']['date_format'] = 'short';
  /* Field: Membership term: End date */
  $handler->display->display_options['fields']['end']['id'] = 'end';
  $handler->display->display_options['fields']['end']['table'] = 'membership_entity_term';
  $handler->display->display_options['fields']['end']['field'] = 'end';
  $handler->display->display_options['fields']['end']['relationship'] = 'membership_entity_term_representative';
  $handler->display->display_options['fields']['end']['label'] = 'Expiration date';
  $handler->display->display_options['fields']['end']['date_format'] = 'short';
  /* Field: Membership: Link */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'membership_entity';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = 'Operations';
  /* Field: Membership: Edit */
  $handler->display->display_options['fields']['edit']['id'] = 'edit';
  $handler->display->display_options['fields']['edit']['table'] = 'membership_entity';
  $handler->display->display_options['fields']['edit']['field'] = 'edit';
  /* Field: Membership: Renew */
  $handler->display->display_options['fields']['renew']['id'] = 'renew';
  $handler->display->display_options['fields']['renew']['table'] = 'membership_entity';
  $handler->display->display_options['fields']['renew']['field'] = 'renew';
  /* Field: Membership: Delete */
  $handler->display->display_options['fields']['delete']['id'] = 'delete';
  $handler->display->display_options['fields']['delete']['table'] = 'membership_entity';
  $handler->display->display_options['fields']['delete']['field'] = 'delete';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Membership: Member id */
  $handler->display->display_options['filters']['member_id']['id'] = 'member_id';
  $handler->display->display_options['filters']['member_id']['table'] = 'membership_entity';
  $handler->display->display_options['filters']['member_id']['field'] = 'member_id';
  $handler->display->display_options['filters']['member_id']['operator'] = 'contains';
  $handler->display->display_options['filters']['member_id']['group'] = 1;
  $handler->display->display_options['filters']['member_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['member_id']['expose']['operator_id'] = 'member_id_op';
  $handler->display->display_options['filters']['member_id']['expose']['label'] = 'Member ID';
  $handler->display->display_options['filters']['member_id']['expose']['operator'] = 'member_id_op';
  $handler->display->display_options['filters']['member_id']['expose']['identifier'] = 'member_id';
  $handler->display->display_options['filters']['member_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Realname: Name */
  $handler->display->display_options['filters']['realname']['id'] = 'realname';
  $handler->display->display_options['filters']['realname']['table'] = 'realname';
  $handler->display->display_options['filters']['realname']['field'] = 'realname';
  $handler->display->display_options['filters']['realname']['relationship'] = 'primary_member';
  $handler->display->display_options['filters']['realname']['operator'] = 'contains';
  $handler->display->display_options['filters']['realname']['group'] = 1;
  $handler->display->display_options['filters']['realname']['exposed'] = TRUE;
  $handler->display->display_options['filters']['realname']['expose']['operator_id'] = 'realname_op';
  $handler->display->display_options['filters']['realname']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['realname']['expose']['operator'] = 'realname_op';
  $handler->display->display_options['filters']['realname']['expose']['identifier'] = 'realname';
  $handler->display->display_options['filters']['realname']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    3 => 0,
  );
  /* Filter criterion: Membership: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'membership_entity';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Membership: Membership status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'membership_entity';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['path'] = 'admin/memberships/details';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Details';
  $handler->display->display_options['menu']['description'] = 'A list of all memberships';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['title'] = 'Memberships';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'management';
  $export['membership_details'] = $view;

  return $export;
}
