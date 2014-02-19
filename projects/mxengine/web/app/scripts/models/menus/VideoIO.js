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
			if(this.hasItem("sub_vic")) {
				this.addStatus("sub_vic","XXXXXXXXX",{label: "SUBVIC", width: 9});
			}

			this.addEmptyLine()
			this.addSeparator()
			this.addEmptyLine()
	
			if(this.hasItem("avt_input")) {
				this.addValue("avt_input","XXX",{label: "AVT INPUT", x: 1, width: 3});
			}

			this.addEmptyLine()
			
			var y = this._currentYPos
			this.addLabel("VIDEO OUTPUT",{y: y, align:"left", x:0})
			this.addLabel("SOURCE",{y: y, align: "right", x: 9})
			this.addLabel("OVERLAY",{y: y, align: "right", x: 0})
			
			var found = false
			for(var i=1; i<=6; ++i) {
				y = this._currentYPos
				if(this.hasItem("dv"+i+"_source")) {
					found=true
					this.addValue("dv"+i+"_source","XXX",{label: "DIGITAL VIDEO"+i, x: 10, width: 3});
					this.addValue("dv"+i+"_overlay","XXX",{x: 1, width: 3, y:y});
				}
			}
			if(found) {
				this.addEmptyLine()
			}

			var prefix = found ? "ANALOG VIDEO" : "      "; // to decide if we are on RCS 05/12 or 10/15.

			for(var i=1; i<=6; ++i) {
				y = this._currentYPos
				if(this.hasItem("av"+i+"_source")) {
					this.addValue("av"+i+"_source","XXX",{label: prefix+i, x: 10, width: 3});
					// if(this.hasItem("av"+i+"_overlay")) {
						this.addValue("av"+i+"_overlay","XXX",{x: 1, width: 3, y:y});
					// }
					// else {
					// 	this.addLabel("N/A",{x: 1, y:y});
					// }
				}
			}
			
			this.fixFrameHeight()
				
			this.addButtonLine(["done","alarms","factory_default"],["DONE","ALARMS","FACTORY DFLT"],4,
							   {x:3, y: 2, valign: "bottom", ref: "window", align: "right"});
							   
		},
	});
	
	return Class;  
}); 