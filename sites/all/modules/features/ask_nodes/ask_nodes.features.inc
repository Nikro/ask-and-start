<?php
/**
 * @file
 * ask_nodes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ask_nodes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ask_nodes_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('A standard page content-type, used for such things as: about us page, rules and guidelines, etc.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'question' => array(
      'name' => t('Question'),
      'base' => 'node_content',
      'description' => t('This is the main question content-type.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'tutorials' => array(
      'name' => t('Tutorials'),
      'base' => 'node_content',
      'description' => t('Polished tutorials, from distilled discussions and answers for certain questions.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}