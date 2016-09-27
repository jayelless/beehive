<?php

/**
 * @file
 * Field handler for library item status
 */

/**
 * Display a node's status in the library as a whole
 */
class library_handler_field_library_status extends views_handler_field {

  /**
   * Implements construct().
   */
  function construct() {
    parent::construct();
    $this->additional_fields['nid'] = 'nid';
    $this->additional_fields['lid'] = array('table' => 'library', 'field' => 'id');
  }

  /**
   * Implements query().
   */
  function query() {
    $this->ensure_my_table();
    $this->add_additional_fields();
  }

  /**
   * Implements render().
   */
  function render($values) {
    $lid = $values->library_id;
    $nid = $values->nid;
    // @todo This handler could be simpler and not require node_load,
    // see filter_library_status.
    $node = node_load($nid);
    foreach ($node->library_items as $item) {
      if ($item['id'] == $lid) {
        $status = library_get_status_item($item);
        return library_get_status_text($status);
      }
    }
    return '';
  }
}
