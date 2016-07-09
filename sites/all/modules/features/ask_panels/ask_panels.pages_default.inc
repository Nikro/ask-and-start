<?php
/**
 * @file
 * ask_panels.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ask_panels_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__panel_context_9a225a5d-a2cb-43e6-a8b1-3a59a879104d';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default template',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'site-template';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'branding_left' => NULL,
      'branding_right' => NULL,
      'main' => NULL,
      'footer_1' => NULL,
      'footer_2' => NULL,
      'footer_3' => NULL,
      'footer_4' => NULL,
      'footer_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6eff7e7e-e6e7-45e9-b9c6-0c15d11dfa42';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-362a2978-ab52-4f86-adaf-2e4e34233b5e';
    $pane->panel = 'branding_left';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
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
    $pane->uuid = '362a2978-ab52-4f86-adaf-2e4e34233b5e';
    $display->content['new-362a2978-ab52-4f86-adaf-2e4e34233b5e'] = $pane;
    $display->panels['branding_left'][0] = 'new-362a2978-ab52-4f86-adaf-2e4e34233b5e';
    $pane = new stdClass();
    $pane->pid = 'new-a9722dda-2765-4a87-aced-802f9b98595f';
    $pane->panel = 'branding_right';
    $pane->type = 'block';
    $pane->subtype = 'system-main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a9722dda-2765-4a87-aced-802f9b98595f';
    $display->content['new-a9722dda-2765-4a87-aced-802f9b98595f'] = $pane;
    $display->panels['branding_right'][0] = 'new-a9722dda-2765-4a87-aced-802f9b98595f';
    $pane = new stdClass();
    $pane->pid = 'new-67416c87-ce80-416b-aa17-bae193d48e9e';
    $pane->panel = 'footer_1';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-footer-first';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '67416c87-ce80-416b-aa17-bae193d48e9e';
    $display->content['new-67416c87-ce80-416b-aa17-bae193d48e9e'] = $pane;
    $display->panels['footer_1'][0] = 'new-67416c87-ce80-416b-aa17-bae193d48e9e';
    $pane = new stdClass();
    $pane->pid = 'new-641586dc-a431-4639-94f1-f853b522a75b';
    $pane->panel = 'footer_2';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-footer-second';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '641586dc-a431-4639-94f1-f853b522a75b';
    $display->content['new-641586dc-a431-4639-94f1-f853b522a75b'] = $pane;
    $display->panels['footer_2'][0] = 'new-641586dc-a431-4639-94f1-f853b522a75b';
    $pane = new stdClass();
    $pane->pid = 'new-9e5dc49e-e4df-43be-abec-e17c0730adf5';
    $pane->panel = 'footer_3';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-footer-third';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9e5dc49e-e4df-43be-abec-e17c0730adf5';
    $display->content['new-9e5dc49e-e4df-43be-abec-e17c0730adf5'] = $pane;
    $display->panels['footer_3'][0] = 'new-9e5dc49e-e4df-43be-abec-e17c0730adf5';
    $pane = new stdClass();
    $pane->pid = 'new-ff064910-e381-42ec-a3ac-7664c2e9afb7';
    $pane->panel = 'footer_4';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-social-links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ff064910-e381-42ec-a3ac-7664c2e9afb7';
    $display->content['new-ff064910-e381-42ec-a3ac-7664c2e9afb7'] = $pane;
    $display->panels['footer_4'][0] = 'new-ff064910-e381-42ec-a3ac-7664c2e9afb7';
    $pane = new stdClass();
    $pane->pid = 'new-aab3b878-664a-4ec8-9e7b-2a39a0b0875d';
    $pane->panel = 'main';
    $pane->type = 'page_messages';
    $pane->subtype = 'page_messages';
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
    $pane->uuid = 'aab3b878-664a-4ec8-9e7b-2a39a0b0875d';
    $display->content['new-aab3b878-664a-4ec8-9e7b-2a39a0b0875d'] = $pane;
    $display->panels['main'][0] = 'new-aab3b878-664a-4ec8-9e7b-2a39a0b0875d';
    $pane = new stdClass();
    $pane->pid = 'new-e5530e75-fd77-41c8-82f0-184f53df23e6';
    $pane->panel = 'main';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'panels_breadcrumbs_admin_title' => '',
      'panels_breadcrumbs_state' => 0,
      'panels_breadcrumbs_titles' => '',
      'panels_breadcrumbs_paths' => '',
      'panels_breadcrumbs_home' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e5530e75-fd77-41c8-82f0-184f53df23e6';
    $display->content['new-e5530e75-fd77-41c8-82f0-184f53df23e6'] = $pane;
    $display->panels['main'][1] = 'new-e5530e75-fd77-41c8-82f0-184f53df23e6';
    $pane = new stdClass();
    $pane->pid = 'new-9e979c8b-d2ca-4bec-9469-6a071169f3a7';
    $pane->panel = 'main';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'both',
      'id' => 'tabs',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '9e979c8b-d2ca-4bec-9469-6a071169f3a7';
    $display->content['new-9e979c8b-d2ca-4bec-9469-6a071169f3a7'] = $pane;
    $display->panels['main'][2] = 'new-9e979c8b-d2ca-4bec-9469-6a071169f3a7';
    $pane = new stdClass();
    $pane->pid = 'new-2f9ebac7-09ae-45e2-ad02-312b90387b8b';
    $pane->panel = 'main';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '2f9ebac7-09ae-45e2-ad02-312b90387b8b';
    $display->content['new-2f9ebac7-09ae-45e2-ad02-312b90387b8b'] = $pane;
    $display->panels['main'][3] = 'new-2f9ebac7-09ae-45e2-ad02-312b90387b8b';
    $pane = new stdClass();
    $pane->pid = 'new-321e5aa2-3c17-426f-877c-8dc8cb47a104';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'system-user-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '321e5aa2-3c17-426f-877c-8dc8cb47a104';
    $display->content['new-321e5aa2-3c17-426f-877c-8dc8cb47a104'] = $pane;
    $display->panels['top'][0] = 'new-321e5aa2-3c17-426f-877c-8dc8cb47a104';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template__panel_context_9a225a5d-a2cb-43e6-a8b1-3a59a879104d'] = $handler;

  return $export;
}