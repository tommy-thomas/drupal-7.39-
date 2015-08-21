<?php
/**
 * @file
 * Zen theme's implementation to display a single Drupal page while offline.
 *
 * All the available variables are mirrored in html.tpl.php and page.tpl.php.
 * Some may be blank but they are provided for consistency.
 *
 * @see template_preprocess()
 * @see template_preprocess_maintenance_page()
 */
?><!DOCTYPE html>
<!--[if lt IE 7]><html class="no-js ie lt-ie10 lt-ie9 lt-ie8 lt-ie7" <?php print $html_attributes; ?>><![endif]-->
<!--[if IE 7]><html class="no-js ie ie7 lt-ie9 lt-ie8" <?php print $html_attributes; ?>><![endif]-->
<!--[if IE 8]><html class="no-js ie ie8 lt-ie9 lt-ie10" <?php print $html_attributes; ?>><![endif]-->
<!--[if IE 9]><html class="no-js ie ie9  lt-ie10" <?php print $html_attributes; ?>><![endif]-->
<!--[if IE 10]><html class="no-js ie10 ie-lt-ie11" <?php print $html_attributes; ?>><![endif]-->
<!--[if gt IE 10]><!--><html <?php print $html_attributes; ?>><!--<![endif]-->

<head>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>

  <?php if ($default_mobile_metatags): ?>
    <meta name="MobileOptimized" content="width">
    <meta name="HandheldFriendly" content="true">
    <meta name="viewport" content="width=device-width">
  <?php endif; ?>
  <!-- <meta http-equiv="cleartype" content="on"> -->
  <link rel='stylesheet' href='https://identity.uchicago.edu/c/fonts/proximanova.css'>
  <?php print $styles; ?>
  <script src="/sites/all/themes/plaisance/js/libs/modernizr.js"></script>
  <link rel="shortcut icon" type="image/x-icon" href="https://www.uchicago.edu/favicon.ico" />
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>

<div class="container page">
  <div class="row">
    <div class="column-width-8">
      <div class="maincontent">
        <?php if ($site_name): ?>
          <h1 id="site-name">
            <a href="<?php print $base_path; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
          </h1>
        <?php endif; ?>
        <a id="main-content"></a>
        <?php print $content; ?>
      </div>
    </div>
  </div><!-- /#main -->
</div><!-- /#page -->

<?php print $bottom; ?>
<?php print $scripts; ?>
</body>
</html>
