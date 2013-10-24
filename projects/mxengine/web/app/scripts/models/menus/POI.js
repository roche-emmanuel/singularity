define(["log","jquery","backbone","base/Tools","models/Level3Menu"],function(log,$,Backbone,tools,MenuBase) {
		
	var Class = MenuBase.extend({
		
		setupMenu: function() {
			MenuBase.prototype.setupMenu.apply(this, arguments);
			this.setFrameBorders({left: 3, right: 3, top: 7, bottom: 2})
			this._name = "menu.steering_modes.points_of_interest";
			this._parentSize = {x: -5, y: -4};
			this.setFrameSize(51.5,1);
		},
				
		setupContent: function() {
			this.setParentTitle("STEERING MODES");
			this.setTitle("POINTS OF INTEREST");

			this._llItems = []
			this._mgrsItems = []

			
			var y = this._currentYPos;
			var el;
			this.addLabel("#",{x:0,y:y})
			this.addLabel("ID",{x:4,y:y})
			el = this.addLabel("LATITUDE",{x:14,y:y})
			this._llItems.push(el)
			el = this.addLabel("LONGITUDE",{x:26,y:y})
			this._llItems.push(el)
			el = this.addLabel("MGRS",{x:10,y:y,align:"right"})
			this._mgrsItems.push(el)
			
			this.addLabel("ALTITUDE",{x:37,y:y,align:"left"})
			this.addEmptyLine()
			
			for(var i=1;i<=10;++i) {
				y = this._currentYPos
				
				this.addLabel(""+i,{x:(i==10) ? -1 : 0,y:y})
				this.addStatus("poi_"+i+"_id","XXXXXX",{x: 4, width: 6, y:y, textAlign: "left"});
				el = this.addStatus("poi_"+i+"_lat","XXXXXXXXX",{x: 12, width: 10, y:y, textAlign: "right"});
				this._llItems.push(el)
				el = this.addStatus("poi_"+i+"_lon","XXXXXXXXXX",{x: 24, width: 11, y:y});
				this._llItems.push(el)
				el = this.addStatus("poi_"+i+"_mgrs","MMMMMMMMMMMMMMM",{x: 10, width: 15, y:y, align:"right"});
				this._mgrsItems.push(el)
				this.addStatus("poi_"+i+"_alt","XXXXXXX",{x: 38, width: 7, y:y, align:"left"});
			}
			
			this.addEmptyLine()
			this._separatorLines.push(this._currentYPos);
			this.addEmptyLine()

			this.addLabel("EDIT POI",{x:-1})

			this.addEmptyLine()
			
			y = this._currentYPos
			this.addLabel("#",{x:0,y:y})
			this.addLabel("ID",{x:4,y:y})
			
			el = this.addLabel("LATITUDE",{x:14,y:y})
			this._llItems.push(el)
			el = this.addLabel("LONGITUDE",{x:26,y:y})
			this._llItems.push(el)
			el = this.addLabel("MGRS",{x:10,y:y,align:"right"})
			this._mgrsItems.push(el)

			this.addLabel("ALTITUDE",{x:37,y:y,align:"left"})

			y = this._currentYPos
			this.addValue("edit_index","X",{x: 0, width: 1, y:y});
			this.addField("edit_name","XXXXXX",{x: 4, width: 6, y:y, textAlign: "left"});
			this._editLat = this.addField("edit_lat","XXXXXXXXX",{x: 13, width: 9, y:y, textAlign: "right"});
			this._llItems.push(this._editLat)			
			this._editLon = this.addField("edit_lon","XXXXXXXXXX",{x: 25, width: 10, y:y});
			this._llItems.push(this._editLon)
			el = this.addField("edit_mgrs","XXXXXXXXXX",{x: 10, width: 15, y:y, align:"right"});
			this._mgrsItems.push(el)

			this.addValue("edit_alt","XXXXX",{x: 39, width: 5, y:y, align:"left"});
			this.addStatus("edit_alt_unit","XX",{x: 45, width: 2, y:y});
			
			this.fixFrameHeight()
			
			this.addButtonLine(["done","clear","clear_all","save"],["DONE","CLEAR","CLEAR ALL","SAVE"],4,
							   {x:3, y: 2, valign: "bottom", ref: "window", align: "right"});
					
			this.setDisplayMode("DD")
		},
		
		setDisplayMode: function(dm) {
			var el;
			if (dm=="MGRS") {
				// Show the MGS fields:
				for(var i in this._llItems) {
					el = this._llItems[i];
					el.hide()
				}

				for(var i in this._mgrsItems) {
					el = this._mgrsItems[i];
					el.show()
				}
			}
			else{
				// Show the Lat lon fields:
				for(var i in this._llItems) {
					el = this._llItems[i];
					el.show()
				}

				for(var i in this._mgrsItems) {
					el = this._mgrsItems[i];
					el.hide()
				}
				
				// Also resize the Lat/lon edition fields:
				tools.setPosition(this._editLat,(dm=="DMF" ? 12 : 13)+2,undefined,dm=="DMF" ? 12 : 11,undefined,dm=="DMF" ?  10 : 9);
				tools.setPosition(this._editLon,(dm=="DMF" ? 24 : 25)+2,undefined,dm=="DMF" ? 13 : 12,undefined,dm=="DMF" ? 11 : 10);
			}
		},
	});
	
	return Class;  
}); 