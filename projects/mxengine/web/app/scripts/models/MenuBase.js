define(["log","jquery","backbone","base/Tools","models/MenuFrame"],function(log,$,Backbone,tools,MenuFrame) {
		
	var Class = Backbone.Model.extend({

		initialize: function() {
			var parent = $("#menus");
			var name = this.get("name");
			log.info("Initializing Menu base "+name);
			
			// Get or create the container for this menu:
			var el = tools.getOrCreateDiv(parent,name);
			tools.setPosition(el,0,0);
			
			var cont = tools.getOrCreateDiv(el,"frame");
			// tools.setPosition(cont,tools.blocks(0,0),tools.getNumBlocks());
			
			// build the frame:
			var frame = new MenuFrame({parent: cont, width: this.get("width"), height: this.get("height")});
			
			this.setupFrame(frame);
			
			frame.build();
		},
		
		getLevel: function() {
			var parent = this.get("parent");
		},
		
		setupFrame: function(frame) {
			frame.drawBorder();
			frame.drawHLines(this.get("hlines"));		
		}
	});
	
	return Class;  
}); 