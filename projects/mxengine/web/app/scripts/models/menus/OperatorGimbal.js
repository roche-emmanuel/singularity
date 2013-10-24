define(["log","jquery","backbone","base/Tools","models/Level2Menu"],function(log,$,Backbone,tools,MenuBase) {
		
	var Class = MenuBase.extend({
		
		setupMenu: function() {
			MenuBase.prototype.setupMenu.apply(this, arguments);
			this.setFrameBorders({left: 2, right: 2, top: 4, bottom: 2})
			this._name = "menu.operator_gimbal";
			this.setFrameSize(53,1);
		},
				
		setupContent: function() {
			this.setTitle("OPERATOR GIMBAL");
						
			var y = this._currentYPos
			this.addValue("azimuth_sense","XXXX",{label: "AZIMUTH SENSE", width: 4, x:26});
			this.addValue("elevation_sense","XXXX",{label: "ELEVATION SENSE", width: 4, x:26});
			
			this.addEmptyLine()

			this.addValue("zoom_multiplier","XXX",{label: "ZOOM MULTIPLIER", width: 3, x:26});
			this.addValue("zoom_multiplier_az_gain","XXX",{label: "ZOOM MULT AZ GAIN", width: 3, x:26});
			this.addValue("zoom_multiplier_elev_gain","XXX",{label: "ZOOM MULT EL GAIN", width: 3, x:26});

			this.addEmptyLine()
			
			this.addValue("azimuth_gain","XXX",{label: "AZIMUTH GAIN", width: 3, x:26});
			this.addValue("elevation_gain","XXX",{label: "ELEVATION GAIN", width: 3, x:26});

			this.addEmptyLine()
			this.addSeparator()
			this.addEmptyLine()
	
			this.addValue("autoscan","XXX",{label: "AUTOSCAN", x: 17, width: 3});
			this.addValue("autoscan_az_center","XXXX",{label: "AUTOSCAN AZIMUTH CENTER", x: 17, width: 4});
			this.addValue("autoscan_elev_center","XXX",{label: "AUTOSCAN ELEVATION CENTER", x: 17, width: 3});
			this.addValue("autoscan_width","XXX",{label: "AUTOSCAN WIDTH", x: 17, width: 3});
			this.addValue("autoscan_rate","XXX",{label: "AUTOSCAN RATE", x: 17, width: 3});
			
			this.fixFrameHeight()
			
			// second part of status:
			this.addValue("azimuth_forward","XXXX",{label: "AZIMUTH FORWARD", width: 4, x:1, y: y, labelx:25});
			this.addValue("elevation_forward","XXX",{label: "ELEVATION FORWARD", width: 3, x:1, labelx:25});
			
			this.addEmptyLine()

			this.addValue("steering_filter","XXX",{label: "STEERING FILTER", width: 3, x:1, labelx:25});
				
			this.addButtonLine(["done","factory_default","auto_null"],["DONE","FACTORY DFLT","AUTO NULL"],4,
							   {x:3, y: 2, valign: "bottom", ref: "window", align: "right"});
							   
		},
	});
	
	return Class;  
}); 