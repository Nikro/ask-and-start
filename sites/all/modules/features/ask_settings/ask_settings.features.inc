<?php
/**
 * @file
 * ask_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ask_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "captcha" && $api == "captcha") {
    return array("version" => "1");
  }
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_fontyourface_features_default_font().
 */
function ask_settings_fontyourface_features_default_font() {
  return array(
    'Roboto 100 (cyrillic)' => array(
      'name' => 'Roboto 100 (cyrillic)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Roboto&subset=cyrillic#100',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Roboto',
      'css_style' => 'normal',
      'css_weight' => 100,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:10:"Roboto:100";s:6:"subset";s:8:"cyrillic";}',
    ),
    'Roboto 100 (latin)' => array(
      'name' => 'Roboto 100 (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Roboto&subset=latin#100',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Roboto',
      'css_style' => 'normal',
      'css_weight' => 100,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:10:"Roboto:100";s:6:"subset";s:5:"latin";}',
    ),
    'Roboto 100italic (cyrillic)' => array(
      'name' => 'Roboto 100italic (cyrillic)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Roboto&subset=cyrillic#100italic',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Roboto',
      'css_style' => 'italic',
      'css_weight' => 100,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:16:"Roboto:100italic";s:6:"subset";s:8:"cyrillic";}',
    ),
    'Roboto 100italic (latin)' => array(
      'name' => 'Roboto 100italic (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Roboto&subset=latin#100italic',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Roboto',
      'css_style' => 'italic',
      'css_weight' => 100,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:16:"Roboto:100italic";s:6:"subset";s:5:"latin";}',
    ),
    'Roboto 300 (cyrillic)' => array(
      'name' => 'Roboto 300 (cyrillic)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Roboto&subset=cyrillic#300',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Roboto',
      'css_style' => 'normal',
      'css_weight' => 300,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:10:"Roboto:300";s:6:"subset";s:8:"cyrillic";}',
    ),
    'Roboto 300 (latin)' => array(
      'name' => 'Roboto 300 (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Roboto&subset=latin#300',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Roboto',
      'css_style' => 'normal',
      'css_weight' => 300,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:10:"Roboto:300";s:6:"subset";s:5:"latin";}',
    ),
    'Roboto 300italic (cyrillic)' => array(
      'name' => 'Roboto 300italic (cyrillic)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Roboto&subset=cyrillic#300italic',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Roboto',
      'css_style' => 'italic',
      'css_weight' => 300,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:16:"Roboto:300italic";s:6:"subset";s:8:"cyrillic";}',
    ),
    'Roboto 300italic (latin)' => array(
      'name' => 'Roboto 300italic (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Roboto&subset=latin#300italic',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Roboto',
      'css_style' => 'italic',
      'css_weight' => 300,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:16:"Roboto:300italic";s:6:"subset";s:5:"latin";}',
    ),
    'Roboto 500 (cyrillic)' => array(
      'name' => 'Roboto 500 (cyrillic)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Roboto&subset=cyrillic#500',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Roboto',
      'css_style' => 'normal',
      'css_weight' => 500,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:10:"Roboto:500";s:6:"subset";s:8:"cyrillic";}',
    ),
    'Roboto 500 (latin)' => array(
      'name' => 'Roboto 500 (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Roboto&subset=latin#500',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Roboto',
      'css_style' => 'normal',
      'css_weight' => 500,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:10:"Roboto:500";s:6:"subset";s:5:"latin";}',
    ),
    'Roboto 500italic (cyrillic)' => array(
      'name' => 'Roboto 500italic (cyrillic)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Roboto&subset=cyrillic#500italic',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Roboto',
      'css_style' => 'italic',
      'css_weight' => 500,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:16:"Roboto:500italic";s:6:"subset";s:8:"cyrillic";}',
    ),
    'Roboto 500italic (latin)' => array(
      'name' => 'Roboto 500italic (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Roboto&subset=latin#500italic',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Roboto',
      'css_style' => 'italic',
      'css_weight' => 500,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:16:"Roboto:500italic";s:6:"subset";s:5:"latin";}',
    ),
    'Roboto 700 (cyrillic)' => array(
      'name' => 'Roboto 700 (cyrillic)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Roboto&subset=cyrillic#700',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Roboto',
      'css_style' => 'normal',
      'css_weight' => 700,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:10:"Roboto:700";s:6:"subset";s:8:"cyrillic";}',
    ),
    'Roboto 700 (latin)' => array(
      'name' => 'Roboto 700 (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Roboto&subset=latin#700',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Roboto',
      'css_style' => 'normal',
      'css_weight' => 700,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:10:"Roboto:700";s:6:"subset";s:5:"latin";}',
    ),
    'Roboto 700italic (cyrillic)' => array(
      'name' => 'Roboto 700italic (cyrillic)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Roboto&subset=cyrillic#700italic',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Roboto',
      'css_style' => 'italic',
      'css_weight' => 700,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:16:"Roboto:700italic";s:6:"subset";s:8:"cyrillic";}',
    ),
    'Roboto 700italic (latin)' => array(
      'name' => 'Roboto 700italic (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Roboto&subset=latin#700italic',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Roboto',
      'css_style' => 'italic',
      'css_weight' => 700,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:16:"Roboto:700italic";s:6:"subset";s:5:"latin";}',
    ),
    'Roboto 900 (cyrillic)' => array(
      'name' => 'Roboto 900 (cyrillic)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Roboto&subset=cyrillic#900',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Roboto',
      'css_style' => 'normal',
      'css_weight' => 900,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:10:"Roboto:900";s:6:"subset";s:8:"cyrillic";}',
    ),
    'Roboto 900 (latin)' => array(
      'name' => 'Roboto 900 (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Roboto&subset=latin#900',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Roboto',
      'css_style' => 'normal',
      'css_weight' => 900,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:10:"Roboto:900";s:6:"subset";s:5:"latin";}',
    ),
    'Roboto 900italic (cyrillic)' => array(
      'name' => 'Roboto 900italic (cyrillic)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Roboto&subset=cyrillic#900italic',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Roboto',
      'css_style' => 'italic',
      'css_weight' => 900,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:16:"Roboto:900italic";s:6:"subset";s:8:"cyrillic";}',
    ),
    'Roboto 900italic (latin)' => array(
      'name' => 'Roboto 900italic (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Roboto&subset=latin#900italic',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Roboto',
      'css_style' => 'italic',
      'css_weight' => 900,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:16:"Roboto:900italic";s:6:"subset";s:5:"latin";}',
    ),
  );
}
