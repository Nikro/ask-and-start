<?php

/**
 * @file
 *   Includes all the main overrides and preprocess functions. We split it into
 * 4 files: this one (main), system, contrib and custom.
 *
 */

/**
 * Include all the other 3 files.
 */
require "includes/system.theme.inc";
require "includes/contrib.theme.inc";
require "includes/custom.theme.inc";


/**
 * Implements hook_modernizr_load_alter().
 *
 * @return
 *   An array to be output as yepnope testObjects.
 */
/* -- Delete this line if you want to use this function
function ask_start_theme_modernizr_load_alter(&$load) {

}


/**
 * Override or insert css on the site.
 *
 * @param $css
 *   An array of all CSS items being requested on the page.
 */
/* -- Delete this line if you want to use this function
function ask_start_theme_css_alter(&$css) {

}
// */

/**
 * Override or insert javascript on the site.
 *
 * @param $js
 *   An array of all JavaScript being presented on the page.
 */
/* -- Delete this line if you want to use this function
function ask_start_theme_js_alter(&$js) {

}
// */
