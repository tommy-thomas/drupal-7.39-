<?php
/**
 * @file
 * hero_feature_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hero_feature_content_type_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function hero_feature_content_type_image_default_styles() {
  $styles = array();

  // Exported image style: hero-feature.
  $styles['hero-feature'] = array(
    'name' => 'hero-feature',
    'label' => 'hero-feature',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '2000',
          'height' => '456',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function hero_feature_content_type_node_info() {
  $items = array(
    'hero_feature' => array(
      'name' => t('Hero feature'),
      'base' => 'node_content',
      'description' => t('A feature image and headline that spans the full width of the content area.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
