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
  // Exported flag: "Follow".
  $flags['follow'] = array(
    'entity_type' => 'node',
    'title' => 'Follow',
    'global' => 0,
    'types' => array(
      0 => 'experience_page',
      1 => 'question',
      2 => 'tutorials',
    ),
    'flag_short' => 'Follow',
    'flag_long' => 'Follow this question',
    'flag_message' => 'You followed this question.',
    'unflag_short' => 'Unfollow',
    'unflag_long' => 'Unfollow this question',
    'unflag_message' => 'You have unfollowed this question.',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'module' => 'ask_ratings',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Follow categories".
  $flags['follow_categories'] = array(
    'entity_type' => 'taxonomy_term',
    'title' => 'Follow categories',
    'global' => 0,
    'types' => array(
      0 => 'industries',
      1 => 'legal_types',
      2 => 'locations',
      3 => 'official_parties',
      4 => 'tags',
    ),
    'flag_short' => 'Follow',
    'flag_long' => '',
    'flag_message' => 'You followed this item.',
    'unflag_short' => 'Unfollow',
    'unflag_long' => '',
    'unflag_message' => 'You have unfollowed this item.',
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
  // Exported flag: "Reported comments".
  $flags['reported_comments'] = array(
    'entity_type' => 'comment',
    'title' => 'Reported comments',
    'global' => 0,
    'types' => array(
      0 => 'comment_node_question',
    ),
    'flag_short' => 'Report',
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
    'module' => 'ask_ratings',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}
