define(["log","jquery","backbone","base/Tools","models/Level3Menu"],function(log,$,Backbone,tools,MenuBase) {
		
	var Class = MenuBase.extend({
		
		setupMenu: function() {
			MenuBase.prototype.setupMenu.apply(this, arguments);
			this.setFrameBorders({left: 5, right: 4, top: 7, bottom: 2})
			this._name = "menu.steering_modes.geoscan";
			this._parentSize = {x: -3, y: -2};
			this.setFrameSize(42,21);
		},
				
		setupContent: function() {
			this.setParentTitle("STEERING MODES");
			this.setTitle("GEOSCAN");
						
			this.addValue("height","X",{label: "HEIGHT", x: 0, width: 1});
			this.addValue("width","X",{label: "WIDTH", x: 0, width: 1});
			this.addValue("overlap","XX",{label: "OVERLAP", x: 0, width: 2});
			this.addValue("target_video_format","XXXXXXXXX",{label: "TARGET VIDEO FORMAT", x: 0, width: 9});
			
			this.addButtonLine(["done","geoscan","factory_default"],["DONE","GEOSCAN","FACTORY DFLT"],4,
							   {x:3, y: 2, valign: "bottom", ref: "window", align: "right"});
							   							   
		},
	});
	
	return Class;  
}); 