// Simple implementation of a Controller system for the overlay display.

define(["log","jquery","backbone","models/OverlayController","base/Tools",
	"models/AzPictBase",
	"models/AzPictFov",
	"models/ElevPictBase",
	"models/ElevPictFov",
	"models/Destabilization",
	"models/AzScale",
	"models/ElevScale",
	"models/reticles/Standard",
	"models/reticles/MalteseCross",
	"models/reticles/Illuminator1",
	"models/reticles/Illuminator2",
	"models/TransmitterBase",
	"models/TransmitterFov",
	"models/TransmitterKey",
	"models/AcqWin"
],function(log,$,Backbone,Controller,tools,AzBase,AzFov,ElevBase,
	ElevFov,Destab,AzScale,ElevScale,StdReticle,MalteseReticle,Illum1Ret,Illum2Ret,
	TXBase,TXFov,TXKey,AcqWin) {
	
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
			this._reticles = [];
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
				illum_line1: "",
				illum_line2: "",
				illum_line3: "",
				illum_line4: "",
			});
			
			this._azBase = new AzBase()
			this._azFov = new AzFov()
			this._elevBase = new ElevBase()
			this._elevFov = new ElevFov()
			this._destab = new Destab()
			this._azScale = new AzScale()
			this._elevScale = new ElevScale()
			this._txBase = new TXBase()
			this._txFov = new TXFov()
			this._txKey = new TXKey()
			this._reticles.push(new StdReticle())
			this._reticles.push(new MalteseReticle())
			this._reticles.push(new Illum1Ret())
			this._reticles.push(new Illum2Ret())
			this._acqWin = new AcqWin()

			tools.showElement("#reticle_standard",false)
			$("#picto_group").addClass("hidden")
		},
		
		setReticlePosition: function(rid,xpos,ypos) {
			for(var i in this._reticles) {
				if (this._reticles[i].getName()==rid) {
					this._reticles[i].setPosition(xpos,ypos);
				}
			}
		},
		
		setReticleSize: function(rid,ww,hh) {
			for(var i in this._reticles) {
				if (this._reticles[i].getName()==rid) {
					this._reticles[i].setSize(ww,hh);
				}
			}
		},
		
		setAcquisitionWindowState: function(visible, ww, hh) {
			this._acqWin.setSize(ww,hh)
			tools.showElement("#acq_win",visible)
		},

		setGimbalAzimuthAngle: function(angle) {
			$("#az_pict_fov").css({transform: 'rotate('+angle+'deg)'})			
			if (angle<0) { angle += 360.0; }
			this._azScale.setAngle(angle)
		},
		
		setGimbalElevationAngle: function(angle) {
			$("#elev_pict_fov").css({transform: 'rotate('+angle+'deg)'})	
			this._elevScale.setAngle(angle)
		},
		
		setPictoFOVAngle: function(angle) {
			this._azFov.setFOVAngle(angle)
			this._elevFov.setFOVAngle(angle)
		},
		
		setTransmitterAngle: function(angle) {
			$("#transmitter_waypoint_fov").css({transform: 'rotate('+angle+'deg)'})	
		},
		
		setTransmitterMode: function(mode) {
			this._txFov.setMode(mode);
		},

		setField : function(field,value) {
			tools.setItemContent("#"+field,value)			
		},
		
		setHighlight: function(field, value, flashValue) {
			tools.highlightItem("#"+field,value, flashValue)
		},

		setFlashing: function(field, value) {
			tools.flashItem("#"+field,value)
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