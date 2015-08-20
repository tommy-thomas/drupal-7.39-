<?php
/**
 * @file
 * clas_directory.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function clas_directory_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'clas_directory';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CLAS Directory';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'CLAS Directory';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '50, 100, 150, 200';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_cd_degree' => 'field_cd_degree',
    'field_cd_year' => 'field_cd_year',
    'field_cd_adviser' => 'field_cd_adviser',
    'field_cd_field_of_study' => 'field_cd_field_of_study',
    'field_cd_dissertation_thesis' => 'field_cd_dissertation_thesis',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'field_cd_degree' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cd_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cd_adviser' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cd_field_of_study' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cd_dissertation_thesis' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
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
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Degree */
  $handler->display->display_options['fields']['field_cd_degree']['id'] = 'field_cd_degree';
  $handler->display->display_options['fields']['field_cd_degree']['table'] = 'field_data_field_cd_degree';
  $handler->display->display_options['fields']['field_cd_degree']['field'] = 'field_cd_degree';
  $handler->display->display_options['fields']['field_cd_degree']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cd_degree']['type'] = 'list_default';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_cd_year']['id'] = 'field_cd_year';
  $handler->display->display_options['fields']['field_cd_year']['table'] = 'field_data_field_cd_year';
  $handler->display->display_options['fields']['field_cd_year']['field'] = 'field_cd_year';
  $handler->display->display_options['fields']['field_cd_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cd_year']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_cd_year']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Adviser */
  $handler->display->display_options['fields']['field_cd_adviser']['id'] = 'field_cd_adviser';
  $handler->display->display_options['fields']['field_cd_adviser']['table'] = 'field_data_field_cd_adviser';
  $handler->display->display_options['fields']['field_cd_adviser']['field'] = 'field_cd_adviser';
  $handler->display->display_options['fields']['field_cd_adviser']['element_label_colon'] = FALSE;
  /* Field: Content: Field of Study */
  $handler->display->display_options['fields']['field_cd_field_of_study']['id'] = 'field_cd_field_of_study';
  $handler->display->display_options['fields']['field_cd_field_of_study']['table'] = 'field_data_field_cd_field_of_study';
  $handler->display->display_options['fields']['field_cd_field_of_study']['field'] = 'field_cd_field_of_study';
  $handler->display->display_options['fields']['field_cd_field_of_study']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cd_field_of_study']['type'] = 'list_default';
  /* Field: Content: Dissertation/Thesis */
  $handler->display->display_options['fields']['field_cd_diss_thesis']['id'] = 'field_cd_diss_thesis';
  $handler->display->display_options['fields']['field_cd_diss_thesis']['table'] = 'field_data_field_cd_diss_thesis';
  $handler->display->display_options['fields']['field_cd_diss_thesis']['field'] = 'field_cd_diss_thesis';
  $handler->display->display_options['fields']['field_cd_diss_thesis']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['title']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['title']['limit'] = '1';
  $handler->display->display_options['arguments']['title']['case'] = 'upper';
  $handler->display->display_options['arguments']['title']['path_case'] = 'lower';
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
    'clas_directory_entry' => 'clas_directory_entry',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'clas-directory';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['count'] = FALSE;
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['summary_options']['inline'] = TRUE;
  $handler->display->display_options['arguments']['title']['summary_options']['separator'] = ' | ';
  $handler->display->display_options['arguments']['title']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['title']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['title']['limit'] = '1';
  $handler->display->display_options['arguments']['title']['case'] = 'upper';
  $handler->display->display_options['arguments']['title']['path_case'] = 'lower';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );
  $handler->display->display_options['inherit_arguments'] = FALSE;
  $export['clas_directory'] = $view;

  return $export;
}
