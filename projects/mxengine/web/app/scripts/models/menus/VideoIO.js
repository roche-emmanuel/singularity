define(["log","jquery","backbone","base/Tools","models/Level2Menu"],function(log,$,Backbone,tools,MenuBase) {
		
	var Class = MenuBase.extend({
		
		setupMenu: function() {
			MenuBase.prototype.setupMenu.apply(this, arguments);
			this.setFrameBorders({left: 2, right: 2, top: 4, bottom: 2})
			this._name = "menu.video_io";
			this.setFrameSize(39,1);
		},
				
		setupContent: function() {
			this.setTitle("VIDEO I/O");
			
			this.addModuleStatus();
			this.addEmptyLine();
			
			this.addStatus("vic","XXX",{label: "VIC", width: 3});
			this.addStatus("sub_vic","XXXXXXXXX",{label: "SUBVIC", width: 9});
			
			this.addEmptyLine()
			this.addSeparator()
			this.addEmptyLine()
	
			this.addValue("avt_input","XXX",{label: "AVT INPUT", x: 1, width: 3});
			this.addEmptyLine()
			
			var y = this._currentYPos
			this.addLabel("VIDEO OUTPUT",{y: y, align:"left", x:0})
			this.addLabel("SOURCE",{y: y, align: "right", x: 9})
			this.addLabel("OVERLAY",{y: y, align: "right", x: 0})
			
			for(var i=1; i<=3; ++i) {
				y = this._currentYPos
				this.addValue("dv"+i+"_source","XXX",{label: "DIGITAL VIDEO"+i, x: 9, width: 3});
				this.addValue("dv"+i+"_overlay","XXX",{x: 1, width: 3, y:y});
			}
			for(var i=1; i<=4; ++i) {
				y = this._currentYPos
				this.addStatus("av"+i+"_source","XXX",{label: "ANALOG VIDEO"+i, x: 9, width: 3});
				if(i<3) {
					this.addValue("av"+i+"_overlay","XXX",{x: 1, width: 3, y:y});
				}
				else {
					this.addLabel("N/A",{x: 1, y:y});
				}
			}
			
			this.fixFrameHeight()
				
			this.addButtonLine(["done","alarms","factory_default"],["DONE","ALARMS","FACTORY DFLT"],4,
							   {x:3, y: 2, valign: "bottom", ref: "window", align: "right"});
							   
		},
	});
	
	return Class;  
}); 