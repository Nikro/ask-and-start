<?php
/**
 * @file
 * ask_nodes.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ask_nodes_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_context|node|question|form';
  $field_group->group_name = 'group_context';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'question';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Context',
    'weight' => '2',
    'children' => array(
      0 => 'field_q_location_based',
      1 => 'field_q_location',
      2 => 'field_q_official_party',
      3 => 'field_q_legal_entity_type',
      4 => 'field_q_industry',
      5 => 'field_q_tags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-context field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_context|node|question|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|experience_page|form';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'experience_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '2',
    'children' => array(
      0 => 'field_exp_location',
      1 => 'field_exp_attachments',
      2 => 'field_exp_useful_links',
      3 => 'field_exp_tags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-details field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_details|node|experience_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_extra|node|question|form';
  $field_group->group_name = 'group_extra';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'question';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Extras',
    'weight' => '3',
    'children' => array(
      0 => 'field_q_attachments',
      1 => 'field_q_useful_links',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-extra field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_extra|node|question|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_progress|node|question|form';
  $field_group->group_name = 'group_progress';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'question';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_settings';
  $field_group->data = array(
    'label' => 'Progress',
    'weight' => '15',
    'children' => array(
      0 => 'field_official_progress',
      1 => 'field_fsea_progress',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-progress field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_progress|node|question|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_settings|node|question|form';
  $field_group->group_name = 'group_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'question';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Settings',
    'weight' => '4',
    'children' => array(
      0 => 'field_q_status',
      1 => 'group_progress',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-settings field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_settings|node|question|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context');
  t('Details');
  t('Extras');
  t('Progress');
  t('Settings');

  return $field_groups;
}
