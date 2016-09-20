<?php
/**
 * @file
 * ask_user.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ask_user_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_education'.
  $field_instances['user-user-field_education'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_education',
    'label' => 'Education',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'advanced_editor' => 'advanced_editor',
          'editor' => 'editor',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'advanced_editor' => array(
              'weight' => -8,
            ),
            'editor' => array(
              'weight' => -10,
            ),
            'plain_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 53,
    ),
  );

  // Exported field_instance: 'user-user-field_experience_in_field'.
  $field_instances['user-user-field_experience_in_field'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_experience_in_field',
    'label' => 'Experience in Field',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'advanced_editor' => 'advanced_editor',
          'editor' => 'editor',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'advanced_editor' => array(
              'weight' => -8,
            ),
            'editor' => array(
              'weight' => -10,
            ),
            'plain_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 61,
    ),
  );

  // Exported field_instance: 'user-user-field_expert_education'.
  $field_instances['user-user-field_expert_education'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_expert_education',
    'label' => 'Education',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'advanced_editor' => 'advanced_editor',
          'editor' => 'editor',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'advanced_editor' => array(
              'weight' => -8,
            ),
            'editor' => array(
              'weight' => -10,
            ),
            'plain_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 60,
    ),
  );

  // Exported field_instance: 'user-user-field_full_name'.
  $field_instances['user-user-field_full_name'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_full_name',
    'label' => 'Full Name',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'advanced_editor' => 'advanced_editor',
          'editor' => 'editor',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'advanced_editor' => array(
              'weight' => -8,
            ),
            'editor' => array(
              'weight' => -10,
            ),
            'plain_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 51,
    ),
  );

  // Exported field_instance: 'user-user-field_image'.
  $field_instances['user-user-field_image'] = array(
    'bundle' => 'user',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'thumbnail',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 3,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'user-user-field_organization_description'.
  $field_instances['user-user-field_organization_description'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_organization_description',
    'label' => 'Organization Description',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'advanced_editor' => 'advanced_editor',
          'editor' => 'editor',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'advanced_editor' => array(
              'weight' => -8,
            ),
            'editor' => array(
              'weight' => -10,
            ),
            'plain_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 57,
    ),
  );

  // Exported field_instance: 'user-user-field_organization_membership'.
  $field_instances['user-user-field_organization_membership'] = array(
    'bundle' => 'user',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_organization_membership',
    'label' => 'Organization Membership',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'select2widget',
      'settings' => array(
        'select2widgetajax' => array(
          'allow_new' => 1,
          'match_limit' => 10,
          'match_operator' => 'STARTS_WITH',
          'min_char' => 1,
          'placeholder' => 'Search',
          'separator' => '|',
          'set_level' => 0,
        ),
      ),
      'type' => 'select2widgetajax',
      'weight' => 54,
    ),
  );

  // Exported field_instance: 'user-user-field_organization_name'.
  $field_instances['user-user-field_organization_name'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_organization_name',
    'label' => 'Organization Name',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'advanced_editor' => 'advanced_editor',
          'editor' => 'editor',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'advanced_editor' => array(
              'weight' => -8,
            ),
            'editor' => array(
              'weight' => -10,
            ),
            'plain_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 55,
    ),
  );

  // Exported field_instance: 'user-user-field_organization_type'.
  $field_instances['user-user-field_organization_type'] = array(
    'bundle' => 'user',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_organization_type',
    'label' => 'Organization Type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'select2widget',
      'settings' => array(
        'select2widgetajax' => array(
          'allow_new' => 1,
          'match_limit' => 10,
          'match_operator' => 'STARTS_WITH',
          'min_char' => 1,
          'placeholder' => 'Search',
          'separator' => '|',
          'set_level' => 0,
        ),
      ),
      'type' => 'select2widgetajax',
      'weight' => 56,
    ),
  );

  // Exported field_instance: 'user-user-field_other_credentials'.
  $field_instances['user-user-field_other_credentials'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_other_credentials',
    'label' => 'Other Credentials',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'advanced_editor' => 'advanced_editor',
          'editor' => 'editor',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'advanced_editor' => array(
              'weight' => -8,
            ),
            'editor' => array(
              'weight' => -10,
            ),
            'plain_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 62,
    ),
  );

  // Exported field_instance: 'user-user-field_specialization'.
  $field_instances['user-user-field_specialization'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_specialization',
    'label' => 'Specialization',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'advanced_editor' => 'advanced_editor',
          'editor' => 'editor',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'advanced_editor' => array(
              'weight' => -8,
            ),
            'editor' => array(
              'weight' => -10,
            ),
            'plain_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 59,
    ),
  );

  // Exported field_instance: 'user-user-field_spoken_languages'.
  $field_instances['user-user-field_spoken_languages'] = array(
    'bundle' => 'user',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_spoken_languages',
    'label' => 'Spoken Languages',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'select2widget',
      'settings' => array(
        'select2widgetajax' => array(
          'allow_new' => 1,
          'match_limit' => 10,
          'match_operator' => 'STARTS_WITH',
          'min_char' => 1,
          'placeholder' => 'Search',
          'separator' => '|',
          'set_level' => 0,
        ),
      ),
      'type' => 'select2widgetajax',
      'weight' => 52,
    ),
  );

  // Exported field_instance: 'user-user-field_verified_expert'.
  $field_instances['user-user-field_verified_expert'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_verified_expert',
    'label' => 'Verified Expert',
    'required' => 1,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 58,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Education');
  t('Experience in Field');
  t('Full Name');
  t('Image');
  t('Organization Description');
  t('Organization Membership');
  t('Organization Name');
  t('Organization Type');
  t('Other Credentials');
  t('Specialization');
  t('Spoken Languages');
  t('Verified Expert');

  return $field_instances;
}
