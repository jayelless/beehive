<?php
/**
 * @file
 * beekeeper_commons_overrides.features.inc
 */

/**
 * Implements hook_field_default_field_instances_alter().
 */
function beekeeper_commons_overrides_field_default_field_instances_alter(&$data) {
  if (isset($data['message-commons_activity_streams_comment_created-field_target_comments'])) {
    $data['message-commons_activity_streams_comment_created-field_target_comments']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['message-commons_activity_streams_comment_created-field_target_comments']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_activity_streams_comment_created-field_target_nodes'])) {
    $data['message-commons_activity_streams_comment_created-field_target_nodes']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['message-commons_activity_streams_comment_created-field_target_nodes']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_activity_streams_node_created-field_target_nodes'])) {
    $data['message-commons_activity_streams_node_created-field_target_nodes']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['message-commons_activity_streams_node_created-field_target_nodes']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_activity_streams_user_profile_updated-field_target_users'])) {
    $data['message-commons_activity_streams_user_profile_updated-field_target_users']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['message-commons_activity_streams_user_profile_updated-field_target_users']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_events_event_node_created-field_message_rendered_body'])) {
    $data['message-commons_events_event_node_created-field_message_rendered_body']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['message-commons_events_event_node_created-field_message_rendered_body']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_events_event_node_created-field_message_rendered_subject'])) {
    $data['message-commons_events_event_node_created-field_message_rendered_subject']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['message-commons_events_event_node_created-field_message_rendered_subject']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_events_event_node_created-field_target_comments'])) {
    $data['message-commons_events_event_node_created-field_target_comments']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['message-commons_events_event_node_created-field_target_comments']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_events_event_node_created-field_target_nodes'])) {
    $data['message-commons_events_event_node_created-field_target_nodes']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['message-commons_events_event_node_created-field_target_nodes']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_follow_user_user_followed-field_target_users'])) {
    $data['message-commons_follow_user_user_followed-field_target_users']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['message-commons_follow_user_user_followed-field_target_users']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_like_user_likes_node-field_target_nodes'])) {
    $data['message-commons_like_user_likes_node-field_target_nodes']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['message-commons_like_user_likes_node-field_target_nodes']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_notify_comment_created-field_message_rendered_body'])) {
    $data['message-commons_notify_comment_created-field_message_rendered_body']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['message-commons_notify_comment_created-field_message_rendered_body']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_notify_comment_created-field_message_rendered_subject'])) {
    $data['message-commons_notify_comment_created-field_message_rendered_subject']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['message-commons_notify_comment_created-field_message_rendered_subject']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_notify_comment_created-field_target_comments'])) {
    $data['message-commons_notify_comment_created-field_target_comments']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['message-commons_notify_comment_created-field_target_comments']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_notify_comment_created-field_target_nodes'])) {
    $data['message-commons_notify_comment_created-field_target_nodes']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['message-commons_notify_comment_created-field_target_nodes']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_notify_comment_created_no_groups-field_message_rendered_body'])) {
    $data['message-commons_notify_comment_created_no_groups-field_message_rendered_body']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['message-commons_notify_comment_created_no_groups-field_message_rendered_body']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_notify_comment_created_no_groups-field_message_rendered_subject'])) {
    $data['message-commons_notify_comment_created_no_groups-field_message_rendered_subject']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['message-commons_notify_comment_created_no_groups-field_message_rendered_subject']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_notify_comment_created_no_groups-field_target_comments'])) {
    $data['message-commons_notify_comment_created_no_groups-field_target_comments']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['message-commons_notify_comment_created_no_groups-field_target_comments']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_notify_comment_created_no_groups-field_target_nodes'])) {
    $data['message-commons_notify_comment_created_no_groups-field_target_nodes']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['message-commons_notify_comment_created_no_groups-field_target_nodes']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_notify_node_created-field_message_rendered_body'])) {
    $data['message-commons_notify_node_created-field_message_rendered_body']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['message-commons_notify_node_created-field_message_rendered_body']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_notify_node_created-field_message_rendered_subject'])) {
    $data['message-commons_notify_node_created-field_message_rendered_subject']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['message-commons_notify_node_created-field_message_rendered_subject']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_notify_node_created-field_target_nodes'])) {
    $data['message-commons_notify_node_created-field_target_nodes']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['message-commons_notify_node_created-field_target_nodes']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_notify_node_created_no_groups-field_message_rendered_body'])) {
    $data['message-commons_notify_node_created_no_groups-field_message_rendered_body']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['message-commons_notify_node_created_no_groups-field_message_rendered_body']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_notify_node_created_no_groups-field_message_rendered_subject'])) {
    $data['message-commons_notify_node_created_no_groups-field_message_rendered_subject']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['message-commons_notify_node_created_no_groups-field_message_rendered_subject']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_notify_node_created_no_groups-field_target_nodes'])) {
    $data['message-commons_notify_node_created_no_groups-field_target_nodes']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['message-commons_notify_node_created_no_groups-field_target_nodes']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_posts_post_created-field_target_nodes'])) {
    $data['message-commons_posts_post_created-field_target_nodes']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['message-commons_posts_post_created-field_target_nodes']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_q_a_question_answered-field_target_nodes'])) {
    $data['message-commons_q_a_question_answered-field_target_nodes']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['message-commons_q_a_question_answered-field_target_nodes']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_q_a_question_asked-field_target_nodes'])) {
    $data['message-commons_q_a_question_asked-field_target_nodes']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['message-commons_q_a_question_asked-field_target_nodes']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_wikis_wiki_updated-field_target_nodes'])) {
    $data['message-commons_wikis_wiki_updated-field_target_nodes']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['message-commons_wikis_wiki_updated-field_target_nodes']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message_type-commons_notify-message_text'])) {
    $data['message_type-commons_notify-message_text']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['message_type-commons_notify-message_text']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-answer-body'])) {
    $data['node-answer-body']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-answer-body']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-answer-body']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-answer-field_radioactivity'])) {
    $data['node-answer-field_radioactivity']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-answer-field_radioactivity']['settings']['history'] = 0; /* WAS: '' */
    $data['node-answer-field_radioactivity']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-answer-field_radioactivity']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-answer-field_related_question'])) {
    $data['node-answer-field_related_question']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-answer-field_related_question']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-answer-field_related_question']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-answer-group_content_access'])) {
    $data['node-answer-group_content_access']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-answer-group_content_access']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-answer-group_content_access']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-answer-og_group_ref'])) {
    $data['node-answer-og_group_ref']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-answer-og_group_ref']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-answer-og_group_ref']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-answer-title_field'])) {
    $data['node-answer-title_field']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-answer-title_field']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-answer-title_field']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-apiary-title_field'])) {
    $data['node-apiary-title_field']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-apiary-title_field']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-apiary-title_field']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-book-title_field'])) {
    $data['node-book-title_field']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-book-title_field']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-book-title_field']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-document-body'])) {
    $data['node-document-body']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-document-body']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-document-body']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-document-field_document_file'])) {
    $data['node-document-field_document_file']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-document-field_document_file']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-document-field_document_file']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
    $data['node-document-field_document_file']['widget']['settings']['insert'] = 0; /* WAS: '' */
    $data['node-document-field_document_file']['widget']['settings']['insert_absolute'] = FALSE; /* WAS: '' */
    $data['node-document-field_document_file']['widget']['settings']['insert_class'] = ''; /* WAS: '' */
    $data['node-document-field_document_file']['widget']['settings']['insert_default'] = array(
      0 => 'auto',
    ); /* WAS: '' */
    $data['node-document-field_document_file']['widget']['settings']['insert_styles'] = array(
      0 => 'auto',
    ); /* WAS: '' */
    $data['node-document-field_document_file']['widget']['settings']['insert_width'] = ''; /* WAS: '' */
  }
  if (isset($data['node-document-field_radioactivity'])) {
    $data['node-document-field_radioactivity']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-document-field_radioactivity']['settings']['history'] = 0; /* WAS: '' */
    $data['node-document-field_radioactivity']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-document-field_radioactivity']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-document-field_topics'])) {
    $data['node-document-field_topics']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-document-field_topics']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-document-field_topics']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-document-group_content_access'])) {
    $data['node-document-group_content_access']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-document-group_content_access']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-document-group_content_access']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-document-og_group_ref'])) {
    $data['node-document-og_group_ref']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-document-og_group_ref']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-document-og_group_ref']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-document-title_field'])) {
    $data['node-document-title_field']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-document-title_field']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-document-title_field']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-event-body'])) {
    $data['node-event-body']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-event-body']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-event-body']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-event-field_address'])) {
    $data['node-event-field_address']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-event-field_address']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-event-field_address']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-event-field_date'])) {
    $data['node-event-field_date']['display']['default']['settings']['show_remaining_days'] = FALSE; /* WAS: '' */
    $data['node-event-field_date']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-event-field_date']['display']['teaser']['settings']['show_remaining_days'] = FALSE; /* WAS: '' */
    $data['node-event-field_date']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-event-field_date']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-event-field_location'])) {
    $data['node-event-field_location']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-event-field_location']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-event-field_location']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-event-field_logo'])) {
    $data['node-event-field_logo']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-event-field_logo']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-event-field_logo']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
    $data['node-event-field_logo']['widget']['settings']['insert'] = 0; /* WAS: '' */
    $data['node-event-field_logo']['widget']['settings']['insert_absolute'] = FALSE; /* WAS: '' */
    $data['node-event-field_logo']['widget']['settings']['insert_class'] = ''; /* WAS: '' */
    $data['node-event-field_logo']['widget']['settings']['insert_default'] = array(
      0 => 'auto',
    ); /* WAS: '' */
    $data['node-event-field_logo']['widget']['settings']['insert_styles'] = array(
      0 => 'auto',
    ); /* WAS: '' */
    $data['node-event-field_logo']['widget']['settings']['insert_width'] = ''; /* WAS: '' */
  }
  if (isset($data['node-event-field_number_of_attendees'])) {
    $data['node-event-field_number_of_attendees']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-event-field_number_of_attendees']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-event-field_number_of_attendees']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-event-field_offsite_url'])) {
    $data['node-event-field_offsite_url']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-event-field_offsite_url']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-event-field_offsite_url']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-event-field_organizers'])) {
    $data['node-event-field_organizers']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-event-field_organizers']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-event-field_organizers']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-event-field_radioactivity'])) {
    $data['node-event-field_radioactivity']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-event-field_radioactivity']['settings']['history'] = 0; /* WAS: '' */
    $data['node-event-field_radioactivity']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-event-field_radioactivity']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-event-field_registration'])) {
    $data['node-event-field_registration']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-event-field_registration']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-event-field_registration']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-event-field_registration_type'])) {
    $data['node-event-field_registration_type']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-event-field_registration_type']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-event-field_registration_type']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-event-field_topics'])) {
    $data['node-event-field_topics']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-event-field_topics']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-event-field_topics']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-event-group_content_access'])) {
    $data['node-event-group_content_access']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-event-group_content_access']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-event-group_content_access']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-event-og_group_ref'])) {
    $data['node-event-og_group_ref']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-event-og_group_ref']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-event-og_group_ref']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-event-title_field'])) {
    $data['node-event-title_field']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-event-title_field']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-event-title_field']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-forum-title_field'])) {
    $data['node-forum-title_field']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-forum-title_field']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-forum-title_field']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-group-body'])) {
    $data['node-group-body']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-group-body']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-group-body']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-group-field_group_logo'])) {
    $data['node-group-field_group_logo']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-group-field_group_logo']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-group-field_group_logo']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
    $data['node-group-field_group_logo']['widget']['settings']['insert'] = 0; /* WAS: '' */
    $data['node-group-field_group_logo']['widget']['settings']['insert_absolute'] = FALSE; /* WAS: '' */
    $data['node-group-field_group_logo']['widget']['settings']['insert_class'] = ''; /* WAS: '' */
    $data['node-group-field_group_logo']['widget']['settings']['insert_default'] = array(
      0 => 'auto',
    ); /* WAS: '' */
    $data['node-group-field_group_logo']['widget']['settings']['insert_styles'] = array(
      0 => 'auto',
    ); /* WAS: '' */
    $data['node-group-field_group_logo']['widget']['settings']['insert_width'] = ''; /* WAS: '' */
  }
  if (isset($data['node-group-field_og_access_default_value'])) {
    $data['node-group-field_og_access_default_value']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-group-field_og_access_default_value']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-group-field_og_access_default_value']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-group-field_og_subscribe_settings'])) {
    $data['node-group-field_og_subscribe_settings']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-group-field_og_subscribe_settings']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-group-field_og_subscribe_settings']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-group-field_radioactivity'])) {
    $data['node-group-field_radioactivity']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-group-field_radioactivity']['settings']['history'] = 0; /* WAS: '' */
    $data['node-group-field_radioactivity']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-group-field_radioactivity']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-group-field_topics'])) {
    $data['node-group-field_topics']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-group-field_topics']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-group-field_topics']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-group-group_access'])) {
    $data['node-group-group_access']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-group-group_access']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-group-group_access']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-group-group_group'])) {
    $data['node-group-group_group']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-group-group_group']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-group-group_group']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-group-og_roles_permissions'])) {
    $data['node-group-og_roles_permissions']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-group-og_roles_permissions']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-group-og_roles_permissions']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-group-title_field'])) {
    $data['node-group-title_field']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-group-title_field']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-group-title_field']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-mass_contact-title_field'])) {
    $data['node-mass_contact-title_field']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-mass_contact-title_field']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-mass_contact-title_field']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-merchandise_display-title_field'])) {
    $data['node-merchandise_display-title_field']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-merchandise_display-title_field']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-merchandise_display-title_field']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-newsletter-title_field'])) {
    $data['node-newsletter-title_field']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-newsletter-title_field']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-newsletter-title_field']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-page-body'])) {
    $data['node-page-body']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-page-body']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-page-body']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-page-title_field'])) {
    $data['node-page-title_field']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-page-title_field']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-page-title_field']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-poll-body'])) {
    $data['node-poll-body']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-poll-body']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-poll-body']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-poll-field_media'])) {
    $data['node-poll-field_media']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-poll-field_media']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-poll-field_media']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-poll-field_radioactivity'])) {
    $data['node-poll-field_radioactivity']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-poll-field_radioactivity']['settings']['history'] = 0; /* WAS: '' */
    $data['node-poll-field_radioactivity']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-poll-field_radioactivity']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-poll-field_topics'])) {
    $data['node-poll-field_topics']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-poll-field_topics']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-poll-field_topics']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-poll-group_content_access'])) {
    $data['node-poll-group_content_access']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-poll-group_content_access']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-poll-group_content_access']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-poll-og_group_ref'])) {
    $data['node-poll-og_group_ref']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-poll-og_group_ref']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-poll-og_group_ref']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-poll-title_field'])) {
    $data['node-poll-title_field']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-poll-title_field']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-poll-title_field']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-post-body'])) {
    $data['node-post-body']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-post-body']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-post-body']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-post-field_media'])) {
    $data['node-post-field_media']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-post-field_media']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-post-field_media']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-post-field_radioactivity'])) {
    $data['node-post-field_radioactivity']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-post-field_radioactivity']['settings']['history'] = 0; /* WAS: '' */
    $data['node-post-field_radioactivity']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-post-field_radioactivity']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-post-field_topics'])) {
    $data['node-post-field_topics']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-post-field_topics']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-post-field_topics']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-post-group_content_access'])) {
    $data['node-post-group_content_access']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-post-group_content_access']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-post-group_content_access']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-post-og_group_ref'])) {
    $data['node-post-og_group_ref']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-post-og_group_ref']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-post-og_group_ref']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-post-title_field'])) {
    $data['node-post-title_field']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-post-title_field']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-post-title_field']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-product_display-title_field'])) {
    $data['node-product_display-title_field']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-product_display-title_field']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-product_display-title_field']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-question-body'])) {
    $data['node-question-body']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-question-body']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-question-body']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-question-field_media'])) {
    $data['node-question-field_media']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-question-field_media']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-question-field_media']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-question-field_radioactivity'])) {
    $data['node-question-field_radioactivity']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-question-field_radioactivity']['settings']['history'] = 0; /* WAS: '' */
    $data['node-question-field_radioactivity']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-question-field_radioactivity']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-question-field_topics'])) {
    $data['node-question-field_topics']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-question-field_topics']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-question-field_topics']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-question-group_content_access'])) {
    $data['node-question-group_content_access']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-question-group_content_access']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-question-group_content_access']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-question-og_group_ref'])) {
    $data['node-question-og_group_ref']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-question-og_group_ref']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-question-og_group_ref']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-question-title_field'])) {
    $data['node-question-title_field']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-question-title_field']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-question-title_field']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-webform-title_field'])) {
    $data['node-webform-title_field']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-webform-title_field']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-webform-title_field']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-wiki-body'])) {
    $data['node-wiki-body']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-wiki-body']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-wiki-body']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-wiki-field_radioactivity'])) {
    $data['node-wiki-field_radioactivity']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-wiki-field_radioactivity']['settings']['history'] = 0; /* WAS: '' */
    $data['node-wiki-field_radioactivity']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-wiki-field_radioactivity']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-wiki-field_topics'])) {
    $data['node-wiki-field_topics']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-wiki-field_topics']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-wiki-field_topics']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-wiki-group_content_access'])) {
    $data['node-wiki-group_content_access']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-wiki-group_content_access']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-wiki-group_content_access']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-wiki-og_group_ref'])) {
    $data['node-wiki-og_group_ref']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-wiki-og_group_ref']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-wiki-og_group_ref']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-wiki-title_field'])) {
    $data['node-wiki-title_field']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-wiki-title_field']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-wiki-title_field']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['og_membership-og_membership_type_default-og_membership_request'])) {
    $data['og_membership-og_membership_type_default-og_membership_request']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['og_membership-og_membership_type_default-og_membership_request']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['user-user-field_bio'])) {
    $data['user-user-field_bio']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['user-user-field_bio']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['user-user-field_facebook_url'])) {
    $data['user-user-field_facebook_url']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['user-user-field_facebook_url']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['user-user-field_linkedin_url'])) {
    $data['user-user-field_linkedin_url']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['user-user-field_linkedin_url']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['user-user-field_name_first'])) {
    $data['user-user-field_name_first']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['user-user-field_name_first']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['user-user-field_name_last'])) {
    $data['user-user-field_name_last']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['user-user-field_name_last']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['user-user-field_twitter_url'])) {
    $data['user-user-field_twitter_url']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['user-user-field_twitter_url']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['user-user-message_subscribe_email'])) {
    $data['user-user-message_subscribe_email']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['user-user-message_subscribe_email']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
}

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function beekeeper_commons_overrides_default_page_manager_handlers_alter(&$data) {
  if (isset($data['user_view_panel_context'])) {
    $data['user_view_panel_context']->conf['display']->content['new-38b23f27-878a-f264-dd90-e55305d0f70c']->style['settings'] = NULL; /* WAS: '' */
    $data['user_view_panel_context']->conf['display']->content['new-9370d657-6ff3-443e-b595-c0e59371a344'] = (object) array(
          'pid' => 'new-9370d657-6ff3-443e-b595-c0e59371a344',
          'panel' => 'three_33_bottom',
          'type' => 'entity_field_extra',
          'subtype' => 'user:memberships',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'view_mode' => 'full',
            'context' => 'argument_entity_id:user_1',
            'override_title' => 0,
            'override_title_text' => '',
            'override_title_heading' => 'h2',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => '9370d657-6ff3-443e-b595-c0e59371a344',
        ); /* WAS: '' */
    $data['user_view_panel_context']->conf['display']->panels['three_33_bottom'] = array(
      0 => 'new-9370d657-6ff3-443e-b595-c0e59371a344',
    ); /* WAS: '' */
    $data['user_view_panel_context']->conf['display']->storage_id = 'user_view_panel_context'; /* WAS: '' */
    $data['user_view_panel_context']->conf['display']->storage_type = 'page_manager'; /* WAS: '' */
  }
}

