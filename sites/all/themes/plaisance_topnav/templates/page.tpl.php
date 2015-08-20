<?php
/**
 * @file
 * Zen theme's implementation to display a single Drupal page.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $secondary_menu_heading: The title of the menu used by the secondary links.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['header']: Items for the header region.
 * - $page['navigation']: Items for the navigation region, below the main menu (if any).
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see zen_preprocess_page()
 * @see template_process()
 *
 * UChicago custom variables:
 * - $fullwidth: A boolean indicating whether or not this page should be displayed without the right column and with the main content aree expanded to fit the full page.
 * - $login_link: A link to the login page with the destination node included as a parameter, in the format "/user?destination=[path]"
 * - $templatron_site_name: A version of the site name that can include a line break and small tags
 * - $templatron_site_name_size: A variable added as a class to the masthead to determine masthead font size.
 * - $templatron_logo: If a custom logo has been uploaded, the path to that logo.
 * - $container_column_width: A CSS class for the width of the content container.
 * - $content_column_width: A CSS class for the width of the main content area.
 * - $right_column_width: A CSS class for the width of the right column.
 * - $is_blog: Used to indicate if it's a blog page.
 * - $maincontent: Whether or not to print the maincontent class (used with homepage feature and mini-feature node pages)
 */
?>

<div id="wrapper">
  <div class="container-fluid">
    <div class="navbar" role="banner">
      <div class="navbar-inner">
        <div class="container-fluid">
          <ul id="skip">
            <li><a href="#leftnav">Skip to main navigation</a></li>
            <li><a href="#maincontent">Skip to main content</a></li>
          </ul>
          <!-- utility bav -->
          <div class="row-fluid topnav">
            <div class="visible-phone mobile-branding">
              <div class="uc-wordmark-mobile">The University of Chicago</div>
            </div>
                  <button type="button" class="btn btn-navbar" data-toggle="collapse" data-target=".nav-collapse" title="Toggle Sub-navigation"> <span class="icon-bar"></span> <span class="icon-bar"></span> <span class="icon-bar"></span> </button>

          </div>
          <div class="row wordmark" role="navigation">
            <div class="left-edge">
              <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="site-name column-width-8"><h1 class="<?php print $templatron_site_name_size; ?>"><?php print $templatron_site_name; ?></h1></a>
              <div class="uc-wordmark-container">
                <a href="http://www.uchicago.edu" title="University of Chicago" class="uc-wordmark">University of Chicago</a> 
              </div>
            </div>
          </div>
        </div>
      </div>
    </div>
    <div class="row-fluid wordmark phone" role="navigation">
    	<div class="left-edge">
    		<a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="site-name"><h1 class="<?php print $templatron_site_name_size; ?>"><?php print $templatron_site_name; ?></h1></a>
    	</div>

    </div>
    <div id="topnav" class="nav-collapse collapse" role="navigation">
      <?php print render($page['topnav']); ?>
    </div>
  </div>
  <div class="container page" role="main">
    <?php
      // Render the sidebars to see if there's anything in them.
      $sidebar_first  = render($page['sidebar_first']);
      $sidebar_second = render($page['sidebar_second']);
    ?>
    <div class="row">
      <?php if ($is_blog): ?>
        <div class="blog-menu-links"><a href="/blog">Blog Home</a> | <a class="ss-rss blog-rss-icon" href="/blog.xml"> RSS</a> | <a href="/"><?php print $blog_return_text; ?></a></div>
      <?php endif; ?>
      <a id="maincontent"></a>
      <?php if (!$is_front): ?>
        <?php print render($title_prefix); ?>
        <?php if ($title): ?>
          <h1 class="title" id="page-title"><?php print $title; ?></h1>
        <?php endif; ?>
        <?php print render($title_suffix); ?>
      <?php endif; ?>
      <?php print $messages; ?>
      <?php if ($sidebar_first): ?>
        <button type="button" class="btn btn-subnavbar" data-toggle="collapse" data-target=".subnav-collapse" title="Toggle Sub-navigation"> <span class="icon-bar"></span> <span class="icon-bar"></span> <span class="icon-bar"></span> </button>
      <?php endif; ?>
      <?php print render($tabs); ?>
      <?php print render($page['help']); ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php if (!$is_blog): ?>
        <?php if ($sidebar_first || (isset($templatron_logo) && $is_front)): ?>
          <div id="leftcol" class="column-width-3 subnav-collapse" role="complementary">
            <?php if (isset($templatron_logo) && $is_front): ?>
              <img src="<?php print $templatron_logo; ?>" alt="<?php print t('Home'); ?>" class="logo" />
            <?php endif; ?>
            <?php print $sidebar_first; ?>
            &nbsp; 
          </div>
        <?php endif; ?>
        <div class="<?php print $container_column_width; ?>">
          <?php $feature_block = module_invoke('cck_blocks', 'block_view', 'field_basic_page_feature'); ?>
          <?php print render($feature_block['content']); ?>
          <?php if (!$toggle_simplehomepage && $is_front): ?>
            <?php if ($page['home_features']): ?>
              <?php print render($page['home_features']); ?>
            <?php endif; ?>
          <?php endif; ?>
          <div class="row">
            <div class="<?php if (!$fullwidth) { print $content_column_width; }; if($maincontent) { print ' maincontent'; }; ?>">
              <?php print render($page['highlighted']); ?>
              <?php if (!$toggle_simplehomepage): ?>
                <?php if ($page['home_center']): ?>
                    <?php print render($page['home_center']); ?>
                <?php endif; ?>
              <?php endif; ?>
              <?php if(!$is_front || $toggle_simplehomepage): ?>
                <?php print render($page['content']); ?>
          		  <?php print $feed_icons; ?>
              <?php endif; ?>
            </div>
            <?php if ($sidebar_second && !$fullwidth): ?>
            	<div id="rightcol" class="<?php print $right_column_width; ?>" role="complementary">
    				    <?php print $sidebar_second; ?>    
            	</div> 
            <?php endif; ?>
          </div>
        </div>
      <?php else: ?>
        <div class="row">
          <div class="column-width-9 maincontent">
            <?php print render($page['highlighted']); ?>
            <?php print render($page['content']); ?>
            <?php print $feed_icons; ?>
          </div>
          <?php if ($sidebar_second): ?>
            <div id="rightcol" class="column-width-3" role="complementary">
              <?php print $sidebar_second; ?>    
            </div> 
          <?php endif; ?>
        </div>
      <?php endif; ?>
    </div>
  </div>
<div class="push"><!--//--></div>
</div>
<footer role="contentinfo">
	<div class="container-fluid">
		<div class="row-fluid footer">
			<div class="left-edge">
  			<div class="column-width-3">
          <div class="shield">
    				<a href="http://www.uchicago.edu" title="The University of Chicago">The University of Chicago</a>
          </div>
          <p><a href="<?php print $login_link; ?>">&#169;</a><?php echo date("Y") ?> <span class="url fn org"><a href="http://www.uchicago.edu">The University of Chicago</a></span></p>
          <?php print render($page['footer_column1']); ?>
  			</div>
  			<div class="column-width-3 right hidden-phone">
          <p><a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><?php print $templatron_site_name; ?></a></p>
  				<?php print render($page['footer_column2']); ?>
  			</div>
  			<div class="column-width-3 right hidden-phone">
  				 <?php print render($page['footer_column3']); ?>
  			</div>
  			<div class="column-width-3 right hidden-phone">
          <?php print render($page['footer_column4']); ?>
  			</div>
			</div>
		</div>
	</div>
</footer>
<?php
// We have to render this on the front page so that meta tags appear
// See https://www.drupal.org/node/1386320#comment-7177406
if ($is_front) {
  render($page['content']['metatagss']);
}
?>