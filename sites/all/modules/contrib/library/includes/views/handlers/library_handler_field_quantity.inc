<?php

/**
 * @file
 * Field handler for library item quantity
 */

/**
 * Display the library quantity
 */
class library_handler_field_quantity extends views_handler_field {

  /**
   * Implements construct().
   */
  function construct() {
    parent::construct();
    $this->additional_fields['nid'] = 'nid';
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
    $nid = $values->{$this->aliases['nid']};
    // @todo Optimize so noad_load is avoided.
    $node = node_load($nid);
    if (isset($node->library_items) && !empty($node->library_items)) {
      return count($node->library_items);
    }
    return '';
  }
}
