<?php

/**
 * @file
 * A sample panel layout template, to see how to build your own.
 */
?>

<div class="panel-layout <?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print 'id="' . $css_id . '"'; } ?>>
  <section class="full-width top-region-wrapper brand-background">
    <div class="top-region">
      <?php print $content['top_region']; ?>
    </div>
  </section>
  <section class="full-width stats-line-wrapper">
    <div class="stats-line">
      <?php print $content['stats_line']; ?>
    </div>
  </section>
  <div class="full-width home-content-wrapper">
    <div class="home-content">
      <div class="activity-nodes-wrapper">
        <section class="activity-nodes">
          <?php print $content['activity_nodes']; ?>
        </section>

        <div class="bottom-wrapper">
          <div class="bottom-left">
            <?php print $content['bottom_left']; ?>
          </div>
          <div class="bottom-right">
            <?php print $content['bottom_right']; ?>
          </div>
        </div>
      </div>
      <section class="activity-comments-wrapper">
        <div class="activity-comments">
          <?php print $content['activity_comments']; ?>
        </div>
      </section>
    </div>
  </div>
</div>
