<?php
/**
 * @file
 * ask_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ask_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'governmental_progress';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Questions progress';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Government';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '[field_q_official_party]';
  $handler->display->display_options['header']['area']['format'] = 'editor';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Relationship: Content: Official Progress (field_official_progress) */
  $handler->display->display_options['relationships']['field_official_progress_value']['id'] = 'field_official_progress_value';
  $handler->display->display_options['relationships']['field_official_progress_value']['table'] = 'field_data_field_official_progress';
  $handler->display->display_options['relationships']['field_official_progress_value']['field'] = 'field_official_progress_value';
  $handler->display->display_options['relationships']['field_official_progress_value']['delta'] = '-1';
  /* Field: Content: Official Party */
  $handler->display->display_options['fields']['field_q_official_party']['id'] = 'field_q_official_party';
  $handler->display->display_options['fields']['field_q_official_party']['table'] = 'field_data_field_q_official_party';
  $handler->display->display_options['fields']['field_q_official_party']['field'] = 'field_q_official_party';
  $handler->display->display_options['fields']['field_q_official_party']['label'] = '';
  $handler->display->display_options['fields']['field_q_official_party']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_q_official_party']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_q_official_party']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field collection item: Progress Update */
  $handler->display->display_options['fields']['field_progress_update']['id'] = 'field_progress_update';
  $handler->display->display_options['fields']['field_progress_update']['table'] = 'field_data_field_progress_update';
  $handler->display->display_options['fields']['field_progress_update']['field'] = 'field_progress_update';
  $handler->display->display_options['fields']['field_progress_update']['relationship'] = 'field_official_progress_value';
  $handler->display->display_options['fields']['field_progress_update']['label'] = '';
  $handler->display->display_options['fields']['field_progress_update']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_progress_update']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Progress Type */
  $handler->display->display_options['fields']['field_progress_type']['id'] = 'field_progress_type';
  $handler->display->display_options['fields']['field_progress_type']['table'] = 'field_data_field_progress_type';
  $handler->display->display_options['fields']['field_progress_type']['field'] = 'field_progress_type';
  $handler->display->display_options['fields']['field_progress_type']['relationship'] = 'field_official_progress_value';
  $handler->display->display_options['fields']['field_progress_type']['label'] = '';
  $handler->display->display_options['fields']['field_progress_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_progress_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_progress_type']['type'] = 'list_key';
  /* Field: Field collection item: Date */
  $handler->display->display_options['fields']['field_progress_date']['id'] = 'field_progress_date';
  $handler->display->display_options['fields']['field_progress_date']['table'] = 'field_data_field_progress_date';
  $handler->display->display_options['fields']['field_progress_date']['field'] = 'field_progress_date';
  $handler->display->display_options['fields']['field_progress_date']['relationship'] = 'field_official_progress_value';
  $handler->display->display_options['fields']['field_progress_date']['label'] = '';
  $handler->display->display_options['fields']['field_progress_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_progress_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_progress_date']['type'] = 'format_interval';
  $handler->display->display_options['fields']['field_progress_date']['settings'] = array(
    'interval' => '2',
    'interval_display' => 'time ago',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="[field_progress_type] ">[field_progress_date] [field_progress_update]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'question' => 'question',
  );

  /* Display: Government Progress */
  $handler = $view->new_display('panel_pane', 'Government Progress', 'government_progress');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Official Party */
  $handler->display->display_options['fields']['field_q_official_party']['id'] = 'field_q_official_party';
  $handler->display->display_options['fields']['field_q_official_party']['table'] = 'field_data_field_q_official_party';
  $handler->display->display_options['fields']['field_q_official_party']['field'] = 'field_q_official_party';
  $handler->display->display_options['fields']['field_q_official_party']['label'] = '';
  $handler->display->display_options['fields']['field_q_official_party']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_q_official_party']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_q_official_party']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field collection item: Progress Update */
  $handler->display->display_options['fields']['field_progress_update']['id'] = 'field_progress_update';
  $handler->display->display_options['fields']['field_progress_update']['table'] = 'field_data_field_progress_update';
  $handler->display->display_options['fields']['field_progress_update']['field'] = 'field_progress_update';
  $handler->display->display_options['fields']['field_progress_update']['relationship'] = 'field_official_progress_value';
  $handler->display->display_options['fields']['field_progress_update']['label'] = '';
  $handler->display->display_options['fields']['field_progress_update']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_progress_update']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Progress Type */
  $handler->display->display_options['fields']['field_progress_type']['id'] = 'field_progress_type';
  $handler->display->display_options['fields']['field_progress_type']['table'] = 'field_data_field_progress_type';
  $handler->display->display_options['fields']['field_progress_type']['field'] = 'field_progress_type';
  $handler->display->display_options['fields']['field_progress_type']['relationship'] = 'field_official_progress_value';
  $handler->display->display_options['fields']['field_progress_type']['label'] = '';
  $handler->display->display_options['fields']['field_progress_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_progress_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_progress_type']['type'] = 'list_key';
  /* Field: Field collection item: Date */
  $handler->display->display_options['fields']['field_progress_date']['id'] = 'field_progress_date';
  $handler->display->display_options['fields']['field_progress_date']['table'] = 'field_data_field_progress_date';
  $handler->display->display_options['fields']['field_progress_date']['field'] = 'field_progress_date';
  $handler->display->display_options['fields']['field_progress_date']['relationship'] = 'field_official_progress_value';
  $handler->display->display_options['fields']['field_progress_date']['label'] = '';
  $handler->display->display_options['fields']['field_progress_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_progress_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_progress_date']['type'] = 'format_interval';
  $handler->display->display_options['fields']['field_progress_date']['settings'] = array(
    'interval' => '2',
    'interval_display' => 'time ago',
  );
  /* Field: Field: Attachments */
  $handler->display->display_options['fields']['field_files']['id'] = 'field_files';
  $handler->display->display_options['fields']['field_files']['table'] = 'field_data_field_files';
  $handler->display->display_options['fields']['field_files']['field'] = 'field_files';
  $handler->display->display_options['fields']['field_files']['relationship'] = 'field_official_progress_value';
  $handler->display->display_options['fields']['field_files']['label'] = '';
  $handler->display->display_options['fields']['field_files']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_files']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_files']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_files']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_files']['multi_type'] = 'ul';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="[field_progress_type] ">[field_progress_date] [field_progress_update][field_files]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  /* Display: FSEA Progress */
  $handler = $view->new_display('panel_pane', 'FSEA Progress', 'fsea_progress');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'FSEA Progress';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: FSEA Progress (field_fsea_progress) */
  $handler->display->display_options['relationships']['field_fsea_progress_value']['id'] = 'field_fsea_progress_value';
  $handler->display->display_options['relationships']['field_fsea_progress_value']['table'] = 'field_data_field_fsea_progress';
  $handler->display->display_options['relationships']['field_fsea_progress_value']['field'] = 'field_fsea_progress_value';
  $handler->display->display_options['relationships']['field_fsea_progress_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Progress Update */
  $handler->display->display_options['fields']['field_progress_update']['id'] = 'field_progress_update';
  $handler->display->display_options['fields']['field_progress_update']['table'] = 'field_data_field_progress_update';
  $handler->display->display_options['fields']['field_progress_update']['field'] = 'field_progress_update';
  $handler->display->display_options['fields']['field_progress_update']['relationship'] = 'field_fsea_progress_value';
  $handler->display->display_options['fields']['field_progress_update']['label'] = '';
  $handler->display->display_options['fields']['field_progress_update']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_progress_update']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Date */
  $handler->display->display_options['fields']['field_progress_date']['id'] = 'field_progress_date';
  $handler->display->display_options['fields']['field_progress_date']['table'] = 'field_data_field_progress_date';
  $handler->display->display_options['fields']['field_progress_date']['field'] = 'field_progress_date';
  $handler->display->display_options['fields']['field_progress_date']['relationship'] = 'field_fsea_progress_value';
  $handler->display->display_options['fields']['field_progress_date']['label'] = '';
  $handler->display->display_options['fields']['field_progress_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_progress_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_progress_date']['type'] = 'format_interval';
  $handler->display->display_options['fields']['field_progress_date']['settings'] = array(
    'interval' => '2',
    'interval_display' => 'time ago',
  );
  /* Field: Field collection item: Progress Type */
  $handler->display->display_options['fields']['field_progress_type']['id'] = 'field_progress_type';
  $handler->display->display_options['fields']['field_progress_type']['table'] = 'field_data_field_progress_type';
  $handler->display->display_options['fields']['field_progress_type']['field'] = 'field_progress_type';
  $handler->display->display_options['fields']['field_progress_type']['relationship'] = 'field_fsea_progress_value';
  $handler->display->display_options['fields']['field_progress_type']['label'] = '';
  $handler->display->display_options['fields']['field_progress_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_progress_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_progress_type']['type'] = 'list_key';
  /* Field: Field: Attachments */
  $handler->display->display_options['fields']['field_files']['id'] = 'field_files';
  $handler->display->display_options['fields']['field_files']['table'] = 'field_data_field_files';
  $handler->display->display_options['fields']['field_files']['field'] = 'field_files';
  $handler->display->display_options['fields']['field_files']['relationship'] = 'field_fsea_progress_value';
  $handler->display->display_options['fields']['field_files']['label'] = '';
  $handler->display->display_options['fields']['field_files']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_files']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_files']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_files']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_files']['multi_type'] = 'ul';
  /* Field: Field collection item: Progress Type */
  $handler->display->display_options['fields']['field_progress_type_1']['id'] = 'field_progress_type_1';
  $handler->display->display_options['fields']['field_progress_type_1']['table'] = 'field_data_field_progress_type';
  $handler->display->display_options['fields']['field_progress_type_1']['field'] = 'field_progress_type';
  $handler->display->display_options['fields']['field_progress_type_1']['relationship'] = 'field_fsea_progress_value';
  $handler->display->display_options['fields']['field_progress_type_1']['label'] = '';
  $handler->display->display_options['fields']['field_progress_type_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_progress_type_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_progress_type_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_progress_type_1']['element_wrapper_class'] = 'update-status-wrapper';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="[field_progress_type]">
