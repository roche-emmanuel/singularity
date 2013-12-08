define(["log","jquery","backbone","base/Tools","models/Level2Menu"],function(log,$,Backbone,tools,MenuBase) {
		
	var Class = MenuBase.extend({
		
		setupMenu: function() {
			MenuBase.prototype.setupMenu.apply(this, arguments);
			this.setFrameBorders({left: 2, right: 2, top: 4, bottom: 2})
			this._name = "menu.seespot";
			this.setFrameSize(46,1);
		},
				
		setupContent: function() {
			this.setTitle("SEE-SPOT");
				
			this.addValue("mode","XXX",{label: "MODE", x: 1, width: 3});
			this.addValue("combination_mode","XXXX",{label: "COMBINATION MODE", x: 1, width: 4});
			this.addValue("combination","XXXXXXXXX",{label: "COMBINATION", x: 1, width: 9});
			
			this.fixFrameHeight()
				
			this.addButtonLine(["calibrate"],[],4,
				   {x:3, y: 2, valign: "bottom", ref: "window",align:"left"});
				   
			this.addButtonLine(["done","factory_default"],["DONE","FACTORY DFLT"],4,
							   {x:3, y: 2, valign: "bottom", ref: "window", align: "right"});
		},
	});
	
	return Class;  
}); 
