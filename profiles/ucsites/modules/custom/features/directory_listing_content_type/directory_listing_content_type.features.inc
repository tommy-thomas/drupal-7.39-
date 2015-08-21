<?php
/**
 * @file
 * directory_listing_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function directory_listing_content_type_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function directory_listing_content_type_image_default_styles() {
  $styles = array();

  // Exported image style: directoryimage.
  $styles['directoryimage'] = array(
    'name' => 'directoryimage',
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
          'width' => '170',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
    'label' => 'directoryimage',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function directory_listing_content_type_node_info() {
  $items = array(
    'directory_listing' => array(
      'name' => t('Directory entry'),
      'base' => 'node_content',
      'description' => t('Add people to directory listings, with images and contact information. You can <a href="/directories">view all of your directories here</a> and <a href="/admin/structure/taxonomy/directories">create a new directory here</a>.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
