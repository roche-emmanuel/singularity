// Simple definition of a logger module.
define(function() {
	var logMsg = function(msg) {
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
