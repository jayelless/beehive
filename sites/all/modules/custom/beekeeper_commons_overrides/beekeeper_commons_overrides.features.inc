<?php
/**
 * @file
 * beekeeper_commons_overrides.features.inc
 */

/**
 * Implements hook_field_default_field_instances_alter().
 */
function beekeeper_commons_overrides_field_default_field_instances_alter(&$data) {
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
  if (isset($data['message-trusted_contact_request_approved-field_approving_user'])) {
    $data['message-trusted_contact_request_approved-field_approving_user']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['message-trusted_contact_request_approved-field_approving_user']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-trusted_contact_request_pending-field_requesting_user'])) {
    $data['message-trusted_contact_request_pending-field_requesting_user']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['message-trusted_contact_request_pending-field_requesting_user']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
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
    unset($data['node-document-field_radioactivity']);
  }
  if (isset($data['node-document-field_topics'])) {
    unset($data['node-document-field_topics']);
  }
  if (isset($data['node-document-group_content_access'])) {
    $data['node-document-group_content_access']['display']['default']['label'] = 'above'; /* WAS: 'hidden' */
    $data['node-document-group_content_access']['display']['default']['module'] = 'list'; /* WAS: '' */
    $data['node-document-group_content_access']['display']['default']['type'] = 'list_default'; /* WAS: 'hidden' */
    $data['node-document-group_content_access']['display']['default']['weight'] = 2; /* WAS: 5 */
    $data['node-document-group_content_access']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-document-group_content_access']['display']['teaser']['label'] = 'above'; /* WAS: 'hidden' */
    $data['node-document-group_content_access']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-document-group_content_access']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
    $data['node-document-group_content_access']['widget']['weight'] = 42; /* WAS: 16 */
  }
  if (isset($data['node-document-og_group_ref'])) {
    $data['node-document-og_group_ref']['description'] = ''; /* WAS: 'Separate group names with commas' */
    $data['node-document-og_group_ref']['display']['default']['weight'] = 1; /* WAS: 11 */
    $data['node-document-og_group_ref']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-document-og_group_ref']['label'] = 'Groups audience'; /* WAS: 'Groups' */
    $data['node-document-og_group_ref']['required'] = FALSE; /* WAS: 0 */
    $data['node-document-og_group_ref']['settings']['behaviors']['og_widget']['admin']['widget_type'] = 'entityreference_autocomplete'; /* WAS: 'entityreference_autocomplete_tags' */
    $data['node-document-og_group_ref']['settings']['behaviors']['og_widget']['default']['widget_type'] = 'options_select'; /* WAS: 'entityreference_autocomplete_tags' */
    $data['node-document-og_group_ref']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-document-og_group_ref']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
    $data['node-document-og_group_ref']['widget']['weight'] = 41; /* WAS: 5 */
    unset($data['node-document-og_group_ref']['default_value_function']);
    unset($data['node-document-og_group_ref']['settings']['behaviors']['prepopulate']);
    unset($data['node-document-og_group_ref']['widget']['active']);
  }
  if (isset($data['node-document-og_user_group_ref'])) {
    $data['node-document-og_user_group_ref']['display']['default']['label'] = 'above'; /* WAS: 'inline' */
    $data['node-document-og_user_group_ref']['display']['default']['weight'] = 3; /* WAS: 11 */
    $data['node-document-og_user_group_ref']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-document-og_user_group_ref']['display']['teaser']['label'] = 'above'; /* WAS: 'inline' */
    $data['node-document-og_user_group_ref']['label'] = 'Groups audience'; /* WAS: 'Visible to trusted contacts of' */
    $data['node-document-og_user_group_ref']['required'] = FALSE; /* WAS: 0 */
    $data['node-document-og_user_group_ref']['settings']['behaviors']['og_widget']['admin']['widget_type'] = 'entityreference_autocomplete'; /* WAS: 'entityreference_autocomplete_tags' */
    $data['node-document-og_user_group_ref']['settings']['behaviors']['og_widget']['default']['widget_type'] = 'options_select'; /* WAS: 'entityreference_autocomplete_tags' */
    $data['node-document-og_user_group_ref']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-document-og_user_group_ref']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
    $data['node-document-og_user_group_ref']['widget']['weight'] = 43; /* WAS: 5 */
    unset($data['node-document-og_user_group_ref']['default_value_function']);
    unset($data['node-document-og_user_group_ref']['settings']['behaviors']['prepopulate']);
    unset($data['node-document-og_user_group_ref']['widget']['active']);
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
  if (isset($data['node-poll-og_user_group_ref'])) {
    $data['node-poll-og_user_group_ref']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-poll-og_user_group_ref']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-poll-og_user_group_ref']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
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
    $data['node-post-body']['settings']['better_formats'] = array(
      'allowed_formats' => array(
        'advanced_html' => 'advanced_html',
        'filtered_html' => 'filtered_html',
        'full_html' => 'full_html',
        'plain_text' => 'plain_text',
      ),
      'allowed_formats_toggle' => 1,
      'default_order_toggle' => 0,
      'default_order_wrapper' => array(
        'formats' => array(
          'advanced_html' => array(
            'weight' => 0,
          ),
          'filtered_html' => array(
            'weight' => 0,
          ),
          'full_html' => array(
            'weight' => 1,
          ),
          'plain_text' => array(
            'weight' => 10,
          ),
        ),
      ),
    ); /* WAS: '' */
    $data['node-post-body']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-post-body']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
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
  if (isset($data['node-post-og_user_group_ref'])) {
    $data['node-post-og_user_group_ref']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-post-og_user_group_ref']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-post-og_user_group_ref']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
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
  if (isset($data['node-question-og_user_group_ref'])) {
    $data['node-question-og_user_group_ref']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-question-og_user_group_ref']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-question-og_user_group_ref']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
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
  if (isset($data['node-wiki-og_user_group_ref'])) {
    $data['node-wiki-og_user_group_ref']['display']['notifications'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-wiki-og_user_group_ref']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['node-wiki-og_user_group_ref']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
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
  if (isset($data['og_membership-trusted_contacts-field_confirmation'])) {
    $data['og_membership-trusted_contacts-field_confirmation']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['og_membership-trusted_contacts-field_confirmation']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['og_membership-trusted_contacts-field_membership_token'])) {
    $data['og_membership-trusted_contacts-field_membership_token']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['og_membership-trusted_contacts-field_membership_token']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['og_membership-trusted_contacts-field_my_request'])) {
    $data['og_membership-trusted_contacts-field_my_request']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['og_membership-trusted_contacts-field_my_request']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['og_membership-trusted_contacts-field_original_og_membership'])) {
    $data['og_membership-trusted_contacts-field_original_og_membership']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['og_membership-trusted_contacts-field_original_og_membership']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['og_membership-trusted_contacts-field_response_date'])) {
    $data['og_membership-trusted_contacts-field_response_date']['display']['default']['settings']['show_remaining_days'] = FALSE; /* WAS: '' */
    $data['og_membership-trusted_contacts-field_response_date']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['og_membership-trusted_contacts-field_response_date']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
  }
  if (isset($data['user-user-field_bio'])) {
    $data['user-user-field_bio']['display']['default']['weight'] = 10; /* WAS: 8 */
    $data['user-user-field_bio']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['user-user-field_bio']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
    $data['user-user-field_bio']['widget']['weight'] = 8; /* WAS: 5 */
  }
  if (isset($data['user-user-field_name_first'])) {
    $data['user-user-field_name_first']['display']['default']['label'] = 'inline'; /* WAS: 'above' */
    $data['user-user-field_name_first']['display']['default']['weight'] = 3; /* WAS: 2 */
    $data['user-user-field_name_first']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['user-user-field_name_first']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
    $data['user-user-field_name_first']['widget']['weight'] = 4; /* WAS: 3 */
  }
  if (isset($data['user-user-field_name_last'])) {
    $data['user-user-field_name_last']['display']['default']['label'] = 'inline'; /* WAS: 'above' */
    $data['user-user-field_name_last']['display']['default']['weight'] = 4; /* WAS: 3 */
    $data['user-user-field_name_last']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['user-user-field_name_last']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
    $data['user-user-field_name_last']['widget']['weight'] = 5; /* WAS: 4 */
  }
  if (isset($data['user-user-group_access'])) {
    $data['user-user-group_access']['display']['default']['label'] = 'inline'; /* WAS: 'above' */
    $data['user-user-group_access']['display']['default']['weight'] = 25; /* WAS: 13 */
    $data['user-user-group_access']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['user-user-group_access']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
    $data['user-user-group_access']['widget']['weight'] = 3; /* WAS: 13 */
  }
  if (isset($data['user-user-group_group'])) {
    $data['user-user-group_group']['display']['default']['settings']['field_name'] = FALSE; /* WAS: '' */
    $data['user-user-group_group']['display']['default']['weight'] = 2; /* WAS: 3 */
    $data['user-user-group_group']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['user-user-group_group']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
    $data['user-user-group_group']['widget']['weight'] = 2; /* WAS: 0 */
    unset($data['user-user-group_group']['display']['default']['settings']['allowed_values']);
    unset($data['user-user-group_group']['display']['default']['settings']['allowed_values_function']);
  }
  if (isset($data['user-user-message_subscribe_email'])) {
    $data['user-user-message_subscribe_email']['display']['default']['label'] = 'inline'; /* WAS: 'above' */
    $data['user-user-message_subscribe_email']['display']['default']['weight'] = 21; /* WAS: 9 */
    $data['user-user-message_subscribe_email']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['user-user-message_subscribe_email']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
    $data['user-user-message_subscribe_email']['widget']['weight'] = 1; /* WAS: 0 */
  }
  if (isset($data['user-user-user_trusted_contacts'])) {
    $data['user-user-user_trusted_contacts']['display']['default']['weight'] = 26; /* WAS: 4 */
    $data['user-user-user_trusted_contacts']['settings']['membership_entity_join_form'] = FALSE; /* WAS: '' */
    $data['user-user-user_trusted_contacts']['settings']['membership_entity_term_renew_form'] = FALSE; /* WAS: '' */
    $data['user-user-user_trusted_contacts']['widget']['weight'] = 14; /* WAS: 2 */
  }
}

