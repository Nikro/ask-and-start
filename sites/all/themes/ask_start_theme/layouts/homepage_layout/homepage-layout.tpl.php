<?php

/**
 * @file
 * A sample panel layout template, to see how to build your own.
 */
?>

<div class="panel-layout <?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print 'id="' . $css_id . '"'; } ?>>
  <section class="full-width stats-line-wrapper">
    <div class="stats-line">
      <?php print $content['stats_line']; ?>
    </div>
  </section>
  <section class="full-width top-region-wrapper brand-background">
    <div class="top-region">
      <?php print $content['top_region']; ?>
    </div>
  </section>
  <div class="full-width home-content-wrapper">
    <div class="home-content">
      <section class="side-content left">
        <?php print $content['side_left']; ?>
      </section>
      <section class="side-content right">
        <?php print $content['side_right']; ?>
      </section>
    </div>
  </div>
  <div class="full-width  bottom-wrapper">
    <div class="bottom">
      <?php print $content['bottom_region']; ?>
    </div>
  </div>
</div>
