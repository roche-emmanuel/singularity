define(["log","jquery","backbone","base/Tools","models/Level3Menu"],function(log,$,Backbone,tools,MenuBase) {
		
	var Class = MenuBase.extend({
		
		setupMenu: function() {
			MenuBase.prototype.setupMenu.apply(this, arguments);
			this.setFrameBorders({left: 5, right: 4, top: 7, bottom: 2})
			this._name = "menu.EOW.misc";
			this._parentSize = {x: -6, y: -4};
			this.setFrameSize(40,1);
			this._parentLines.push(14)
		},
				
		setupContent: function() {
			this.setParentTitle("EO - DL");
			this.setTitle("MISCELLANEOUS");
			
			this.addLabel("TEMPERATURES",{x:-1})
			this.addEmptyLine()
			
			this.addStatus("ambient1","XX.XX  deg C",{label: "AMBIENT 1", x: 0, width: 12});
			this.addStatus("ambient2","XX.XX  deg C",{label: "AMBIENT 2", x: 0, width: 12});
			this.addStatus("processor","XX.XX  deg C",{label: "PROCESSOR", x: 0, width: 12});
			this.addStatus("lens","XX.XX  deg C",{label: "LENS", x: 0, width: 12});
			this.addStatus("camera_1_head","XX.XX  deg C",{label: "DL CAMERA #1 HEAD", x: 0, width: 12});
			this.addStatus("camera_1_ext","XX.XX  deg C",{label: "DL CAMERA #1 EXT", x: 0, width: 12});
			this.addStatus("camera_2_head","XX.XX  deg C",{label: "DL CAMERA #2 HEAD", x: 0, width: 12});
			this.addStatus("camera_2_ext","XX.XX  deg C",{label: "DL CAMERA #2 EXT", x: 0, width: 12});
			this.addStatus("vpm_body","XX.XX  deg C",{label: "DL:LL VPM BODY", x: 0, width: 12});
			this.addEmptyLine()
			this.addEmptyLine()
			this.addEmptyLine()
			this.addEmptyLine()
			
			this.addButtonLine(["done"],[],4,{x:-1, align: "right"});
							   
			this.fixFrameHeight()				   
							   
		},
	});
	
	return Class;  
}); 