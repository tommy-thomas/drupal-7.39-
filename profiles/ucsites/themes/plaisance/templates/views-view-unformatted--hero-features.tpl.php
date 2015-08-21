<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>

<div id="features">
  <ul>
    <?php foreach ($rows as $id => $row): ?>
      <?php
        // Add feature numbers and a preload class to the first image
        $featureNumber = $id + 1;
        $featureClasses = 'feature' . $featureNumber;
        if ($featureNumber == 1) {
          $featureClasses .= ' preload';
        }
      ?>
      <li <?php print 'class="' . $featureClasses . '"'; ?>>
        <?php print $row; ?>
      </li>
    <?php endforeach; ?>
  </ul>
</div><!-- /features -->
<ul id="featurenav" class="hidden-phone">
  <?php foreach ($rows as $id => $row): ?>
    <?php $featureNumber = $id + 1; ?>
    <li <?php print 'class="feature' . $featureNumber .'"'; ?>>
      <button>•</button>
    </li>
  <?php endforeach; ?>
</ul>