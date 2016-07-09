<?php
/**
 * @file
 * ask_ratings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ask_ratings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rate_widgets';
  $strongarm->value = array(
    1 => (object) array(
      'name' => 'question_comments_votes',
      'tag' => 'comment_vote',
      'title' => 'Question comments votes',
      'node_types' => array(),
      'comment_types' => array(
        0 => 'question',
      ),
      'options' => array(
        0 => array(
          0 => 1,
          1 => '+1',
        ),
        1 => array(
          0 => -1,
          1 => '-1',
        ),
      ),
      'template' => 'number_up_down',
      'node_display' => '2',
      'teaser_display' => FALSE,
      'comment_display' => '2',
      'node_display_mode' => '1',
      'teaser_display_mode' => '1',
      'comment_display_mode' => '2',
      'roles' => array(
        2 => '2',
        1 => 0,
        3 => 0,
      ),
      'allow_voting_by_author' => 1,
      'noperm_behaviour' => '3',
      'displayed' => '1',
      'displayed_just_voted' => '1',
      'description' => '',
      'description_in_compact' => TRUE,
      'delete_vote_on_second_click' => '0',
      'use_source_translation' => TRUE,
      'value_type' => 'points',
      'theme' => 'rate_template_number_up_down',
      'css' => 'sites/all/modules/contrib/rate/templates/number-up-down/number-up-down.css',
      'translate' => TRUE,
    ),
  );
  $export['rate_widgets'] = $strongarm;

  return $export;
}
