// Simple implementation of a Controller system for the overlay display.

define(["log","backbone"],function(log,Backbone) {

	var stdFields = [
		"date","time","utc_offset",
		"steering_mode",
		"video_in_control"];
	
	var proto = {		
		el: $('#overlays'),
		
		initialize: function() {
			log.info("Initializing Overlay Controller");
		},

		getStdFields : function() {
			return stdFields;
		},
	};

	for (var i in stdFields) {
		var name = stdFields[i]
		proto["set_"+name] = (function(name) {
			return function(model) {
				//log.info("Should set value for: "+name);
				$("#"+name).html(model.get(name));
			};
		})(name);
	};
			
	var Controller = Backbone.Model.extend(proto);
	
	return Controller;  
}); 