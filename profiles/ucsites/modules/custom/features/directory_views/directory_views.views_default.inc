<?php
/**
 * @file
 * directory_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function directory_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'directory';
  $view->description = 'Displays contact info and photos';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Directory';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Full View';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'create directory_listing content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'expanded';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = '<strong>There are no directories to display or you have not yet created any directory entries.</strong>

To create a directory, first <a href="admin/structure/taxonomy/directories/add">create a new directory type</a> (e.g. Staff Directory), and then <a href="/node/add/directory-listing">create directory entries</a>.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Content: Directory (field_directoryname) */
  $handler->display->display_options['relationships']['field_directoryname_tid']['id'] = 'field_directoryname_tid';
  $handler->display->display_options['relationships']['field_directoryname_tid']['table'] = 'field_data_field_directoryname';
  $handler->display->display_options['relationships']['field_directoryname_tid']['field'] = 'field_directoryname_tid';
  $handler->display->display_options['relationships']['field_directoryname_tid']['label'] = 'Directory name';
  $handler->display->display_options['relationships']['field_directoryname_tid']['required'] = TRUE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_class'] = 'helper-links';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit this entry';
  /* Field: Content: Right column images */
  $handler->display->display_options['fields']['field_rightimage']['id'] = 'field_rightimage';
  $handler->display->display_options['fields']['field_rightimage']['table'] = 'field_data_field_rightimage';
  $handler->display->display_options['fields']['field_rightimage']['field'] = 'field_rightimage';
  $handler->display->display_options['fields']['field_rightimage']['label'] = '';
  $handler->display->display_options['fields']['field_rightimage']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rightimage']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_rightimage']['element_class'] = 'maincontentimage image-far-right';
  $handler->display->display_options['fields']['field_rightimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rightimage']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_rightimage']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_rightimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_rightimage']['settings'] = array(
    'image_style' => 'columnwidth',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_rightimage']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_rightimage']['delta_offset'] = '0';
  /* Field: Content: Person title */
  $handler->display->display_options['fields']['field_directorypersontitle']['id'] = 'field_directorypersontitle';
  $handler->display->display_options['fields']['field_directorypersontitle']['table'] = 'field_data_field_directorypersontitle';
  $handler->display->display_options['fields']['field_directorypersontitle']['field'] = 'field_directorypersontitle';
  $handler->display->display_options['fields']['field_directorypersontitle']['ui_name'] = 'Content: Person title';
  $handler->display->display_options['fields']['field_directorypersontitle']['label'] = '';
  $handler->display->display_options['fields']['field_directorypersontitle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_directorypersontitle']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_directorypersontitle']['alter']['text'] = '<p><em>[field_directorypersontitle]</em></p>';
  $handler->display->display_options['fields']['field_directorypersontitle']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_directorypersontitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_directorypersontitle']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_directorypersontitle']['hide_alter_empty'] = FALSE;
  /* Field: Content: Address and phone/fax number */
  $handler->display->display_options['fields']['field_directoryaddress']['id'] = 'field_directoryaddress';
  $handler->display->display_options['fields']['field_directoryaddress']['table'] = 'field_data_field_directoryaddress';
  $handler->display->display_options['fields']['field_directoryaddress']['field'] = 'field_directoryaddress';
  $handler->display->display_options['fields']['field_directoryaddress']['label'] = '';
  $handler->display->display_options['fields']['field_directoryaddress']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_directoryaddress']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_directoryaddress']['alter']['text'] = '<p class="address">[field_directoryaddress]</p>';
  $handler->display->display_options['fields']['field_directoryaddress']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_directoryaddress']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_directoryaddress']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_directoryaddress']['hide_alter_empty'] = FALSE;
  /* Field: Content: Email address */
  $handler->display->display_options['fields']['field_directoryemailaddress']['id'] = 'field_directoryemailaddress';
  $handler->display->display_options['fields']['field_directoryemailaddress']['table'] = 'field_data_field_directoryemailaddress';
  $handler->display->display_options['fields']['field_directoryemailaddress']['field'] = 'field_directoryemailaddress';
  $handler->display->display_options['fields']['field_directoryemailaddress']['label'] = '';
  $handler->display->display_options['fields']['field_directoryemailaddress']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_directoryemailaddress']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_directoryemailaddress']['alter']['text'] = '<p class="email"><a href="mailto:[field_directoryemailaddress-email]">[field_directoryemailaddress-email]</a></p>';
  $handler->display->display_options['fields']['field_directoryemailaddress']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_directoryemailaddress']['hide_alter_empty'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['hide_alter_empty'] = FALSE;
  /* Field: Content: Link text to full biography */
  $handler->display->display_options['fields']['field_directoryfullbiolinktext']['id'] = 'field_directoryfullbiolinktext';
  $handler->display->display_options['fields']['field_directoryfullbiolinktext']['table'] = 'field_data_field_directoryfullbiolinktext';
  $handler->display->display_options['fields']['field_directoryfullbiolinktext']['field'] = 'field_directoryfullbiolinktext';
  $handler->display->display_options['fields']['field_directoryfullbiolinktext']['label'] = '';
  $handler->display->display_options['fields']['field_directoryfullbiolinktext']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_directoryfullbiolinktext']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_directoryfullbiolinktext']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_directoryfullbiolinktext']['empty'] = 'Full biography';
  $handler->display->display_options['fields']['field_directoryfullbiolinktext']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_directoryfullbiolinktext']['type'] = 'text_plain';
  /* Field: Content: Full biography */
  $handler->display->display_options['fields']['field_directoryfullbio']['id'] = 'field_directoryfullbio';
  $handler->display->display_options['fields']['field_directoryfullbio']['table'] = 'field_data_field_directoryfullbio';
  $handler->display->display_options['fields']['field_directoryfullbio']['field'] = 'field_directoryfullbio';
  $handler->display->display_options['fields']['field_directoryfullbio']['ui_name'] = 'Content: Full biography';
  $handler->display->display_options['fields']['field_directoryfullbio']['label'] = '';
  $handler->display->display_options['fields']['field_directoryfullbio']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_directoryfullbio']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_directoryfullbio']['alter']['text'] = '<p><strong><a href="[path]">[field_directoryfullbiolinktext]</a></strong></p>';
  $handler->display->display_options['fields']['field_directoryfullbio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_directoryfullbio']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="row-container clearfix">
