define(['log','jquery','config'], function(log,$,cfg) {
	log.debug("Setting up main layout...");
	
	// add a loader on the window:
	// $(window).load(function(){
	
	var ww = $(window).width();
	var hh = $(window).height();
	log.debug("Window dimensions are: "+ww+"x"+hh);
	
	var sw = cfg.block_width; // screen width
	var sh = cfg.block_height; // screen height
	log.debug("Number of blocks are: "+sw+"x"+sh);

	var xr = ww/sw;
	var yr = hh/sh;

	// Set the font size. We leave one pixel above, and one pixel under.
	var fsize = Math.floor(yr-2);
	var test = $('#compute');
	test.css('fontSize',fsize);
	var height = test.height(); //(test.clientHeight);
	var width = test.width(); //(test.clientWidth);
	
	// Compute the letter-spacing value and padding in pixels:
	var ls = xr-width;
	var pad = ls/2.0;
	
	// Update the styles on the body element:
	//$('div').css('minHeight',fsize+2);
	$('.block div').css({letterSpacing: ls, paddingLeft: pad, paddingRight: pad, marginRight: -ls, paddingTop: 1, paddingBottom: 1});
	$('.block div').css({fontSize: fsize, lineHeight: (fsize)+'px'});
	$('#target_name').css({letterSpacing: ls+xr/2.0, marginRight: -ls-xr/2.0})
	
	// });
});
