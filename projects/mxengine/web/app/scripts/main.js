require.config({
	paths: {
		"jquery": "vendor/jquery/jquery",
		"underscore": "vendor/underscore-amd/underscore",
		"backbone": "vendor/backbone-amd/backbone",
		"raphael": "vendor/raphael/raphael",
		"text": "vendor/requirejs-text/text",
		"log": "base/Logger",
	}
});

require(['log','views/Overlay','libs/prefixfree.min'], function(log, OverlayView) {
	log.info("Starting Wescam Overlays...");
	
	var overlay = new OverlayView;
	
	if (typeof turretProxy != 'undefined') {
		turretProxy.onOverlayReady(overlay.getModel());
	}
		
	log.debug("Wescam app loaded.");
});
