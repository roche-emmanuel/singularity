define(["log","jquery","backbone","base/Tools","models/Level3Menu"],function(log,$,Backbone,tools,MenuBase) {
		
	var Class = MenuBase.extend({
		
		initialize: function() {
			this._name = this.get("name")
			log.info("Retrieved alarm page name: "+this._name)

			MenuBase.prototype.initialize.apply(this, arguments);
		},
		
		setupMenu: function() {
			MenuBase.prototype.setupMenu.apply(this, arguments);
			this.setFrameBorders({left: 1, right: 4, top: 4, bottom: 2})
			this._parentSize = {x: -6, y: -4};
			this.setFrameSize(40,1);
			this._parentLines.push(14)
			this._level = tools.defVal(this.get("level"),3)
			this._with_title = false
		},
				
		setupContent: function() {
			this.setParentTitle(this.get("parent_title"));
			this.setTitle("");
			
			for(var i=1;i<=16;++i) {
				this.addStatus("line_"+i,"12345678901234567890123456789012345",{x:2,width:35})
			}
			
			this.addEmptyLine()
			
			this.addButtonLine(["done"],[],4,{x:-1, align: "right"});
							   
			this.fixFrameHeight()				   
							   
		},
	});
	
	return Class;  
}); 