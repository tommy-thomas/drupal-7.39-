<?php

/**
 * @file field.tpl.php
 * Default template implementation to display the value of a field.
 *
 * This file is not used and is here as a starting point for customization only.
 * @see theme_field()
 *
 * Available variables:
 * - $items: An array of field values. Use render() to output them.
 * - $label: The item label.
 * - $label_hidden: Whether the label display is set to 'hidden'.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - field: The current template type, i.e., "theming hook".
 *   - field-name-[field_name]: The current field name. For example, if the
 *     field name is "field_description" it would result in
 *     "field-name-field-description".
 *   - field-type-[field_type]: The current field type. For example, if the
 *     field type is "text" it would result in "field-type-text".
 *   - field-label-[label_display]: The current label position. For example, if
 *     the label position is "above" it would result in "field-label-above".
 *
 * Other variables:
 * - $element['#object']: The entity to which the field is attached.
 * - $element['#view_mode']: View mode, e.g. 'full', 'teaser'...
 * - $element['#field_name']: The field name.
 * - $element['#field_type']: The field type.
 * - $element['#field_language']: The field language.
 * - $element['#field_translatable']: Whether the field is translatable or not.
 * - $element['#label_display']: Position of label display, inline, above, or
 *   hidden.
 * - $field_name_css: The css-compatible field name.
 * - $field_type_css: The css-compatible field type.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess_field()
 * @see theme_field()
 */
?>

<?php if ($element['#view_mode'] == 'compact' || $element['#view_mode'] == 'expanded' ): // For directory entries ?> 

	<?php print render($items); ?>
	
<?php else: ?>

	<?php $zoomClass = "no-zoom"; // Set the zoom class based on the value of the image zoom field. The zoom class specifies whether or not a colorbox should appear when images are clicked. ?>
	<?php if (isset($element['#object']->field_rightimagezoom['und'][0]['value'])): ?>
		<?php if ($element['#object']->field_rightimagezoom['und'][0]['value'] == 1): ?>
			<?php $zoomClass = "zoom"; ?>
		<?php endif; ?>
	<?php endif; ?>

	<div class="<?php print $classes; ?> <?php print $zoomClass; ?> clearfix imgrt <?php if (count($items)==1) { print 'no-'; } ?>slideshow"<?php print $attributes; ?>>

	<?php if (count($items)>1): // If there is more than one right column image, show the slideshow ?>

		<h2 class="pr slideshow-head"><span>Slideshow</span>
		  <p class="slideshow ss-icon prev hidden-phone" title="Previous Frame" style="display: block;">previous</p>
			<p class="slideshow ss-icon next hidden-phone" title="Next Frame" style="display: block;">next</p>
		</h2>
		<div id="slideshowwrap">
			<div id="slideshow">
	<?php endif; ?>
	
			<?php foreach ($items as $delta => $item) : ?>
				<?php
					// Before rendering, set the image style to the wider column width (so that the old theme doesn't break)
					$item['#display_settings']['colorbox_node_style'] = 'columnwidth-470px';
					$item['#image_style'] = 'columnwidth-470px';
				?>
				<div class="slide">
					<?php print render($item); ?>
					<?php if ($item['#item']['title']): ?>
						<p><?php print($item['#item']['title']); ?></p>
					<?php endif; ?>
				</div>
			<?php endforeach; ?>

	<?php if (count($items)>1): ?>
		</div></div><!-- /#slideshowwrap, /#slideshow -->
	<?php endif; ?>

	</div><!-- .slideshow -->
<?php endif; ?>
