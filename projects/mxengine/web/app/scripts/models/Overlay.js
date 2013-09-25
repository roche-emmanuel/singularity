// Simple implementation of a Controller system for the overlay display.

define(["log","backbone","models/OverlayController"],function(log,Backbone,Controller) {
	
	var con = new Controller;
	
	var Overlay = Backbone.Model.extend({
		
		initialize: function() {
			log.info("Initializing Overlay Model");
			
			var list = con.getAllFields();
			for (var i in list) {
				// this.on("change:"+list[i],function(model){con["set_"+list[i]](model)});
				this.on("change:"+list[i],con["set_"+list[i]],con);
			};
		},
	
		// Setup the default values for the display:
		setDefaults : function() {
			log.info("Setting Overlay default values.")
			con.setupDefaults();
			this.set({
				current_stream: "EOW",
				video_in_control: "EOW",
				target_name: "TGT",
				platform_name: "ACFT",
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