<?php

/**
 * @file
 * A simple panel layout template, used for most parts of the website.
 */
?>

<div class="panel-layout <?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print 'id="' . $css_id . '"'; } ?>>
  <div>
    <section class="profile-panel-region profile">
      <?php print $content['profile']; ?>
    </section>
    <section class="main-content-wrapper">
      <?php print $content['content']; ?>
    </section>
  </div>
  <section class="bottom-wrapper">
    <?php print $content['bottom']; ?>
  </section>
</div>
