<?php
/**
 * @file
 * homepage_feature_and_mini_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function homepage_feature_and_mini_features_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function homepage_feature_and_mini_features_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function homepage_feature_and_mini_features_image_default_styles() {
  $styles = array();

  // Exported image style: homefeature.
  $styles['homefeature'] = array(
    'name' => 'homefeature',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '452',
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => '1',
      ),
      2 => array(
        'label' => 'Crop',
        'help' => 'Cropping will remove portions of an image to make it the specified dimensions.',
        'effect callback' => 'image_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => '452',
          'height' => '200',
          'anchor' => 'center-center',
        ),
        'weight' => '2',
      ),
    ),
    'label' => 'homefeature',
  );

  // Exported image style: homefeature-large.
  $styles['homefeature-large'] = array(
    'name' => 'homefeature-large',
    'effects' => array(
      5 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '900',
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => '1',
      ),
      6 => array(
        'label' => 'Crop',
        'help' => 'Cropping will remove portions of an image to make it the specified dimensions.',
        'effect callback' => 'image_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => '900',
          'height' => '400',
          'anchor' => 'center-center',
        ),
        'weight' => '2',
      ),
    ),
    'label' => 'homefeature-large',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function homepage_feature_and_mini_features_node_info() {
  $items = array(
    'homepage_feature' => array(
      'name' => t('Feature'),
      'base' => 'node_content',
      'description' => t('Create a feature image and headline to be displayed on the homepage, or on an interior basic page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'homepage_mini_feature' => array(
      'name' => t('Homepage mini feature'),
      'base' => 'node_content',
      'description' => t('Mini features with a small image and a blurb for the homepage'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
