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
  $handler->name = 'node_view__panel_context_2957236c-3f2d-46a9-8573-d04e7ec674db';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Question',
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
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'question' => 'question',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Questions
%node:title',
    'panels_breadcrumbs_paths' => 'questions
%node:url',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'node-layout';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'content' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'bc21db28-db81-4b9f-98e4-c2d7028b2bbb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e90e7e64-db11-4707-b19d-aa544cabe554';
    $pane->panel = 'content';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 1,
      'override_title' => 0,
      'override_title_text' => '<none>',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = 'e90e7e64-db11-4707-b19d-aa544cabe554';
    $display->content['new-e90e7e64-db11-4707-b19d-aa544cabe554'] = $pane;
    $display->panels['content'][0] = 'new-e90e7e64-db11-4707-b19d-aa544cabe554';
    $pane = new stdClass();
    $pane->pid = 'new-21cffd48-ef83-4202-9a0a-25b40060a49d';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'governmental_progress-government_progress';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '21cffd48-ef83-4202-9a0a-25b40060a49d';
    $display->content['new-21cffd48-ef83-4202-9a0a-25b40060a49d'] = $pane;
    $display->panels['content'][1] = 'new-21cffd48-ef83-4202-9a0a-25b40060a49d';
    $pane = new stdClass();
    $pane->pid = 'new-76142152-661c-4e78-ad71-923a30a46891';
    $pane->panel = 'content';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 1,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '<none>',
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
    $pane->uuid = '76142152-661c-4e78-ad71-923a30a46891';
    $display->content['new-76142152-661c-4e78-ad71-923a30a46891'] = $pane;
    $display->panels['content'][2] = 'new-76142152-661c-4e78-ad71-923a30a46891';
    $pane = new stdClass();
    $pane->pid = 'new-5750022e-3212-4ce5-9cd4-b86c8bec0559';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'question_comments-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '5750022e-3212-4ce5-9cd4-b86c8bec0559';
    $display->content['new-5750022e-3212-4ce5-9cd4-b86c8bec0559'] = $pane;
    $display->panels['content'][3] = 'new-5750022e-3212-4ce5-9cd4-b86c8bec0559';
    $pane = new stdClass();
    $pane->pid = 'new-85c3734d-9711-45e6-8cb4-656a3fb284fb';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_q_status';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '85c3734d-9711-45e6-8cb4-656a3fb284fb';
    $display->content['new-85c3734d-9711-45e6-8cb4-656a3fb284fb'] = $pane;
    $display->panels['sidebar'][0] = 'new-85c3734d-9711-45e6-8cb4-656a3fb284fb';
    $pane = new stdClass();
    $pane->pid = 'new-48186350-1d7b-4239-89aa-4cb2a952c9c5';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'governmental_progress-fsea_progress';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '48186350-1d7b-4239-89aa-4cb2a952c9c5';
    $display->content['new-48186350-1d7b-4239-89aa-4cb2a952c9c5'] = $pane;
    $display->panels['sidebar'][1] = 'new-48186350-1d7b-4239-89aa-4cb2a952c9c5';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_2957236c-3f2d-46a9-8573-d04e7ec674db'] = $handler;

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
    $pane->pid = 'new-a0aeb8b4-7a5f-431d-a858-6ed70642714b';
    $pane->panel = 'main';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h2',
      'class' => '',
      'id' => '',
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
    $pane->uuid = 'a0aeb8b4-7a5f-431d-a858-6ed70642714b';
    $display->content['new-a0aeb8b4-7a5f-431d-a858-6ed70642714b'] = $pane;
    $display->panels['main'][2] = 'new-a0aeb8b4-7a5f-431d-a858-6ed70642714b';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '9e979c8b-d2ca-4bec-9469-6a071169f3a7';
    $display->content['new-9e979c8b-d2ca-4bec-9469-6a071169f3a7'] = $pane;
    $display->panels['main'][3] = 'new-9e979c8b-d2ca-4bec-9469-6a071169f3a7';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '2f9ebac7-09ae-45e2-ad02-312b90387b8b';
    $display->content['new-2f9ebac7-09ae-45e2-ad02-312b90387b8b'] = $pane;
    $display->panels['main'][4] = 'new-2f9ebac7-09ae-45e2-ad02-312b90387b8b';
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
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template__panel_context_9a225a5d-a2cb-43e6-a8b1-3a59a879104d'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view__panel_context_3b6d97a3-33d0-4a46-a441-acc6ded27dd0';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'User profile',
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
    'panels_page_title_state' => 0,
    'panels_page_title' => '',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '%user:name',
    'panels_breadcrumbs_paths' => 'user/%user:uid',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'homepage-layout';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top_region' => NULL,
      'stats_line' => NULL,
      'side_left' => NULL,
      'side_right' => NULL,
      'bottom_region' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ce1f7c9c-1b46-400a-819f-95396a2e1b28';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f0e56f97-89c8-43a2-b78c-cd95f8b40ecc';
    $pane->panel = 'side_left';
    $pane->type = 'views_panes';
    $pane->subtype = 'q_as-panel_pane_2';
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
    $pane->uuid = 'f0e56f97-89c8-43a2-b78c-cd95f8b40ecc';
    $display->content['new-f0e56f97-89c8-43a2-b78c-cd95f8b40ecc'] = $pane;
    $display->panels['side_left'][0] = 'new-f0e56f97-89c8-43a2-b78c-cd95f8b40ecc';
    $pane = new stdClass();
    $pane->pid = 'new-95fad473-afe9-4e97-b64f-1353199ec8bc';
    $pane->panel = 'side_right';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-following';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '95fad473-afe9-4e97-b64f-1353199ec8bc';
    $display->content['new-95fad473-afe9-4e97-b64f-1353199ec8bc'] = $pane;
    $display->panels['side_right'][0] = 'new-95fad473-afe9-4e97-b64f-1353199ec8bc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view__panel_context_3b6d97a3-33d0-4a46-a441-acc6ded27dd0'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function ask_panels_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'categories';
  $page->task = 'page';
  $page->admin_title = 'Categories';
  $page->admin_description = '';
  $page->path = 'categories';
  $page->access = array(
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_categories__panel';
  $handler->task = 'page';
  $handler->subtask = 'categories';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Categories',
    'panels_breadcrumbs_paths' => 'categories',
    'panels_breadcrumbs_home' => 1,
    'panels_page_title_state' => 1,
    'panels_page_title' => 'Categories',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4c0ad2b5-db80-4192-a297-1c3502064b82';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ec2df4e4-e674-4f42-932d-2452cd0b1c64';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Information Pane',
      'title' => '',
      'body' => '<p>Here goes some information about that page.</p>
',
      'format' => 'editor',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ec2df4e4-e674-4f42-932d-2452cd0b1c64';
    $display->content['new-ec2df4e4-e674-4f42-932d-2452cd0b1c64'] = $pane;
    $display->panels['middle'][0] = 'new-ec2df4e4-e674-4f42-932d-2452cd0b1c64';
    $pane = new stdClass();
    $pane->pid = 'new-6daa758c-b9e8-4bb9-a121-794e3770757b';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'categories-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6daa758c-b9e8-4bb9-a121-794e3770757b';
    $display->content['new-6daa758c-b9e8-4bb9-a121-794e3770757b'] = $pane;
    $display->panels['middle'][1] = 'new-6daa758c-b9e8-4bb9-a121-794e3770757b';
    $pane = new stdClass();
    $pane->pid = 'new-b87876e7-aebc-4d4a-8da7-6cb8bede7cfb';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'categories-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b87876e7-aebc-4d4a-8da7-6cb8bede7cfb';
    $display->content['new-b87876e7-aebc-4d4a-8da7-6cb8bede7cfb'] = $pane;
    $display->panels['middle'][2] = 'new-b87876e7-aebc-4d4a-8da7-6cb8bede7cfb';
    $pane = new stdClass();
    $pane->pid = 'new-98f005a8-2da5-436d-a6a2-4abb1276a412';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'categories-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '98f005a8-2da5-436d-a6a2-4abb1276a412';
    $display->content['new-98f005a8-2da5-436d-a6a2-4abb1276a412'] = $pane;
    $display->panels['middle'][3] = 'new-98f005a8-2da5-436d-a6a2-4abb1276a412';
    $pane = new stdClass();
    $pane->pid = 'new-4b451fd4-8f65-4b5d-8029-d2a6c32c790f';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'categories-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '4b451fd4-8f65-4b5d-8029-d2a6c32c790f';
    $display->content['new-4b451fd4-8f65-4b5d-8029-d2a6c32c790f'] = $pane;
    $display->panels['middle'][4] = 'new-4b451fd4-8f65-4b5d-8029-d2a6c32c790f';
    $pane = new stdClass();
    $pane->pid = 'new-60f0486d-e44f-4f46-9a92-733ef012f3dc';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'categories-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '60f0486d-e44f-4f46-9a92-733ef012f3dc';
    $display->content['new-60f0486d-e44f-4f46-9a92-733ef012f3dc'] = $pane;
    $display->panels['middle'][5] = 'new-60f0486d-e44f-4f46-9a92-733ef012f3dc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ec2df4e4-e674-4f42-932d-2452cd0b1c64';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['categories'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'homepage';
  $page->task = 'page';
  $page->admin_title = 'Homepage';
  $page->admin_description = 'Homepage of the website.';
  $page->path = 'home';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_homepage__panel';
  $handler->task = 'page';
  $handler->subtask = 'homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
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
  $display->layout = 'homepage-layout';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top_region' => NULL,
      'stats_line' => NULL,
      'activity_nodes' => NULL,
      'activity_comments' => NULL,
      'bottom_left' => NULL,
      'bottom_right' => NULL,
      'side_left' => NULL,
      'side_right' => NULL,
      'bottom_region' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c5f112c0-877f-4d5c-a585-ef7116550d89';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c5ecd873-bb3a-481b-99c2-759c5ace2d81';
    $pane->panel = 'side_left';
    $pane->type = 'views_panes';
    $pane->subtype = 'q_as-panel_pane_1';
    $pane->shown = FALSE;
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
    $pane->uuid = 'c5ecd873-bb3a-481b-99c2-759c5ace2d81';
    $display->content['new-c5ecd873-bb3a-481b-99c2-759c5ace2d81'] = $pane;
    $display->panels['side_left'][0] = 'new-c5ecd873-bb3a-481b-99c2-759c5ace2d81';
    $pane = new stdClass();
    $pane->pid = 'new-f7923956-9f61-42a8-878c-3661dc0f7648';
    $pane->panel = 'side_left';
    $pane->type = 'views_panes';
    $pane->subtype = 'latest_updates-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f7923956-9f61-42a8-878c-3661dc0f7648';
    $display->content['new-f7923956-9f61-42a8-878c-3661dc0f7648'] = $pane;
    $display->panels['side_left'][1] = 'new-f7923956-9f61-42a8-878c-3661dc0f7648';
    $pane = new stdClass();
    $pane->pid = 'new-f812a5ab-af56-4de1-9b18-48627291781d';
    $pane->panel = 'side_right';
    $pane->type = 'views_panes';
    $pane->subtype = 'tuts_experiences-panel_pane_1';
    $pane->shown = FALSE;
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
    $pane->uuid = 'f812a5ab-af56-4de1-9b18-48627291781d';
    $display->content['new-f812a5ab-af56-4de1-9b18-48627291781d'] = $pane;
    $display->panels['side_right'][0] = 'new-f812a5ab-af56-4de1-9b18-48627291781d';
    $pane = new stdClass();
    $pane->pid = 'new-505932cf-88e4-47ef-96af-54b440cfc4e2';
    $pane->panel = 'side_right';
    $pane->type = 'views_panes';
    $pane->subtype = 'announcements-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '505932cf-88e4-47ef-96af-54b440cfc4e2';
    $display->content['new-505932cf-88e4-47ef-96af-54b440cfc4e2'] = $pane;
    $display->panels['side_right'][1] = 'new-505932cf-88e4-47ef-96af-54b440cfc4e2';
    $pane = new stdClass();
    $pane->pid = 'new-a6f28de3-a88f-4e14-9305-d2fb02c8fa3f';
    $pane->panel = 'stats_line';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Cover image',
      'title' => '',
      'body' => '<img src="sites/all/themes/ask_start_theme/img/cover.jpg" />
',
      'format' => 'advanced_editor',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a6f28de3-a88f-4e14-9305-d2fb02c8fa3f';
    $display->content['new-a6f28de3-a88f-4e14-9305-d2fb02c8fa3f'] = $pane;
    $display->panels['stats_line'][0] = 'new-a6f28de3-a88f-4e14-9305-d2fb02c8fa3f';
    $pane = new stdClass();
    $pane->pid = 'new-3566e017-3f74-4b08-936a-3763ac0b713d';
    $pane->panel = 'top_region';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-search-panel_pane_search';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3566e017-3f74-4b08-936a-3763ac0b713d';
    $display->content['new-3566e017-3f74-4b08-936a-3763ac0b713d'] = $pane;
    $display->panels['top_region'][0] = 'new-3566e017-3f74-4b08-936a-3763ac0b713d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['homepage'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'partners';
  $page->task = 'page';
  $page->admin_title = 'Partners';
  $page->admin_description = '';
  $page->path = 'partners';
  $page->access = array(
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_partners__panel';
  $handler->task = 'page';
  $handler->subtask = 'partners';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Partners',
    'panels_breadcrumbs_paths' => 'partners',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'homepage-layout';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top_region' => NULL,
      'stats_line' => NULL,
      'side_left' => NULL,
      'side_right' => NULL,
      'bottom_region' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Partners';
  $display->uuid = '710bc608-22d6-4c54-ad7f-c709cc7613a8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9be47c54-61c6-47f5-a0af-8ed081360053';
    $pane->panel = 'top_region';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'About partners',
      'title' => '',
      'body' => '<p>Some information about our partners goes here.</p>
',
      'format' => 'editor',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9be47c54-61c6-47f5-a0af-8ed081360053';
    $display->content['new-9be47c54-61c6-47f5-a0af-8ed081360053'] = $pane;
    $display->panels['top_region'][0] = 'new-9be47c54-61c6-47f5-a0af-8ed081360053';
    $pane = new stdClass();
    $pane->pid = 'new-a25753fa-8b9b-4bbf-a2c7-b5eff40bdf0f';
    $pane->panel = 'top_region';
    $pane->type = 'views_panes';
    $pane->subtype = 'partners-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a25753fa-8b9b-4bbf-a2c7-b5eff40bdf0f';
    $display->content['new-a25753fa-8b9b-4bbf-a2c7-b5eff40bdf0f'] = $pane;
    $display->panels['top_region'][1] = 'new-a25753fa-8b9b-4bbf-a2c7-b5eff40bdf0f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9be47c54-61c6-47f5-a0af-8ed081360053';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['partners'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'search';
  $page->task = 'page';
  $page->admin_title = 'Search';
  $page->admin_description = 'Search page.';
  $page->path = 'search';
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
  $handler->name = 'page_search__panel';
  $handler->task = 'page';
  $handler->subtask = 'search';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Search',
    'panels_breadcrumbs_paths' => 'search',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'node-layout';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'content' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2a313b7d-8c17-4fe4-8c3a-39bb70caa51b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-244cc1a0-cb49-4cab-a37f-777f35a62e9d';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-search-panel_pane_search';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '244cc1a0-cb49-4cab-a37f-777f35a62e9d';
    $display->content['new-244cc1a0-cb49-4cab-a37f-777f35a62e9d'] = $pane;
    $display->panels['content'][0] = 'new-244cc1a0-cb49-4cab-a37f-777f35a62e9d';
    $pane = new stdClass();
    $pane->pid = 'new-9dab41f3-e1bf-46be-b66f-1242ffeeee8a';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'search-panel_pane_search';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9dab41f3-e1bf-46be-b66f-1242ffeeee8a';
    $display->content['new-9dab41f3-e1bf-46be-b66f-1242ffeeee8a'] = $pane;
    $display->panels['content'][1] = 'new-9dab41f3-e1bf-46be-b66f-1242ffeeee8a';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['search'] = $page;

  return $pages;

}
