<?php
/**
 * @file
 * beekeeper_commons_overrides.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function beekeeper_commons_overrides_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.message-commons_activity_streams_comment_created-field_target_comments.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.message-commons_activity_streams_comment_created-field_target_comments.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.message-commons_activity_streams_comment_created-field_target_nodes.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.message-commons_activity_streams_comment_created-field_target_nodes.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.message-commons_activity_streams_node_created-field_target_nodes.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.message-commons_activity_streams_node_created-field_target_nodes.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.message-commons_activity_streams_user_profile_updated-field_target_users.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.message-commons_activity_streams_user_profile_updated-field_target_users.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.message-commons_events_event_node_created-field_message_rendered_body.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.message-commons_events_event_node_created-field_message_rendered_body.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.message-commons_events_event_node_created-field_message_rendered_subject.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.message-commons_events_event_node_created-field_message_rendered_subject.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.message-commons_events_event_node_created-field_target_comments.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.message-commons_events_event_node_created-field_target_comments.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.message-commons_events_event_node_created-field_target_nodes.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.message-commons_events_event_node_created-field_target_nodes.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.message-commons_follow_user_user_followed-field_target_users.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.message-commons_follow_user_user_followed-field_target_users.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.message-commons_like_user_likes_node-field_target_nodes.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.message-commons_like_user_likes_node-field_target_nodes.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.message-commons_notify_comment_created-field_message_rendered_body.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.message-commons_notify_comment_created-field_message_rendered_body.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.message-commons_notify_comment_created-field_message_rendered_subject.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.message-commons_notify_comment_created-field_message_rendered_subject.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.message-commons_notify_comment_created-field_target_comments.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.message-commons_notify_comment_created-field_target_comments.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.message-commons_notify_comment_created-field_target_nodes.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.message-commons_notify_comment_created-field_target_nodes.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.message-commons_notify_comment_created_no_groups-field_message_rendered_body.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.message-commons_notify_comment_created_no_groups-field_message_rendered_body.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.message-commons_notify_comment_created_no_groups-field_message_rendered_subject.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.message-commons_notify_comment_created_no_groups-field_message_rendered_subject.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.message-commons_notify_comment_created_no_groups-field_target_comments.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.message-commons_notify_comment_created_no_groups-field_target_comments.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.message-commons_notify_comment_created_no_groups-field_target_nodes.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.message-commons_notify_comment_created_no_groups-field_target_nodes.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.message-commons_notify_node_created-field_message_rendered_body.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.message-commons_notify_node_created-field_message_rendered_body.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.message-commons_notify_node_created-field_message_rendered_subject.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.message-commons_notify_node_created-field_message_rendered_subject.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.message-commons_notify_node_created-field_target_nodes.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.message-commons_notify_node_created-field_target_nodes.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.message-commons_notify_node_created_no_groups-field_message_rendered_body.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.message-commons_notify_node_created_no_groups-field_message_rendered_body.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.message-commons_notify_node_created_no_groups-field_message_rendered_subject.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.message-commons_notify_node_created_no_groups-field_message_rendered_subject.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.message-commons_notify_node_created_no_groups-field_target_nodes.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.message-commons_notify_node_created_no_groups-field_target_nodes.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.message-commons_posts_post_created-field_target_nodes.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.message-commons_posts_post_created-field_target_nodes.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.message-commons_q_a_question_answered-field_target_nodes.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.message-commons_q_a_question_answered-field_target_nodes.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.message-commons_q_a_question_asked-field_target_nodes.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.message-commons_q_a_question_asked-field_target_nodes.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.message-commons_wikis_wiki_updated-field_target_nodes.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.message-commons_wikis_wiki_updated-field_target_nodes.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.message-trusted_contact_request_approved-field_approving_user.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.message-trusted_contact_request_approved-field_approving_user.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.message-trusted_contact_request_pending-field_requesting_user.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.message-trusted_contact_request_pending-field_requesting_user.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.message_type-commons_notify-message_text.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.message_type-commons_notify-message_text.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-answer-body.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-answer-body.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-answer-body.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-answer-field_related_question.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-answer-field_related_question.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-answer-field_related_question.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-answer-title_field.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-answer-title_field.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-answer-title_field.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-apiary-title_field.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-apiary-title_field.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-apiary-title_field.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-book-title_field.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-book-title_field.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-book-title_field.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-document-body.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-document-body.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-document-body.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-document-field_document_file.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-document-field_document_file.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-document-field_document_file.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-document-field_document_file.widget|settings|insert"] = 0;
  $overrides["field_instance.node-document-field_document_file.widget|settings|insert_absolute"] = FALSE;
  $overrides["field_instance.node-document-field_document_file.widget|settings|insert_class"] = '';
  $overrides["field_instance.node-document-field_document_file.widget|settings|insert_default"] = array(
    0 => 'auto',
  );
  $overrides["field_instance.node-document-field_document_file.widget|settings|insert_styles"] = array(
    0 => 'auto',
  );
  $overrides["field_instance.node-document-field_document_file.widget|settings|insert_width"] = '';
  $overrides["field_instance.node-document-field_radioactivity.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-document-field_radioactivity.settings|history"] = 0;
  $overrides["field_instance.node-document-field_radioactivity.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-document-field_radioactivity.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-document-field_topics.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-document-field_topics.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-document-field_topics.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-document-group_content_access.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-document-group_content_access.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-document-group_content_access.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-document-og_group_ref.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-document-og_group_ref.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-document-og_group_ref.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-document-og_user_group_ref.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-document-og_user_group_ref.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-document-og_user_group_ref.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-document-title_field.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-document-title_field.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-document-title_field.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-event-body.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-event-body.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-event-body.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-event-field_address.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-event-field_address.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-event-field_address.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-event-field_date.display|default|settings|show_remaining_days"] = FALSE;
  $overrides["field_instance.node-event-field_date.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-event-field_date.display|teaser|settings|show_remaining_days"] = FALSE;
  $overrides["field_instance.node-event-field_date.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-event-field_date.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-event-field_location.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-event-field_location.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-event-field_location.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-event-field_logo.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-event-field_logo.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-event-field_logo.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-event-field_logo.widget|settings|insert"] = 0;
  $overrides["field_instance.node-event-field_logo.widget|settings|insert_absolute"] = FALSE;
  $overrides["field_instance.node-event-field_logo.widget|settings|insert_class"] = '';
  $overrides["field_instance.node-event-field_logo.widget|settings|insert_default"] = array(
    0 => 'auto',
  );
  $overrides["field_instance.node-event-field_logo.widget|settings|insert_styles"] = array(
    0 => 'auto',
  );
  $overrides["field_instance.node-event-field_logo.widget|settings|insert_width"] = '';
  $overrides["field_instance.node-event-field_number_of_attendees.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-event-field_number_of_attendees.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-event-field_number_of_attendees.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-event-field_offsite_url.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-event-field_offsite_url.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-event-field_offsite_url.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-event-field_organizers.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-event-field_organizers.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-event-field_organizers.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-event-field_registration.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-event-field_registration.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-event-field_registration.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-event-field_registration_type.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-event-field_registration_type.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-event-field_registration_type.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-event-title_field.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-event-title_field.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-event-title_field.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-forum-title_field.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-forum-title_field.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-forum-title_field.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-group-body.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-group-body.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-group-body.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-group-field_group_logo.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-group-field_group_logo.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-group-field_group_logo.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-group-field_group_logo.widget|settings|insert"] = 0;
  $overrides["field_instance.node-group-field_group_logo.widget|settings|insert_absolute"] = FALSE;
  $overrides["field_instance.node-group-field_group_logo.widget|settings|insert_class"] = '';
  $overrides["field_instance.node-group-field_group_logo.widget|settings|insert_default"] = array(
    0 => 'auto',
  );
  $overrides["field_instance.node-group-field_group_logo.widget|settings|insert_styles"] = array(
    0 => 'auto',
  );
  $overrides["field_instance.node-group-field_group_logo.widget|settings|insert_width"] = '';
  $overrides["field_instance.node-group-field_og_access_default_value.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-group-field_og_access_default_value.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-group-field_og_access_default_value.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-group-field_og_subscribe_settings.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-group-field_og_subscribe_settings.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-group-field_og_subscribe_settings.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-group-group_access.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-group-group_access.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-group-group_access.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-group-group_group.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-group-group_group.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-group-group_group.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-group-og_roles_permissions.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-group-og_roles_permissions.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-group-og_roles_permissions.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-group-title_field.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-group-title_field.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-group-title_field.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-mass_contact-title_field.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-mass_contact-title_field.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-mass_contact-title_field.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-merchandise_display-title_field.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-merchandise_display-title_field.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-merchandise_display-title_field.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-newsletter-title_field.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-newsletter-title_field.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-newsletter-title_field.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-page-body.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-page-body.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-page-body.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-page-title_field.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-page-title_field.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-page-title_field.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-poll-body.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-poll-body.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-poll-body.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-poll-field_radioactivity.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-poll-field_radioactivity.settings|history"] = 0;
  $overrides["field_instance.node-poll-field_radioactivity.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-poll-field_radioactivity.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-poll-field_topics.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-poll-field_topics.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-poll-field_topics.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-poll-group_content_access.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-poll-group_content_access.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-poll-group_content_access.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-poll-og_group_ref.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-poll-og_group_ref.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-poll-og_group_ref.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-poll-og_user_group_ref.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-poll-og_user_group_ref.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-poll-og_user_group_ref.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-poll-title_field.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-poll-title_field.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-poll-title_field.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-post-body.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-post-body.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-post-body.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-post-field_radioactivity.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-post-field_radioactivity.settings|history"] = 0;
  $overrides["field_instance.node-post-field_radioactivity.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-post-field_radioactivity.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-post-field_topics.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-post-field_topics.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-post-field_topics.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-post-group_content_access.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-post-group_content_access.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-post-group_content_access.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-post-og_group_ref.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-post-og_group_ref.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-post-og_group_ref.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-post-og_user_group_ref.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-post-og_user_group_ref.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-post-og_user_group_ref.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-post-title_field.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-post-title_field.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-post-title_field.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-product_display-title_field.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-product_display-title_field.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-product_display-title_field.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-question-body.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-question-body.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-question-body.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-question-field_radioactivity.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-question-field_radioactivity.settings|history"] = 0;
  $overrides["field_instance.node-question-field_radioactivity.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-question-field_radioactivity.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-question-field_topics.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-question-field_topics.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-question-field_topics.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-question-group_content_access.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-question-group_content_access.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-question-group_content_access.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-question-og_group_ref.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-question-og_group_ref.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-question-og_group_ref.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-question-og_user_group_ref.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-question-og_user_group_ref.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-question-og_user_group_ref.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-question-title_field.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-question-title_field.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-question-title_field.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-webform-title_field.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-webform-title_field.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-webform-title_field.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-wiki-body.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-wiki-body.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-wiki-body.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-wiki-field_radioactivity.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-wiki-field_radioactivity.settings|history"] = 0;
  $overrides["field_instance.node-wiki-field_radioactivity.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-wiki-field_radioactivity.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-wiki-field_topics.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-wiki-field_topics.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-wiki-field_topics.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-wiki-group_content_access.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-wiki-group_content_access.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-wiki-group_content_access.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-wiki-og_group_ref.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-wiki-og_group_ref.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-wiki-og_group_ref.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-wiki-og_user_group_ref.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-wiki-og_user_group_ref.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-wiki-og_user_group_ref.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.node-wiki-title_field.display|notifications"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-wiki-title_field.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.node-wiki-title_field.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.og_membership-og_membership_type_default-og_membership_request.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.og_membership-og_membership_type_default-og_membership_request.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.og_membership-trusted_contacts-field_confirmation.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.og_membership-trusted_contacts-field_confirmation.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.og_membership-trusted_contacts-field_membership_token.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.og_membership-trusted_contacts-field_membership_token.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.og_membership-trusted_contacts-field_my_request.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.og_membership-trusted_contacts-field_my_request.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.og_membership-trusted_contacts-field_original_og_membership.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.og_membership-trusted_contacts-field_original_og_membership.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.og_membership-trusted_contacts-field_response_date.display|default|settings|show_remaining_days"] = FALSE;
  $overrides["field_instance.og_membership-trusted_contacts-field_response_date.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.og_membership-trusted_contacts-field_response_date.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.user-user-field_bio.display|default|weight"] = 10;
  $overrides["field_instance.user-user-field_bio.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.user-user-field_bio.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.user-user-field_bio.widget|weight"] = 8;
  $overrides["field_instance.user-user-field_facebook_url.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.user-user-field_facebook_url.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.user-user-field_facebook_url.settings|title_label_use_field_label"] = FALSE;
  $overrides["field_instance.user-user-field_linkedin_url.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.user-user-field_linkedin_url.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.user-user-field_linkedin_url.settings|title_label_use_field_label"] = FALSE;
  $overrides["field_instance.user-user-field_name_first.display|default|label"] = 'inline';
  $overrides["field_instance.user-user-field_name_first.display|default|weight"] = 3;
  $overrides["field_instance.user-user-field_name_first.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.user-user-field_name_first.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.user-user-field_name_first.widget|weight"] = 4;
  $overrides["field_instance.user-user-field_name_last.display|default|label"] = 'inline';
  $overrides["field_instance.user-user-field_name_last.display|default|weight"] = 4;
  $overrides["field_instance.user-user-field_name_last.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.user-user-field_name_last.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.user-user-field_name_last.widget|weight"] = 5;
  $overrides["field_instance.user-user-field_twitter_url.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.user-user-field_twitter_url.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.user-user-field_twitter_url.settings|title_label_use_field_label"] = FALSE;
  $overrides["field_instance.user-user-group_access.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.user-user-group_access.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.user-user-group_group.display|default|settings|field_name"] = FALSE;
  $overrides["field_instance.user-user-group_group.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.user-user-group_group.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.user-user-message_subscribe_email.display|default|label"] = 'inline';
  $overrides["field_instance.user-user-message_subscribe_email.display|default|weight"] = 21;
  $overrides["field_instance.user-user-message_subscribe_email.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.user-user-message_subscribe_email.settings|membership_entity_term_renew_form"] = FALSE;
  $overrides["field_instance.user-user-message_subscribe_email.widget|weight"] = 1;
  $overrides["field_instance.user-user-user_trusted_contacts.settings|membership_entity_join_form"] = FALSE;
  $overrides["field_instance.user-user-user_trusted_contacts.settings|membership_entity_term_renew_form"] = FALSE;

  // Exported overrides for: filter
  $overrides["filter.filtered_html.editor_settings"] = 'a:3:{s:7:"toolbar";a:1:{i:0;a:7:{i:0;a:2:{s:4:"name";s:6:"Format";s:5:"items";a:1:{i:0;s:6:"Format";}}i:1;a:2:{s:4:"name";s:4:"Text";s:5:"items";a:3:{i:0;s:4:"Bold";i:1;s:6:"Italic";i:2;s:9:"Underline";}}i:2;a:2:{s:4:"name";s:5:"Lists";s:5:"items";a:2:{i:0;s:12:"BulletedList";i:1;s:12:"NumberedList";}}i:3;a:2:{s:4:"name";s:5:"Links";s:5:"items";a:2:{i:0;s:10:"DrupalLink";i:1;s:12:"DrupalUnlink";}}i:4;a:2:{s:4:"name";s:10:"Formatting";s:5:"items";a:2:{i:0;s:12:"RemoveFormat";i:1;s:10:"Blockquote";}}i:5;a:2:{s:4:"name";s:5:"Media";s:5:"items";a:1:{i:0;s:11:"DrupalImage";}}i:6;a:2:{s:4:"name";s:5:"Tools";s:5:"items";a:0:{}}}}s:12:"image_upload";a:5:{s:6:"status";i:1;s:6:"scheme";s:6:"public";s:9:"directory";s:13:"inline-images";s:8:"max_size";s:3:"2MB";s:14:"max_dimensions";a:2:{s:5:"width";s:3:"320";s:6:"height";s:3:"240";}}s:7:"plugins";a:2:{s:5:"style";a:1:{s:10:"style_list";a:0:{}}s:8:"language";a:1:{s:13:"language_list";s:2:"un";}}}';
  $overrides["filter.filtered_html.filters|editor_align"]["DELETED"] = TRUE;
  $overrides["filter.filtered_html.filters|editor_caption"]["DELETED"] = TRUE;
  $overrides["filter.filtered_html.filters|filter_autop"] = array(
    'settings' => array(),
    'status' => 1,
    'weight' => 0,
  );
  $overrides["filter.filtered_html.filters|filter_htmlcorrector"] = array(
    'settings' => array(),
    'status' => 1,
    'weight' => 10,
  );
  $overrides["filter.filtered_html.filters|filter_html|settings|allowed_html"] = '<a> <em> <strong> <u> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <h4> <h5> <h6>  <p> <br> <img> <strike> <drupal-entity> <drupal-entity> <drupal-entity> <drupal-entity> <span>';
  $overrides["filter.filtered_html.filters|filter_url"] = array(
    'settings' => array(
      'filter_url_length' => 72,
    ),
    'status' => 1,
    'weight' => 0,
  );

  // Exported overrides for: flag
  $overrides["flag.commons_follow_user.show_on_entity"] = FALSE;

  // Exported overrides for: message_type
  $overrides["message_type.commons_activity_streams_comment_created.message_text|und|0|safe_value"] = '<p>[message:user:picture:35x35]</p>';
  $overrides["message_type.commons_activity_streams_node_created.message_text|und|0|safe_value"] = '<p>[message:user:picture:35x35]</p>';
  $overrides["message_type.commons_activity_streams_user_profile_updated.message_text|und|0|safe_value"] = '<p>[message:user:picture:35x35]</p>';
  $overrides["message_type.commons_follow_user_user_followed.message_text|und|0|safe_value"] = '<p>[message:user:picture]</p>';
  $overrides["message_type.commons_posts_post_created.message_text|und|0|safe_value"] = '<p>[message:user:picture:35x35]</p>';
  $overrides["message_type.commons_posts_post_created.message_text|und|2|safe_value"] = '<p>[commons-groups:in-groups-text]</p>';
  $overrides["message_type.commons_q_a_question_answered.message_text|und|0|safe_value"] = '<p>[message:user:picture:35x35]</p>';
  $overrides["message_type.commons_q_a_question_asked.message_text|und|0|safe_value"] = '<p>[message:user:picture:35x35]</p>';

  // Exported overrides for: page_manager_handlers
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|did"] = 'new';
  $overrides["page_manager_handlers.forum_panel_context_forum.export_type"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.forum_panel_context_forum.in_code_only"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.forum_panel_context_forum.table"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.forum_panel_context_forum.type"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|storage_id"] = 'user_view_panel_context';
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|storage_type"] = 'page_manager';

  // Exported overrides for: page_manager_pages
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|content|new-09fa5dd5-466f-486f-8307-063a43974a5f"] = (object) array(
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
    );
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|content|new-29ff082a-b9fb-4d7a-8605-d151fe8ead9f"] = (object) array(
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
    );
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|content|new-2ab570f0-8498-44f4-e9d0-9977e3d8d4df|configuration|title"] = 'Support and encouragment of beekeeping and beekeepers';
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|content|new-58e71a00-2b87-ab64-31c5-4fdc9e99a2d4|position"] = 3;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|content|new-800b2f8a-307f-0e14-4174-626a1c5c4cd9|position"] = 2;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|content|new-94106ddd-1278-0954-c5ba-b59ff1b9bf49"] = (object) array(
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
    );
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|content|new-b6e290b7-1d2b-5db4-a181-28befdcde628"] = (object) array(
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
    );
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|panels|three_33_first|1"] = 'new-94106ddd-1278-0954-c5ba-b59ff1b9bf49';
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|panels|three_33_second"] = array(
    0 => 'new-b6e290b7-1d2b-5db4-a181-28befdcde628',
  );
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|panels|three_33_third|2"] = 'new-09fa5dd5-466f-486f-8307-063a43974a5f';
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|panels|three_33_third|3"] = 'new-29ff082a-b9fb-4d7a-8605-d151fe8ead9f';
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|storage_id"] = 'page_commons_home_panel_context_2';
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|storage_type"] = 'page_manager';
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|content|new-14a27b32-586f-4446-bb49-dc69fdf3f5d0"] = (object) array(
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
    );
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|content|new-895dfc63-a30f-f734-3185-c40c407b4af0|position"] = 3;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|content|new-b20add8c-2daf-4684-45f3-212d60c7f31e|position"] = 1;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|content|new-da301a84-b9a5-8664-cd4b-1e84d7dd9f42|position"] = 2;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|panels|two_66_33_second|3"] = 'new-14a27b32-586f-4446-bb49-dc69fdf3f5d0';
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|storage_id"] = 'page_commons_home_panel_context';
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|storage_type"] = 'page_manager';

  // Exported overrides for: user_permission
  $overrides["user_permission.create answer content.roles|Standard member"] = 'Standard member';
  $overrides["user_permission.create answer content.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any post content.roles|Standard member"] = 'Standard member';
  $overrides["user_permission.delete own event content.roles|Standard member"] = 'Standard member';
  $overrides["user_permission.delete own event content.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.edit own answer content.roles|Standard member"] = 'Standard member';
  $overrides["user_permission.edit own answer content.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.use text format filtered_html.roles|administrator"]["DELETED"] = TRUE;

  // Exported overrides for: user_role
  $overrides["user_role.administrator.weight"] = 2;

  // Exported overrides for: variable
  $overrides["variable.field_bundle_settings_message__commons_posts_post_created.value|extra_fields|display|message__message_text__0|default"]["DELETED"] = TRUE;
  $overrides["variable.field_bundle_settings_message__commons_posts_post_created.value|extra_fields|display|message__message_text__1|default"]["DELETED"] = TRUE;
  $overrides["variable.rate_widgets.value|1|comment_types|0"] = 'event';
  $overrides["variable.rate_widgets.value|1|comment_types|1"] = 'group';
  $overrides["variable.rate_widgets.value|1|comment_types|10"] = 'document';
  $overrides["variable.rate_widgets.value|1|comment_types|11"] = 'wiki';
  $overrides["variable.rate_widgets.value|1|comment_types|12"] = 'poll';
  $overrides["variable.rate_widgets.value|1|comment_types|13"] = 'post';
  $overrides["variable.rate_widgets.value|1|comment_types|14"] = 'question';
  $overrides["variable.rate_widgets.value|1|comment_types|15"] = 'document';
  $overrides["variable.rate_widgets.value|1|comment_types|16"] = 'wiki';
  $overrides["variable.rate_widgets.value|1|comment_types|17"] = 'poll';
  $overrides["variable.rate_widgets.value|1|comment_types|2"] = 'poll';
  $overrides["variable.rate_widgets.value|1|comment_types|3"] = 'post';
  $overrides["variable.rate_widgets.value|1|comment_types|4"] = 'question';
  $overrides["variable.rate_widgets.value|1|comment_types|5"] = 'answer';
  $overrides["variable.rate_widgets.value|1|comment_types|6"] = 'wiki';
  $overrides["variable.rate_widgets.value|1|comment_types|7"] = 'document';
  $overrides["variable.rate_widgets.value|1|comment_types|8"] = 'post';
  $overrides["variable.rate_widgets.value|1|comment_types|9"] = 'question';
  $overrides["variable.rate_widgets.value|1|node_types|0"] = 'event';
  $overrides["variable.rate_widgets.value|1|node_types|1"] = 'group';
  $overrides["variable.rate_widgets.value|1|node_types|10"] = 'wiki';
  $overrides["variable.rate_widgets.value|1|node_types|11"] = 'poll';
  $overrides["variable.rate_widgets.value|1|node_types|12"] = 'post';
  $overrides["variable.rate_widgets.value|1|node_types|13"] = 'question';
  $overrides["variable.rate_widgets.value|1|node_types|14"] = 'document';
  $overrides["variable.rate_widgets.value|1|node_types|15"] = 'wiki';
  $overrides["variable.rate_widgets.value|1|node_types|16"] = 'poll';
  $overrides["variable.rate_widgets.value|1|node_types|2"] = 'poll';
  $overrides["variable.rate_widgets.value|1|node_types|3"] = 'post';
  $overrides["variable.rate_widgets.value|1|node_types|4"] = 'question';
  $overrides["variable.rate_widgets.value|1|node_types|5"] = 'wiki';
  $overrides["variable.rate_widgets.value|1|node_types|6"] = 'document';
  $overrides["variable.rate_widgets.value|1|node_types|7"] = 'post';
  $overrides["variable.rate_widgets.value|1|node_types|8"] = 'question';
  $overrides["variable.rate_widgets.value|1|node_types|9"] = 'document';
  $overrides["variable.rate_widgets.value|2"] = (object) array(
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
    );
  $overrides["variable.rate_widgets.value|3"] = (object) array(
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
    );
  $overrides["variable.rate_widgets.value|4"] = (object) array(
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
    );
  $overrides["variable.theme_commons_origins_settings.value|adaptivetheme_meta_clear_type"] = 0;
  $overrides["variable.theme_commons_origins_settings.value|adaptivetheme_meta_ie_document_mode"] = '';
  $overrides["variable.theme_commons_origins_settings.value|chrome_edge"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|clear_type"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|combine_css_files"] = 0;
  $overrides["variable.theme_commons_origins_settings.value|combine_js_files"] = 0;
  $overrides["variable.theme_commons_origins_settings.value|commons_origins_palette"] = 'palette-brown-yellow';
  $overrides["variable.theme_commons_origins_settings.value|enable_menu_toggle"] = 0;
  $overrides["variable.theme_commons_origins_settings.value|global_default_layout"] = 'smalltouch-portrait';
  $overrides["variable.theme_commons_origins_settings.value|load_matchmediajs"] = 0;
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_landscape_five_5x20"] = 'five-5x20-stack';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_landscape_four_4x25"] = 'four-4x25-stack';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_landscape_layout"] = 'one_col_vert';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_landscape_media_query"] = 'only screen and (min-width:321px) and (max-width:480px)';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_landscape_page_unit"] = '%';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_landscape_page_width"] = 100;
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_landscape_sidebar_first"] = 50;
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_landscape_sidebar_second"] = 50;
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_landscape_sidebar_unit"] = '%';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_landscape_six_6x16"] = 'six-6x16-stack';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_landscape_three_25_25_50"] = 'three-25-25-50-stack';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_landscape_three_25_50_25"] = 'three-25-50-25-stack';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_landscape_three_3x33"] = 'three-3x33-stack';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_landscape_three_50_25_25"] = 'three-50-25-25-stack';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_landscape_three_inset_left"] = 'three-inset-left-stack';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_landscape_three_inset_right"] = 'three-inset-right-stack';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_landscape_two_33_66"] = 'two-33-66-stack';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_landscape_two_50"] = 'two-50-stack';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_landscape_two_66_33"] = 'two-66-33-stack';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_landscape_two_brick"] = 'two-brick-stack';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_portrait_layout"] = 'one_col_stack';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_portrait_media_query"] = 'only screen and (max-width:320px)';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_portrait_page_unit"] = '%';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_portrait_page_width"] = 100;
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_portrait_sidebar_first"] = 100;
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_portrait_sidebar_second"] = 100;
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_portrait_sidebar_unit"] = '%';
  $overrides["variable.theme_commons_origins_settings.value|smartphone_landscape_five_5x20"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_landscape_four_4x25"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_landscape_layout"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_landscape_media_query"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_landscape_page_unit"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_landscape_page_width"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_landscape_sidebar_first"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_landscape_sidebar_second"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_landscape_sidebar_unit"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_landscape_six_6x16"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_landscape_three_25_25_50"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_landscape_three_25_50_25"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_landscape_three_3x33"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_landscape_three_50_25_25"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_landscape_three_inset_left"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_landscape_three_inset_right"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_landscape_two_33_66"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_landscape_two_50"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_landscape_two_66_33"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_landscape_two_brick"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_portrait_layout"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_portrait_media_query"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_portrait_page_unit"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_portrait_page_width"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_portrait_sidebar_first"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_portrait_sidebar_second"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_portrait_sidebar_unit"]["DELETED"] = TRUE;

  // Exported overrides for: views_view
  $overrides["views_view.commons_bw_all.display|default|display_options|filters|type|value|document"] = 'document';
  $overrides["views_view.commons_bw_posts.display|default|display_options|filters|flagged"] = array(
    'id' => 'flagged',
    'table' => 'flag_content',
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
  );
  $overrides["views_view.commons_bw_posts.display|default|display_options|relationships|flag_content_rel"] = array(
    'id' => 'flag_content_rel',
    'table' => 'node',
    'field' => 'flag_content_rel',
    'ui_name' => 'Following',
    'label' => 'following',
    'required' => 0,
    'flag' => 'commons_follow_node',
  );
  $overrides["views_view.commons_bw_posts.display|default|display_options|sorts|field_radioactivity_radioactivity_energy"] = array(
    'id' => 'field_radioactivity_radioactivity_energy',
    'table' => 'field_data_field_radioactivity',
    'field' => 'field_radioactivity_radioactivity_energy',
    'order' => 'DESC',
    'exposed' => TRUE,
    'expose' => array(
      'label' => 'most active',
    ),
  );
  $overrides["views_view.commons_bw_q_a.display|default|display_options|filters|flagged"] = array(
    'id' => 'flagged',
    'table' => 'flag_content',
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
  );
  $overrides["views_view.commons_bw_q_a.display|default|display_options|relationships|flag_content_rel"] = array(
    'id' => 'flag_content_rel',
    'table' => 'node',
    'field' => 'flag_content_rel',
    'ui_name' => 'Following',
    'label' => 'following',
    'required' => 0,
    'flag' => 'commons_follow_node',
  );
  $overrides["views_view.commons_bw_q_a.display|default|display_options|sorts|field_radioactivity_radioactivity_energy"] = array(
    'id' => 'field_radioactivity_radioactivity_energy',
    'table' => 'field_data_field_radioactivity',
    'field' => 'field_radioactivity_radioactivity_energy',
    'order' => 'DESC',
    'exposed' => TRUE,
    'expose' => array(
      'label' => 'most active',
    ),
  );
  $overrides["views_view.commons_bw_wikis.display|default|display_options|filters|flagged"] = array(
    'id' => 'flagged',
    'table' => 'flag_content',
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
  );
  $overrides["views_view.commons_bw_wikis.display|default|display_options|relationships|flag_content_rel"] = array(
    'id' => 'flag_content_rel',
    'table' => 'node',
    'field' => 'flag_content_rel',
    'ui_name' => 'Following',
    'label' => 'following',
    'required' => 0,
    'flag' => 'commons_follow_node',
  );
  $overrides["views_view.commons_bw_wikis.display|default|display_options|sorts|field_radioactivity_radioactivity_energy"] = array(
    'id' => 'field_radioactivity_radioactivity_energy',
    'table' => 'field_data_field_radioactivity',
    'field' => 'field_radioactivity_radioactivity_energy',
    'order' => 'DESC',
    'exposed' => TRUE,
    'expose' => array(
      'label' => 'most active',
    ),
  );

 return $overrides;
}
