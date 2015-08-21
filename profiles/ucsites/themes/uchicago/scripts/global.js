function greater980()
{
	if (document.documentElement.clientWidth > 980) {
		// Move the homefeature title down the DOM to display correctly
		jQuery('.view-homepage-features .views-row').each(function(index) {
			jQuery(this).find('.homefeature').append(jQuery(this).find('.homefeature .grid_5'));
		});
	}
}

function lessEqual980()
{
	if (document.documentElement.clientWidth <= 980) {
		// Move the homefeature title further up the DOM to display correctly
		jQuery('.view-homepage-features .views-row').each(function(index) {
			jQuery(this).find('.homefeature').prepend(jQuery(this).find('.homefeature .grid_5'));
		});
	}
}

function greater700()
{
	jQuery('#sidebar-first').prepend(jQuery('#block-system-main-menu'));
}

function lessEqual700()
{
	if (document.documentElement.clientWidth <= 700) {
		// for small screens, move the nav to the top of the DOM
		jQuery('#content').prepend(jQuery('#block-system-main-menu'));
		// Make mini features look just like regular sidebar blocks
		//jQuery('#block-views-homepage-mini-features-block h2').addClass('mini-feature-smallscreen');
	}
}

jQuery(window).resize(function() {

	jQuery(function(){
		var startWidth = document.body.clientWidth;
		
		if (startWidth < 700)
		{
			jQuery(window).resize(function() {
				if(document.body.clientWidth > 700)
				{
					jQuery('#block-system-main-menu').removeAttr('style');
					jQuery('.sidebar .block h2').next('.content').removeAttr('style');
					return;
				}
			});
		}

		if (startWidth > 700)
		{
			jQuery(window).resize(function() {
				if(document.body.clientWidth < 700)
				{
					if (jQuery('#toggle-nav').hasClass('open'))
					{
						jQuery('#block-system-main-menu').show();
					}
					jQuery('.sidebar .block h2').each(function(){
						if (jQuery(this).hasClass('open'))
						{
							jQuery(this).next('.content').show();
						}
					});
				}
			});
		}

		else {
			return;
		}
	});

	greater980();
	lessEqual980();
	greater700();
	lessEqual700();

	if (document.documentElement.clientWidth > 980) {
		// Homepage features slideshow
		if (jQuery('div#feature-clicker').length==0) {
			jQuery('div.view-homepage-features div.view-content').after('<div id="feature-clicker">').cycle({speed:5000,timeout:10000,fastOnEvent:0,pager:'#feature-clicker',cleartypeNoBg:true});
		}
	}

	if (document.documentElement.clientWidth <= 980)
	{
		jQuery('div.view-homepage-features div.view-content').cycle('destroy');
		jQuery('div.view-homepage-features div.views-row').removeAttr('style');
		jQuery('div#feature-clicker').remove();
	}

});

jQuery(document).ready(function () {

	greater980();
	lessEqual980();
	greater700();
	lessEqual700();

	jQuery('#toggle-nav').click(function () {
		if (jQuery(window).width() <= 700)
		{
			jQuery('#block-system-main-menu').slideToggle('slow');
			jQuery(this).toggleClass('open');
		}
	});

	jQuery('.sidebar .block h2').click(function (){
		if (jQuery(window).width() <= 700)
		{
			jQuery(this).next('.content').toggle('slow');
			jQuery(this).toggleClass('open');
		}
	})

	if (document.documentElement.clientWidth > 980) {
		// Homepage features slideshow
		if (jQuery('div.view-homepage-features div.view-content').length) {
			jQuery('div.view-homepage-features div.view-content').after('<div id="feature-clicker">').cycle({speed:5000,timeout:10000,fastOnEvent:0,pager:'#feature-clicker',cleartypeNoBg:true});
		}
	}

	if (document.documentElement.clientWidth > 700) {
		// Slideshow for right column images on basic and news pages
		if (jQuery('div.slideshow').length) {
				// Force it to wait until all images are loaded before applying cycle, otherwise image height is messed up
				jQuery(window).load(function() {
					jQuery('.rightcolimage-outerwrapper').show(); // This is hidden so that all the images aren't visible before they all disappear
					jQuery('div.slideshow').cycle({fx:'scrollLeft',speed:300,timeout:0,next:'#slide-next',prev:'#slide-previous',cleartypeNoBg:true});
				});
		}
		// If image zooming has been specified, add the magnifying glass
		if (jQuery('.field-name-field-rightimage.zoom a.colorbox').length) {
			var magnify = '<div class="magnify">Magnify the image</div>';
			jQuery('.field-name-field-rightimage a.colorbox').prepend(magnify);
		}
		// If no image zooming has been specified, remove the anchors from around the right column images (not the most efficient solution; ideally, we could tell Drupal not to use the colorbox style here)
		if (jQuery('.field-name-field-rightimage.no-zoom a.colorbox').length) {
			jQuery('.field-name-field-rightimage.no-zoom a.colorbox img').unwrap();
		}
		// hide the carousel-prev button on load initially because it just shouldn't be there
		if (jQuery('.carousel-prev').length) {
			jQuery('.carousel-prev').addClass('disabled');
		}
	}

	// Show elements for which we're preventing FOUC
	jQuery('html.fuocjs fieldset.collapsible').show();
	// Detect Operating System for Webfont PC fix
	jQuery('html').addClass( navigator.platform );
	// The last menu item in the toolbar is the feedback link which goes to a Wufoo form. Open it a new window so users don't get confused:
	if (jQuery('#support-link').length) {
		jQuery('#support-link a').click(function() { window.open(this.href); return false; });
	}
	// This is an ugly hack to remove the magnify glass above the right column image when it's only 198px wide (lots of old images are this width)
	if (jQuery('.field-name-field-rightimage.no-slideshow img').length) {	
		var imgWidth = jQuery('.field-name-field-rightimage.no-slideshow img').width();
		if (imgWidth <= '198') { jQuery('.magnify').remove(); };
	}
});