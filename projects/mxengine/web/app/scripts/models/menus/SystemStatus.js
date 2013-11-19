define(["log","jquery","backbone","base/Tools","models/Level1Menu"],function(log,$,Backbone,tools,MenuBase) {
		
	var Class = MenuBase.extend({
		
		setupMenu: function() {
			MenuBase.prototype.setupMenu.apply(this, arguments);
			
			// log.info("Calling SystemStatus.setupMenu()");
			this._name = "menu"
			this.setFrameSize(45,1);
		},
		
		addModule: function(id,name) {

			this.addButton(id,name);
			this._currentYPos--;
			this.addStatus(id+"_error_level","OK",{x: 13, width: 5, align: "right", textAlign: "right"})
			this._currentYPos--;
			this.addStatus(id+"_module_mode","OPERATIONAL",{x: 0, width: 11, align: "right", textAlign: "right"})
			this._currentAlign="left"
			this._currentTextAlign="left"
		},
				
		setupContent: function() {
			this.setTitle("SYSTEM STATUS");
			
			this.addModule("gimbal","GIMBAL");
			this.addModule("EOW","EO");
			this.addModule("IR","IR");
			// this.addModule("ELRF","RANGEFINDER");
			this.addModule("AVT","AVT");
			this.addModule("illuminator1","ILLUMINATOR-D");
			// this.addModule("transmitter","TRANSMITTER");
			// this.addModule("mx_pod","MX POD");
			this.addModule("video_io","VIDEO I/O");
			// this.addButton("image_blending","IMAGE BLENDING");
			this.addButton("operator_gimbal","OPERATOR GIMBAL");
			this.addButton("operator_payload","OPERATOR PAYLOAD");
			this.addButton("mission","MISSION");
			this.addButton("digital_overlays","DIGITAL OVERLAYS");
			this.addButton("analog_overlays","ANALOG OVERLAYS");
			// this.addButton("customer_menu","CUSTOMER MENU");
			this.addModule("steering_modes","STEERING MODES");
			this.addButton("profiles","PROFILES");
			// tools.selectItem("#menu.mission")
			
			this._currentYPos--;
			this.addStatus("profile_current_name","USER DEFAULT",{width: 18, align: "right"})
			
			this.fixFrameHeight()
			
			this.addButtonLine(["done","bit","alarms"],["DONE","SYSTEM BIT","ALARMS"],4,
							   {x:3, y: 2, valign: "bottom", ref: "window", align: "right"});
		},
	});
	
	return Class;  
}); 