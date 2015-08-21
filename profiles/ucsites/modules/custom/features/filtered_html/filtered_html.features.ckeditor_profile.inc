<?php
/**
 * @file
 * filtered_html.features.ckeditor_profile.inc
 */

/**
 * Implements hook_ckeditor_profile_defaults().
 */
function filtered_html_ckeditor_profile_defaults() {
  $data = array(
    'Filtered' => array(
      'name' => 'Filtered',
      'settings' => array(
        'ss' => '2',
        'default' => 't',
        'show_toggle' => 'f',
        'uicolor' => 'default',
        'uicolor_user' => 'default',
        'toolbar' => '[
    [\'Format\',\'Styles\'],
    [\'Bold\',\'Italic\',\'Strike\'],
    [\'Subscript\',\'Superscript\'],
    [\'NumberedList\',\'BulletedList\'],
    [\'Link\',\'Unlink\',\'Anchor\'],
    \'/\',
    [\'Outdent\',\'Indent\',\'Blockquote\'],
    [\'JustifyLeft\',\'JustifyCenter\',\'JustifyRight\',\'JustifyBlock\'],
    [\'SelectAll\',\'RemoveFormat\'],
    [\'ShowBlocks\'],
    [\'video_filter\',\'IMCE\'],
    \'/\',
    [\'Cut\',\'Copy\',\'Paste\',\'PasteText\',\'PasteFromWord\'],
    [\'Scayt\'],
    [\'Undo\',\'Redo\',\'Find\',\'Replace\'],
    [\'Table\',\'HorizontalRule\',\'SpecialChar\'],
    [\'Source\']
]',
        'expand' => 't',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;h2;h3;h4;h5;h6',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'self',
        'css_path' => '%tcss/ckeditor.css',
        'css_style' => 'self',
        'styles_path' => '/sites/all/themes/uchicago/scripts/ckeditor.styles.js',
        'filebrowser' => 'imce',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'ckeditor_load_method' => 'ckeditor.js',
        'ckeditor_load_time_out' => '0',
        'forcePasteAsPlainText' => 'f',
        'html_entities' => 't',
        'scayt_autoStartup' => 'f',
        'theme_config_js' => 't',
        'js_conf' => '',
        'loadPlugins' => array(
          'ckeditor_link' => array(
            'name' => 'drupal_path',
            'desc' => 'CKEditor Link - A plugin to easily create links to Drupal internal paths',
            'path' => '%base_path%sites/all/modules/ckeditor_link/plugins/link/',
            'buttons' => FALSE,
          ),
          'imce' => array(
            'name' => 'imce',
            'desc' => 'Plugin for inserting files from imce without image dialog',
            'path' => '%plugin_dir%imce/',
            'buttons' => array(
              'IMCE' => array(
                'label' => 'IMCE',
                'icon' => 'images/icon.png',
              ),
            ),
            'default' => 'f',
          ),
          'video_filter' => array(
            'name' => 'video_filter',
            'desc' => 'Plugin for inserting video tags with video_filter',
            'path' => '%base_path%sites/all/modules/custom/video_filter/editors/ckeditor/',
            'buttons' => array(
              'video_filter' => array(
                'label' => 'video_filter',
                'icon' => 'video_filter.png',
              ),
            ),
            'default' => 'f',
          ),
        ),
      ),
      'input_formats' => array(
        'filtered_html' => 'Filtered HTML',
      ),
    ),
  );
  return $data;
}
