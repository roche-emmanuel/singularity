define(["log","jquery","backbone","base/Tools","models/Level2Menu"],function(log,$,Backbone,tools,MenuBase) {
		
	var Class = MenuBase.extend({
		
		setupMenu: function() {
			MenuBase.prototype.setupMenu.apply(this, arguments);
			this.setFrameBorders({left: 2, right: 2, top: 4, bottom: 2})
			this._name = "menu.analog_transmitter";
			this.setFrameSize(42,1);
		},
				
		setupContent: function() {
			this.setTitle("ANALOG TRANSMITTER");
			
			this.addModuleStatus(0);

			this.addStatus("frequency","XXXXXXX",{label: "FREQUENCY (Mhz)", x: 0, width: 7});
						
			this.addEmptyLine()
			this.addSeparator()
			this.addEmptyLine()
	
			this.addValue("status","XXXXX",{label: "ENABLED", x: 1, width: 5});
			this.addValue("power","XX",{label: "POWER", x: 1, width: 2});
			this.addValue("channel_number","X",{label: "CHANNEL NUMBER", x: 1, width: 1});
			
			if(this.hasItem("channel_offset")) {
				this.addValue("channel_offset","X",{label: "CHANNEL OFFSET", x: 1, width: 1});
			}
			
			this.fixFrameHeight()
				
			this.addButtonLine(["done","bit","alarms"],[],4,
							   {x:3, y: 2, valign: "bottom", ref: "window", align: "right"});
		},
	});
	
	return Class;  
}); 