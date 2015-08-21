<?php
/**
 * @file
 * video_gallery.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function video_gallery_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'homepage_videos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Homepage videos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Featured Videos';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_videogallery_video_embed']['id'] = 'field_videogallery_video_embed';
  $handler->display->display_options['fields']['field_videogallery_video_embed']['table'] = 'field_data_field_videogallery_video_embed';
  $handler->display->display_options['fields']['field_videogallery_video_embed']['field'] = 'field_videogallery_video_embed';
  $handler->display->display_options['fields']['field_videogallery_video_embed']['label'] = '';
  $handler->display->display_options['fields']['field_videogallery_video_embed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_videogallery_video_embed']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_videogallery_video_embed']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_videogallery_video_embed']['type'] = 'video_embed_field_thumbnail_colorbox';
  $handler->display->display_options['fields']['field_videogallery_video_embed']['settings'] = array(
    'video_style' => 'Featured',
    'image_style' => 'homepage-videos-featured',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );

  /* Display: Featured */
  $handler = $view->new_display('block', 'Featured', 'featured');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="/video-gallery">View all videos</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['block_description'] = 'Homepage featured video';

  /* Display: Videos */
  $handler = $view->new_display('block', 'Videos', 'videos');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_videogallery_video_embed']['id'] = 'field_videogallery_video_embed';
  $handler->display->display_options['fields']['field_videogallery_video_embed']['table'] = 'field_data_field_videogallery_video_embed';
  $handler->display->display_options['fields']['field_videogallery_video_embed']['field'] = 'field_videogallery_video_embed';
  $handler->display->display_options['fields']['field_videogallery_video_embed']['label'] = '';
  $handler->display->display_options['fields']['field_videogallery_video_embed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_videogallery_video_embed']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_videogallery_video_embed']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_videogallery_video_embed']['type'] = 'video_embed_field_thumbnail_colorbox';
  $handler->display->display_options['fields']['field_videogallery_video_embed']['settings'] = array(
    'video_style' => 'Featured',
    'image_style' => 'homepage-videos-featured',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['block_description'] = 'Homepage videos';
  $export['homepage_videos'] = $view;

  $view = new view();
  $view->name = 'video_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Video Gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Video Gallery';
  $handler->display->display_options['css_class'] = 'clear';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['tags']['previous'] = 'previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_videogallery_video_embed']['id'] = 'field_videogallery_video_embed';
  $handler->display->display_options['fields']['field_videogallery_video_embed']['table'] = 'field_data_field_videogallery_video_embed';
  $handler->display->display_options['fields']['field_videogallery_video_embed']['field'] = 'field_videogallery_video_embed';
  $handler->display->display_options['fields']['field_videogallery_video_embed']['label'] = '';
  $handler->display->display_options['fields']['field_videogallery_video_embed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_videogallery_video_embed']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_videogallery_video_embed']['type'] = 'video_embed_field_thumbnail';
  $handler->display->display_options['fields']['field_videogallery_video_embed']['settings'] = array(
    'image_style' => 'large',
    'image_link' => 'node',
  );
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'column-width-4';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_videogallery_video_embed']['id'] = 'field_videogallery_video_embed';
  $handler->display->display_options['fields']['field_videogallery_video_embed']['table'] = 'field_data_field_videogallery_video_embed';
  $handler->display->display_options['fields']['field_videogallery_video_embed']['field'] = 'field_videogallery_video_embed';
  $handler->display->display_options['fields']['field_videogallery_video_embed']['label'] = '';
  $handler->display->display_options['fields']['field_videogallery_video_embed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_videogallery_video_embed']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_videogallery_video_embed']['type'] = 'video_embed_field_thumbnail_colorbox';
  $handler->display->display_options['fields']['field_videogallery_video_embed']['settings'] = array(
    'video_style' => 'Featured',
    'image_style' => 'videogallery-default',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['path'] = 'video-gallery';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_videogallery_video_embed']['id'] = 'field_videogallery_video_embed';
  $handler->display->display_options['fields']['field_videogallery_video_embed']['table'] = 'field_data_field_videogallery_video_embed';
  $handler->display->display_options['fields']['field_videogallery_video_embed']['field'] = 'field_videogallery_video_embed';
  $handler->display->display_options['fields']['field_videogallery_video_embed']['label'] = '';
  $handler->display->display_options['fields']['field_videogallery_video_embed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_videogallery_video_embed']['element_wrapper_class'] = 'column-width-8 alpha';
  $handler->display->display_options['fields']['field_videogallery_video_embed']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_videogallery_video_embed']['type'] = 'video_embed_field_thumbnail_colorbox';
  $handler->display->display_options['fields']['field_videogallery_video_embed']['settings'] = array(
    'video_style' => 'Featured',
    'image_style' => 'videogallery-featured',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'column-width-3 omega';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_videogallery_description']['id'] = 'field_videogallery_description';
  $handler->display->display_options['fields']['field_videogallery_description']['table'] = 'field_data_field_videogallery_description';
  $handler->display->display_options['fields']['field_videogallery_description']['field'] = 'field_videogallery_description';
  $handler->display->display_options['fields']['field_videogallery_description']['label'] = '';
  $handler->display->display_options['fields']['field_videogallery_description']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_videogallery_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_videogallery_description']['element_wrapper_class'] = 'column-width-4 omega';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Global: Null */
  $handler->display->display_options['arguments']['null']['id'] = 'null';
  $handler->display->display_options['arguments']['null']['table'] = 'views';
  $handler->display->display_options['arguments']['null']['field'] = 'null';
  $handler->display->display_options['arguments']['null']['default_action'] = 'default';
  $handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null']['default_argument_options']['argument'] = 'ignore';
  $handler->display->display_options['arguments']['null']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['null']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['null']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['null']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['null']['validate_options']['code'] = 'return ! isset($_GET[\'page\']);';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['video_gallery'] = $view;

  return $export;
}
