<?php
/**
 * @file
 * homepage_feature_and_mini_features.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function homepage_feature_and_mini_features_field_default_fields() {
  $fields = array();

  // Exported field: 'node-homepage_feature-field_featureblurb'.
  $fields['node-homepage_feature-field_featureblurb'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_featureblurb',
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
        'max_length' => '175',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'homepage_feature',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'The feature blurb appears to the right of the feature image and is limited to 175 characters.',
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
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'expanded' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_featureblurb',
      'label' => 'Feature blurb (OLD - DO NOT USE)',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '175',
        ),
        'type' => 'text_textfield',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-homepage_feature-field_featureblurbtext'.
  $fields['node-homepage_feature-field_featureblurbtext'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_featureblurbtext',
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
        'max_length' => '215',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'homepage_feature',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'The feature blurb appears to the right of the feature image and is limited to 215 characters.',
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
      'field_name' => 'field_featureblurbtext',
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

  // Exported field: 'node-homepage_feature-field_featurelink'.
  $fields['node-homepage_feature-field_featurelink'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_featurelink',
      'foreign keys' => array(),
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
      'translatable' => '1',
      'type' => 'link_field',
    ),
    'field_instance' => array(
      'bundle' => 'homepage_feature',
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
          'label' => 'hidden',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_featurelink',
      'label' => 'Feature link',
      'required' => 0,
      'settings' => array(
        'absolute_url' => 1,
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => '80',
        ),
        'enable_tokens' => 0,
        'title' => 'required',
        'title_label_use_field_label' => FALSE,
        'title_maxlength' => 128,
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

  // Exported field: 'node-homepage_feature-field_homeimage'.
  $fields['node-homepage_feature-field_homeimage'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_homeimage',
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
      'translatable' => '1',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'homepage_feature',
      'deleted' => '0',
      'description' => 'Feature images must be at least 900 pixels wide and 400 pixels high. Images larger than this will be automatically cropped and resized to fit in the feature area. After you upload your feature image, you will see a preview of what it will look like after any cropping.<br />',
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
            'image_style' => 'homefeature',
          ),
          'type' => 'image',
          'weight' => '0',
        ),
        'expanded' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_homeimage',
      'label' => 'Feature image',
      'required' => 1,
      'settings' => array(
        'alt_field' => 1,
        'default_image' => 0,
        'file_directory' => 'uploads/images',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '10 MB',
        'max_resolution' => '',
        'min_resolution' => '900x400',
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
            ),
            'source_attach' => array(
              'absolute' => '0',
              'attach_mode' => 'copy',
              'path' => 'file_attach',
            ),
            'source_imce' => array(
              'imce_mode' => '1',
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
            'colorbox__slideshowthumb' => 0,
            'colorbox__thumbnail' => 0,
            'colorbox__wide' => 0,
            'icon_link' => 0,
            'image' => 0,
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
            'image_slideshowthumb' => 0,
            'image_thumbnail' => 0,
            'image_wide' => 0,
            'link' => 0,
          ),
          'insert_width' => '',
          'preview_image_style' => 'homefeature',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-homepage_mini_feature-field_miniblurb'.
  $fields['node-homepage_mini_feature-field_miniblurb'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_miniblurb',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'homepage_mini_feature',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
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
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_miniblurb',
      'label' => 'Blurb',
      'required' => 1,
      'settings' => array(
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '-3',
      ),
    ),
  );

  // Exported field: 'node-homepage_mini_feature-field_minifeatureimage'.
  $fields['node-homepage_mini_feature-field_minifeatureimage'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_minifeatureimage',
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
      'translatable' => '1',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'homepage_mini_feature',
      'deleted' => '0',
      'description' => 'Images wider than the width of the right column will be automatically <strong>resized</strong> to fit in the mini feature area.<br />',
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
            'image_style' => 'columnwidth',
          ),
          'type' => 'image',
          'weight' => '2',
        ),
        'expanded' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_minifeatureimage',
      'label' => 'Mini feature image',
      'required' => 0,
      'settings' => array(
        'alt_field' => 1,
        'default_image' => 0,
        'file_directory' => 'uploads/images',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '10 MB',
        'max_resolution' => '',
        'min_resolution' => '300x10',
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
            ),
            'source_attach' => array(
              'absolute' => '0',
              'attach_mode' => 'copy',
              'path' => 'file_attach',
            ),
            'source_imce' => array(
              'imce_mode' => '1',
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
            'colorbox__slideshowthumb' => 0,
            'colorbox__thumbnail' => 0,
            'colorbox__wide' => 0,
            'icon_link' => 0,
            'image' => 0,
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
            'image_slideshowthumb' => 0,
            'image_thumbnail' => 0,
            'image_wide' => 0,
            'link' => 0,
          ),
          'insert_width' => '',
          'preview_image_style' => 'columnwidth',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '-2',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Blurb');
  t('Feature blurb');
  t('Feature blurb (OLD - DO NOT USE)');
  t('Feature image');
  t('Feature images must be at least 900 pixels wide and 400 pixels high. Images larger than this will be automatically cropped and resized to fit in the feature area. After you upload your feature image, you will see a preview of what it will look like after any cropping.<br />');
  t('Feature link');
  t('Images wider than the width of the right column will be automatically <strong>resized</strong> to fit in the mini feature area.<br />');
  t('Mini feature image');
  t('The feature blurb appears to the right of the feature image and is limited to 175 characters.');
  t('The feature blurb appears to the right of the feature image and is limited to 215 characters.');
  t('The feature link will be included just after the blurb. If you want to link to a page on your website, you will need to first find that page and copy the URL so that you can paste it in the box above.');

  return $fields;
}
