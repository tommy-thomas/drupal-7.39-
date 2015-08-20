jQuery(document).ready(function () {
	// Make the main content image fieldset collapsed by default
	// This is kind of an ugly hack. Would prefer to install the Field Group module but it still has bugs exporting with features
	if (jQuery('#edit-field-maincontentimage-und').length) {
		jQuery('#edit-field-maincontentimage-und').addClass('collapsible collapsed collapse-processed');
		jQuery('#edit-field-maincontentimage-und span.fieldset-legend').wrap('<a href="#" />');
		jQuery('#edit-field-maincontentimage-und span.fieldset-legend').click( function() {
		 jQuery('#edit-field-maincontentimage-und').toggleClass('collapsed');
		 return false;
		});
	}
	// Add a wide stylesheet when you click on the full width option for basic pages
	jQuery('#edit-field-fullwidth-und').click(function() {
		for(i in CKEDITOR.instances) {
		    if (jQuery('#edit-field-fullwidth-und').is(':checked')) {
	    	    jQuery(CKEDITOR.instances[i].document.$).find('body').addClass('wide');
	        } else {
	        	jQuery(CKEDITOR.instances[i].document.$).find('body').removeClass('wide');
	        }
	    }
	});
	jQuery('#directory-listing-node-form #edit-menu-enabled').click(function() {
		if (jQuery('#directory-listing-node-form #edit-menu-enabled').is(':checked') & (jQuery('#directory-listing-node-form #edit-menu-link-title').val() == '') ) {
			jQuery('#directory-listing-node-form #edit-menu-link-title').val(jQuery('#edit-field-directoryfirstname-und-0-value').val() + ' ' + jQuery('#edit-field-directorylastname-und-0-value').val());
		}
	})

	// Make sure users do not click the Save Settings button more than one
	jQuery('#templatron-settings-form').submit(function() {
	  submitButton = jQuery(this).find('#edit-submit');
	  submitButton.attr('disabled', 'disabled')
	  	.addClass('form-button-disabled')
	  	.val('Saving...please wait')
	  	.after('<div class="ajax-progress ajax-progress-throbber"><div class="throbber">&nbsp;</div></div>');
	});
});
