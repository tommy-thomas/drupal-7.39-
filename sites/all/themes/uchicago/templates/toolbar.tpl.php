<?php
/**
 * @file
 * Default template for admin toolbar.
 *
 * Available variables:
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default value has the following:
 *   - toolbar: The current template type, i.e., "theming hook".
 * - $toolbar['toolbar_user']: User account / logout links.
 * - $toolbar['toolbar_menu']: Top level management menu links.
 * - $toolbar['toolbar_drawer']: A place for extended toolbar content.
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_toolbar()
 */
?>
<?php
  global $user;
  $admin = FALSE;
  $owner = FALSE;
  $editor = FALSE;
  $contributor = FALSE;
  $sitedev = FALSE;
  // Traverse through the array and check for user roles
  foreach($user->roles as $rid => $role){
    if($role == 'administrator'){
    	$admin = TRUE;
    }
    if($role == 'site developer'){
    	$sitedev = TRUE;
    }
    if($role == 'site owner'){
    	$owner = TRUE;
    }
    if($role == 'content editor'){
    	$editor = TRUE;
    }
    if($role == 'content contributor'){
    	$contributor = TRUE;
    }
  }
?>
<?php if($admin || $sitedev || $empty_toolbar): // If admin or sitedev or just an authenticated user, process as normal ?> 
<div id="toolbar" class="<?php print $classes; ?> clearfix">
  <div class="toolbar-menu clearfix">
    <?php print render($toolbar['toolbar_home']); ?>
    <?php print render($toolbar['toolbar_user']); ?>
    <?php print render($toolbar['toolbar_menu']); ?>
    <?php if ($toolbar['toolbar_drawer'] && !$empty_toolbar):?>
      <?php print render($toolbar['toolbar_toggle']); ?>
    <?php endif; ?>
  </div>

  <?php if (!$empty_toolbar): ?>
    <div class="<?php echo $toolbar['toolbar_drawer_classes']; ?>">
      <p>Shortcuts:</p>
      <?php print render($toolbar['toolbar_drawer']); ?>
    </div>
  <?php endif; ?>
</div>
<?php else: // Otherwise, print the custom toolbar ?>
<div id="toolbar" class="<?php print $classes; ?> clearfix">
	<div class="toolbar-menu clearfix">
		<ul id="toolbar-home">
			<li class="home"><a href="/" title="Home"><span class="home-link">Home</span></a></li>
		</ul>
    <?php print render($toolbar['toolbar_user']); ?>
		<h2 class="element-invisible">Administrative toolbar</h2>
		<ul id="toolbar-menu">
			<li><a href="/admin/content"  title="Find content.">Find content <span class="element-invisible">(Find content.)</span></a></li>
			<li><a href="/node/add"  title="Add content.">Add content <span class="element-invisible">(Add content.)</span></a></li>
			<?php if($editor && !$owner): // Give the editor a couple extra links if they are not also an owner ?>
		    <li><a title="Edit the left navigation" href="/admin/structure/menu/manage/main-menu">Edit left navigation <span class="element-invisible">(Edit the left navigation)</span></a></li>
			<?php endif; ?>
			<?php if($owner): // Give the owner a couple extra links ?>
  			<li><a title="Administer blocks, content types, menus, etc." href="/admin/structure">Structure <span class="element-invisible">(Administer blocks, content types, menus, etc.)</span></a></li>
  			<li><a title="Manage users." href="/users/">Users <span class="element-invisible">(Manage users.)</span></a></li>
  			<li><a title="Administer settings." href="/admin/config" class="">Configuration <span class="element-invisible">(Administer settings.)</span></a></li>	
  			<li><a title="View reports, updates, and errors." href="/admin/reports">Reports <span class="element-invisible">(View reports, updates, and errors.)</span></a></li>
        <li><a title="Flush caches." href="/templatron/cacheclear">Flush caches <span class="element-invisible">(Flush caches.)</span></a></li>
      <?php endif; ?>
			<li id="support-link"><a href="https://nsitwebservices.wufoo.com/forms/send-us-your-feedback/">Feedback and Support</a></li>
		</ul>
	</div>
	<?php if($owner): // Show the owner the shortcuts ?>
		<div class="<?php echo $toolbar['toolbar_drawer_classes']; ?>">
			<p>Shortcuts:</p>
			<?php print render($toolbar['toolbar_drawer']); ?>
		</div>
	<?php endif; ?>
</div>
<?php endif; ?>

