// Simple definition of a logger module.
define(function() {
	var logMsg = function(msg) {
		console.log(msg);
	};
	
	var current_level = 0;
	
	var res = {
		DEBUG:0,
		INFO:1,
		WARN:2,
		ERROR:3,	
	};
	
	res.setLevel = function(level) {
		current_level = level;
	};
	
	res.info = function(msg) {
		if (current_level <= res.INFO) {
			logMsg("[INFO] "+msg);
		}
	};
	
	res.debug = function(msg) {
		if (current_level <= res.DEBUG) {
			logMsg("[DEBUG] "+msg);
		}
	};
	
	res.warn = function(msg) {
		if (current_level <= res.WARN) {
			logMsg("[WARN] "+msg);
		}
	};

	res.error = function(msg) {
		if (current_level <= res.ERROR) {
			logMsg("[ERROR] "+msg);
		}
	};
	
	res.check = function(cond,msg) {
		if (!cond) {
			res.error(msg);
		}
	}
	return res;
});
