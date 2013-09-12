require.config({
	paths: {
		"jquery": "vendor/jquery/jquery",
		"underscore": "vendor/underscore-amd/underscore",
		"backbone": "vendor/backbone-amd/backbone",
		"text": "vendor/requirejs-text/text",
		"log": "base/Logger",
	}
});

// global level update method to trigger an update of the display.
var updateFunc;

require(['log','views/Overlay','libs/prefixfree.min'], function(log, OverlayView) {
	log.info("Starting Wescam Overlays...");
	
	new OverlayView;
	
	updateFunc = function() {
		log.info("Hello from update function!")
	}
	
	log.debug("Wescam app loaded.");
});
