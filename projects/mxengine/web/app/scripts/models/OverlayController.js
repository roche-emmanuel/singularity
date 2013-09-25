// Simple implementation of a Controller system for the overlay display.

define(["log","backbone"],function(log,Backbone) {	
	var stdFields = [
		"date","time","utc_offset",
		"steering_mode",
		"avt_source","avt_algorithm",
		"video_in_control",
		"sub_vic",
		"elevation_pict",
		"azimuth_pict",
		"target_name",
		"platform_name",
		"platform_latitude",
		"platform_longitude",
		"platform_heading",
		"platform_altitude",
		"terrain_elevation",
		"slant_range",
		"range_source",
		"target_bearing",
		"target_latitude",
		"target_longitude"];
	
	var streamFields = [
		"spatial_processing",
		"temporal_processing",
		"focal_length",
		"ezoom",
		"filter",
		"scene_setup",
		"sensitivity",
		"black_level",
		"focus",
		"focus_trim"
	];
	
	var streamHighlights = [
		"video_in_control"
	];
	
	var streams = [ "VIC", "EOW", "IR", "EON" ];
	
	var proto = {
		allFields : ["current_stream"],
		allNames : [],
		
		el: $('#overlays'),
		
		defaults : {
			current_stream: "EOW"
		},
		
		setValue : function(elName,value) {			
			var str = value;
			if (typeof value == "string" && value.length > 0) {
				var lastChar = value.substring(value.length-1);
				if (lastChar == " ") {
					lastChar = "&nbsp;"
				}
				// str = str.replace(/\s/g,"&nbsp;");
				str = value.substring(0,value.length-1) + "<em class='lastchar'>" + lastChar +"</em>"
				str = str.replace(/°/g,"&deg;");
			}
			
			
			$("#"+elName+" > span").html(str);
		},
		
		initialize: function() {
			log.info("Initializing Overlay Controller");
			// this.set({current_stream : "EOW"});
			
			// log.info("Set current stream to: "+this.get("current_stream"));
			
			// setup the std fields callback:
			for (var i in stdFields) {
				var name = stdFields[i]
				this["set_"+name] = (function(name,obj) {
					return function(model) {
						//log.info("Should set value for: "+name);
						// $("#"+name+" > span").html(model.get(name));
						obj.setValue(name,model.get(name));
					};
				})(name,this);
				
				this.allFields.push(name);
				this.allNames.push(name);
			};
			
			// Add the stream specific fields:
			for (var i in streams) {
				var sname = streams[i];
				for (var j in streamFields) {
					var name = streamFields[j];
					var fname = sname + "_" + name;
					this["set_"+fname] = (function(name,sname,obj) {
						return function(model) {
							var currentStream = model.get("current_stream");
							//log.info("Current stream: "+currentStream);
							//log.info("sname: "+sname);
							if (currentStream == sname) {
								// get or create the span sub element:								
								//$("#"+name+" > span").html(model.get(sname+"_"+name));
								obj.setValue(name,model.get(sname+"_"+name));
							}
						};
					})(name,sname,this);
					
					this.allFields.push(fname);
					if (this.allNames.indexOf(name)<0) {
						this.allNames.push(name);
					}
				}
				
				// register the highlights:
				for (var j in streamHighlights) {
					var name = streamHighlights[j];
					var fname = sname + "_" + name + "_highlighted";
					this["set_"+fname] = (function(name,sname,obj) {
						return function(model) {
							var currentStream = model.get("current_stream");
							log.info("Current stream: "+currentStream);
							log.info("sname: "+sname);
							if (currentStream == sname) {
								var state = model.get(sname+"_"+name+"_highlighted")
								log.info("Setting highlight to "+state+" for "+name)
								if(state) {
									$("#"+name+" > span").addClass("highlighted");
								}
								else {
									$("#"+name+" > span").removeClass("highlighted");
								}
							}
						};
					})(name,sname,this);
					
					this.allFields.push(fname);
				}				
			}
			
			this["set_current_stream"] = (function(obj) {
				return function(model) {
					var sname = model.get("current_stream");
					log.info("Setting current stream to: "+sname);
					//log.info("And current stream is: "+obj.get("current_stream"));
					for (var i in streamFields) {
						var name = streamFields[i];
						$("#"+name).html(model.get(sname+"_"+name));
					}				
				};
			})(this);
			
		},
		
		setupDefaults : function() {
			// Now setup the spans:
			for (var j in this.allNames) {
				var name = this.allNames[j];
				log.info("Initializing span for "+name);
				$("#"+name).html("<span>"+name+"</span>");
				// $('<span></span>').appendTo("#"+name); //.html("<span>"+name+"</span>");
			}		
			// $(".block > div").html("<span>fuck</span>");
		},
		
		// set_current_stream : function(model) {

		// },
		
		getAllFields : function() {
			return this.allFields;
		},		
	};
	
	var Controller = Backbone.Model.extend(proto);
	
	return Controller;  
}); 