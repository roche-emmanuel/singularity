define(["log","jquery","backbone",
	"models/MenuManager",
	"models/Overlay",
	"base/Tools"
],
function(log,$,Backbone,MenuManager,OverlayManager,tools) {
	
	var om = new OverlayManager;
	var mm = new MenuManager();
	
	var Class = Backbone.Model.extend({	
		enableMenus : function(visible) {
			mm.setEnabled(visible);
		},
		
		enableOverlays: function(visible) {
			om.setEnabled(visible);
		},
		
		showMenu: function(menu_name) {
			mm.showMenu(menu_name);
		},
		
		setDefaults: function() {
			om.setDefaults();
		},
		
		setFields: function(args) {
			om.set(args);
		},

		toggleOverlays : function() {
			tools.toggleVisibility("#main_overlay");
		},
		
		toggleMenus : function() {
			tools.toggleVisibility($("#menus"));
		},

		setMenuSelection: function(mname,iname,sub_index) {
			// log.warn("Calling setMenuSelection("+mname+", "+iname+", "+sub_index+")")
			mm.selectItem(mname,iname,sub_index);
		},
		
		setMenuField: function(mname,iname,value) {
			// log.warn("Calling setMenuField("+mname+", "+iname+", "+value+")")
			mm.setField(mname,iname,value);
		},

		setCurrentStream: function(sname) {
			om.setCurrentStream(sname);
		},
		
		setField: function(iname,value) {
			//log.warn("Calling setField("+iname+", "+value+")")
			// var obj = {};
			// obj[iname] = value;
			// om.set(obj);
			om.setField(iname,value);
		},

		setHighlight: function(iname,value, flashValue) {
			//log.warn("Calling setHighlight("+iname+", "+value+")")
			om.setHighlight(iname,value, flashValue);
		},
		
		setFlashing: function(iname,value) {
			//log.warn("Calling setHighlight("+iname+", "+value+")")
			om.setFlashing(iname,value);
		},
		
		setStreamField: function(sname,iname,value) {
			// log.warn("Calling setStreamField("+sname+", "+iname+", "+value+")")
			om.setStreamField(sname,iname,value);			
		},

		setStreamHighlight: function(sname,iname,value) {
			//log.warn("Calling setStreamHighlight("+sname+", "+iname+", "+value+")")
			om.setStreamHighlight(sname,iname,value);			
		},
		
		extendItem: function(fullname,ww,dir) {
			dir = tools.defVal(dir,"right"); // extend on the right by default.
			tools.extendItem(fullname,ww,dir)
		},
		
		setPOILocationMode: function(dm) {
			var menu = mm.getMenu("menu.steering_modes.points_of_interest")
			menu.setDisplayMode(dm)
		},
		
		setNorthIndicatorAngle: function(angle) {
			// Need to rotate the north indicator arrow:
			$("#north_arrow").css({transform: 'rotate('+angle+'deg)'})
		},
		
		setGimbalAzimuthAngle: function(angle) {
			om.setGimbalAzimuthAngle(angle);
		},

		setGimbalElevationAngle: function(angle) {
			om.setGimbalElevationAngle(angle)
		},
		
		setPictoFOVAngle: function(angle) {
			om.setPictoFOVAngle(angle);
		},
		
		setDestabilizationEnabled: function(enabled) {
			if(enabled) {
				$("#destabilization").removeClass("hidden")
			}
			else {
				$("#destabilization").addClass("hidden")
			}
		},
		
		setReticuleStatus: function(rid,status) {
			tools.showElement("#"+rid,status==1)
		},
		
		setReticlePosition: function(rid,xpos,ypos) {
			om.setReticlePosition(rid,xpos,ypos);
		},
		
		setReticleSize: function(rid,ww,hh) {
			// log.info("Setting reticle "+rid+" size to "+ww+"x"+hh)
			om.setReticleSize(rid,ww,hh);
		},

		setOverlayGroupStatus: function (gid, status) {
			//log.info("Toggling group "+gid+" to "+status)
			
			if (gid=="scales_group") {
				tools.showElement("#picto_group",status==2)
				tools.showElement("#wheel_group",status==1)
			}
			else {
				tools.showElement("#"+gid,status==1);
			}
		},
		
		setMXPODBearingAngle: function(angle) {
			om.setTransmitterAngle(angle);
		},
		
		setMXPODAntennaMode: function(mode) {
			om.setTransmitterMode(mode);
		},		
		
		setTXEncryptionEnabled: function(enabled) {
			if(enabled) {
				$("#transmitter_encryption").removeClass("hidden")
			}
			else {
				$("#transmitter_encryption").addClass("hidden")
			}
		},		
	});
	
	// Return an instance of the class:
	return new Class();  
}); 