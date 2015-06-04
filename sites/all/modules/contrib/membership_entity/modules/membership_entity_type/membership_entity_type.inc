<?php

/**
 * @file
 * Contains the MembershipEntityType class.
 */

/**
 * Defines a membership type.
 */
class MembershipEntityType extends Entity {
  /**
   * Default constructor for membership types.
   *
   * @param array $values
   *   An array of default values.
   */
  public function __construct($values = array()) {
    parent::__construct($values, 'membership_entity_type');
  }

  /**
   * Returns the full url to the membership type.
   */
  public function url() {
    $uri = $this->uri();
    return url($uri['path'], $uri);
  }

  /**
   * Returns the Drupal path to the membership type.
   */
  public function path() {
    $uri = $this->uri();
    return $uri['path'];
  }

  /**
   * {@inheritdoc}
   */
  public function defaultUri() {
    return array('path' => 'admin/memberships/types/manage/' . $this->type);
  }
}
