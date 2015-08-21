<?php
/**
 * @file
 * hero_feature_content_type.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function hero_feature_content_type_field_default_fields() {
  $fields = array();

  // Exported field: 'node-hero_feature-field_hero_feature_blurb'.
  $fields['node-hero_feature-field_hero_feature_blurb'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_hero_feature_blurb',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'global_block_settings' => '1',
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'hero_feature',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'The feature blurb appears to the right of the feature image and is limited to 255 characters.',
      'display' => array(
        'cck_blocks' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'compact' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'expanded' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_hero_feature_blurb',
      'label' => 'Feature blurb',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '150',
        ),
        'type' => 'text_textfield',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'node-hero_feature-field_hero_feature_image'.
  $fields['node-hero_feature-field_hero_feature_image'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_hero_feature_image',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'global_block_settings' => '1',
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'hero_feature',
      'deleted' => '0',
      'description' => 'Feature images must be at least 2000 pixels wide and 456 pixels high. Images larger than this will be automatically cropped and resized to fit in the feature area. After you upload your feature image, you will see a preview of what it will look like after any cropping.<br />',
      'display' => array(
        'cck_blocks' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'compact' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => 'hero-feature',
          ),
          'type' => 'image',
          'weight' => '3',
        ),
        'expanded' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_hero_feature_image',
      'label' => 'Feature image',
      'required' => 1,
      'settings' => array(
        'alt_field' => 1,
        'default_image' => 0,
        'file_directory' => 'uploads/images',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '2000x456',
        'title_field' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'filefield_sources' => array(
            'filefield_sources' => array(
              'attach' => 0,
              'clipboard' => 0,
              'imce' => 'imce',
              'reference' => 0,
              'remote' => 0,
              'upload' => 'upload',
            ),
            'source_attach' => array(
              'absolute' => '0',
              'attach_mode' => 'move',
              'path' => 'file_attach',
            ),
            'source_imce' => array(
              'imce_mode' => '0',
            ),
            'source_reference' => array(
              'autocomplete' => '0',
            ),
          ),
          'insert' => 0,
          'insert_absolute' => 0,
          'insert_class' => '',
          'insert_default' => 'auto',
          'insert_styles' => array(
            'auto' => 'auto',
            'colorbox__blog-extra-large' => 0,
            'colorbox__blog-large' => 0,
            'colorbox__blog-medium' => 0,
            'colorbox__blog-small' => 0,
            'colorbox__columnwidth' => 0,
            'colorbox__columnwidth-wider' => 0,
            'colorbox__directoryimage' => 0,
            'colorbox__extra-narrow' => 0,
            'colorbox__extra-wide' => 0,
            'colorbox__galleryimage' => 0,
            'colorbox__homefeature' => 0,
            'colorbox__homefeature-large' => 0,
            'colorbox__large' => 0,
            'colorbox__medium' => 0,
            'colorbox__narrow' => 0,
            'colorbox__slideshow' => 0,
            'colorbox__slideshow-larger' => 0,
            'colorbox__slideshowthumb' => 0,
            'colorbox__thumbnail' => 0,
            'colorbox__wide' => 0,
            'icon_link' => 0,
            'image' => 0,
            'image_blog-extra-large' => 0,
            'image_blog-large' => 0,
            'image_blog-medium' => 0,
            'image_blog-small' => 0,
            'image_columnwidth' => 0,
            'image_columnwidth-wider' => 0,
            'image_directoryimage' => 0,
            'image_extra-narrow' => 0,
            'image_extra-wide' => 0,
            'image_galleryimage' => 0,
            'image_homefeature' => 0,
            'image_homefeature-large' => 0,
            'image_large' => 0,
            'image_medium' => 0,
            'image_narrow' => 0,
            'image_slideshow' => 0,
            'image_slideshow-larger' => 0,
            'image_slideshowthumb' => 0,
            'image_thumbnail' => 0,
            'image_wide' => 0,
            'link' => 0,
          ),
          'insert_width' => '',
          'preview_image_style' => 'large',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-hero_feature-field_hero_feature_image_focus'.
  $fields['node-hero_feature-field_hero_feature_image_focus'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_hero_feature_image_focus',
      'foreign keys' => array(),
      'global_block_settings' => '1',
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'left' => 'Left',
          'right' => 'Right',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'hero_feature',
      'default_value' => array(
        0 => array(
          'value' => 'left',
        ),
      ),
      'deleted' => '0',
      'description' => 'Where should the focus of the image be placed, on the left or right side of the image? At various browser sizes and on different devices, the display will attempt to keep the focus on the selected side of the image.',
      'display' => array(
        'cck_blocks' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'compact' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 4,
        ),
        'expanded' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_hero_feature_image_focus',
      'label' => 'Image focus',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'node-hero_feature-field_hero_feature_link'.
  $fields['node-hero_feature-field_hero_feature_link'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_hero_feature_link',
      'foreign keys' => array(),
      'global_block_settings' => '1',
      'indexes' => array(),
      'locked' => '0',
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'title' => 'optional',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
      ),
      'translatable' => '0',
      'type' => 'link_field',
    ),
    'field_instance' => array(
      'bundle' => 'hero_feature',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'The feature link will be included just after the blurb. If you want to link to a page on your website, you will need to first find that page and copy the URL so that you can paste it in the box above.',
      'display' => array(
        'cck_blocks' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'compact' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'hidden',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => '2',
        ),
        'expanded' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_hero_feature_link',
      'label' => 'Feature link',
      'required' => 0,
      'settings' => array(
        'absolute_url' => 1,
        'attributes' => array(
          'class' => '',
          'configurable_title' => 0,
          'rel' => '',
          'target' => 'default',
          'title' => '',
        ),
        'display' => array(
          'url_cutoff' => '80',
        ),
        'enable_tokens' => 1,
        'rel_remove' => 'default',
        'title' => 'required',
        'title_label_use_field_label' => FALSE,
        'title_maxlength' => '128',
        'title_value' => '',
        'url' => 0,
        'user_register_form' => FALSE,
        'validate_url' => 1,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_field',
        'weight' => '2',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Feature blurb');
  t('Feature image');
  t('Feature images must be at least 2000 pixels wide and 456 pixels high. Images larger than this will be automatically cropped and resized to fit in the feature area. After you upload your feature image, you will see a preview of what it will look like after any cropping.<br />');
  t('Feature link');
  t('Image focus');
  t('The feature blurb appears to the right of the feature image and is limited to 255 characters.');
  t('The feature link will be included just after the blurb. If you want to link to a page on your website, you will need to first find that page and copy the URL so that you can paste it in the box above.');
  t('Where should the focus of the image be placed, on the left or right side of the image? At various browser sizes and on different devices, the display will attempt to keep the focus on the selected side of the image.');

  return $fields;
}
