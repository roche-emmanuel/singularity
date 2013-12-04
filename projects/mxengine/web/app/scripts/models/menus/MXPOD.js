define(["log","jquery","backbone","base/Tools","models/Level2Menu"],function(log,$,Backbone,tools,MenuBase) {
		
	var Class = MenuBase.extend({
		
		setupMenu: function() {
			MenuBase.prototype.setupMenu.apply(this, arguments);
			this.setFrameBorders({left: 2, right: 2, top: 4, bottom: 2})
			this._name = "menu.mx_pod";
			this.setFrameSize(35,1);
		},
				
		setupContent: function() {
			this.setTitle("MX POD");
			
			this.addModuleStatus(2);
			
			this.addStatus("bearing_to_waypoint","XXXX",{label: "BEARING TO WAYPOINT", x: 1, width: 4});
			this.addStatus("range_to_waypoint","XXXXXXX",{label: "RANGE TO WAYPOINT", x: 0, width: 7});
			this.addStatus("latitude","XXXXXXXXXX",{label: "LATITUDE", x: 2, width: 10});
			this.addStatus("longitude","XXXXXXXXXXX",{label: "LONGITUDE", x: 2, width: 11});
			
			this.addEmptyLine()
			this.addSeparator()
			this.addEmptyLine()
	
			this.addValue("control","XXXX",{label: "CONTROL", x: 2, width: 4});
			this.addValue("antenna","XXXXXXX",{label: "ANTENNA", x: 2, width: 7});
			this.addValue("selected_waypoint","XXXXXX",{label: "SELECTED WAYPOINT", x: 2, width: 6});
			
			this.fixFrameHeight()
			
			var list = ["edit_waypoints"];
			var names = ["EDIT WAYPOINT"];
			
			if(this.hasItem("offset")) {
				list = ["offset","edit_waypoints"];
				names = ["OFFSET","EDIT WAYPOINT"];
			}
			
			this.addButtonLine(list,names,4,
							   {x:3, y: 2, valign: "bottom", ref: "window", align: "left"});

		    this.addButtonLine(["done","bit","alarms"],[],4,
							   {x:3, y: 2, valign: "bottom", ref: "window", align: "right"});
		},
	});
	
	return Class;  
}); 