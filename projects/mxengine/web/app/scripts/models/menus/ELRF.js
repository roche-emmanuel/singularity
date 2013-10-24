define(["log","jquery","backbone","base/Tools","models/Level2Menu"],function(log,$,Backbone,tools,MenuBase) {
		
	var Class = MenuBase.extend({
		
		setupMenu: function() {
			MenuBase.prototype.setupMenu.apply(this, arguments);
			this.setFrameBorders({left: 2, right: 2, top: 4, bottom: 2})
			this._name = "menu.ELRF";
			this.setFrameSize(49,1);
		},
				
		setupContent: function() {
			this.setTitle("RANGEFINDER");
			
			this.addModuleStatus(1);
			this.addEmptyLine();
			
			this.addStatus("range_mode","XXXXX",{label: "RANGE MODE", x: 1, width: 4});
			this.addStatus("laser_state","XXXXXXXX",{label: "LASER STATE", x: 1, width: 8});
			this.addStatus("target_found","XXXXX",{label: "TARGET FOUND", x: 1, width: 5});
			this.addStatus("range","XXXXXm",{label: "RANGE", x: 0, width: 6});
			this.addStatus("temp_status","XXXXXXXXX",{label: "TEMP STATUS", x: 1, width: 10});
			
			this.addEmptyLine()
			this.addSeparator()
			this.addEmptyLine()
	
			this.addValue("target","XXXX",{label: "TARGET", x: 1, width: 5});
			this.addValue("min_range","XXXXX",{label: "MIN. RANGE", x: 1, width: 5});
			this.addValue("max_range","XXXXX",{label: "MAX. RANGE", x: 1, width: 5});
			
			this.fixFrameHeight()
				
			this.addButtonLine(["done","bit","alarms"],[],4,
							   {x:3, y: 2, valign: "bottom", ref: "window", align: "right"});
							   
		},
	});
	
	return Class;  
}); 