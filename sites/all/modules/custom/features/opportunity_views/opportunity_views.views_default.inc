<?php
/**
 * @file
 * opportunity_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function opportunity_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'opportunities';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Opportunities';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Opportunities Database';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'body' => 'body',
    'path' => 'path',
    'title' => 'title',
    'field_opportunity_posted_date' => 'field_opportunity_posted_date',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_opportunity_posted_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3><strong><a href="[path]">[title]</a></strong></h3>
[body]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Posted date */
  $handler->display->display_options['fields']['field_opportunity_posted_date']['id'] = 'field_opportunity_posted_date';
  $handler->display->display_options['fields']['field_opportunity_posted_date']['table'] = 'field_data_field_opportunity_posted_date';
  $handler->display->display_options['fields']['field_opportunity_posted_date']['field'] = 'field_opportunity_posted_date';
  $handler->display->display_options['fields']['field_opportunity_posted_date']['settings'] = array(
    'format_type' => 'month_day_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Posted date (field_opportunity_posted_date) */
  $handler->display->display_options['sorts']['field_opportunity_posted_date_value']['id'] = 'field_opportunity_posted_date_value';
  $handler->display->display_options['sorts']['field_opportunity_posted_date_value']['table'] = 'field_data_field_opportunity_posted_date';
  $handler->display->display_options['sorts']['field_opportunity_posted_date_value']['field'] = 'field_opportunity_posted_date_value';
  $handler->display->display_options['sorts']['field_opportunity_posted_date_value']['order'] = 'DESC';
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
    'opportunity' => 'opportunity',
  );
  /* Filter criterion: Content: Type (field_opportunity_type) */
  $handler->display->display_options['filters']['field_opportunity_type_tid']['id'] = 'field_opportunity_type_tid';
  $handler->display->display_options['filters']['field_opportunity_type_tid']['table'] = 'field_data_field_opportunity_type';
  $handler->display->display_options['filters']['field_opportunity_type_tid']['field'] = 'field_opportunity_type_tid';
  $handler->display->display_options['filters']['field_opportunity_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_opportunity_type_tid']['expose']['operator_id'] = 'field_opportunity_type_tid_op';
  $handler->display->display_options['filters']['field_opportunity_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_opportunity_type_tid']['expose']['operator'] = 'field_opportunity_type_tid_op';
  $handler->display->display_options['filters']['field_opportunity_type_tid']['expose']['identifier'] = 'field_opportunity_type_tid';
  $handler->display->display_options['filters']['field_opportunity_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_opportunity_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    61522925 => 0,
    210394380 => 0,
    254633039 => 0,
    266833737 => 0,
    235655953 => 0,
    30037204 => 0,
    212870258 => 0,
  );
  $handler->display->display_options['filters']['field_opportunity_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_opportunity_type_tid']['vocabulary'] = 'opportunity_types';
  /* Filter criterion: Content: Level (field_opportunity_level) */
  $handler->display->display_options['filters']['field_opportunity_level_tid']['id'] = 'field_opportunity_level_tid';
  $handler->display->display_options['filters']['field_opportunity_level_tid']['table'] = 'field_data_field_opportunity_level';
  $handler->display->display_options['filters']['field_opportunity_level_tid']['field'] = 'field_opportunity_level_tid';
  $handler->display->display_options['filters']['field_opportunity_level_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_opportunity_level_tid']['expose']['operator_id'] = 'field_opportunity_level_tid_op';
  $handler->display->display_options['filters']['field_opportunity_level_tid']['expose']['label'] = 'Level';
  $handler->display->display_options['filters']['field_opportunity_level_tid']['expose']['operator'] = 'field_opportunity_level_tid_op';
  $handler->display->display_options['filters']['field_opportunity_level_tid']['expose']['identifier'] = 'field_opportunity_level_tid';
  $handler->display->display_options['filters']['field_opportunity_level_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_opportunity_level_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    61522925 => 0,
    210394380 => 0,
    254633039 => 0,
    266833737 => 0,
    235655953 => 0,
    30037204 => 0,
    212870258 => 0,
  );
  $handler->display->display_options['filters']['field_opportunity_level_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_opportunity_level_tid']['vocabulary'] = 'opportunity_levels';
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Keyword';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    61522925 => 0,
    210394380 => 0,
    254633039 => 0,
    266833737 => 0,
    235655953 => 0,
    30037204 => 0,
    212870258 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'body' => 'body',
    'title' => 'title',
  );
  /* Filter criterion: Content: Posted date (field_opportunity_posted_date) */
  $handler->display->display_options['filters']['field_opportunity_posted_date_value']['id'] = 'field_opportunity_posted_date_value';
  $handler->display->display_options['filters']['field_opportunity_posted_date_value']['table'] = 'field_data_field_opportunity_posted_date';
  $handler->display->display_options['filters']['field_opportunity_posted_date_value']['field'] = 'field_opportunity_posted_date_value';
  $handler->display->display_options['filters']['field_opportunity_posted_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_opportunity_posted_date_value']['default_date'] = 'now';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>There are no opportunities matching your search criteria.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['path'] = 'opportunities';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Opportunities';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3><strong><a href="[path]">[title]</a></strong></h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Button */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Button';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[path]" class="btn ss-standard ss-navigateright right">Learn More</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Posted date (field_opportunity_posted_date) */
  $handler->display->display_options['sorts']['field_opportunity_posted_date_value']['id'] = 'field_opportunity_posted_date_value';
  $handler->display->display_options['sorts']['field_opportunity_posted_date_value']['table'] = 'field_data_field_opportunity_posted_date';
  $handler->display->display_options['sorts']['field_opportunity_posted_date_value']['field'] = 'field_opportunity_posted_date_value';
  $handler->display->display_options['sorts']['field_opportunity_posted_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'opportunity' => 'opportunity',
  );
  /* Filter criterion: Content: Feature this listing (field_opportunity_featured) */
  $handler->display->display_options['filters']['field_opportunity_featured_value']['id'] = 'field_opportunity_featured_value';
  $handler->display->display_options['filters']['field_opportunity_featured_value']['table'] = 'field_data_field_opportunity_featured';
  $handler->display->display_options['filters']['field_opportunity_featured_value']['field'] = 'field_opportunity_featured_value';
  $handler->display->display_options['filters']['field_opportunity_featured_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_opportunity_featured_value']['expose']['operator_id'] = 'field_opportunity_featured_value_op';
  $handler->display->display_options['filters']['field_opportunity_featured_value']['expose']['label'] = 'Featured? (field_opportunity_featured)';
  $handler->display->display_options['filters']['field_opportunity_featured_value']['expose']['operator'] = 'field_opportunity_featured_value_op';
  $handler->display->display_options['filters']['field_opportunity_featured_value']['expose']['identifier'] = 'field_opportunity_featured_value';
  /* Filter criterion: Content: Posted date (field_opportunity_posted_date) */
  $handler->display->display_options['filters']['field_opportunity_posted_date_value']['id'] = 'field_opportunity_posted_date_value';
  $handler->display->display_options['filters']['field_opportunity_posted_date_value']['table'] = 'field_data_field_opportunity_posted_date';
  $handler->display->display_options['filters']['field_opportunity_posted_date_value']['field'] = 'field_opportunity_posted_date_value';
  $handler->display->display_options['filters']['field_opportunity_posted_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_opportunity_posted_date_value']['default_date'] = 'now';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['opportunities'] = $view;

  return $export;
}
