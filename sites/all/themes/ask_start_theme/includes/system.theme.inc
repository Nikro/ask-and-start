<?php

/**
 * @file
 *   Includes all the system-wise overrides and other system related theming functions.
 */

/**
 * Implements hook_preprocess_html()
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
//function ask_start_theme_preprocess_html(&$vars) {
//
//}

/**
 * Override or insert variables into the page template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
//function ask_start_theme_preprocess_page(&$vars) {
//  drupal_set_message('test');
//  drupal_set_message('test', 'warning');
//}

/**
 * Override or insert variables into the region templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
//function ask_start_theme_preprocess_region(&$vars) {
//
//}

/**
 * Override or insert variables into the block templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
//function ask_start_theme_preprocess_block(&$vars) {
//
//}

/**
 * Override or insert variables into the entity template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
//function ask_start_theme_preprocess_entity(&$vars) {
//
//}

/**
 * Custom tweaks for the basic node views.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
function ask_start_theme_preprocess_node(&$vars) {
  // We want to allow more template suggestions for all the nodes.
  $more_suggestions = array();
  $more_suggestions[] = implode('__', array('node', $vars['type'], $vars['view_mode']));
  $vars['theme_hook_suggestions'] = array_merge($more_suggestions, $vars['theme_hook_suggestions']);
}


/**
 * Override or insert variables into the field template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("field" in this case.)
 */
//function ask_start_theme_preprocess_field(&$vars, $hook) {
//
//}

/**
 * Override or insert variables into the comment template.
 *
 * Preprocess function to handle all of the comments.
 */
function ask_start_theme_preprocess_comment(&$vars) {
  // Extract the important stuff.
  $comment = $vars['comment'];
  $vars['timestamp'] = format_interval((time() - $comment->changed) , 2) . t(' ago');
  $comment_emw = entity_metadata_wrapper('comment', $comment);

  // Prepare the user pane.
  $author = $comment_emw->author->value();
  $user_pane = user_view($author, 'user_pane');
  $vars['user_pane'] = $user_pane;

  // Prepare the LINKS.
  unset($vars['content']['links']['comment']['#links']['comment_forbidden']);

  $vars['content']['field_contrib_images']['#weight'] = 20;

  // Identify the wrappers (indentation).
//  $depth = $comment->depth;
//  $vars['indent_prefix'] = FALSE;
//  $vars['indent_suffix'] = FALSE;
//  if ($depth) {
//    $prefix = str_repeat('<div class="indented">', $depth);
//    $vars['indent_prefix']  = $prefix;
//    $suffix = str_repeat('</div>', $depth);
//    $vars['indent_suffix'] = $suffix;
//  }
}

/**
 * Override or insert variables into the maintenance page template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
function ask_start_theme_preprocess_maintenance_page(&$vars) {
  // When a variable is manipulated or added in preprocess_html or
  // preprocess_page, that same work is probably needed for the maintenance page
  // as well, so we can just re-use those functions to do that work here.
  // ask_start_theme_preprocess_html($vars);
  // ask_start_theme_preprocess_page($vars);

  // This preprocessor will also be used if the db is inactive. To ensure your
  // theme is used, add the following line to your settings.php file:
  // $conf['maintenance_theme'] = 'ask_start_theme';
  // Also, check $vars['db_is_active'] before doing any db queries.
}

/**
 * Overriding the default theme file link function.
 *
 * @see theme_file_link
 */
function ask_start_theme_file_link($vars) {
  $file = $vars['file'];
  $url = file_create_url($file->uri);

  // Human-readable names, for use as text-alternatives to icons.
  $mime_name = array(
    'application/msword' => t('Microsoft Office document'),
    'application/vnd.ms-excel' => t('Office spreadsheet'),
    'application/vnd.ms-powerpoint' => t('Office presentation'),
    'application/pdf' => t('PDF'),
    'video/quicktime' => t('Movie'),
    'audio/mpeg' => t('Audio'),
    'audio/wav' => t('Audio'),
    'image/jpeg' => t('Image'),
    'image/png' => t('Image'),
    'image/gif' => t('Image'),
    'application/zip' => t('Package'),
    'text/html' => t('HTML'),
    'text/plain' => t('Plain text'),
    'application/octet-stream' => t('Binary Data'),
  );

  $mimetype = file_get_mimetype($file->uri);

  $icon = '<span class="file-attach icon">' . $mime_name[$mimetype] . '</span>';

  // Set options as per anchor format described at
  // http://microformats.org/wiki/file-format-examples
  $options = array(
    'attributes' => array(
      'type' => $file->filemime . '; length=' . $file->filesize,
    ),
  );

  // Use the description as the link text if available.
  if (empty($file->description)) {
    $link_text = $file->filename;
  }
  else {
    $link_text = $file->description;
    $options['attributes']['title'] = check_plain($file->filename);
  }

  return '<span class="file">' . $icon . ' ' . l($link_text, $url, $options) . '</span>';
}
