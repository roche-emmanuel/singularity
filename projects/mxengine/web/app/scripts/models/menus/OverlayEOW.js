define(["log","jquery","backbone","base/Tools","models/Level2Menu"],function(log,$,Backbone,tools,MenuBase) {
	var Class = MenuBase.extend({
		
		setupMenu: function() {
			MenuBase.prototype.setupMenu.apply(this, arguments);
			this.setFrameBorders({left: 2, right: 2, top: 4, bottom: 2})
			this._name = "menu.overlay_EOW";
			this.setFrameSize(35,1);
		},
				
		setupContent: function() {
			this.setTitle("OVERLAY EOW");
									
			this.addValue("overlay_enabled","XXX",{label: "OVERLAY", width: 3, x:1});
			this.addValue("intensity","XXX",{label: "FOREGROUND INTENSITY", width: 3, x:1});
			this.addValue("reverse_intensity","XXX",{label: "BACKGROUND INTENSITY", width: 3, x:1});				

			this.addValue("los_reticle_enabled","XXX",{label: "LOS RETICLE", width: 3, x:1});
			this.addValue("fov_graphics_enabled","XXX",{label: "FL GRAPHICS", width: 3, x:1});
			this.addValue("az_elev_scales_enabled","XXX",{label: "AZ/EL SCALES", width: 3, x:1});
			this.addValue("sensor_enabled","XXX",{label: "SENSOR", width: 3, x:1});
			
			if(this.hasItem("aircraft_and_target_enabled")) {
				this.addValue("aircraft_and_target_enabled","XXX",{label: "A/C & TARGET", width: 3, x:1});
			}

			if(this.hasItem("platform_data_enabled")) {
				this.addValue("platform_enabled","XXX",{label: "AIRCRAFT LOCATION", width: 3, x:1});			
				this.addValue("platform_data_enabled","XXX",{label: "AIRCRAFT DATA", width: 3, x:1});			
			}
			else {
				this.addValue("platform_enabled","XXX",{label: "AIRCRAFT", width: 3, x:1});
			}
			
			if(this.hasItem("target_enabled")) {
				this.addValue("target_enabled","XXX",{label: "TARGET", width: 3, x:1});
			}

			this.addValue("date_time_enabled","XXX",{label: "DATE & TIME", width: 3, x:1});
			this.addValue("next_fov_enabled","XXX",{label: "NEXT FOV", width: 3, x:1});
			this.addValue("north_indicator_enabled","XXX",{label: "NORTH INDICATOR", width: 3, x:1});
			
			this.fixFrameHeight()
				
			this.addButtonLine(["done","factory_default"],["DONE","FACTORY DFLT"],4,
							   {x:3, y: 2, valign: "bottom", ref: "window", align: "right"});
							   
		},
	});
	
	return Class;  
}); 