/**
 * Implements hook_filter_default_formats_alter().
 */
function beekeeper_commons_overrides_filter_default_formats_alter(&$data) {
  if (isset($data['filtered_html'])) {
    $data['filtered_html']['cache'] = 0; /* WAS: 1 */
    $data['filtered_html']['editor_settings'] = 'a:3:{s:7:"toolbar";a:1:{i:0;a:7:{i:0;a:2:{s:4:"name";s:6:"Format";s:5:"items";a:1:{i:0;s:6:"Format";}}i:1;a:2:{s:4:"name";s:4:"Text";s:5:"items";a:2:{i:0;s:4:"Bold";i:1;s:6:"Italic";}}i:2;a:2:{s:4:"name";s:5:"Lists";s:5:"items";a:2:{i:0;s:12:"BulletedList";i:1;s:12:"NumberedList";}}i:3;a:2:{s:4:"name";s:5:"Links";s:5:"items";a:2:{i:0;s:10:"DrupalLink";i:1;s:12:"DrupalUnlink";}}i:4;a:2:{s:4:"name";s:10:"Formatting";s:5:"items";a:2:{i:0;s:12:"RemoveFormat";i:1;s:10:"Blockquote";}}i:5;a:2:{s:4:"name";s:5:"Media";s:5:"items";a:1:{i:0;s:4:"file";}}i:6;a:2:{s:4:"name";s:5:"Tools";s:5:"items";a:2:{i:0;s:6:"Source";i:1;s:8:"Maximize";}}}}s:12:"image_upload";a:5:{s:6:"status";i:0;s:6:"scheme";s:6:"public";s:9:"directory";s:13:"inline-images";s:8:"max_size";s:0:"";s:14:"max_dimensions";a:2:{s:5:"width";s:0:"";s:6:"height";s:0:"";}}s:7:"plugins";a:2:{s:5:"style";a:1:{s:10:"style_list";a:0:{}}s:8:"language";a:1:{s:13:"language_list";s:2:"un";}}}'; /* WAS: 'a:3:{s:7:"toolbar";a:1:{i:0;a:7:{i:0;a:2:{s:4:"name";s:6:"Format";s:5:"items";a:1:{i:0;s:6:"Format";}}i:1;a:2:{s:4:"name";s:4:"Text";s:5:"items";a:2:{i:0;s:4:"Bold";i:1;s:6:"Italic";}}i:2;a:2:{s:4:"name";s:5:"Lists";s:5:"items";a:2:{i:0;s:12:"BulletedList";i:1;s:12:"NumberedList";}}i:3;a:2:{s:4:"name";s:5:"Links";s:5:"items";a:2:{i:0;s:10:"DrupalLink";i:1;s:12:"DrupalUnlink";}}i:4;a:2:{s:4:"name";s:10:"Formatting";s:5:"items";a:2:{i:0;s:12:"RemoveFormat";i:1;s:10:"Blockquote";}}i:5;a:2:{s:4:"name";s:5:"Media";s:5:"items";a:1:{i:0;s:4:"file";}}i:6;a:2:{s:4:"name";s:5:"Tools";s:5:"items";a:2:{i:0;s:6:"Source";i:1;s:8:"Maximize";}}}}s:12:"image_upload";a:5:{s:6:"status";i:0;s:6:"scheme";s:6:"public";s:9:"directory";s:13:"inline-images";s:8:"max_size";s:0:"";s:14:"max_dimensions";a:2:{s:5:"width";s:0:"";s:6:"height";s:0:"";}}s:7:"plugins";a:1:{s:5:"style";a:1:{s:10:"style_list";a:0:{}}}}' */
    $data['filtered_html']['filters']['entity_embed'] = array(
      'settings' => array(),
      'status' => 1,
      'weight' => 2,
    ); /* WAS: '' */
    $data['filtered_html']['filters']['filter_html']['settings']['allowed_html'] = '<a> <em> <strong> <u> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <h4> <h5> <h6>  <p> <br> <img> <strike> <drupal-entity> <drupal-entity> <drupal-entity>'; /* WAS: '<a> <em> <strong> <u> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <h4> <h5> <h6>  <p> <br> <img> <strike>' */
  }
}

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function beekeeper_commons_overrides_default_page_manager_handlers_alter(&$data) {
  if (isset($data['forum_panel_context_forum'])) {
    $data['forum_panel_context_forum']->conf['display']->did = 'new'; /* WAS: 'new-9d8383d6-d51b-42fe-bc89-9c05ac42739b' */
    unset($data['forum_panel_context_forum']->conf['display']->panels['center']);
    unset($data['forum_panel_context_forum']->export_type);
    unset($data['forum_panel_context_forum']->in_code_only);
    unset($data['forum_panel_context_forum']->table);
    unset($data['forum_panel_context_forum']->type);
  }
  if (isset($data['user_view_panel_context'])) {
    $data['user_view_panel_context']->conf['display']->content['new-38b23f27-878a-f264-dd90-e55305d0f70c']->style['settings'] = NULL; /* WAS: '' */
    $data['user_view_panel_context']->conf['display']->content['new-cca8f147-f983-4453-b109-2585c6e8d471'] = (object) array(
          'pid' => 'new-cca8f147-f983-4453-b109-2585c6e8d471',
          'panel' => 'three_33_bottom',
          'type' => 'entity_field_extra',
          'subtype' => 'user:memberships',
          'shown' => TRUE,
          'access' => array(
            'plugins' => array(),
          ),
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
          'uuid' => 'cca8f147-f983-4453-b109-2585c6e8d471',
        ); /* WAS: '' */
    $data['user_view_panel_context']->conf['display']->panels['three_33_bottom'] = array(
      0 => 'new-cca8f147-f983-4453-b109-2585c6e8d471',
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
    $data['commons_home']->default_handlers['page_commons_home_panel_context_2']->conf['display']->content['new-09fa5dd5-466f-486f-8307-063a43974a5f'] = (object) array(
          'pid' => 'new-09fa5dd5-466f-486f-8307-063a43974a5f',
          'panel' => 'three_33_third',
          'type' => 'block',
          'subtype' => 'block-2',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'override_title' => 1,
            'override_title_text' => 'Bee Swarms',
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
          'uuid' => '09fa5dd5-466f-486f-8307-063a43974a5f',
        ); /* WAS: '' */
    $data['commons_home']->default_handlers['page_commons_home_panel_context_2']->conf['display']->content['new-29ff082a-b9fb-4d7a-8605-d151fe8ead9f'] = (object) array(
          'pid' => 'new-29ff082a-b9fb-4d7a-8605-d151fe8ead9f',
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
          'position' => 1,
          'locks' => array(),
          'uuid' => '29ff082a-b9fb-4d7a-8605-d151fe8ead9f',
        ); /* WAS: '' */
    $data['commons_home']->default_handlers['page_commons_home_panel_context_2']->conf['display']->content['new-2ab570f0-8498-44f4-e9d0-9977e3d8d4df']->configuration['title'] = 'Support and encouragment of beekeeping and beekeepers'; /* WAS: 'Welcome to our community' */
    $data['commons_home']->default_handlers['page_commons_home_panel_context_2']->conf['display']->content['new-58e71a00-2b87-ab64-31c5-4fdc9e99a2d4']->position = 3; /* WAS: 1 */
    $data['commons_home']->default_handlers['page_commons_home_panel_context_2']->conf['display']->content['new-800b2f8a-307f-0e14-4174-626a1c5c4cd9']->position = 2; /* WAS: 0 */
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
    $data['commons_home']->default_handlers['page_commons_home_panel_context_2']->conf['display']->panels['three_33_first'][1] = 'new-94106ddd-1278-0954-c5ba-b59ff1b9bf49'; /* WAS: '' */
    $data['commons_home']->default_handlers['page_commons_home_panel_context_2']->conf['display']->panels['three_33_second'] = array(
      0 => 'new-b6e290b7-1d2b-5db4-a181-28befdcde628',
    ); /* WAS: '' */
    $data['commons_home']->default_handlers['page_commons_home_panel_context_2']->conf['display']->panels['three_33_third'][0] = 'new-09fa5dd5-466f-486f-8307-063a43974a5f'; /* WAS: 'new-800b2f8a-307f-0e14-4174-626a1c5c4cd9' */
    $data['commons_home']->default_handlers['page_commons_home_panel_context_2']->conf['display']->panels['three_33_third'][1] = 'new-29ff082a-b9fb-4d7a-8605-d151fe8ead9f'; /* WAS: 'new-58e71a00-2b87-ab64-31c5-4fdc9e99a2d4' */
    $data['commons_home']->default_handlers['page_commons_home_panel_context_2']->conf['display']->panels['three_33_third'][2] = 'new-800b2f8a-307f-0e14-4174-626a1c5c4cd9'; /* WAS: '' */
    $data['commons_home']->default_handlers['page_commons_home_panel_context_2']->conf['display']->panels['three_33_third'][3] = 'new-58e71a00-2b87-ab64-31c5-4fdc9e99a2d4'; /* WAS: '' */
    $data['commons_home']->default_handlers['page_commons_home_panel_context_2']->conf['display']->storage_id = 'page_commons_home_panel_context_2'; /* WAS: '' */
    $data['commons_home']->default_handlers['page_commons_home_panel_context_2']->conf['display']->storage_type = 'page_manager'; /* WAS: '' */
    $data['commons_home']->default_handlers['page_commons_home_panel_context']->conf['display']->content['new-14a27b32-586f-4446-bb49-dc69fdf3f5d0'] = (object) array(
          'pid' => 'new-14a27b32-586f-4446-bb49-dc69fdf3f5d0',
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
          'style' => array(),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => '14a27b32-586f-4446-bb49-dc69fdf3f5d0',
        ); /* WAS: '' */
    $data['commons_home']->default_handlers['page_commons_home_panel_context']->conf['display']->content['new-895dfc63-a30f-f734-3185-c40c407b4af0']->position = 3; /* WAS: 2 */
    $data['commons_home']->default_handlers['page_commons_home_panel_context']->conf['display']->content['new-b20add8c-2daf-4684-45f3-212d60c7f31e']->position = 1; /* WAS: 0 */
    $data['commons_home']->default_handlers['page_commons_home_panel_context']->conf['display']->content['new-da301a84-b9a5-8664-cd4b-1e84d7dd9f42']->position = 2; /* WAS: 1 */
    $data['commons_home']->default_handlers['page_commons_home_panel_context']->conf['display']->panels['two_66_33_second'][0] = 'new-14a27b32-586f-4446-bb49-dc69fdf3f5d0'; /* WAS: 'new-b20add8c-2daf-4684-45f3-212d60c7f31e' */
    $data['commons_home']->default_handlers['page_commons_home_panel_context']->conf['display']->panels['two_66_33_second'][1] = 'new-b20add8c-2daf-4684-45f3-212d60c7f31e'; /* WAS: 'new-da301a84-b9a5-8664-cd4b-1e84d7dd9f42' */
    $data['commons_home']->default_handlers['page_commons_home_panel_context']->conf['display']->panels['two_66_33_second'][2] = 'new-da301a84-b9a5-8664-cd4b-1e84d7dd9f42'; /* WAS: 'new-895dfc63-a30f-f734-3185-c40c407b4af0' */
    $data['commons_home']->default_handlers['page_commons_home_panel_context']->conf['display']->panels['two_66_33_second'][3] = 'new-895dfc63-a30f-f734-3185-c40c407b4af0'; /* WAS: '' */
    $data['commons_home']->default_handlers['page_commons_home_panel_context']->conf['display']->storage_id = 'page_commons_home_panel_context'; /* WAS: '' */
    $data['commons_home']->default_handlers['page_commons_home_panel_context']->conf['display']->storage_type = 'page_manager'; /* WAS: '' */
  }
}

/**
 * Implements hook_user_default_permissions_alter().
 */
function beekeeper_commons_overrides_user_default_permissions_alter(&$data) {
  if (isset($data['create answer content'])) {
    $data['create answer content']['roles']['Standard member'] = 'Standard member'; /* WAS: '' */
    unset($data['create answer content']['roles']['administrator']);
  }
  if (isset($data['delete any post content'])) {
    $data['delete any post content']['roles']['Standard member'] = 'Standard member'; /* WAS: '' */
  }
  if (isset($data['delete own event content'])) {
    $data['delete own event content']['roles']['Standard member'] = 'Standard member'; /* WAS: '' */
    unset($data['delete own event content']['roles']['administrator']);
  }
  if (isset($data['edit own answer content'])) {
    $data['edit own answer content']['roles']['Standard member'] = 'Standard member'; /* WAS: '' */
    unset($data['edit own answer content']['roles']['administrator']);
  }
  if (isset($data['use text format filtered_html'])) {
    $data['use text format filtered_html']['roles']['Honorary member'] = 'Honorary member'; /* WAS: '' */
    $data['use text format filtered_html']['roles']['Junior member'] = 'Junior member'; /* WAS: '' */
    $data['use text format filtered_html']['roles']['Lifetime member'] = 'Lifetime member'; /* WAS: '' */
    $data['use text format filtered_html']['roles']['Standard member'] = 'Standard member'; /* WAS: '' */
  }
}

/**
 * Implements hook_user_default_roles_alter().
 */
function beekeeper_commons_overrides_user_default_roles_alter(&$data) {
  if (isset($data['administrator'])) {
    $data['administrator']['weight'] = 2; /* WAS: 10 */
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function beekeeper_commons_overrides_strongarm_alter(&$data) {
  if (isset($data['rate_widgets'])) {
    $data['rate_widgets']->value[1]->comment_types[0] = 'event'; /* WAS: '' */
    $data['rate_widgets']->value[1]->comment_types[1] = 'group'; /* WAS: '' */
    $data['rate_widgets']->value[1]->comment_types[10] = 'document'; /* WAS: '' */
    $data['rate_widgets']->value[1]->comment_types[11] = 'wiki'; /* WAS: '' */
    $data['rate_widgets']->value[1]->comment_types[12] = 'poll'; /* WAS: '' */
    $data['rate_widgets']->value[1]->comment_types[2] = 'poll'; /* WAS: '' */
    $data['rate_widgets']->value[1]->comment_types[3] = 'post'; /* WAS: '' */
    $data['rate_widgets']->value[1]->comment_types[4] = 'question'; /* WAS: '' */
    $data['rate_widgets']->value[1]->comment_types[5] = 'answer'; /* WAS: '' */
    $data['rate_widgets']->value[1]->comment_types[6] = 'wiki'; /* WAS: '' */
    $data['rate_widgets']->value[1]->comment_types[7] = 'document'; /* WAS: '' */
    $data['rate_widgets']->value[1]->comment_types[8] = 'post'; /* WAS: '' */
    $data['rate_widgets']->value[1]->comment_types[9] = 'question'; /* WAS: '' */
    $data['rate_widgets']->value[1]->node_types[0] = 'event'; /* WAS: '' */
    $data['rate_widgets']->value[1]->node_types[1] = 'group'; /* WAS: '' */
    $data['rate_widgets']->value[1]->node_types[10] = 'wiki'; /* WAS: '' */
    $data['rate_widgets']->value[1]->node_types[11] = 'poll'; /* WAS: '' */
    $data['rate_widgets']->value[1]->node_types[2] = 'poll'; /* WAS: '' */
    $data['rate_widgets']->value[1]->node_types[3] = 'post'; /* WAS: '' */
    $data['rate_widgets']->value[1]->node_types[4] = 'question'; /* WAS: '' */
    $data['rate_widgets']->value[1]->node_types[5] = 'wiki'; /* WAS: '' */
    $data['rate_widgets']->value[1]->node_types[6] = 'document'; /* WAS: '' */
    $data['rate_widgets']->value[1]->node_types[7] = 'post'; /* WAS: '' */
    $data['rate_widgets']->value[1]->node_types[8] = 'question'; /* WAS: '' */
    $data['rate_widgets']->value[1]->node_types[9] = 'document'; /* WAS: '' */
    $data['rate_widgets']->value[2] = (object) array(
          'name' => 'commons_answer',
          'tag' => 'commons_thumbs_up_down',
          'title' => 'Answer',
          'node_types' => array(
            0 => 'answer',
          ),
          'comment_types' => array(),
          'options' => array(
            0 => array(
              0 => 1,
              1 => 'up',
            ),
            1 => array(
              0 => -1,
              1 => 'down',
            ),
          ),
          'template' => 'commons_thumbs_up_down',
          'node_display' => 2,
          'teaser_display' => FALSE,
          'comment_display' => 2,
          'node_display_mode' => 1,
          'teaser_display_mode' => 1,
          'comment_display_mode' => 1,
          'roles' => array(
            2 => 2,
            1 => 0,
          ),
          'allow_voting_by_author' => 1,
          'noperm_behaviour' => 3,
          'displayed' => 1,
          'displayed_just_voted' => 1,
          'description' => '',
          'description_in_compact' => TRUE,
          'delete_vote_on_second_click' => 1,
          'value_type' => 'points',
          'theme' => 'rate_template_commons_thumbs_up_down',
          'css' => 'profiles/commons/modules/contrib/commons_q_a/commons-thumbs-up-down.css',
          'translate' => TRUE,
          'use_source_translation' => TRUE,
        ); /* WAS: '' */
    $data['rate_widgets']->value[3] = (object) array(
          'name' => 'commons_answer',
          'tag' => 'commons_thumbs_up_down',
          'title' => 'Answer',
          'node_types' => array(
            0 => 'answer',
          ),
          'comment_types' => array(),
          'options' => array(
            0 => array(
              0 => 1,
              1 => 'up',
            ),
            1 => array(
              0 => -1,
              1 => 'down',
            ),
          ),
          'template' => 'commons_thumbs_up_down',
          'node_display' => 2,
          'teaser_display' => FALSE,
          'comment_display' => 2,
          'node_display_mode' => 1,
          'teaser_display_mode' => 1,
          'comment_display_mode' => 1,
          'roles' => array(
            2 => 2,
            1 => 0,
          ),
          'allow_voting_by_author' => 1,
          'noperm_behaviour' => 3,
          'displayed' => 1,
          'displayed_just_voted' => 1,
          'description' => '',
          'description_in_compact' => TRUE,
          'delete_vote_on_second_click' => 1,
          'value_type' => 'points',
          'theme' => 'rate_template_commons_thumbs_up_down',
          'css' => 'profiles/commons/modules/contrib/commons_q_a/commons-thumbs-up-down.css',
          'translate' => TRUE,
          'use_source_translation' => TRUE,
        ); /* WAS: '' */
  }
  if (isset($data['theme_commons_origins_settings'])) {
    $data['theme_commons_origins_settings']->value['adaptivetheme_meta_clear_type'] = 0; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['adaptivetheme_meta_ie_document_mode'] = ''; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['combine_css_files'] = 0; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['combine_js_files'] = 0; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['commons_origins_palette'] = 'palette-brown-yellow'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['enable_menu_toggle'] = 0; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['global_default_layout'] = 'smalltouch-portrait'; /* WAS: 'smartphone-portrait' */
    $data['theme_commons_origins_settings']->value['load_matchmediajs'] = 0; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_landscape_five_5x20'] = 'five-5x20-stack'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_landscape_four_4x25'] = 'four-4x25-stack'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_landscape_layout'] = 'one_col_vert'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_landscape_media_query'] = 'only screen and (min-width:321px) and (max-width:480px)'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_landscape_page_unit'] = '%'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_landscape_page_width'] = 100; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_landscape_sidebar_first'] = 50; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_landscape_sidebar_second'] = 50; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_landscape_sidebar_unit'] = '%'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_landscape_six_6x16'] = 'six-6x16-stack'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_landscape_three_25_25_50'] = 'three-25-25-50-stack'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_landscape_three_25_50_25'] = 'three-25-50-25-stack'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_landscape_three_3x33'] = 'three-3x33-stack'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_landscape_three_50_25_25'] = 'three-50-25-25-stack'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_landscape_three_inset_left'] = 'three-inset-left-stack'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_landscape_three_inset_right'] = 'three-inset-right-stack'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_landscape_two_33_66'] = 'two-33-66-stack'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_landscape_two_50'] = 'two-50-stack'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_landscape_two_66_33'] = 'two-66-33-stack'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_landscape_two_brick'] = 'two-brick-stack'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_portrait_layout'] = 'one_col_stack'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_portrait_media_query'] = 'only screen and (max-width:320px)'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_portrait_page_unit'] = '%'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_portrait_page_width'] = 100; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_portrait_sidebar_first'] = 100; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_portrait_sidebar_second'] = 100; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_portrait_sidebar_unit'] = '%'; /* WAS: '' */
    unset($data['theme_commons_origins_settings']->value['chrome_edge']);
    unset($data['theme_commons_origins_settings']->value['clear_type']);
    unset($data['theme_commons_origins_settings']->value['smartphone_landscape_five_5x20']);
    unset($data['theme_commons_origins_settings']->value['smartphone_landscape_four_4x25']);
    unset($data['theme_commons_origins_settings']->value['smartphone_landscape_layout']);
    unset($data['theme_commons_origins_settings']->value['smartphone_landscape_media_query']);
    unset($data['theme_commons_origins_settings']->value['smartphone_landscape_page_unit']);
    unset($data['theme_commons_origins_settings']->value['smartphone_landscape_page_width']);
    unset($data['theme_commons_origins_settings']->value['smartphone_landscape_sidebar_first']);
    unset($data['theme_commons_origins_settings']->value['smartphone_landscape_sidebar_second']);
    unset($data['theme_commons_origins_settings']->value['smartphone_landscape_sidebar_unit']);
    unset($data['theme_commons_origins_settings']->value['smartphone_landscape_six_6x16']);
    unset($data['theme_commons_origins_settings']->value['smartphone_landscape_three_25_25_50']);
    unset($data['theme_commons_origins_settings']->value['smartphone_landscape_three_25_50_25']);
    unset($data['theme_commons_origins_settings']->value['smartphone_landscape_three_3x33']);
    unset($data['theme_commons_origins_settings']->value['smartphone_landscape_three_50_25_25']);
    unset($data['theme_commons_origins_settings']->value['smartphone_landscape_three_inset_left']);
    unset($data['theme_commons_origins_settings']->value['smartphone_landscape_three_inset_right']);
    unset($data['theme_commons_origins_settings']->value['smartphone_landscape_two_33_66']);
    unset($data['theme_commons_origins_settings']->value['smartphone_landscape_two_50']);
    unset($data['theme_commons_origins_settings']->value['smartphone_landscape_two_66_33']);
    unset($data['theme_commons_origins_settings']->value['smartphone_landscape_two_brick']);
    unset($data['theme_commons_origins_settings']->value['smartphone_portrait_layout']);
    unset($data['theme_commons_origins_settings']->value['smartphone_portrait_media_query']);
    unset($data['theme_commons_origins_settings']->value['smartphone_portrait_page_unit']);
    unset($data['theme_commons_origins_settings']->value['smartphone_portrait_page_width']);
    unset($data['theme_commons_origins_settings']->value['smartphone_portrait_sidebar_first']);
    unset($data['theme_commons_origins_settings']->value['smartphone_portrait_sidebar_second']);
    unset($data['theme_commons_origins_settings']->value['smartphone_portrait_sidebar_unit']);
  }
}
