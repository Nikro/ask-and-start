/**
 * @file
 * A JavaScript file for the theme.
 *
 * Also includes the library with reusable components.
 */
(function ($, Drupal, window, document, undefined) {
  var isMobile = function () {
    return $(window).width() < 768;
  };

  /**
   * Theme-wide behavior.
   */
  Drupal.behaviors.AskStartThemeBehavior = {
    attach: function(context, settings) {
      // Setup defaults
      context = $(context);
      Drupal.AskStartTheme.setupThemeDefaults(context, settings);

      // Add theme-related behaviors
      //$('.node-type-source .write-btn.action-btn', context).click(function(evObj) {
      //  // Check if the checkbox is checked [TERMS]
      //  if ($('input#terms:checked').length > 0) {
      //    // If the checkbox is checked.
      //    $('.node-type-source .pane-node-comment-form', context).slideDown(500);
      //  } else {
      //    // If the checkbox isn't checked.
      //    Drupal.AskStartTheme.scrollToElement('#node-support-pages-34', 'html, body');
      //  }
      //});

      // If user checks or unchecks the terms box.
      //$('#terms', context).bind('propertychange change', function(evObj) {
      //  if ($(this).is(':checked')) {
      //    $('.node-type-source .pane-node-comment-form', context).slideDown(500);
      //  } else {
      //    $('.node-type-source .pane-node-comment-form', context).slideUp(500);
      //  }
      //});

      // Apply the rotator functionality to Latest Feedback block.
      //var feedbackBlock = $('.front .pane-feedback', context),
      //  frontFeedbackBlockParams = {
      //    "interval": "5000",
      //    "fadeAnimation": "500"
      //  };
      //Drupal.AskStartTheme.fadeInOutRotator(feedbackBlock, frontFeedbackBlockParams);
      $(window).resize(function () {
        if ($('#admin-menu').length > 0) {
          var heightAdmin = $('#admin-menu').height();
          $('body').css('marginTop', heightAdmin + 'px').removeClass('admin-menu');
        }
      });

    }
  };

  // Declare theme helper functions here.
  Drupal.AskStartTheme = {
    setupThemeDefaults: function(context, settings) {
      // Transform selects to links and hide the search button as well
      // We need to find the freaking form in providers, because we use AJAX on the frontpage so it comes as a context.
      //var $exposedProviderFrontFilter = (context.is('#views-exposed-form-providers-front-pane')) ? context : $('#views-exposed-form-providers-front-pane', context);
      //var $exposedProviderSideFilter = (context.is('#views-exposed-form-providers-side-pane')) ? context : $('#views-exposed-form-providers-side-pane', context);

      // Check our sidebar.
      //Drupal.AskStartTheme.checkTopSidebar(context, settings);

      //Drupal.AskStartTheme.selectToLinks($('#edit-type', $exposedProviderFrontFilter), $('#edit-submit-providers', $exposedProviderFrontFilter), {
      //  element: 'span'
      //});
      //Drupal.AskStartTheme.selectToLinks($('#edit-type', $exposedProviderSideFilter), $('#edit-submit-providers', $exposedProviderSideFilter), {
      //  element: 'span'
      //});

      // Add the slide down functionality for services (and others).
      //$('.view-id-services h3', context)
      //  .add('.view-id-services h4', context)
      //  .add('.view-safety-categories h3', context)
      //  .add('.view-safety-categories h4', context)
      //  .click(function(evObj){
      //    var $row = $(this).toggleClass('expanded').closest('.views-row');
      //    $('> .views-field-description, > .views-field-view', $row).slideToggle(500);
      //  });
      //$('.field-cities .field-city', context)
      //  .click(function(evObj){
      //    var $city = $(this).toggleClass('expanded').closest('.field-cities');
      //    $('> .field-city-description', $city).slideToggle(500);
      //  });

      // Add the slide down (selector) for the custom selector pane.
      //$('.article-navigation-links a.active', context).click(function(evObj){
      //  $(this).closest('.article-navigation-links')
      //    .toggleClass('expanded');
      //  evObj.preventDefault();
      //});
      //
      //// Define to which tables we want to apply the stacktable.js.
      //if (jQuery().stacktable) {
      //  $('.view-id-countries_info.view-display-id-countries_pane table').stacktable();
      //}

      //$('.author-pane-link-fake', context).click(function(evObj) {
      //  evObj.preventDefault();
      //  var friendUrl = $(this).attr('href');
      //  $('<div id="dialog" title="PM only between Friends"><p>You need to become friends first.<br />Please send a friend request and wait for approval.</p></div>')
      //    .dialog({
      //      width: 300,
      //      modal: true,
      //      show: "fade",
      //      hide: "fade",
      //      buttons: {
      //        'Add Friend': function() {
      //          // I know, don't ask.
      //          window.location.href = friendUrl;
      //        }
      //      }
      //    });
      //});

      //var $badgeItem = $('.forum-post', context)
      //  .add('.view-id-cycles.view-display-id-panel_pane_1 .views-field', context)
      //  .add('.view-id-user_pictures.view-display-id-panel_pane_1 .views-field', context)
      //  .add('.pane-extra-blocks-user-profile-side .badges-wrapper', context)
      //  .add('.block-user-profile-main .badges-wrapper', context);
      //$badgeItem.each(function(index, el) {
      //  var $badges = $('.badge', el);
      //  if ($badges.length > 1) {
      //    $badges.css('float', 'left').width(100 / $badges.length + '%');
      //  }
      //});

      // Apply autosize if available.
      //if (jQuery().autosize) {
      //  $('textarea.auto-resize').autosize({
      //    append: "\n"
      //  });
      //}

      // Add Ajax-throbber to the quicktabs.
      //var qtWithAjax = $('#quicktabs-front_content_tabs .quicktabs_main', context)
      //  .add('#quicktabs-reply_tabs .quicktabs_main', context);
      //qtWithAjax.append('<div class="hidden-ajax-throbber"><div class="inner-hidden-ajax"><div class="ajax-progress ajax-progress-throbber"><div class="throbber"></div></div></div></div>');

      // Adjust comments type.
      //$('.form-item-field-comment-type-und').hide();
      //var selectedTab = $('#quicktabs-source_node_tabs li.active a', context);
      //if (selectedTab.length > 0) {
      //  var tabText = selectedTab.text();
      //  $('.field-name-field-comment-type .form-radio').prop('checked', false);
      //  switch(tabText) {
      //    case 'Ask & Discuss':
      //      $('.field-name-field-comment-type [value=ask]').prop('checked', true);
      //      break;
      //    case 'Pictures':
      //      $('.field-name-field-comment-type [value=picture]').prop('checked', true);
      //      break;
      //    case 'Promos/Coupons':
      //      $('.field-name-field-comment-type [value=promo]').prop('checked', true);
      //      break;
      //    case 'Rating':
      //      $('.field-name-field-comment-type [value=review]').prop('checked', true);
      //      break;
      //  }
      //}

      // Now for replies we don't have tabs, but we still rely on a class that we force to exist.
      //var askReply = ($('.comment.ask', context).length > 0) ? true : false;
      //if (askReply) {
      //  $('.field-name-field-comment-type [value=ask]').prop('checked', true);
      //}
      //var promoReply = ($('.comment.promo', context).length > 0) ? true : false;
      //if (promoReply) {
      //  $('.field-name-field-comment-type [value=promo]').prop('checked', true);
      //}

      // Coupon-related js-setup.
      //var couponForm = $('.block-extra-blocks-source-coupons .node-coupon-form', context);
      //if (couponForm.length > 0) {
      //  couponForm.hide();
      //  $('.block-extra-blocks-source-coupons .coupon-link.local', context).click(function(evObj) {
      //    couponForm.slideDown(500);
      //    Drupal.AskStartTheme.scrollToElement('.node-coupon-form', 'html, body');
      //  });
      //}
      //$('.view-id-node_comments.view-display-id-panel_pane_5 form.comment-form').add('.view-id-node_comments.view-display-id-panel_pane_5 .view-content').hide();
      //$('.view-id-node_comments.view-display-id-panel_pane_5 .view-comments, .view-id-node_comments.view-display-id-panel_pane_5 .view-empty').click(function() {
      //  var $view = $(this).closest('.view-id-node_comments');
      //  $view.find('form.comment-form, .view-content').slideDown(500);
      //});

      // The POPUP for non-auth users.
      //if ($('.not-logged-in.node-type-source').length > 0
      //  || $('.not-logged-in .comment .field-name-comment-body').length > 0
      //  || $('.not-logged-in .forum-post-content .field-item').length > 0) {
      //  $('<div title="Please, Login or Register."><p>We are putting a lot of effort for maintaining this website.</p><p>We would like to ask you, to either <a class="login" href="/user/login">Login</a> or <a class="register" href="/user/register">Register</a>.</p></div>').dialog({
      //    modal: true,
      //    dialogClass: 'custom-ui-popup'
      //  });
      //}
    },

    scrollToElement: function(selector, targetSelector) {
      var offset = $(selector).offset();
      var scrollTarget = $(targetSelector);
      $(scrollTarget).animate({
        scrollTop: (offset.top - 10)
      }, 500);
    },

    selectToLinks: function(element, submitElement, params) {
      var $element, $submitElement, $links;
      $element = (element instanceof jQuery) ? element : $(element);
      $submitElement = (submitElement instanceof jQuery) ? submitElement : $(submitElement);
      params = (params == undefined) ? {
        element: 'a'
      } : params;

      $links = $('<div class="link-selector"></div>');

      if ($element.is('select')) {
        // Hide elements
        $element.add($submitElement).addClass('element-hidden');

        // Create links
        var options = $('option[value!="All"]', $element);
        if (params.excludeAll !== true) {
          $links.append('<' + params.element + ' class="link-selector-item selected">All</' + params.element + '>').attr('data-data', 'All');
        }
        options.each(function(index, optionElement) {
          $optionElement = $(optionElement);
          $link = $('<' + params.element + ' class="link-selector-item"></' + params.element + '>').text($optionElement.text()).attr('data-data', $optionElement.val());
          $links.append($link);

          if ($optionElement.is(':selected')) {
            $link.siblings().removeClass('selected');
            $link.addClass('selected');
          }
        });

        // Append those in the DOM
        $element.after($links);

        // Create the functionality
        $(params.element, $links).click(function(evObj) {
          evObj.preventDefault();
          $this = $(this);

          $this.siblings().removeClass('selected');
          $this.addClass('selected');

          $element.val($this.attr('data-data'));
          var $form = $element.parents('form');

          // This will allow us to call the ajax-update function.
          if ($('input.form-submit', $form).length > 0) {
            $('input.form-submit', $form).trigger('click');
          } else {
            form.trigger('submit');
          }
        });

      }
    },

    //fadeInOutRotator: function($element, params) {
    //  if ($element.length > 0) {
    //    var $rows = $('.views-row', $element),
    //      $selected = $rows.filter('.selected-row');
    //
    //
    //    // Start with 0th element, if there are no selected-rows
    //    if ($selected.length == 0) {
    //      $rows.eq(0).addClass('selected-row');
    //      $selected = $rows.eq(0);
    //    }
    //
    //    Drupal.AskStartTheme.fadeInOutRotatorRotate($selected, params);
    //    // Set initial height of the wrapper.
    //    $selected.parents('.pane-feedback .pane-content').height($selected.height());
    //  }
    //},

    // Our inner rotating function.
    //fadeInOutRotatorRotate: function($element, params) {
    //  $element.delay(params.interval).fadeOut(params.fadeAnimation, function() {
    //    var $next = $element.next();
    //
    //    // Small check if this is the last one
    //    if ($next.length == 0) {
    //      $next = $element.siblings().eq(0);
    //    }
    //
    //    $element.parents('.pane-feedback .pane-content').animate({
    //      'height': $next.css({
    //        'display': 'block',
    //        'visibility': 'hidden'
    //      }).height()
    //    }, 250);
    //    $element.removeClass('selected-row');
    //
    //    $next.addClass('selected-row').css({
    //      'display': 'none',
    //      'visibility': 'visible'
    //    }).fadeIn(params.fadeAnimation, function() {
    //      Drupal.AskStartTheme.fadeInOutRotatorRotate($(this), params);
    //    });
    //  });
    //},

    //// This adds a color-class if the viewed node is in the views results.
    //checkTopSidebar: function(context, settings) {
    //  if (settings.AskStartTheme !== undefined) {
    //    var settings = settings.AskStartTheme.topMusclegurusSidebar;
    //    $('.view-sources.view-display-id-panel_pane_2 .views-row-' + settings.row + ' .views-field-counter').addClass('red-counter');
    //  }
    //}
  };

  Drupal.behaviors.responsiveQuicktabs = {
    attach: function(context, settings) {
      $('.quicktab-expand', context).click(function(e) {
        if (isMobile()) {
          var $this = $(this);
          e.stopPropagation();
          $this.toggleClass('is-active')
          if ($this.hasClass('is-active')) {
            $this.closest('.quicktabs-tabs').removeClass('is-collapsed');
            $this.removeClass('is-active');
            $this.closest('.active').siblings().slideDown(150);
          }
          else {
            $this.closest('.quicktabs-tabs').removeClass('is-collapsed').addClass('is-collapsed');
            $this.closest('.active').siblings().slideUp(100);
          }
        }
      });
      $('ul.quicktabs-tabs > li a', context).click(function(e) {
        if (isMobile()) {
          var $this = $(this);
          $this.parent().siblings().hide();
          $this.closest('.quicktabs-tabs').removeClass('is-collapsed').addClass('is-collapsed');
        }
      });
    }
  };

  Drupal.behaviors.styleForms = {
    attach: function(context, settings) {

    }
  };

})(jQuery, Drupal, this, this.document);