<div class="grid_6 alpha">
<h2>[title]</h2>
[field_directorypersontitle]
[field_directoryaddress]
[field_directoryemailaddress]
[body]
[field_directoryfullbio]
</div>
<div class="grid_3 omega imgrt">
[field_rightimage]
<div class="caption"><strong>[title]</strong></div>
</div>
</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Weight (field_weight) */
  $handler->display->display_options['sorts']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['table'] = 'field_data_field_weight';
  $handler->display->display_options['sorts']['field_weight_value']['field'] = 'field_weight_value';
  /* Sort criterion: Content: Last name (field_directorylastname) */
  $handler->display->display_options['sorts']['field_directorylastname_value']['id'] = 'field_directorylastname_value';
  $handler->display->display_options['sorts']['field_directorylastname_value']['table'] = 'field_data_field_directorylastname';
  $handler->display->display_options['sorts']['field_directorylastname_value']['field'] = 'field_directorylastname_value';
  /* Sort criterion: Content: First name (field_directoryfirstname) */
  $handler->display->display_options['sorts']['field_directoryfirstname_value']['id'] = 'field_directoryfirstname_value';
  $handler->display->display_options['sorts']['field_directoryfirstname_value']['table'] = 'field_data_field_directoryfirstname';
  $handler->display->display_options['sorts']['field_directoryfirstname_value']['field'] = 'field_directoryfirstname_value';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_directoryname_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['name']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['name']['title'] = '%1';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['base_path'] = 'directories/%/default';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['case'] = 'ucwords';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'directory_listing' => 'directory_listing',
  );

  /* Display: Directories List */
  $handler = $view->new_display('page', 'Directories List', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Directories';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'create directory_listing content';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Full Directory View</h2>
<p>The Full Directory View includes a medium-sized photo, the short biography, name, and contact information, along with a link to the full biography/details page.</p>
<p><a href="/directories/full/all">View all directory entries</a> or choose from one of your directories below.</p>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = '<?php
$vid = db_query("SELECT vid FROM {taxonomy_vocabulary} where machine_name = \'directories\'")->fetchField();
  if (!($vid == \'\')) {
  	$term_count = db_query("SELECT count(tid) FROM {taxonomy_term_data} where vid = " . $vid)->fetchField();
  	if ($term_count > 0) {
?>
<p>You have created a directory but there are no entries to display, or all of your entries are unpublished. <a href="/node/add/directory-listing"><strong>Create a directory entry</strong></a> or publish existing entries to continue.</p>
<?php
  	} else {
?>
<p>To create a directory, first <a href="/admin/structure/taxonomy/directories/add?destination=node/add/directory-listing"><strong>create a new directory type</strong></a> (e.g. Staff Directory), and then <a href="/node/add/directory-listing"><strong>create directory entries</a></strong>.</p>
<?php
  	}
  }
?>';
  $handler->display->display_options['empty']['area']['format'] = 'php_code';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="row-container clearfix">
<div class="grid_6 alpha">
<h2>[title]</h2>
[field_directorypersontitle]
[field_directoryaddress]
[field_directoryemailaddress]
[body]
[field_directoryfullbio]
</div>
<div class="grid_3 omega imgrt">
[field_rightimage]
<div class="caption"><strong>[title]</strong></div>
</div>
</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_directoryname_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['name']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['name']['title'] = '%1';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['base_path'] = 'directories/full/%';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['name']['validate_options']['code'] = 'return FALSE;
// Because we don\'t want anything to display at /directories/%';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['case'] = 'ucwords';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
  $handler->display->display_options['path'] = 'directories';

  /* Display: Directory description */
  $handler = $view->new_display('attachment', 'Directory description', 'attachment_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Directory (field_directoryname) */
  $handler->display->display_options['relationships']['field_directoryname_tid']['id'] = 'field_directoryname_tid';
  $handler->display->display_options['relationships']['field_directoryname_tid']['table'] = 'field_data_field_directoryname';
  $handler->display->display_options['relationships']['field_directoryname_tid']['field'] = 'field_directoryname_tid';
  $handler->display->display_options['relationships']['field_directoryname_tid']['label'] = 'Directory name';
  $handler->display->display_options['relationships']['field_directoryname_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term edit link */
  $handler->display->display_options['fields']['edit_term']['id'] = 'edit_term';
  $handler->display->display_options['fields']['edit_term']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['edit_term']['field'] = 'edit_term';
  $handler->display->display_options['fields']['edit_term']['relationship'] = 'field_directoryname_tid';
  $handler->display->display_options['fields']['edit_term']['label'] = '';
  $handler->display->display_options['fields']['edit_term']['element_type'] = 'div';
  $handler->display->display_options['fields']['edit_term']['element_class'] = 'helper-links';
  $handler->display->display_options['fields']['edit_term']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_term']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['edit_term']['text'] = 'Edit the directory name or description';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description_1']['id'] = 'description_1';
  $handler->display->display_options['fields']['description_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description_1']['field'] = 'description';
  $handler->display->display_options['fields']['description_1']['relationship'] = 'field_directoryname_tid';
  $handler->display->display_options['fields']['description_1']['label'] = '';
  $handler->display->display_options['fields']['description_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['description_1']['alter']['text'] = '<div class="grid_6 alpha omega">[description_1]</div>';
  $handler->display->display_options['fields']['description_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description_1']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_directoryname_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'compactview' => 'compactview',
    'fullview' => 'fullview',
    'default' => 0,
    'page' => 0,
  );

  /* Display: Full View */
  $handler = $view->new_display('page', 'Full View', 'fullview');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_directoryname_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['name']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Directory';
  $handler->display->display_options['arguments']['name']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['name']['title'] = '%1';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['name']['validate_options']['code'] = '// Ugly hack to deal with a couple of directories which have dashes in their titles
if ($handler->argument == \'WLC-Members-2011-2012\') {
  $handler->argument = \'WLC Members 2011-2012\';
  // $handler->validated_title = \'WLC Members 2011-2012\';
} elseif ($handler->argument == \'WLC-Members-2010-2011\') {
  $handler->argument = \'WLC Members 2010-2011\';
  // $handler->validated_title = \'WLC Members 2010-2011\';
} else {
  $handler->argument = str_replace(\'-\', \' \', $argument);
}
// Get the case-correct version of the directory title
$actual_title = db_query(\'SELECT t.name FROM {taxonomy_term_data} t WHERE t.name = :arg\', array(\':arg\' => $handler->argument) );
// Result is returned as a iterable object that returns a stdClass object on each iteration
foreach ($actual_title as $record) {
  $handler->validated_title = $record->name;
}
return TRUE;';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['path'] = 'directories/full/%';

  /* Display: Compact View */
  $handler = $view->new_display('page', 'Compact View', 'compactview');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Compact View';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'compact';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_class'] = 'helper-links';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit this entry';
  /* Field: Content: Right column images */
  $handler->display->display_options['fields']['field_rightimage']['id'] = 'field_rightimage';
  $handler->display->display_options['fields']['field_rightimage']['table'] = 'field_data_field_rightimage';
  $handler->display->display_options['fields']['field_rightimage']['field'] = 'field_rightimage';
  $handler->display->display_options['fields']['field_rightimage']['label'] = '';
  $handler->display->display_options['fields']['field_rightimage']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rightimage']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_rightimage']['element_class'] = 'maincontentimage image-far-right';
  $handler->display->display_options['fields']['field_rightimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rightimage']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_rightimage']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_rightimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_rightimage']['settings'] = array(
    'image_style' => 'narrow',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_rightimage']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_rightimage']['delta_offset'] = '0';
  /* Field: Content: Person title */
  $handler->display->display_options['fields']['field_directorypersontitle']['id'] = 'field_directorypersontitle';
  $handler->display->display_options['fields']['field_directorypersontitle']['table'] = 'field_data_field_directorypersontitle';
  $handler->display->display_options['fields']['field_directorypersontitle']['field'] = 'field_directorypersontitle';
  $handler->display->display_options['fields']['field_directorypersontitle']['ui_name'] = 'Content: Person title';
  $handler->display->display_options['fields']['field_directorypersontitle']['label'] = '';
  $handler->display->display_options['fields']['field_directorypersontitle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_directorypersontitle']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_directorypersontitle']['alter']['text'] = '<p class="title">[field_directorypersontitle]</p>';
  $handler->display->display_options['fields']['field_directorypersontitle']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_directorypersontitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_directorypersontitle']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_directorypersontitle']['hide_alter_empty'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="row-container clearfix">
<a href="[path]">[field_rightimage]</a>
<div class="personinfo">
<h2><a href="[path]">[title]</a></h2>
[field_directorypersontitle]
</div>
</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_directoryname_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['name']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Directory';
  $handler->display->display_options['arguments']['name']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['name']['title'] = '%1';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['name']['validate_options']['code'] = '// Ugly hack to deal with a couple of directories which have dashes in their titles
if ($handler->argument == \'WLC-Members-2011-2012\') {
  $handler->argument = \'WLC Members 2011-2012\';
  // $handler->validated_title = \'WLC Members 2011-2012\';
} elseif ($handler->argument == \'WLC-Members-2010-2011\') {
  $handler->argument = \'WLC Members 2010-2011\';
  // $handler->validated_title = \'WLC Members 2010-2011\';
} else {
  $handler->argument = str_replace(\'-\', \' \', $argument);
}
// Get the case-correct version of the directory title
$actual_title = db_query(\'SELECT t.name FROM {taxonomy_term_data} t WHERE t.name = :arg\', array(\':arg\' => $handler->argument) );
// Result is returned as a iterable object that returns a stdClass object on each iteration
foreach ($actual_title as $record) {
  $handler->validated_title = $record->name;
}
return TRUE;';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['path'] = 'directories/compact/%';

  /* Display: Compact View Links */
  $handler = $view->new_display('attachment', 'Compact View Links', 'attachment_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Compact View Links';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>&nbsp;</p>
<h2>Compact Directory View</h2>
<p>You can also view a more compact version of your directories with a smaller image and a narrower content area. This is better for simple directories which do not have a large amount of biography content.</p>
<p><a href="/directories/compact/all">View all directory entries</a> or choose from one of your directories below.</p>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Person title */
  $handler->display->display_options['fields']['field_directorypersontitle']['id'] = 'field_directorypersontitle';
  $handler->display->display_options['fields']['field_directorypersontitle']['table'] = 'field_data_field_directorypersontitle';
  $handler->display->display_options['fields']['field_directorypersontitle']['field'] = 'field_directorypersontitle';
  $handler->display->display_options['fields']['field_directorypersontitle']['ui_name'] = 'Content: Person title';
  $handler->display->display_options['fields']['field_directorypersontitle']['label'] = '';
  $handler->display->display_options['fields']['field_directorypersontitle']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_directorypersontitle']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_directorypersontitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_directorypersontitle']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_directorypersontitle']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_directoryname_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['name']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['name']['title'] = '%1';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['base_path'] = 'directories/compact/%';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['case'] = 'ucwords';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'page_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: New Entry Link */
  $handler = $view->new_display('attachment', 'New Entry Link', 'attachment_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New entry link';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'create directory_listing content';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<div class="helper-links"><a href="/node/add/directory-listing">+ Create a new directory entry</a></div>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'alt1' => 'alt1',
    'defaultview' => 'defaultview',
    'default' => 0,
    'page' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Table View */
  $handler = $view->new_display('page', 'Table View', 'tableview');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Table View';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'edit_node' => 'edit_node',
    'field_rightimage' => 'field_rightimage',
    'field_directorypersontitle' => 'field_directorypersontitle',
    'path' => 'path',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'edit_node' => array(
      'align' => '',
      'separator' => '',
    ),
    'field_rightimage' => array(
      'align' => '',
      'separator' => '',
    ),
    'field_directorypersontitle' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'path' => array(
      'align' => '',
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="row-container clearfix">
<a href="[path]">[field_rightimage]</a>
<div class="personinfo">
<h2><a href="[path]">[title]</a></h2>
[field_directorypersontitle]
</div>
</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Person title */
  $handler->display->display_options['fields']['field_directorypersontitle']['id'] = 'field_directorypersontitle';
  $handler->display->display_options['fields']['field_directorypersontitle']['table'] = 'field_data_field_directorypersontitle';
  $handler->display->display_options['fields']['field_directorypersontitle']['field'] = 'field_directorypersontitle';
  $handler->display->display_options['fields']['field_directorypersontitle']['ui_name'] = 'Content: Person title';
  $handler->display->display_options['fields']['field_directorypersontitle']['alter']['text'] = '<p class="title">[field_directorypersontitle]</p>';
  $handler->display->display_options['fields']['field_directorypersontitle']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_directorypersontitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_directorypersontitle']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_directorypersontitle']['hide_alter_empty'] = FALSE;
  /* Field: Content: Email address */
  $handler->display->display_options['fields']['field_directoryemailaddress']['id'] = 'field_directoryemailaddress';
  $handler->display->display_options['fields']['field_directoryemailaddress']['table'] = 'field_data_field_directoryemailaddress';
  $handler->display->display_options['fields']['field_directoryemailaddress']['field'] = 'field_directoryemailaddress';
  $handler->display->display_options['fields']['field_directoryemailaddress']['label'] = '';
  $handler->display->display_options['fields']['field_directoryemailaddress']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_directoryemailaddress']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_directoryemailaddress']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_directoryemailaddress']['hide_alter_empty'] = FALSE;
  /* Field: Content: Address and phone/fax number */
  $handler->display->display_options['fields']['field_directoryaddress']['id'] = 'field_directoryaddress';
  $handler->display->display_options['fields']['field_directoryaddress']['table'] = 'field_data_field_directoryaddress';
  $handler->display->display_options['fields']['field_directoryaddress']['field'] = 'field_directoryaddress';
  $handler->display->display_options['fields']['field_directoryaddress']['label'] = 'Contact information';
  $handler->display->display_options['fields']['field_directoryaddress']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_directoryaddress']['alter']['text'] = '[field_directoryaddress]
[field_directoryemailaddress]';
  $handler->display->display_options['fields']['field_directoryaddress']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_directoryaddress']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_directoryaddress']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_directoryaddress']['hide_alter_empty'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['hide_alter_empty'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_directoryname_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['name']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Directory';
  $handler->display->display_options['arguments']['name']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['name']['title'] = '%1';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['name']['validate_options']['code'] = '// Ugly hack to deal with a couple of directories which have dashes in their titles
if ($handler->argument == \'WLC-Members-2011-2012\') {
  $handler->argument = \'WLC Members 2011-2012\';
  // $handler->validated_title = \'WLC Members 2011-2012\';
} elseif ($handler->argument == \'WLC-Members-2010-2011\') {
  $handler->argument = \'WLC Members 2010-2011\';
  // $handler->validated_title = \'WLC Members 2010-2011\';
} else {
  $handler->argument = str_replace(\'-\', \' \', $argument);
}
// Get the case-correct version of the directory title
$actual_title = db_query(\'SELECT t.name FROM {taxonomy_term_data} t WHERE t.name = :arg\', array(\':arg\' => $handler->argument) );
// Result is returned as a iterable object that returns a stdClass object on each iteration
foreach ($actual_title as $record) {
  $handler->validated_title = $record->name;
}
return TRUE;';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['path'] = 'directories/table/%';

  /* Display: Table View Links */
  $handler = $view->new_display('attachment', 'Table View Links', 'attachment_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Table View Links';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>&nbsp;</p>
<h2>Table View</h2>
<p>The table view lists all directory entries in a table with the person\'s name, title, and contact information.</p>
<p><a href="/directories/table/all">View all directory entries</a> or choose from one of your directories below.</p>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Person title */
  $handler->display->display_options['fields']['field_directorypersontitle']['id'] = 'field_directorypersontitle';
  $handler->display->display_options['fields']['field_directorypersontitle']['table'] = 'field_data_field_directorypersontitle';
  $handler->display->display_options['fields']['field_directorypersontitle']['field'] = 'field_directorypersontitle';
  $handler->display->display_options['fields']['field_directorypersontitle']['ui_name'] = 'Content: Person title';
  $handler->display->display_options['fields']['field_directorypersontitle']['label'] = '';
  $handler->display->display_options['fields']['field_directorypersontitle']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_directorypersontitle']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_directorypersontitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_directorypersontitle']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_directorypersontitle']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_directoryname_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['name']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['name']['title'] = '%1';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['base_path'] = 'directories/table/%';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['case'] = 'ucwords';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'page_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $export['directory'] = $view;

  return $export;
}
