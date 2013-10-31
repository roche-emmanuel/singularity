require.config({
	paths: {
		"jquery": "vendor/jquery/jquery",
		"underscore": "vendor/underscore-amd/underscore",
		"backbone": "vendor/backbone-amd/backbone",
		"raphael": "vendor/raphael/raphael",
		"raphaelsvg": "vendor/raphael.export/raphael.export",		
		"rgbcolor": "libs/rgbcolor",		
		"canvg": "external/canvg",		
		"text": "vendor/requirejs-text/text",
		"format": "vendor/string-format/string-format",
		"sprintf": "vendor/sprintf/src/sprintf",
		"log": "base/Logger",
	},
	
    shim: {
        'raphaelsvg': {
            //These script dependencies should be loaded before loading
            deps: ['raphael'],
        },
		'sprintf': {
			exports: "sprintf"
		},
	}
});

require(['log','views/Overlay',"models/OverlayManager", 'libs/prefixfree.min'], function(log, OverlayView,  manager) {
	log.info("Starting Wescam Overlays...");
	
	var overlay = new OverlayView;
	
	if (typeof turretProxy != 'undefined') {
		turretProxy.onOverlayReady(manager);
	}
		
	log.debug("Wescam app loaded.");
});
