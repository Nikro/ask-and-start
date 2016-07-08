<?php

/**
 * @file
 * A simple panel layout template, used for most parts of the website.
 */
?>

<div class="panel-layout <?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print 'id="' . $css_id . '"'; } ?>>
  <section class="main-content-wrapper">
    <?php print $content['content']; ?>
  </section>
  <section class="sidebar-wrapper">
    <?php print $content['sidebar']; ?>
  </section>
</div>
