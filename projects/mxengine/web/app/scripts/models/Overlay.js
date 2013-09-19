// Simple implementation of a Controller system for the overlay display.

define(["log","backbone","models/OverlayController"],function(log,Backbone,Controller) {
	
	var con = new Controller;
	
	var Overlay = Backbone.Model.extend({
		
		initialize: function() {
			log.info("Initializing Overlay Model");
			
			var list = con.getStdFields();
			for (var i in list) {
				this.on("change:"+list[i],con["set_"+list[i]]);
			};
		},
	
		// Setup the default values for the display:
		setDefaults : function() {
			log.info("Setting Overlay default values.")
			this.set({
				video_in_control: "EOW",
				time : "12:22:22",
			});
		},
		
		setField : function(field,value) {
			log.info("Calling setField with: field="+field+", value="+value);
			var obj = {};
			obj[field] = value;
			this.set(obj);
		}
	});
	
	return Overlay;  
}); 