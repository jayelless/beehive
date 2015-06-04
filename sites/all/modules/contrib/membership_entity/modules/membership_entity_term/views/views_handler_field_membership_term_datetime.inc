<?php

/**
 * @file
 * Definition of views_handler_field_membership_term_datetime.
 */

/**
 * Field handler for membership term dates.
 */
class views_handler_field_membership_term_datetime extends views_handler_field_date {
  /**
   * {@inheritdoc}
   */
  public function get_value($values, $field = NULL) {
    return strtotime(parent::get_value($values, $field));
  }
}
