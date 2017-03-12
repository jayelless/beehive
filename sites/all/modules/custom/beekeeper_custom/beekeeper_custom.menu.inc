<?php
/**
 * Created by PhpStorm.
 * User: james
 * Date: 12/03/17
 * Time: 5:26 PM
 *
 * Menu callback functions
 */

function beekeeper_custom_menu_join_club() {
  global $user;
  if ($user->uid) {
    // Check to see if user already has a membership - if so, then cannot join the club again
    $result = db_query('SELECT mid,type FROM {membership_entity} WHERE uid = :uid', array(':uid' => $user->uid))->fetchAllKeyed();
    if ($result) {
      drupal_set_message(t('You are already a member of the club.'));
      drupal_goto('home');
    }
  }
  // Join the club
  drupal_goto('user/join');
}

function beekeeper_custom_menu_renew_membership() {
  global $user;
  if ($user->uid) {
    // Check to see if user already has a membership - if not, then need to join the club first
    $result = db_query('SELECT mid,type FROM {membership_entity} WHERE uid = :uid', array(':uid' => $user->uid))->fetchAllKeyed();
    if ($result) {
      // Check if user has a membership type that can be renewed
      if (in_array('standard_membership', $result) || in_array('junior_membership', $result)) {
        drupal_goto('membership/' . $user->uid . '/renew');
      }
      drupal_set_message(t('Your membership category cannot be renewed.'));
      drupal_goto('home');
    }
    else {
      drupal_set_message(t('Please join the club first.'));
      beekeeper_custom_menu_join_club();
    }
  }
}
