define(["log","jquery","backbone","base/Tools","models/Level2Menu"],function(log,$,Backbone,tools,MenuBase) {
		
	var Class = MenuBase.extend({
		
		setupMenu: function() {
			MenuBase.prototype.setupMenu.apply(this, arguments);
			this.setFrameBorders({left: 2, right: 2, top: 4, bottom: 2})
			this._name = "menu.mission";
			this.setFrameSize(41,1);
		},
				
		setupContent: function() {
			this.setTitle("MISSION");
						
			var y = this._currentYPos
			this.addValue("day","XX",{label: "DATE", width: 2, x:14});
			this.addValue("month","XXX",{ width: 3, x:8, y:y});
			this.addValue("year","XXXX",{ width: 4, x:1, y:y});
			
			var y = this._currentYPos
			this.addValue("hours","XX",{label: "LOCAL TIME", width: 2, x:14});
			this.addValue("minutes","XX",{ width: 2, x:8, y:y});
			this.addValue("seconds","XX",{ width: 2, x:1, y:y});

			this.addValue("utc_offset","XXXX",{label: "UTC OFFSET", width: 5, x:1});

			this.addEmptyLine()

			this.addValue("aircraft_location","XXXXXXXXXXX",{label: "AIRCRAFT LOCATION", width: 11, x:1});
			this.addValue("target_location","XXXXXXXXXXX",{label: "TARGET LOCATION", width: 11, x:1});
			this.addValue("aircraft_altitude","XXXXXX",{label: "AIRCRAFT ALTITUDE", width: 6, x:1});
			this.addValue("terrain_altitude","XXXXXX",{label: "TERRAIN ALTITUDE", width: 6, x:1});
			this.addValue("slant_range","XXXXXX",{label: "SLANT RANGE", width: 14, x:1});

			this.addEmptyLine()
			this.addSeparator()
			this.addEmptyLine()
	
			this.addValue("LRF_timeout","XX",{label: "LRF TIMEOUT", x: 1, width: 2});
			this.addValue("terrain_altitude_source","XXXXXX",{label: "TERRAIN ALTITUDE SOURCE", x: 1, width: 6});
			this.addValue("terrain_altitude_value","XXXXX",{label: "TERRAIN ALTITUDE", x: 1, width: 5});
			
			this.fixFrameHeight()
				
			this.addButtonLine(["done","factory_default","set_time"],["DONE","FACTORY DFLT","SET TIME"],4,
							   {x:3, y: 2, valign: "bottom", ref: "window", align: "right"});
							   
		},
	});
	
	return Class;  
}); 