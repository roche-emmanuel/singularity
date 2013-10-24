define(["log","jquery","backbone","base/Tools","models/Level2Menu"],function(log,$,Backbone,tools,MenuBase) {
		
	var Class = MenuBase.extend({
		
		setupMenu: function() {
			MenuBase.prototype.setupMenu.apply(this, arguments);
		
			this._name = "menu.gimbal";
			this.setFrameSize(49,1);
		},
				
		setupContent: function() {
			this.setTitle("GIMBAL");
			
			this.addModuleStatus(7);
			
			this.addStatus("processor_temperature","XX  deg C",{label: "PROCESSOR TEMPERATURE", x: 0, width: 10});
			this.addStatus("humidity","XX  %",{label: "HUMIDITY", x: 4, width: 6});
			this.addStatus("voltage","XX.X  V",{label: "VOLTAGE", x: 4, width: 7});

			this.addStatus("azimuth_stabilization","X.XX  uRad",{label: "AZIMUTH STABILIZATION", x: 1, width: 11});
			this.addStatus("elevation_stabilization","X.XX  uRad",{label: "ELEVATION STABILIZATION", x: 1, width: 11});
			
			this.addStatus("azimuth_position","X.XX  deg",{label: "AZIMUTH POSITION", x: 2, width: 12});
			this.addStatus("elevation_position","X.XX  deg",{label: "ELEVATION POSITION", x: 2, width: 12});

			this.fixFrameHeight()

			
			this.addButtonLine(["done","bit","alarms"],["DONE","BIT","ALARMS"],4,
							   {x:3, y: 2, valign: "bottom", ref: "window", align: "right"});
							   
		},
	});
	
	return Class;  
}); 