<div class="progress-status-wrapper">[field_progress_type_1]</div>
[field_progress_date][field_progress_update][field_files]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $export['governmental_progress'] = $view;

  $view = new view();
  $view->name = 'q_as';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Q&As';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Q&A';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'question' => 'question',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['q_as'] = $view;

  $view = new view();
  $view->name = 'question_comments';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'comment';
  $view->human_name = 'Question comments';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Comments';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access comments';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'comment';
  /* Relationship: Comment: Content */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'comment';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Relationship: Comment: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'comment';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Comment: Vote results */
  $handler->display->display_options['relationships']['votingapi_cache']['id'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache']['table'] = 'comment';
  $handler->display->display_options['relationships']['votingapi_cache']['field'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache']['votingapi'] = array(
    'value_type' => '',
    'tag' => 'comment_vote',
    'function' => 'average',
  );
  /* Sort criterion: Vote results: Value */
  $handler->display->display_options['sorts']['value']['id'] = 'value';
  $handler->display->display_options['sorts']['value']['table'] = 'votingapi_cache';
  $handler->display->display_options['sorts']['value']['field'] = 'value';
  $handler->display->display_options['sorts']['value']['relationship'] = 'votingapi_cache';
  $handler->display->display_options['sorts']['value']['order'] = 'DESC';
  $handler->display->display_options['sorts']['value']['coalesce'] = 1;
  /* Sort criterion: Comment: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'comment';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Comment: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'comment';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Comment: Approved */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'comment';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_node']['id'] = 'status_node';
  $handler->display->display_options['filters']['status_node']['table'] = 'node';
  $handler->display->display_options['filters']['status_node']['field'] = 'status';
  $handler->display->display_options['filters']['status_node']['relationship'] = 'nid';
  $handler->display->display_options['filters']['status_node']['value'] = 1;
  $handler->display->display_options['filters']['status_node']['group'] = 1;
  $handler->display->display_options['filters']['status_node']['expose']['operator'] = FALSE;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['question_comments'] = $view;

  $view = new view();
  $view->name = 'search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_default_node_index';
  $view->human_name = 'Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No questions';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no questions found. If you feel like it, please contribute and <a href="/node/add/question">ask the question</a>.';
  $handler->display->display_options['empty']['area']['format'] = 'editor';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Question Search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'body:value' => 'body:value',
    'title' => 'title',
  );
  /* Filter criterion: Indexed Node: Location */
  $handler->display->display_options['filters']['field_q_location']['id'] = 'field_q_location';
  $handler->display->display_options['filters']['field_q_location']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['field_q_location']['field'] = 'field_q_location';
  $handler->display->display_options['filters']['field_q_location']['value'] = array();
  $handler->display->display_options['filters']['field_q_location']['group'] = 1;
  $handler->display->display_options['filters']['field_q_location']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_q_location']['expose']['operator_id'] = 'field_q_location_op';
  $handler->display->display_options['filters']['field_q_location']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_q_location']['expose']['operator'] = 'field_q_location_op';
  $handler->display->display_options['filters']['field_q_location']['expose']['identifier'] = 'field_q_location';
  $handler->display->display_options['filters']['field_q_location']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_q_location']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Node: Industry */
  $handler->display->display_options['filters']['field_q_industry']['id'] = 'field_q_industry';
  $handler->display->display_options['filters']['field_q_industry']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['field_q_industry']['field'] = 'field_q_industry';
  $handler->display->display_options['filters']['field_q_industry']['value'] = array();
  $handler->display->display_options['filters']['field_q_industry']['group'] = 1;
  $handler->display->display_options['filters']['field_q_industry']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_q_industry']['expose']['operator_id'] = 'field_q_industry_op';
  $handler->display->display_options['filters']['field_q_industry']['expose']['label'] = 'Industry';
  $handler->display->display_options['filters']['field_q_industry']['expose']['operator'] = 'field_q_industry_op';
  $handler->display->display_options['filters']['field_q_industry']['expose']['identifier'] = 'field_q_industry';
  $handler->display->display_options['filters']['field_q_industry']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_q_industry']['expose']['reduce'] = 0;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_search');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['search'] = $view;

  $view = new view();
  $view->name = 'tuts_experiences';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tuts & Experiences';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tuts & Experience';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'experience_page' => 'experience_page',
    'tutorials' => 'tutorials',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['tuts_experiences'] = $view;

  return $export;
}
