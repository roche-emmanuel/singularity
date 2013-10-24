define(["log","jquery","backbone","base/Tools","models/Level2Menu"],function(log,$,Backbone,tools,MenuBase) {
		
	var Class = MenuBase.extend({
		
		setupMenu: function() {
			MenuBase.prototype.setupMenu.apply(this, arguments);
			this.setFrameBorders({left: 2, right: 3, top: 4, bottom: 2})
			this._name = "menu.IR";
			this.setFrameSize(49,1);
		},
				
		setupContent: function() {
			this.setTitle("IR");
			
			this.addModuleStatus(0);
			this.addEmptyLine();
			
			this.addStatus("fov","XX.XX  deg",{label: "HD FOV", x: 0, width: 11});
			this.addStatus("focal_length","XXXX  mm",{label: "FOCAL LENGTH", x: 1, width: 8});
			this.addStatus("focus","XXXXX",{label: "FOCUS", x: 5, width: 5});
			this.addStatus("sensitivity","XXXX",{label: "SENSITIVITY", x: 5, width: 4});
			this.addStatus("level","XXXX",{label: "LEVEL", x: 5, width: 4});
			this.addStatus("filter","XXX",{label: "FILTER", x: 5, width: 3});

			this.addStatus("temp_status","XX",{label: "TEMP STATUS", x: 5, width: 10});
			this.addStatus("polarity","XXXXXXXXX",{label: "POLARITY", x: 5, width: 9});

			this.addEmptyLine()
			this.addSeparator()
			this.addEmptyLine()

			this.addValue("temporal_proc","XXX",{label: "TEMPORAL PROC", x: 1, width: 3});
			this.addValue("spatial_proc","XXX",{label: "SPATIAL PROC", x: 1, width: 3});
			this.addValue("ezoom","XXX",{label: "EZOOM", x: 1, width: 3});
			this.addValue("scene_setup","XXXXXXX",{label: "SCENE SETUP", x: 1, width: 7});
			this.addValue("gate","XXXXXXX",{label: "GATE", x: 1, width: 7});
			this.addValue("camera_extender","XXXX",{label: "CAMERA EXTENDER", x: 1, width: 4});
			
			this.fixFrameHeight()
	
			this.addButton("calibration","CALIBRATION",{x:3, y: 2, valign: "bottom", ref: "window", align: "left"});
			
			this.addButtonLine(["done","bit","alarms","misc"],[],4,
							   {x:3, y: 2, valign: "bottom", ref: "window", align: "right"});
							   
		},
	});
	
	return Class;  
}); 