<?php
/**
 * Implemnents hook_views_pre_view
 * @param $view
 * @param $display_id
 * @param $args
 * Tip: values (field values etc) can be accessed via $view->result
 * e.g. ( foreach $view->result as $result ) etc
 */
function ucsiterequest_views_pre_view(&$view, &$display_id, &$args) {	
	if( $view->name === 'uc_site_request_view' )
	{		
		/*
		 * count number of nodes processed per view
		 * and is this a view ?
		 */
		variable_set('count', 0);
		variable_set('is_view', true);
	}
}