define(["log","jquery","backbone","base/Tools","models/Level2Menu"],function(log,$,Backbone,tools,MenuBase) {
		
	var Class = MenuBase.extend({
		
		setupMenu: function() {
			MenuBase.prototype.setupMenu.apply(this, arguments);
			this.setFrameBorders({left: 2, right: 2, top: 4, bottom: 2})
			this._name = "menu.illuminator2";
			this.setFrameSize(41,1);
		},
				
		setupContent: function() {
			this.setTitle("ILLUMINATOR-D");
			
			this.addModuleStatus();
			this.addEmptyLine();
			
			this.addStatus("state","XXXXXXXX",{label: "STATE - WIDE", width: 8});
			if(this.hasItem("state_narrow")) {
				this.addStatus("state_narrow","XXXXXXXX",{label: "STATE - NARROW", width: 8});
			}
			this.addEmptyLine();			
			this.addStatus("temperature","XXXXX",{label: "TARGET FOUND", width: 12});
			
			this.addEmptyLine()
			this.addSeparator()
			this.addEmptyLine()
	
			this.addValue("max_usage","XX",{label: "MAX USAGE (MINS)", x: 1, width: 2});
			this.addEmptyLine()
			
			this.addValue("mode","XXXXX",{label: "MODE - WIDE", x: 1, width: 5});
			if(this.hasItem("mode_narrow")) {
				this.addValue("mode_narrow","XXXXX",{label: "MODE - NARROW", x: 1, width: 5});
			}
			this.fixFrameHeight()
				
			this.addButtonLine(["done","bit","alarms"],[],4,
							   {x:3, y: 2, valign: "bottom", ref: "window", align: "right"});
							   
		},
	});
	
	return Class;  
}); 