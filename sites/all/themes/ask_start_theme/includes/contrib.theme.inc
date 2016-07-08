<?php

/**
 * @file
 *  Includes all the overrides of the contrib modules.
 *
 */

/**
 * Override or insert variables into the views template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
//function ask_start_theme_preprocess_views_view(&$vars) {
//  $view = $vars['view'];
//}

/**
 * Overrides theme_qt_quicktabs_tabset().
 */
function ask_start_theme_qt_quicktabs_tabset($vars) {
  $variables = array(
    'attributes' => array(
      'class' => 'is-collapsed quicktabs-tabs quicktabs-style-' . $vars['tabset']['#options']['style'],
    ),
    'items' => array(),
  );
  foreach (element_children($vars['tabset']['tablinks']) as $key) {
    $item = array();
    if (is_array($vars['tabset']['tablinks'][$key])) {
      $tab = $vars['tabset']['tablinks'][$key];
      $item['data'] = drupal_render($tab);
      $item['data'] .= '<span class="quicktab-expand"></span>';
      if ($key == $vars['tabset']['#options']['active']) {
        $item['class'] = array('active');
      }
      $variables['items'][] = $item;
    }
  }
  return theme('item_list', $variables);
}

/**
 * Theme function to add support for colorbox.
 */
function ask_start_theme_picture_formatter_colorbox($variables) {
  $gid = 'X';
  $node = menu_get_object();
  if (!empty($node)) {
    $gid = $node->nid;
  }
  else {
    $term = menu_get_object('taxonomy_term', 2);
    if (!empty($term)) {
      $gid = $term->tid;
    }
  }

  $path = menu_get_item();

  $gid = 'contributed-gallery-' . $gid;
  if (!isset($variables['breakpoints']) || empty($variables['breakpoints'])) {
    return theme('image_formatter', $variables);
  }
  $item = $variables['item'];

  // Do not output an empty 'title' attribute.
  if (isset($item['title']) && drupal_strlen($item['title']) == 0) {
    unset($item['title']);
  }

  $item['style_name'] = $variables['image_style'];
  $item['breakpoints'] = $variables['breakpoints'];

  if (!isset($item['path']) && isset($variables['uri'])) {
    $item['path'] = $variables['uri'];
  }
  $output = theme('picture', $item);

  // If an error happened skip further processing.
  if (empty($output)) {
    return $output;
  }

  $classes = empty($item['extra_classes']) ? array('colorbox') : array_merge($item['extra_classes'], array('colorbox'));

  if (isset($variables['colorbox_group'])) {
    $options = array(
      'attributes' => array(
        'class' => $classes,
        'rel' => $gid,
      ),
      'html' => TRUE,
      'language' => array('language' => NULL),
    );

    $image_url = file_create_url($item['uri']);

    if (!empty($item['title'])) {
      $options['attributes']['title'] = $item['title'];
      $output .= format_string('<span class="contributed-caption">@caption</span>', array(
        "@caption" => $item['title'],
      ));
    }

    $output = l($output, $image_url, $options);
  }
  return $output;
}
