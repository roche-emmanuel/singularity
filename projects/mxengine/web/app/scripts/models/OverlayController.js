// Simple implementation of a Controller system for the overlay display.

define(["log","backbone"],function(log,Backbone) {
		
	var Controller = Backbone.Model.extend({
		
		el: $('#overlays'),
		
		initialize: function() {
			log.info("Initializing Overlay Controller");
		},
	
		setVIC : function(model) {
			// Set the value of the VIC field:
			$("#vic").html(model.get("video_in_control"));
		},
		
		setTime : function(model) {
			$("#time").html(model.get("time"));
		}
	});
	
	return Controller;  
}); 