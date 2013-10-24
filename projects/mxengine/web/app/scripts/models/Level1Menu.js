define(["log","jquery","backbone","base/Tools","models/MenuBase"],function(log,$,Backbone,tools,MenuBase) {
		
	var Class = MenuBase.extend({
		
		setupMenu: function() {
			MenuBase.prototype.setupMenu.apply(this, arguments);
			log.info("Calling Level1Menu.setupMenu()");
			
			this.setFrameBorders({top: 4})
			this._level = 1
			this._hlines.push(2.5)
		},
				
		// Retrieve the origin point to use for this menu:
		getOriginPoint : function() {
			return { x: 0, y: 1 };
		},
		
		// retrieve the position of the title slot:
		getTitlePosition : function() {
			return { x: 2, y: 1 };
		},
				
		setupFrame: function(frame) {
			frame.drawBorder();
			MenuBase.prototype.setupFrame.apply(this, arguments);
		},
	});
	
	return Class;  
}); 