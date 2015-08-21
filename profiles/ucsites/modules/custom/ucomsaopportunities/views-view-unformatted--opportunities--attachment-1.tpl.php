<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
$count = sizeof($rows);
switch ($count) {
  case 1:
    $width = 'column-width-12';
    break;
  case 2:
    $width = 'column-width-6';
    break;
  case 3:
    $width = 'column-width-4';
    break;
  case 4:
    $width = 'column-width-3';
}
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<div class="row-fluid">
  <?php foreach ($rows as $id => $row): ?>
    <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] . ' ' . $width . '"';  } ?>>
      <?php print $row; ?>
    </div>
  <?php endforeach; ?>
</div>