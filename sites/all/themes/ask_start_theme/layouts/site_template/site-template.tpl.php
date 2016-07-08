<?php

/**
 * @file
 * Site-template panel layout template. Use this for panels everywhere.
 */
?>

<div class="panel-layout <?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print 'id="' . $css_id . '"'; } ?>>
  <div class="top-wrapper">
    <div class="top">
      <section class="top__left">
        <?php print $content['top_left']; ?>
      </section>
      <section class="top__right">
        <?php print $content['top_right']; ?>
      </section>
    </div>
  </div>
  <div class="branding-navigation-wrapper">
    <div class="branding-navigation">
      <section class="branding-navigation__branding">
        <?php print $content['branding']; ?>
      </section>
      <section class="branding-navigation__navigation">
        <?php print $content['navigation']; ?>
      </section>
    </div>
  </div>
  <main class="main-content">
    <?php print $content['main']; ?>
  </main>
  <div class="footer-wrapper">
    <footer>
      <div class="small-footers">
        <div class="small-footer footer-one"><?php print $content['footer_1']; ?></div>
        <div class="small-footer footer-two"><?php print $content['footer_2']; ?></div>
        <div class="small-footer footer-three"><?php print $content['footer_3']; ?></div>
        <div class="small-footer footer-four"><?php print $content['footer_4']; ?></div>
      </div>
      <div class="footer-bottom"><?php print $content['footer_bottom']; ?></div>
    </footer>
  </div>
</div>
