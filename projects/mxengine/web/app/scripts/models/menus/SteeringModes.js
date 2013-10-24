define(["log","jquery","backbone","base/Tools","models/Level2Menu"],function(log,$,Backbone,tools,MenuBase) {
		
	var Class = MenuBase.extend({
		
		setupMenu: function() {
			MenuBase.prototype.setupMenu.apply(this, arguments);
			
			// log.info("Calling SystemStatus.setupMenu()");
			this._name = "menu.steering_modes"
			this.setFrameSize(45,1);
		},
		
		addModule: function(id,name) {

			this.addButton(id,name);
			this._currentYPos--;
			this.addStatus(id+"_error_level","OK",{x: 13, width: 5, align: "right", textAlign: "right"})
			this._currentYPos--;
			this.addStatus(id+"_module_mode","OPERATIONAL",{x: 0, width: 11, align: "right", textAlign: "right"})
			this._currentAlign="left"
			this._currentTextAlign="left"
		},
				
		setupContent: function() {
			this.setTitle("STEERING MODES");
			
			this.addButton("geoscan","GEOSCAN");
			this.addButton("points_of_interest","POINTS OF INTEREST");
			
			this.fixFrameHeight()
			
			this.addButtonLine(["done"],["DONE"],4,
							   {x:3, y: 2, valign: "bottom", ref: "window", align: "right"});
		},
	});
	
	return Class;  
}); 