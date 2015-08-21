<?php
/**
 * @file
 * news_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function news_content_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function news_content_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function news_content_node_info() {
  $items = array(
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('News articles automatically appear in the <a href="/news/archive/">news archive</a>, where they are grouped by <a href="/admin/structure/taxonomy/news">news category</a>. They are automatically promoted to the front page and can be tagged with keywords. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
