<?php
/**
 * @file
 * filtered_html.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function filtered_html_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered HTML.
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'cache' => '1',
    'status' => '1',
    'weight' => '0',
    'filters' => array(
      'filter_html' => array(
        'weight' => '-50',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<audio> <a> <em> <strong> <sub> <sup> <ul> <ol> <li> <p> <br> <br /> <h2> <h3> <h4> <h5> <table> <td> <tr> <th> <tbody> <thead> <tfoot> <hr> <hr /> <img> <form> <input> <input /> <blockquote> <pre> <code>',
          'filter_html_help' => 0,
          'filter_html_nofollow' => 0,
        ),
      ),
      'video_filter' => array(
        'weight' => '-49',
        'status' => '1',
        'settings' => array(
          'video_filter_width' => '452',
          'video_filter_height' => '284',
          'video_filter_autoplay' => '0',
          'video_filter_related' => '0',
        ),
      ),
      'filter_url' => array(
        'weight' => '-48',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '-46',
        'status' => '1',
        'settings' => array(),
      ),
      'ckeditor_link_filter' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(),
      ),
      'collapse_text_filter' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'form' => 1,
          'default_title' => 'Use the arrow to expand or collapse this section',
        ),
      ),
    ),
  );

  return $formats;
}
