<?php

/**
 * @file
 * Filter handler for library item status
 */

class library_handler_filter_library_status extends views_handler_filter_boolean_operator {

  /**
   * Implements construct().
   */
  function construct() {
    parent::construct();
    $this->value_value = t('Is Available');
  }

  /**
   * Implements query().
   */
  function query() {
    $this->ensure_my_table();
    $field = "$this->table_alias.$this->real_field";
    $field2 = "$this->table_alias.in_circulation";
    $node = $this->query->ensure_table('library');
    if ($this->value) {
      $value = LIBRARY_ITEM_AVAILABLE;
    }
    else {
      $value = LIBRARY_ITEM_UNAVAILABLE;
    }
    $this->query->add_where(
      $this->options['group'],
      db_and()
      ->condition($field, $value)
      ->condition($field2, LIBRARY_CIRCULATION)
    );
  }
}
