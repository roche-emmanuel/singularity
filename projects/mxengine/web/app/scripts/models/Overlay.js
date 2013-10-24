// Simple implementation of a Controller system for the overlay display.

define(["log","jquery","backbone","models/OverlayController","base/Tools"],function(log,$,Backbone,Controller,tools) {
	
	var con = new Controller;
	
	var Overlay = Backbone.Model.extend({
		
		initialize: function() {
			log.info("Initializing Overlay Model");
			
			var list = con.getAllFields();
			for (var i in list) {
				// this.on("change:"+list[i],function(model){con["set_"+list[i]](model)});
				this.on("change:"+list[i],con["set_"+list[i]],con);
			};
			
			this._streamFields = {};
			this._streamHighlights = {};
			this._currentStream = "VIC"
		},
	
		setCurrentStream: function(sname) {
			// save the stream highlight state:
			// log.info("Setting current stream to: '"+sname+"'")
			this._currentStream = sname
			
			var map = this.getStreamMap(this._streamFields,sname);
			
			for(var fname in map) {
				this.setField(fname,map[fname]);
			}
			
			map = this.getStreamMap(this._streamHighlights,sname);
			
			for(var fname in map) {
				this.setHighlight(fname,map[fname]);
			}
		},
		
		// Setup the default values for the display:
		setDefaults : function() {
			log.info("Setting Overlay default values.")
			con.setupDefaults();
			this.set({
				current_stream: "EOW",
				video_in_control: "EOW",
				target_name: "TGT",
				platform_name: "ACFT",
				time : "12:22:22",
			});
		},
		
		setField : function(field,value) {
			tools.setItemContent("#"+field,value)			
		},
		
		setHighlight: function(field, value) {
			tools.highlightItem("#"+field,value)
		},

		getStreamMap: function(list,sname) {
			var map = list[sname]
			if (typeof map == "undefined") {
				map = {};
				list[sname] = map;
			}		
			
			return map;
		},
		
		setStreamField: function(sname,	field, value) {
			// save the stream field value:
			var map = this.getStreamMap(this._streamFields,sname);
			map[field] = value;
			
			if(this._currentStream == sname) {
				// log.info("Updating stream field: stream="+sname+", field="+field+", value="+value)
				this.setField(field,value)
			}		},

		setStreamHighlight: function(sname,	field, value) {
			// save the stream highlight state:
			var map = this.getStreamMap(this._streamHighlights,sname);
			map[field] = value;
			
			if(this._currentStream==sname) {
				this.setHighlight(field,value)
			}
		},
		
		setEnabled : function(visible) {
			if(visible) {
				$("#overlays").show();
			}
			else {
				$("#overlays").hide();			
			}
		},		
	});
	
	return Overlay;  
}); 