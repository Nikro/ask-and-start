<?php
/**
 * @file
 * ask_ratings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ask_ratings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function ask_ratings_flag_default_flags() {
  $flags = array();
  // Exported flag: "Reported comments".
  $flags['reported_comments'] = array(
    'entity_type' => 'comment',
    'title' => 'Reported comments',
    'global' => 0,
    'types' => array(
      0 => 'comment_node_question',
    ),
    'flag_short' => 'Report this comment',
    'flag_long' => 'Report this comment',
    'flag_message' => 'You have reported that comment',
    'unflag_short' => 'Cancel report',
    'unflag_long' => 'Cancel report',
    'unflag_message' => 'You have canceled report',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'api_version' => 3,
    'module' => 'ask_ratings',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}
