<?php
/**
 * @file
 * Zen theme's implementation to display a node.
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
 *   - view-mode-[mode]: The view mode, e.g. 'full', 'teaser'...
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 *   The following applies only to viewers who are registered users:
 *   - node-by-viewer: Node is authored by the user currently viewing the page.
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
 * - $pubdate: Formatted date and time for when the node was published wrapped
 *   in a HTML5 time element.
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
 *   main body content. Currently broken; see http://drupal.org/node/823380
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
 * @see zen_preprocess_node()
 * @see template_process()
 *
 * UChicago custom variables:
 * $title_class = A CSS class to designate the font size of the feature title, based on title length.
 */
?>

<?php if ($is_front): // If this is the homepage view of the features, display them as list items ?>

  <div class="headline">
  <?php print render($title_suffix); ?>

  <?php if (!empty($content['field_featurelink'])): ?>
    <a href="<?php print ($content['field_featurelink']['#items'][0]['url']); ?>">
    <h2 class="<?php print $title_class; ?>"><?php print $title; ?></h2>
    <p class="blurb whitealpha hidden-phone hidden-tablet"><?php print ($content['field_featureblurbtext']['#items'][0]['safe_value']); ?> <span class="fake-link ss-standard ss-navigateright right"><?php print ($content['field_featurelink']['#items'][0]['title']); ?></span></p>
    </a>
  <?php else: ?>
    <h2 class="<?php print $title_class; ?>"><?php print $title; ?></h2>
    <p class="blurb whitealpha hidden-phone hidden-tablet"><?php print ($content['field_featureblurbtext']['#items'][0]['safe_value']); ?></p>
  <?php endif; ?>
  </div>

  <?php
    $image_style = array(
      "style_name" => "homefeature-730px",
      "path" => $content['field_homeimage']['#items'][0]['uri'],
      "width" => NULL,
      "height" => NULL,
    );
    print(theme_image_style($image_style));
  ?>

<?php else: // Otherwise, display the entire node on a single page ?>

  <article class="node-<?php print $node->nid; ?> <?php print $classes; ?> clearfix"<?php print $attributes; ?>>

    <?php $image_size = variable_get('templatron_homefeature_image_size','small'); ?>

    <div id="featurewrap" class="subfeature <?php print $image_size; ?>">
      <div id="features">
        <ul>
          <li>
          <?php print render($title_suffix); ?>

          <div class="headline animate-in">
          <?php if (!empty($content['field_featurelink'])): ?>
            <a href="<?php print ($content['field_featurelink']['#items'][0]['url']); ?>">
            <h2><?php print $title; ?></h2>
            <p class="blurb whitealpha hidden-phone hidden-tablet"><?php print ($content['field_featureblurbtext']['#items'][0]['safe_value']); ?> <span class="fake-link ss-standard ss-navigateright right"><?php print ($content['field_featurelink']['#items'][0]['title']); ?></span></p>
            </a>
          <?php else: ?>
            <h2><?php print $title; ?></h2>
            <p class="blurb whitealpha hidden-phone hidden-tablet"><?php print ($content['field_featureblurbtext']['#items'][0]['safe_value']); ?></p>
          <?php endif; ?>
          </div>

          <?php
            // Check the config variable to see what size of homepage images should be displayed
            if (variable_get('templatron_homefeature_image_size') == 'large') {
              $image_style = array(
                "style_name" => "homefeature-large",
                "path" => $content['field_homeimage']['#items'][0]['uri'],
                "width" => NULL,
                "height" => NULL,
              );
            } else {
              $image_style = array(
                "style_name" => "homefeature",
                "path" => $content['field_homeimage']['#items'][0]['uri'],
                "width" => NULL,
                "height" => NULL,
              );        
            }

            // Then print the image using the appropriate image style
            print(theme_image_style($image_style));
          ?>
          </li>
          </ul>
    </div>
    </div><!-- /featurewrap -->

  </article><!-- /.node -->

<?php endif; ?>