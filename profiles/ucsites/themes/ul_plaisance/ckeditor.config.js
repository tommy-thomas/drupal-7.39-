/*
Copyright (c) 2003-2011, CKSource - Frederico Knabben. All rights reserved.
For licensing, see LICENSE.html or http://ckeditor.com/license
*/

/*
 WARNING: clear browser's cache after you modify this file.
 If you don't do this, you may notice that browser is ignoring all your changes.
 */
CKEDITOR.editorConfig = function(config) {
    config.indentClasses = [ 'rteindent1', 'rteindent2', 'rteindent3', 'rteindent4' ];

    // [ Left, Center, Right, Justified ]
    config.justifyClasses = [ 'rteleft', 'rtecenter', 'rteright', 'rtejustify' ];

    // Protect PHP code tags (<?...?>) so CKEditor will not break them when
    // switching from Source to WYSIWYG.
    // Uncommenting this line doesn't mean the user will not be able to type PHP
    // code in the source. This kind of prevention must be done in the server
    // side
    // (as does Drupal), so just leave this line as is.
    config.protectedSource.push(/<\?[\s\S]*?\?>/g); // PHP Code
    // config.protectedSource.push(/<code>[\s\S]*?<\/code>/gi); // Code tags
    config.extraPlugins = '';

    /*
   * Append here extra CSS rules that should be applied into the editing area.
   * Example: 
   * config.extraCss = 'body {color:#FF0000;}';
   */
    //config.extraCss = 'body {color:#FF0000;}';
    /**
   * Sample extraCss code for the "marinelli" theme.
   */
    if (Drupal.settings.ckeditor.theme == "marinelli") {
        config.extraCss += "body{background:#FFF;text-align:left;font-size:0.8em;}";
        config.extraCss += "#primary ol, #primary ul{margin:10px 0 10px 25px;}";
    }
    if (Drupal.settings.ckeditor.theme == "newsflash") {
        config.extraCss = "body{min-width:400px}";
    }
    // If the full width option exists and is checked, add the 'wide' bodyClass
    if (jQuery('#edit-field-fullwidth-und').length) {
      if (jQuery('#edit-field-fullwidth-und').is(':checked')) {
        config.extraCss += 'body{width:900px;}';
      }
    }

    /**
   * CKEditor's editing area body ID & class.
   * See http://drupal.ckeditor.com/tricks
   * This setting can be used if CKEditor does not work well with your theme by default.
   */
   /*
    config.bodyClass = '';
    config.bodyId = '';
  */
		
  config.filebrowserWindowWidth = 850;  
  config.startupOutlineBlocks = true;
  config.disableObjectResizing = true;
  config.width = 600;
  config.resize_minWidth = 600;
  config.removePlugins = 'image,forms';
  config.height = 550;
  config.removeFormatTags = 'b,big,del,dfn,font,i,ins,kbd,q,samp,small,span,tt,u,var'

};

CKEDITOR.on( 'dialogDefinition', function( ev ) {
		// Take the dialog name and its definition from the event
		// data.
		var dialogName = ev.data.name;
		var dialogDefinition = ev.data.definition;

		// Check if the definition is from the dialog we're
		// interested on (the "Link" dialog).
		if ( dialogName == 'image' )
		{
			// Get a reference to the "Link Info" tab.
			var infoTab = dialogDefinition.getContents( 'info' );

			// Remove some of the fields we don't want
			infoTab.remove( 'txtBorder' );
			infoTab.remove( 'txtHSpace' );
			infoTab.remove( 'txtVSpace' );
			infoTab.remove( 'lockRatio' );
		}
		
		if ( dialogName == 'link' )
		{
			// Hide the advanced tab.
			dialogDefinition.removeContents( 'advanced' );
		}
		
		if ( dialogName == 'table' )
		{
			// Get a reference to the "Link Info" tab.
			var infoTab = dialogDefinition.getContents( 'info' );

			// Remove some of the fields we don't want
			infoTab.remove( 'txtWidth' );
			infoTab.remove( 'cmbWidthType' );
			infoTab.remove( 'txtHeight' );
			infoTab.remove( 'htmlHeightType' );
			infoTab.remove( 'txtCellSpace' );
			infoTab.remove( 'txtCellPad' );
			infoTab.remove( 'txtBorder' );
			infoTab.remove( 'cmbAlign' );
		}
		
});

