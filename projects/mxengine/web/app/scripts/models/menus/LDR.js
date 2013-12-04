define(["log","jquery","backbone","base/Tools","models/Level2Menu"],function(log,$,Backbone,tools,MenuBase) {
		
	var Class = MenuBase.extend({
		
		setupMenu: function() {
			MenuBase.prototype.setupMenu.apply(this, arguments);
			this.setFrameBorders({left: 2, right: 2, top: 4, bottom: 2})
			this._name = "menu.LDR";
			this.setFrameSize(46,1);
		},
				
		setupContent: function() {
			this.setTitle("LDR");
			
			this.addModuleStatus(0);
			
			this.addStatus("position","XXXXXX",{label: "POSITION", x: 0, width: 6});
			this.addStatus("boresight_installed","XXXXX",{label: "BORESIGHT INSTALLED", x: 0, width: 5});
			this.addStatus("frequency_limit","XXXXX",{label: "1.57 FREQ LIMIT", x: 0, width: 5});
			this.addStatus("last_boresight","XXXXXXXXXXXX",{label: "LAST BORESIGHT", x: 0, width: 12});
			this.addStatus("total_boresight","XXX",{label: "TOTAL BORESIGHT", x: 0, width: 3});
			
			this.addEmptyLine()
			this.addSeparator()
			this.addEmptyLine()
	
			this.addValue("target","XXXX",{label: "TARGET", x: 1, width: 5});
			this.addValue("min_range","XXXXX",{label: "MIN. RANGE", x: 1, width: 5});
			this.addValue("max_range","XXXXX",{label: "MAX. RANGE", x: 1, width: 5});
			this.addField("code_1","XXXX",{label: "1ST ENTRY #1", x: 1, width: 4});
			this.addField("code_2","XXXX",{label: "2ND ENTRY #2", x: 1, width: 4});
			this.addField("code_3","XXXX",{label: "3RD ENTRY #3", x: 1, width: 4});
			this.addField("code_4","XXXX",{label: "4TH ENTRY #4", x: 1, width: 4});
			this.addField("code_5","XXXX",{label: "5TH ENTRY #5", x: 1, width: 4});
			this.addValue("active_code","X",{label: "SELECT CODE", x: 1, width: 1});
			this.addValue("battle_override","XXXXXXXX",{label: "BATTLE OVERRIDE", x: 1, width: 8});
			
			this.fixFrameHeight()
				
			this.addButtonLine(["done","bit","alarms"],[],4,
							   {x:3, y: 2, valign: "bottom", ref: "window", align: "right"});
		},
	});
	
	return Class;  
}); 