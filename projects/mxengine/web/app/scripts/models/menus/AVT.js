define(["log","jquery","backbone","base/Tools","models/Level2Menu"],function(log,$,Backbone,tools,MenuBase) {
		
	var Class = MenuBase.extend({
		
		setupMenu: function() {
			MenuBase.prototype.setupMenu.apply(this, arguments);
			this.setFrameBorders({left: 2, right: 2, top: 4, bottom: 2})
			this._name = "menu.AVT";
			this.setFrameSize(49,1);
		},
				
		setupContent: function() {
			this.setTitle("AVT");
			
			this.addStatus("module_mode","XXXX",{label: "MODE", x: 0, width: 11});
			this.addEmptyLine();
			this.addStatus("error_level","XX",{label: "ALARMS", x: 0, width: 5});
			this.addEmptyLine();
			this.addStatus("track_status","XX",{label: "TRACK STATUS", x: 0, width: 6});
			this.addEmptyLine()
			this.addSeparator()
			this.addEmptyLine()
	
			this.addValue("algorithm","XXXX",{label: "ALGORITHM", x: 1, width: 11});
			this.addEmptyLine()
			this.addValue("track_window","XXXXX",{label: "TRACK WINDOW", x: 1, width: 6});
						
			this.fixFrameHeight()
				
			this.addButtonLine(["done","bit","alarms"],[],4,
							   {x:3, y: 2, valign: "bottom", ref: "window", align: "right"});
							   
		},
	});
	
	return Class;  
}); 