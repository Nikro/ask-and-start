<?php

$plugin = array(
  'title' => t('User Layout'),
  'icon' => 'user-layout.png',
  'category' => t('Ask & Start Theme'),
  'theme' => 'user-layout',
  'css' => 'user-layout.css',
  'regions' => array(
    'profile' => t('Profile Pane'),
    'content' => t('Main Content'),
    'bottom' => t('Bottom Links'),
  ),
);
