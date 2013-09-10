require.config({
	paths: {
		"jquery": "vendor/jquery/jquery",
		"underscore": "vendor/underscore-amd/underscore",
		"backbone": "vendor/backbone-amd/backbone",
		"text": "vendor/requirejs-text/text",
		"log": "base/Logger",
	}
});

require(['log','views/Overlay'], function(log, OverlayView) {
	log.info("Starting Wescam Overlays...");
	
	new OverlayView;
	
	log.debug("Wescam app loaded.");
});
