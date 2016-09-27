<?php

/**
 * @file
 * Hooks into views module
 */

/**
 * Implements hook_views_data().
 */
function library_views_data() {
  $data = array();

  $data['node']['quantity'] = array(
    'field' => array(
      'title' => t('Quantity'),
      'handler' => 'library_handler_field_quantity',
      'help' => t('Number of copies per node in the library.'),
    ),
  );

  $data['library']['table']['group'] = t('Library item');
  $data['library']['table']['base'] = array(
    'field' => 'id',
    'title' => t('Library item'),
    'help' => t('Library item'),
  );
  // For other base tables, explain how we join.
  $data['library']['table']['join'] = array(
    'node' => array(
      'left_field' => 'nid',
      'field' => 'nid',
    ),
  );
  $data['node']['table']['join'] = array(
    'library' => array(
      'left_field' => 'nid',
      'field' => 'nid',
    ),
  );

  // ----------------------------------------------------------------
  // Fields
  // The keys title and help are what appear for these fields in the UI.

  $data['library']['in_circulation'] = array(
    'title' => t('Reference Only'),
    'help' => t('Whether a library item is in circulation.'),
    'filter' => array(
      'title' => t('Reference Only'),
      'handler' => 'views_handler_filter_boolean_operator',
      'label' => t('Reference Only'),
    ),
  );

  $data['library']['library_status'] = array(
    'title' => t('Item Status'),
    // @ignore rule:sniffer_files_linelength_toolong
    'help' => t('Whether a library item is available or unavailable. Note that this requires an additional query per row.'),
     // Information for displaying a title as a field.
    'field' => array(
      'handler' => 'library_handler_field_library_status',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'library_handler_filter_library_status',
      'label' => t('Item Status'),
    ),
  );
  $data['library']['barcode'] = array(
    'title' => t('Item Barcode'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
  );

  return $data;
}
