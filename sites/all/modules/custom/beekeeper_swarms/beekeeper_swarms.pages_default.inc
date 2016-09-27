<?php
/**
 * @file
 * beekeeper_swarms.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function beekeeper_swarms_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'swarm_page';
  $page->task = 'page';
  $page->admin_title = 'Swarm page';
  $page->admin_description = 'Pages for reporting swarms';
  $page->path = 'swarms/find-collector';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_swarm_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'swarm_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'View collectors',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'two_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
      'two_33_66_top' => NULL,
      'two_33_66_first' => NULL,
      'two_33_66_second' => NULL,
      'two_33_66_bottom' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Find someone to collect a swarm';
  $display->uuid = 'ea7c7f7e-af1b-43cf-a7a5-d150b763fa71';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_swarm_page__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1273403f-7ee8-4418-8732-a31deff5a11e';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'views_panes';
  $pane->subtype = 'swarm_collection-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1273403f-7ee8-4418-8732-a31deff5a11e';
  $display->content['new-1273403f-7ee8-4418-8732-a31deff5a11e'] = $pane;
  $display->panels['two_66_33_first'][0] = 'new-1273403f-7ee8-4418-8732-a31deff5a11e';
  $pane = new stdClass();
  $pane->pid = 'new-73c1abf2-3626-4f07-b729-34ca6e71f7fb';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Instructions',
    'title' => 'Instructions',
    'body' => '<ul>
<li>Enter the address of the swarm in the location field, and then click on "Get Location"<br />This will be converted to a geolocation reference (lattitude and longitude).</li>
<li>Click "Apply" to then filter the display to show the locations of members who live up to 15 kms away, and are willing to collect swarms.</li>
<li>Clicking on each marker will display the name, contact phone number and brief details of availability for each such member.</li>
<li>If you are unable to find someone to collect your swarm, then you can try increasing the search distance from 15kms to say 25kms to see if there is someone else available.</li>
<li>If no-one is available to collect your swarm, then please complete the details on <a href="/swarms/report-form">this form</a> and someone from the club will get in touch with you</li>
</ul>',
    'format' => 'filtered_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'rounded_corners',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '73c1abf2-3626-4f07-b729-34ca6e71f7fb';
  $display->content['new-73c1abf2-3626-4f07-b729-34ca6e71f7fb'] = $pane;
  $display->panels['two_66_33_second'][0] = 'new-73c1abf2-3626-4f07-b729-34ca6e71f7fb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['swarm_page'] = $page;

  return $pages;

}
