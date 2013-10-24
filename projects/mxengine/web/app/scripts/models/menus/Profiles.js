define(["log","jquery","backbone","base/Tools","models/Level2Menu"],function(log,$,Backbone,tools,MenuBase) {
		
	var Class = MenuBase.extend({
		
		setupMenu: function() {
			MenuBase.prototype.setupMenu.apply(this, arguments);
			this.setFrameBorders({left: 2, right: 4, top: 4, bottom: 2})
			this._name = "menu.profiles";
			this.setFrameSize(31,1);
		},
				
		setupContent: function() {
			this.setTitle("PROFILES");
			
			this.addLabel("NAME",{x:0})
			this.addEmptyLine()
			for (var i=1;i<=8;++i) {
				this.addField("profile_"+i,"XXXX",{width: 20, x:2});
			}
			
			this.addEmptyLine()
			this.addSeparator()
			this.addEmptyLine()

			this.addLabel("CURRENT PROFILE",{x:1})
			this.addEmptyLine()

			this.addValue("current_profile","XXXX",{width: 20, x:2});
						
			this.fixFrameHeight()
			
			this.addButtonLine(["done","load","save","factory_default"],["DONE","LOAD","SAVE","FACTORY DFLT"],4,
							   {x:3, y: 2, valign: "bottom", ref: "window", align: "right"});
							   
		},
	});
	
	return Class;  
}); 