/**
 * Implements hook_default_page_manager_pages_alter().
 */
function beekeeper_commons_overrides_default_page_manager_pages_alter(&$data) {
  if (isset($data['commons_home'])) {
    $data['commons_home']->default_handlers['page_commons_home_panel_context_2']->conf['display']->content['new-0ae8e5a2-44f6-8584-21f2-8be6e340e62f']->panel = 'three_33_third'; /* WAS: 'three_33_first' */
    $data['commons_home']->default_handlers['page_commons_home_panel_context_2']->conf['display']->content['new-0ae8e5a2-44f6-8584-21f2-8be6e340e62f']->position = 2; /* WAS: 0 */
    $data['commons_home']->default_handlers['page_commons_home_panel_context_2']->conf['display']->content['new-0ae8e5a2-44f6-8584-21f2-8be6e340e62f']->shown = FALSE; /* WAS: TRUE */
    $data['commons_home']->default_handlers['page_commons_home_panel_context_2']->conf['display']->content['new-2ab570f0-8498-44f4-e9d0-9977e3d8d4df']->configuration['title'] = 'Support and encouragment of beekeeping and beekeepers'; /* WAS: 'Welcome to our community' */
    $data['commons_home']->default_handlers['page_commons_home_panel_context_2']->conf['display']->content['new-58e71a00-2b87-ab64-31c5-4fdc9e99a2d4']->panel = 'three_33_second'; /* WAS: 'three_33_third' */
    $data['commons_home']->default_handlers['page_commons_home_panel_context_2']->conf['display']->content['new-58e71a00-2b87-ab64-31c5-4fdc9e99a2d4']->position = 0; /* WAS: 1 */
    $data['commons_home']->default_handlers['page_commons_home_panel_context_2']->conf['display']->content['new-800b2f8a-307f-0e14-4174-626a1c5c4cd9']->position = 1; /* WAS: 0 */
    $data['commons_home']->default_handlers['page_commons_home_panel_context_2']->conf['display']->content['new-94106ddd-1278-0954-c5ba-b59ff1b9bf49'] = (object) array(
          'pid' => 'new-94106ddd-1278-0954-c5ba-b59ff1b9bf49',
          'panel' => 'three_33_first',
          'type' => 'views',
          'subtype' => 'commons_events_upcoming',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'override_pager_settings' => 0,
            'use_pager' => 0,
            'nodes_per_page' => 5,
            'pager_id' => 0,
            'offset' => 0,
            'more_link' => 0,
            'feed_icons' => 0,
            'panel_args' => 0,
            'link_to_view' => 0,
            'args' => '',
            'url' => '',
            'display' => 'commons_events_upcoming_global_block',
            'override_title' => 0,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
          'uuid' => '94106ddd-1278-0954-c5ba-b59ff1b9bf49',
        ); /* WAS: '' */
    $data['commons_home']->default_handlers['page_commons_home_panel_context_2']->conf['display']->content['new-b08fd311-7faa-4cd2-b527-48b0e83317a2'] = (object) array(
          'pid' => 'new-b08fd311-7faa-4cd2-b527-48b0e83317a2',
          'panel' => 'three_33_third',
          'type' => 'block',
          'subtype' => 'system-navigation',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'override_title' => 0,
            'override_title_text' => '',
            'override_title_heading' => 'h2',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
            'style' => 'rounded_corners',
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => 'b08fd311-7faa-4cd2-b527-48b0e83317a2',
        ); /* WAS: '' */
    $data['commons_home']->default_handlers['page_commons_home_panel_context_2']->conf['display']->content['new-b6e290b7-1d2b-5db4-a181-28befdcde628'] = (object) array(
          'pid' => 'new-b6e290b7-1d2b-5db4-a181-28befdcde628',
          'panel' => 'three_33_second',
          'type' => 'views_panes',
          'subtype' => 'commons_radioactivity_groups_most_active-panel_pane_1',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => 'b6e290b7-1d2b-5db4-a181-28befdcde628',
        ); /* WAS: '' */
    $data['commons_home']->default_handlers['page_commons_home_panel_context_2']->conf['display']->panels['three_33_first'][0] = 'new-94106ddd-1278-0954-c5ba-b59ff1b9bf49'; /* WAS: 'new-0ae8e5a2-44f6-8584-21f2-8be6e340e62f' */
    $data['commons_home']->default_handlers['page_commons_home_panel_context_2']->conf['display']->panels['three_33_second'] = array(
      0 => 'new-58e71a00-2b87-ab64-31c5-4fdc9e99a2d4',
      1 => 'new-b6e290b7-1d2b-5db4-a181-28befdcde628',
    ); /* WAS: '' */
    $data['commons_home']->default_handlers['page_commons_home_panel_context_2']->conf['display']->panels['three_33_third'][0] = 'new-0ae8e5a2-44f6-8584-21f2-8be6e340e62f'; /* WAS: 'new-800b2f8a-307f-0e14-4174-626a1c5c4cd9' */
    $data['commons_home']->default_handlers['page_commons_home_panel_context_2']->conf['display']->panels['three_33_third'][1] = 'new-800b2f8a-307f-0e14-4174-626a1c5c4cd9'; /* WAS: 'new-58e71a00-2b87-ab64-31c5-4fdc9e99a2d4' */
    $data['commons_home']->default_handlers['page_commons_home_panel_context_2']->conf['display']->panels['three_33_third'][2] = 'new-b08fd311-7faa-4cd2-b527-48b0e83317a2'; /* WAS: '' */
    $data['commons_home']->default_handlers['page_commons_home_panel_context_2']->conf['display']->storage_id = 'page_commons_home_panel_context_2'; /* WAS: '' */
    $data['commons_home']->default_handlers['page_commons_home_panel_context_2']->conf['display']->storage_type = 'page_manager'; /* WAS: '' */
    $data['commons_home']->default_handlers['page_commons_home_panel_context']->conf['display']->content['new-895dfc63-a30f-f734-3185-c40c407b4af0']->position = 3; /* WAS: 2 */
    $data['commons_home']->default_handlers['page_commons_home_panel_context']->conf['display']->content['new-b20add8c-2daf-4684-45f3-212d60c7f31e']->position = 2; /* WAS: 0 */
    $data['commons_home']->default_handlers['page_commons_home_panel_context']->conf['display']->content['new-bd2087f8-3cf5-4e07-aa1a-61036c986af2'] = (object) array(
          'pid' => 'new-bd2087f8-3cf5-4e07-aa1a-61036c986af2',
          'panel' => 'two_66_33_second',
          'type' => 'block',
          'subtype' => 'system-navigation',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'override_title' => 0,
            'override_title_text' => '',
            'override_title_heading' => 'h2',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
            'style' => 'rounded_corners',
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => 'bd2087f8-3cf5-4e07-aa1a-61036c986af2',
        ); /* WAS: '' */
    $data['commons_home']->default_handlers['page_commons_home_panel_context']->conf['display']->panels['two_66_33_second'][3] = 'new-bd2087f8-3cf5-4e07-aa1a-61036c986af2'; /* WAS: '' */
    $data['commons_home']->default_handlers['page_commons_home_panel_context']->conf['display']->storage_id = 'page_commons_home_panel_context'; /* WAS: '' */
    $data['commons_home']->default_handlers['page_commons_home_panel_context']->conf['display']->storage_type = 'page_manager'; /* WAS: '' */
  }
  if (isset($data['views_events_landing_page'])) {
    $data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->storage_id = 'page_views_events_landing_page_panel_context'; /* WAS: '' */
    $data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->storage_type = 'page_manager'; /* WAS: '' */
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function beekeeper_commons_overrides_views_default_views_alter(&$data) {
  if (isset($data['commons_bw_all'])) {
    $data['commons_bw_all']->display['default']->display_options['filters']['type']['value']['document'] = 'document'; /* WAS: '' */
  }
  if (isset($data['commons_bw_documents'])) {
    $data['commons_bw_documents']->display['default']->display_options['filters']['flagged'] = array(
      'id' => 'flagged',
      'table' => 'flagging',
      'field' => 'flagged',
      'relationship' => 'flag_content_rel',
      'ui_name' => 'Following',
      'value' => 1,
      'exposed' => TRUE,
      'expose' => array(
        'operator_id' => '',
        'label' => 'Following',
        'operator' => 'flagged_op',
        'identifier' => 'following',
      ),
    ); /* WAS: '' */
    $data['commons_bw_documents']->display['default']->display_options['relationships']['flag_content_rel'] = array(
      'id' => 'flag_content_rel',
      'table' => 'node',
      'field' => 'flag_content_rel',
      'ui_name' => 'Following',
      'label' => 'following',
      'required' => 0,
      'flag' => 'commons_follow_node',
    ); /* WAS: '' */
    $data['commons_bw_documents']->display['default']->display_options['sorts']['field_radioactivity_radioactivity_energy'] = array(
      'id' => 'field_radioactivity_radioactivity_energy',
      'table' => 'field_data_field_radioactivity',
      'field' => 'field_radioactivity_radioactivity_energy',
      'order' => 'DESC',
      'exposed' => TRUE,
      'expose' => array(
        'label' => 'most active',
      ),
    ); /* WAS: '' */
  }
  if (isset($data['commons_bw_polls'])) {
    $data['commons_bw_polls']->display['default']->display_options['sorts']['field_radioactivity_radioactivity_energy'] = array(
      'id' => 'field_radioactivity_radioactivity_energy',
      'table' => 'field_data_field_radioactivity',
      'field' => 'field_radioactivity_radioactivity_energy',
      'order' => 'DESC',
      'exposed' => TRUE,
      'expose' => array(
        'label' => 'most active',
      ),
    ); /* WAS: '' */
  }
  if (isset($data['commons_bw_posts'])) {
    $data['commons_bw_posts']->display['default']->display_options['sorts']['field_radioactivity_radioactivity_energy'] = array(
      'id' => 'field_radioactivity_radioactivity_energy',
      'table' => 'field_data_field_radioactivity',
      'field' => 'field_radioactivity_radioactivity_energy',
      'order' => 'DESC',
      'exposed' => TRUE,
      'expose' => array(
        'label' => 'most active',
      ),
    ); /* WAS: '' */
  }
  if (isset($data['commons_bw_q_a'])) {
    $data['commons_bw_q_a']->display['default']->display_options['sorts']['field_radioactivity_radioactivity_energy'] = array(
      'id' => 'field_radioactivity_radioactivity_energy',
      'table' => 'field_data_field_radioactivity',
      'field' => 'field_radioactivity_radioactivity_energy',
      'order' => 'DESC',
      'exposed' => TRUE,
      'expose' => array(
        'label' => 'most active',
      ),
    ); /* WAS: '' */
  }
  if (isset($data['commons_bw_wikis'])) {
    $data['commons_bw_wikis']->display['default']->display_options['filters']['flagged'] = array(
      'id' => 'flagged',
      'table' => 'flagging',
      'field' => 'flagged',
      'relationship' => 'flag_content_rel',
      'ui_name' => 'Following',
      'value' => 1,
      'exposed' => TRUE,
      'expose' => array(
        'operator_id' => '',
        'label' => 'Following',
        'operator' => 'flagged_op',
        'identifier' => 'following',
      ),
    ); /* WAS: '' */
    $data['commons_bw_wikis']->display['default']->display_options['relationships']['flag_content_rel'] = array(
      'id' => 'flag_content_rel',
      'table' => 'node',
      'field' => 'flag_content_rel',
      'ui_name' => 'Following',
      'label' => 'following',
      'required' => 0,
      'flag' => 'commons_follow_node',
    ); /* WAS: '' */
    $data['commons_bw_wikis']->display['default']->display_options['sorts']['field_radioactivity_radioactivity_energy'] = array(
      'id' => 'field_radioactivity_radioactivity_energy',
      'table' => 'field_data_field_radioactivity',
      'field' => 'field_radioactivity_radioactivity_energy',
      'order' => 'DESC',
      'exposed' => TRUE,
      'expose' => array(
        'label' => 'most active',
      ),
    ); /* WAS: '' */
  }
  if (isset($data['commons_events_user_upcoming_events'])) {
    $data['commons_events_user_upcoming_events']->display['panel_pane_3'] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:8:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:10:{s:5:"title";b:0;s:16:"hide_admin_links";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:5:"empty";b:0;s:13:"relationships";b:0;s:6:"fields";b:0;s:9:"arguments";b:0;}s:5:"title";s:10:"You follow";s:12:"style_plugin";s:7:"default";s:10:"row_plugin";s:6:"fields";s:11:"row_options";a:1:{s:6:"inline";a:2:{s:13:"capacity_used";s:13:"capacity_used";s:13:"comment_count";s:13:"comment_count";}}s:13:"relationships";a:1:{s:16:"flag_content_rel";a:4:{s:2:"id";s:16:"flag_content_rel";s:5:"table";s:4:"node";s:5:"field";s:16:"flag_content_rel";s:4:"flag";s:19:"commons_follow_node";}}s:6:"fields";a:4:{s:11:"title_field";a:5:{s:2:"id";s:11:"title_field";s:5:"table";s:22:"field_data_title_field";s:5:"field";s:11:"title_field";s:5:"label";s:0:"";s:14:"link_to_entity";i:1;}s:13:"field_address";a:7:{s:2:"id";s:13:"field_address";s:5:"table";s:24:"field_data_field_address";s:5:"field";s:13:"field_address";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:17:"click_sort_column";s:7:"country";s:8:"settings";a:2:{s:19:"use_widget_handlers";i:1;s:15:"format_handlers";a:1:{s:7:"address";s:7:"address";}}}s:13:"capacity_used";a:7:{s:2:"id";s:13:"capacity_used";s:5:"table";s:4:"node";s:5:"field";s:13:"capacity_used";s:5:"label";s:0:"";s:5:"alter";a:2:{s:10:"alter_text";b:1;s:4:"text";s:43:"<strong>[capacity_used]</strong> attendees,";}s:19:"element_label_colon";b:0;s:9:"separator";s:0:"";}s:13:"comment_count";a:7:{s:2:"id";s:13:"comment_count";s:5:"table";s:23:"node_comment_statistics";s:5:"field";s:13:"comment_count";s:5:"label";s:0:"";s:5:"alter";a:2:{s:10:"alter_text";b:1;s:4:"text";s:41:"<strong>[comment_count]</strong> comments";}s:19:"element_label_colon";b:0;s:9:"separator";s:0:"";}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:12:"panel_pane_3";s:13:"display_title";s:17:"You follow - pane";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}'); /* WAS: '' */
  }
  if (isset($data['commons_homepage_content'])) {
    $data['commons_homepage_content']->display['default']->display_options['sorts']['field_radioactivity_radioactivity_energy'] = array(
      'id' => 'field_radioactivity_radioactivity_energy',
      'table' => 'field_data_field_radioactivity',
      'field' => 'field_radioactivity_radioactivity_energy',
      'order' => 'DESC',
      'exposed' => TRUE,
      'expose' => array(
        'label' => 'most active',
      ),
    ); /* WAS: '' */
  }
}
