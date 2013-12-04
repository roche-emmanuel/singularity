define(["log","jquery","backbone","base/Tools","models/Level2Menu"],function(log,$,Backbone,tools,MenuBase) {
		
	var Class = MenuBase.extend({
		
		setupMenu: function() {
			MenuBase.prototype.setupMenu.apply(this, arguments);
			this.setFrameBorders({left: 2, right: 2, top: 4, bottom: 2})
			this._name = "menu.digital_transmitter";
			this.setFrameSize(42,1);
		},
				
		setupContent: function() {
			this.setTitle("DIGITAL TRANSMITTER");
			
			this.addModuleStatus(0);
			
			this.addEmptyLine()

			this.addStatus("channel","XX",{label: "CHANNEL NUMBER", x: 0, width: 2});
			this.addStatus("frequency","XXXXXXXXXXX",{label: "FREQUENCY", x: 0, width: 11});
			this.addStatus("op_power","XXX",{label: "O/P POWER", x: 0, width: 3});
			this.addStatus("preset_name","XXX",{label: "PRESET NAME", x: 0, width: 3});
			
			this.addEmptyLine()
			
			this.addStatus("cofdm","XXXXXXXXX",{label: "COFDM", x: 0, width: 30});
			
			this.addEmptyLine()
			this.addSeparator()
			this.addEmptyLine()
	
			this.addValue("status","XXXXX",{label: "ENABLED", x: 1, width: 5});
			this.addValue("encryption","XXX",{label: "ENCRYPTION", x: 1, width: 3});
			this.addValue("encryption_id","XXXXXX",{label: "ENCRYPTION ID", x: 1, width: 6});
			this.addValue("power","XX",{label: "POWER", x: 1, width: 2});
			this.addValue("config_preset","X",{label: "CONFIG PRESET", x: 1, width: 1});
			this.addValue("channel_number","X",{label: "CHANNEL NUMBER", x: 1, width: 1});
			if(this.hasItem("channel_offset")) {
				this.addValue("channel_offset","X",{label: "CHANNEL OFFSET", x: 1, width: 1});
			}
			
			this.fixFrameHeight()
				
			this.addButtonLine(["done","bit","alarms","edit_encryption_id"],["DONE","BIT","ALARMS","EDIT ENCRYPTION ID"],4,
							   {x:3, y: 2, valign: "bottom", ref: "window", align: "right"});
		},
	});
	
	return Class;  
}); 