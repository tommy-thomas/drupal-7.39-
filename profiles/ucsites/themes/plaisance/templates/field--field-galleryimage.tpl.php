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
 *
 * @ingroup themeable
 */
?>

<div id="featurewrap" class="gallery">
  <div id="features">
    <ul>
      <?php foreach ($element['#items'] as $delta => $item): ?>
        <?php $featureNumber = $delta + 1; ?>
        <li <?php print 'class="feature' . $featureNumber .'"'; ?>>
          <div class="gallery-slide">
            <div class="gallery-slide-image">
              <?php 
                $image_style = array(
                  "style_name" => "slideshow-larger",
                  "path" => $item['uri'],
                  "width" => NULL,
                  "height" => NULL,
                );        
                // Then print the image using the appropriate image style
                print(theme_image_style($image_style));
              ?>
            </div>
            <p class="blurb"><?php print $item['title']; ?></p>
          </div>
        </li>
      <?php endforeach; ?>
    </ul>
  </div>
  <ul id="featurenav" class="hidden-phone">
    <?php foreach ($element['#items'] as $delta => $item): ?>
      <?php $featureNumber = $delta + 1; ?>
      <li <?php print 'class="feature' . $featureNumber .'"'; ?>><button>•</button></li>
    <?php endforeach; ?>
  </ul>
  <p class="ss-icon prev hidden-phone" title="Previous Frame">previous</p>
  <p class="ss-icon next hidden-phone" title="Next Frame">next</p>
</div>

<hr />