<?php
/**
 * @file
 * ask_settings.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function ask_settings_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'following';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Following';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'following',
      'display' => 'panel_pane_1',
      'args' => '',
      'title' => 'Questions',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'following',
      'display' => 'panel_pane_2',
      'args' => '',
      'title' => 'Tutorials',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'following',
      'display' => 'panel_pane_3',
      'args' => '',
      'title' => 'Shared Experience',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'following_categories',
      'display' => 'panel_pane_1',
      'args' => '',
      'title' => 'Categories',
      'weight' => '-97',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Categories');
  t('Following');
  t('Questions');
  t('Shared Experience');
  t('Tutorials');

  $export['following'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'latest_updates';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Latest Updates';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'latest_updates',
      'display' => 'panel_pane_1',
      'args' => '',
      'title' => 'All',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'q_as',
      'display' => 'panel_pane_1',
      'args' => '',
      'title' => 'Q&As',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'tuts_experiences',
      'display' => 'panel_pane_1',
      'args' => '',
      'title' => 'Tutorials',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'tuts_experiences',
      'display' => 'panel_pane_2',
      'args' => '',
      'title' => 'Experiences',
      'weight' => '-97',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('All');
  t('Experiences');
  t('Latest Updates');
  t('Q&As');
  t('Tutorials');

  $export['latest_updates'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'trending';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Trending';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'trending',
      'display' => 'panel_pane_trending',
      'args' => '',
      'title' => 'Most Seen',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'trending',
      'display' => 'panel_pane_discussed',
      'args' => '',
      'title' => 'Most Discussed',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Most Discussed');
  t('Most Seen');
  t('Trending');

  $export['trending'] = $quicktabs;

  return $export;
}
