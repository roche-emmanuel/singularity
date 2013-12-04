define(["log","jquery","backbone","base/Tools","models/Level3Menu"],function(log,$,Backbone,tools,MenuBase) {
		
	var Class = MenuBase.extend({
		
		setupMenu: function() {
			MenuBase.prototype.setupMenu.apply(this, arguments);
			this.setFrameBorders({left: 3, right: 3, top: 6, bottom: 2})
			this._name = "menu.digital_transmitter.edit_encryption_id";
			this._parentSize = {x: -5, y: -4};
			this.setFrameSize(54,1);
		},
				
		setupContent: function() {
			this.setParentTitle("DIGITAL TRANSMITTER");
			this.setTitle("EDIT ENCRYPTION ID - 128 BIT");

			var y = this._currentYPos;
			var el;
			this.addLabel("#",{x:2,y:y})
			this.addLabel("ID",{x:9,y:y})
			this.addLabel("AES SHORT KEY",{x:8,y:y,align:"right"})

			this._separatorLines.push(this._currentYPos+0.5);
			this.addEmptyLine()
				
			for(var i=1;i<=9;++i) {
				y = this._currentYPos
				
				this.addLabel(""+i,{x:2,y:y,align:"left"})
				this.addStatus("key_"+i+"_id","XXXXXX",{x: 7, width: 6, y:y, textAlign: "left"});
				this.addStatus("key_"+i+"_short","XXXXXXXXXXXXXXXX",{x: 6, width: 16, y:y, textAlign: "right",align:"right"});
			}
			
			this._separatorLines.push(this._currentYPos+0.5);
			this.addEmptyLine()

			this.addValue("edit_index","X",{label: "ID#", x: 1, labelx:9, width: 1});
			this.addField("edit_id","XXXXXX",{label: "ID", x: 1, labelx:9, width: 6});
			
			this.addLabel("AES KEYS",{x:-1,align:"left"})
			this.addField("edit_shortkey","XXXXXXXXX",{label: "SHORT", x: 1, labelx:8, width: 16});
			this.addStatus("edit_fullkey","12345678901234567890123456789012",{label: "FULL", x: 1, labelx:8, width: 32});
			
			this.fixFrameHeight()
			
			this.addButtonLine(["done","save"],["DONE","SAVE"],4,
							   {x:3, y: 2, valign: "bottom", ref: "window", align: "right"});
		},
	});
	
	return Class;  
}); 