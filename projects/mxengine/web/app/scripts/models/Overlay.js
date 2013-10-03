// Simple implementation of a Controller system for the overlay display.

define(["log","jquery","backbone","models/OverlayController","base/Tools"],function(log,$,Backbone,Controller,tools) {
	
	var con = new Controller;
	
	var Overlay = Backbone.Model.extend({
		
		initialize: function() {
			log.info("Initializing Overlay Model");
			
			var list = con.getAllFields();
			for (var i in list) {
				// this.on("change:"+list[i],function(model){con["set_"+list[i]](model)});
				this.on("change:"+list[i],con["set_"+list[i]],con);
			};
			
			this._initialized = false;
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
			
			this._initialized = true
		},
		
		setField : function(field,value) {
			if (this._initialized == false) {
				log.info("Cannot call setField when not initialized !!!");
				return;
			}
			
			log.info("Calling setField with: field="+field+", value="+value);
			var obj = {};
			obj[field] = value;g
			this.set(obj);
		},
		
		toggleOverlays : function() {
			tools.toggleVisibility("#overlays");
		},
		
		toggleMenus : function() {
			tools.toggleVisibility($("#menus"));
		},
		
	});
	
	return Overlay;  
}); 