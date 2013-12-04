define(["log","jquery","backbone","base/Tools","models/Level3Menu"],function(log,$,Backbone,tools,MenuBase) {
		
	var Class = MenuBase.extend({
		
		setupMenu: function() {
			MenuBase.prototype.setupMenu.apply(this, arguments);
			this.setFrameBorders({left: 3, right: 1, top: 7, bottom: 2})
			this._name = "menu.mx_pod.edit_waypoints";
			this._parentSize = {x: -5, y: -4};
			this.setFrameSize(44,1);
		},
				
		setupContent: function() {
			this.setParentTitle("MX POD");
			this.setTitle("EDIT WAYPOINTS");

			
			var y = this._currentYPos;
			this.addLabel("#",{x:1,y:y})
			this.addLabel("ID",{x:7,y:y})
			this.addLabel("LATITUDE",{x:16,y:y})
			this.addLabel("LONGITUDE",{x:2,y:y,align:"right"})
			this.addEmptyLine()
			
			for(var i=1;i<=10;++i) {
				y = this._currentYPos
				
				this.addLabel(""+i,{x:(i==10) ? 0 : 1,y:y, align:"left"})
				this.addStatus("waypoint_"+i+"_id","XXXXXX",{x: 5, width: 6, y:y, textAlign: "left"});
				this.addStatus("waypoint_"+i+"_lat","XXXXXXXXX",{x: 15, width: 9, y:y, textAlign: "right"});
				this.addStatus("waypoint_"+i+"_lon","XXXXXXXXXX",{x: 2, width: 10, y:y, align:"right"});
			}
			
			this.addEmptyLine()
			this._separatorLines.push(this._currentYPos);
			this.addEmptyLine()

			this.addLabel("EDIT WAYPOINT",{x:0,align:"left"})

			this.addEmptyLine()

			y = this._currentYPos
			this.addValue("edit_index","X",{x: 0, width: 2, y:y, textAlign:"right"});
			this.addField("edit_id","XXXXXX",{x: 5, width: 6, y:y, textAlign: "left"});
			this.addField("edit_lat","XXXXXXXXX",{x: 15, width: 9, y:y, textAlign: "right"});
			this.addField("edit_lon","XXXXXXXXXX",{x: 2, width: 10, y:y, textAlign: "right", align:"right"});
			
			this.fixFrameHeight()
			
			this.addButtonLine(["done","save","capture_los"],["DONE","SAVE","CAPTURE LOS"],4,
							   {x:3, y: 2, valign: "bottom", ref: "window", align: "right"});
		},
	});
	
	return Class;  
}); 