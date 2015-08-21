<?php

/**
 * @file
 * Bartik's theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct url of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type, i.e., "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type, i.e. story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode, e.g. 'full', 'teaser'...
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined, e.g. $node->body becomes $body. When needing to access
 * a field's raw values, developers/themers are strongly encouraged to use these
 * variables. Otherwise they will have to explicitly specify the desired field
 * language, e.g. $node->body['en'], thus overriding any language negotiation
 * rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 */
?>

<?php hide($content); ?>

<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix <?php if ($page) { print ''; } ?>"<?php print $attributes; ?>>

<?php if ($view_mode == 'expanded'): ?>

	<?php print render($title_suffix); ?>
	<div class="grid_6 alpha">
		<?php if (!empty($content['field_directoryfullbio'])): ?>
			<h2><a href="<?php print($node_url); ?>"><?php print $title; ?></a></h2>
		<?php else: ?>
			<h2><?php print $title; ?></h2>
		<?php endif; ?>
		<?php	 print render($content['field_directorypersontitle']); ?>
		<?php if (!empty($content['field_directoryaddress'])): ?>
			<?php	 print render($content['field_directoryaddress']); ?>
		<?php endif; ?>
		<?php if (!empty($content['field_directoryemailaddress'])): ?>
			<p class="email"><a href="mailto:<?php print render($content['field_directoryemailaddress']['#items'][0]['email']); ?>"><?php print render($content['field_directoryemailaddress']['#items'][0]['email']); ?></a></p>
		<?php endif;  ?>
		<?php if (!empty($content['body'])): ?>
			<?php print render($content['body']); ?>
		<?php endif; ?>
		<?php if (!empty($content['field_directoryfullbio'])): ?>
			<?php if (empty($content['field_directoryfullbiolinktext'])): ?>
				<p><strong><a href="<?php print($node_url); ?>">	View the full biography</a></strong></p>
			<?php elseif (!($content['field_directoryfullbiolinktext']['#items'][0]['value'] == '<none>')): ?>
				<p><strong><a href="<?php print($node_url); ?>">
				<?php print render($content['field_directoryfullbiolinktext']) ?>
				</a></strong></p>
			<?php endif; ?>
		<?php endif; ?>
	</div>
	<div class="grid_3 omega imgrt">
		<?php print render($content['field_rightimage']); ?>
	</div>

<?php elseif ($view_mode == 'compact'): ?>

	<?php print render($title_suffix); ?>
	<?php if (!empty($content['field_directoryfullbio'])): ?>
		<a href="<?php print($node_url); ?>"><?php print render($content['field_rightimage']); ?></a>
	<?php else: ?>
		<?php print render($content['field_rightimage']); ?>
	<?php endif; ?>
	<div class="personinfo">
		<?php if (!empty($content['field_directoryfullbio'])): ?>
			<h2><a href="<?php print($node_url); ?>"><?php print $title; ?></a></h2>
		<?php else: ?>
			<h2><?php print $title; ?></h2>
		<?php endif; ?>
		<?php print render($content['field_directorypersontitle']); ?>
		<?php if (!empty($content['field_directoryaddress'])): ?>
			<?php	 print render($content['field_directoryaddress']); ?>
		<?php endif; ?>
		<?php if (!empty($content['field_directoryemailaddress'])): ?>
			<p class="email"><a href="mailto:<?php print render($content['field_directoryemailaddress']['#items'][0]['email']); ?>"><?php print render($content['field_directoryemailaddress']['#items'][0]['email']); ?></a></p>
		<?php endif;  ?>
		<?php if (!empty($content['body'])): ?>
			<?php print render($content['body']); ?>
		<?php endif; ?>
		<?php if (!empty($content['field_directoryfullbio'])): ?>
			<?php if (empty($content['field_directoryfullbiolinktext'])): ?>
				<p><strong><a href="<?php print($node_url); ?>">	View the full biography</a></strong></p>
			<?php elseif (!($content['field_directoryfullbiolinktext']['#items'][0]['value'] == '<none>')): ?>
				<p><strong><a href="<?php print($node_url); ?>">
				<?php print render($content['field_directoryfullbiolinktext']) ?>
				</a></strong></p>
			<?php endif; ?>
		<?php endif; ?>
	</div>
	
<?php else: ?>	
	
	<?php print render($title_prefix); ?>
	<?php if (!$page): ?>
		<h2<?php print $title_attributes; ?>>
			<a href="<?php print $node_url; ?>"><?php print $title; ?></a>
		</h2>
	<?php endif; ?>
	<?php print render($title_suffix); ?>
	
	<div class="content clearfix"<?php print $content_attributes; ?>>
		<?php
			print render($content['field_directorypersontitle']);
			print render($content['field_directoryaddress']);
			
			if (!empty($content['field_directoryemailaddress'])) {
			?>
			<p class="email"><a href="mailto:<?php print render($content['field_directoryemailaddress']['#items'][0]['email']); ?>"><?php print render($content['field_directoryemailaddress']['#items'][0]['email']); ?></a></p>
			<?php
			}
			
			print render($content['field_directoryfullbio']);
					
			if ($logged_in && $is_admin && ($view_mode == 'full')): 		// If user is logged in, print the node URL ?>
			<p class="url"><a href="/directories">View all of your directories</a>.<br /><br />
			<strong>NOTE:</strong> The short biography is visible only on the full directory page. This page displays only the full biography.<br /><br />
			To create a link to this page, copy the text below into any URL field:<br /> <?php print substr(($node_url),1); ?></p>
		<?php endif; ?>
		
	</div>
	
<?php endif; ?>

	</div>
