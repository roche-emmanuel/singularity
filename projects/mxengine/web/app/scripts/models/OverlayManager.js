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
			tools.toggleVisibility("#overlays");
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

		setHighlight: function(iname,value) {
			//log.warn("Calling setHighlight("+iname+", "+value+")")
			om.setHighlight(iname,value);
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
	});
	
	// Return an instance of the class:
	return new Class();  
}); 