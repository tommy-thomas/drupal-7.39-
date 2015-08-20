<?php

/**
 * @file
 * Main view template.
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 *
 * @ingroup views_templates
 */
?>

<?php $image_size = variable_get('templatron_homefeature_image_size','small'); ?>

<?php if ($rows): ?>
  <div id="featurewrap" role="complementary" class="subfeature <?php print $image_size; ?> <?php if($is_front): print "homepage"; endif; ?>">
    <?php if ($image_size == 'large'): ?>
      <p class="ss-icon prev hidden-phone" title="Previous Frame">previous</p>
      <p class="ss-icon next hidden-phone" title="Next Frame">next</p>
    <?php endif; ?>
    <?php print $rows; ?>
  </div><!-- /featurewrap -->
<?php elseif ($empty): ?>
  <div class="view-empty">
    <?php print $empty; ?>
  </div>
<?php endif; ?>