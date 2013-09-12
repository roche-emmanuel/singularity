// Simple definition of a logger module.
define(function() {
	var logMsg = function(msg) {
		// check if there is a global logger object available:
		if (typeof logger != 'undefined') {
			logger.log(msg);
		}
		console.log(msg);
	};
		
	return {
		info: function(msg) {
			logMsg("[INFO] "+msg);
		},
		
		debug: function(msg) {
			logMsg("[DEBUG] "+msg);
		},
		
		error: function(msg) {
			logMsg("[ERROR] "+msg);
		},
	};
});
