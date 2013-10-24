define(["log","jquery","backbone","base/Tools","models/Level2Menu"],function(log,$,Backbone,tools,MenuBase) {
		
	var Class = MenuBase.extend({
		
		setupMenu: function() {
			MenuBase.prototype.setupMenu.apply(this, arguments);
			this.setFrameBorders({left: 4, right: 4, top: 4, bottom: 2})
			this._name = "menu.operator_payload";
			this.setFrameSize(45,1);
		},
				
		setupContent: function() {
			this.setTitle("OPERATOR PAYLOAD");
			
			var y = this._currentYPos
			this.addLabel("ALL",{x:0,y:y})
			this.addValue("zoom_sense","XXXX",{label: "ZOOM SENSE", width: 4, labelx:12, y:y, x:0});
			this.addValue("fov_slaving","XXXX",{label: "FOV SLAVING", width: 4, labelx:12, x:0});

			this.addEmptyLine()
			this.addSeparator()
			this.addEmptyLine()

			this.addValue("EOW_zoom_gain","XXX",{label: "ZOOM GAIN", width: 3, labelx:12, x:0});
			y = this._currentYPos
			this.addLabel("EO",{x:0,y:y,align:"left"})
			this.addValue("EOW_focus_gain","XXX",{label: "FOCUS GAIN", width: 3, labelx:12, y:y, x:0});
			this.addValue("EOW_near_focus","XXX",{label: "NEAR FOCUS", width: 3, labelx:12, x:0});

			this.addEmptyLine()
			this.addSeparator()
			this.addEmptyLine()

			this.addValue("IR_init_zoom","XXX",{label: "INIT ZOOM", width: 4, labelx:12, x:0});
			y = this._currentYPos
			this.addLabel("IR",{x:0,y:y,align:"left"})
			this.addValue("IR_focus_gain","XXX",{label: "FOCUS GAIN", width: 3, labelx:12, y:y, x:0});
			this.addValue("IR_near_focus","XXX",{label: "NEAR FOCUS", width: 3, labelx:12, x:0});
			
			this.fixFrameHeight()
			
			this.addVerticalLine(12.5)
			
			this.addButtonLine(["done","factory_default","patterns"],["DONE","FACTORY DFLT","PATTERNS"],4,
							   {x:3, y: 2, valign: "bottom", ref: "window", align: "right"});
							   
		},
	});
	
	return Class;  
}); 