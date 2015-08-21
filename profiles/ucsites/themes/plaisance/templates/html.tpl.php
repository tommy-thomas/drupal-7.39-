<?php
/**
 * @file
 * Zen theme's implementation to display the basic html structure of a single
 * Drupal page.
 *
 * Variables:
 * - $css: An array of CSS files for the current page.
 * - $language: (object) The language the site is being displayed in.
 *   $language->language contains its textual representation. $language->dir
 *   contains the language direction. It will either be 'ltr' or 'rtl'.
 * - $html_attributes: String of attributes for the html element. It can be
 *   manipulated through the variable $html_attributes_array from preprocess
 *   functions.
 * - $html_attributes_array: Array of html attribute values. It is flattened
 *   into a string within the variable $html_attributes.
 * - $rdf_namespaces: All the RDF namespace prefixes used in the HTML document.
 * - $grddl_profile: A GRDDL profile allowing agents to extract the RDF data.
 * - $head_title: A modified version of the page title, for use in the TITLE
 *   tag.
 * - $head_title_array: (array) An associative array containing the string parts
 *   that were used to generate the $head_title variable, already prepared to be
 *   output as TITLE tag. The key/value pairs may contain one or more of the
 *   following, depending on conditions:
 *   - title: The title of the current page, if any.
 *   - name: The name of the site.
 *   - slogan: The slogan of the site, if any, and if there is no title.
 * - $head: Markup for the HEAD section (including meta tags, keyword tags, and
 *   so on).
 * - $default_mobile_metatags: TRUE if default mobile metatags for responsive
 *   design should be displayed.
 * - $styles: Style tags necessary to import all CSS files for the page.
 * - $scripts: Script tags necessary to load the JavaScript files and settings
 *   for the page.
 * - $skip_link_anchor: The HTML ID of the element that the "skip link" should
 *   link to. Defaults to "main-menu".
 * - $skip_link_text: The text for the "skip link". Defaults to "Jump to
 *   Navigation".
 * - $page_top: Initial markup from any modules that have altered the
 *   page. This variable should always be output first, before all other dynamic
 *   content.
 * - $page: The rendered page content.
 * - $page_bottom: Final closing markup from any modules that have altered the
 *   page. This variable should always be output last, after all other dynamic
 *   content.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It should be placed within the <body> tag. When selecting through CSS
 *   it's recommended that you use the body tag, e.g., "body.front". It can be
 *   manipulated through the variable $classes_array from preprocess functions.
 *   The default values can contain one or more of the following:
 *   - front: Page is the home page.
 *   - not-front: Page is not the home page.
 *   - logged-in: The current viewer is logged in.
 *   - not-logged-in: The current viewer is not logged in.
 *   - node-type-[node type]: When viewing a single node, the type of that node.
 *     For example, if the node is a Blog entry, this would be "node-type-blog".
 *     Note that the machine name of the content type will often be in a short
 *     form of the human readable label.
 *   The following only apply with the default sidebar_first and sidebar_second
 *   block regions:
 *     - two-sidebars: When both sidebars have content.
 *     - no-sidebars: When no sidebar content exists.
 *     - one-sidebar and sidebar-first or sidebar-second: A combination of the
 *       two classes when only one of the two sidebars have content.
 *
 * @see template_preprocess()
 * @see template_preprocess_html()
 * @see zen_preprocess_html()
 * @see template_process()
 */
?><!DOCTYPE html>
<!--[if lt IE 7]><html class="no-js ie lt-ie10 lt-ie9 lt-ie8 lt-ie7" <?php print $html_attributes; ?>><![endif]-->
<!--[if IE 7]><html class="no-js ie ie7 lt-ie9 lt-ie8" <?php print $html_attributes; ?>><![endif]-->
<!--[if IE 8]><html class="no-js ie ie8 lt-ie9 lt-ie10" <?php print $html_attributes; ?>><![endif]-->
<!--[if IE 9]><html class="no-js ie ie9  lt-ie10" <?php print $html_attributes; ?>><![endif]-->
<!--[if IE 10]><html class="no-js ie10 ie-lt-ie11" <?php print $html_attributes; ?>><![endif]-->
<!--[if gt IE 10]><!--><html class="no-js" <?php print $html_attributes . $rdf_namespaces; ?>><!--<![endif]-->

<head>
  <?php print $head; ?>
  <title><?php print $head_title; ?> | The University of Chicago</title>
  
  <!--
  /* @license
   * MyFonts Webfont Build ID 1316338, 2011-10-03T10:50:35-0400
   *
   * The fonts listed in this notice are subject to the End User License
   * Agreement(s) entered into by the website owner. All other parties are
   * explicitly restricted from using the Licensed Webfonts(s).
   *
   * You may obtain a valid license at the URLs below.
   *
   * Webfont: Proxima Nova Thin by Mark Simonson
   * URL: http://www.myfonts.com/fonts/marksimonson/proxima-nova/thin/
   * Licensed pageviews: 10,000,000
   *
   * Webfont: Proxima Nova Regular by Mark Simonson
   * URL: http://www.myfonts.com/fonts/marksimonson/proxima-nova/regular/
   * Licensed pageviews: unspecified
   *
   * Webfont: Proxima Nova Semibold by Mark Simonson
   * URL: http://www.myfonts.com/fonts/marksimonson/proxima-nova/semibold/
   * Licensed pageviews: 10,000,000
   *
   * Webfont: Proxima Nova Light by Mark Simonson
   * URL: http://www.myfonts.com/fonts/marksimonson/proxima-nova/light/
   * Licensed pageviews: 10,000,000
   *
   * Webfont: Proxima Nova Bold by Mark Simonson
   * URL: http://www.myfonts.com/fonts/marksimonson/proxima-nova/bold/
   * Licensed pageviews: 10,000,000
   *
   *
   * License: http://www.myfonts.com/viewlicense?type=web&buildid=1316338
   * Webfonts copyright: Copyright (c) Mark Simonson, 2005. All rights reserved.
   *
   * © 2011 Bitstream Inc
  */
  -->

  <?php if ($default_mobile_metatags): ?>
    <meta name="MobileOptimized" content="width">
    <meta name="HandheldFriendly" content="true"> 
  <?php endif; ?>
  
  <meta name="viewport" content="width=device-width, maximum-scale=1.0, user-scalable=no">
  <!-- <meta http-equiv="cleartype" content="on"> -->
  <link rel='stylesheet' href='https://identity.uchicago.edu/c/fonts/proximanova.css'>
  <?php print $styles; ?>
  
 	<script src="/sites/all/themes/plaisance/js/libs/modernizr.js"></script>
	
  <link rel="shortcut icon" type="image/x-icon" href="https://www.uchicago.edu/favicon.ico" />

  <style type="text/css">
    .messages--error.messages.error { display: none; }
    .node-type-webform .messages--error.messages.error {display:block;}
  </style>
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>

  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $scripts; ?>
  <?php print $page_bottom; ?>
  
  <!--[if lte IE 8]>
  <script src="/sites/all/themes/plaisance/js/ie_fixes/update_png.js"></script>
  <script src="/sites/all/themes/plaisance/js/libs/respond.min.js"></script>
  <![endif]--> 

  <script src="/sites/all/themes/plaisance/js/mainfeature.js"></script>

  
</body>
</html>
