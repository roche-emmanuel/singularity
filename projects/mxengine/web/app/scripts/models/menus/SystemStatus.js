define(["log","jquery","backbone","base/Tools","models/Level1Menu"],function(log,$,Backbone,tools,MenuBase) {
		
	var Class = MenuBase.extend({
		
		setupMenu: function() {
			MenuBase.prototype.setupMenu.apply(this, arguments);
			
			// log.info("Calling SystemStatus.setupMenu()");
			this._name = "menu"
			this.setFrameSize(45,1);
		},
		
		addModule: function(id,name) {

			this.addButton(id,name,{width:"auto"});
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
			this.addModule("EOW","EOW");
			this.addModule("IR","IR");
			
			if (this.hasItem("EON")) {
				this.addModule("EON","EON");
			}
			
			if (this.hasItem("LRF")) {
				this.addModule("LRF","RANGEFINDER");
			}
			
			if (this.hasItem("AVT")) {
				this.addModule("AVT","AVT");
			}
			
			if (this.hasItem("analog_transmitter")) {
				this.addModule("analog_transmitter","TX-ANALOG");
			}
			
			if (this.hasItem("digital_transmitter")) {
				this.addModule("digital_transmitter","TX-DIGITAL");
			}

			if (this.hasItem("mx_pod")) {
				this.addModule("mx_pod","MX POD");
			}
			
			if (this.hasItem("illuminator1")) {
				this.addModule("illuminator1","ILLUMINATOR-1");
			}
			
			if (this.hasItem("illuminator2")) {
				this.addModule("illuminator2","ILLUMINATOR-2");
			}

			if (this.hasItem("LDR")) {
				this.addModule("LDR","LDR");
			}
			
			// this.addModule("transmitter","TRANSMITTER");
			// this.addModule("mx_pod","MX POD");
			this.addModule("video_io","VIDEO I/O");
			
			if (this.hasItem("image_blending")) {
				this.addButton("image_blending","IMAGE BLENDING");
			}
			
			if (this.hasItem("seespot")) {
				this.addButton("seespot","SEE-SPOT");
			}
			
			// this.addButton("image_blending","IMAGE BLENDING");
			this.addButton("operator_gimbal","OPERATOR GIMBAL");
			this.addButton("operator_payload","OPERATOR PAYLOAD");
			this.addButton("mission","MISSION");

			if (this.hasItem("digital_overlays")) {			
				this.addButton("digital_overlays","DIGITAL OVERLAYS");
			}

			if (this.hasItem("analog_overlays")) {
				this.addButton("analog_overlays","ANALOG OVERLAYS");
			}

			if (this.hasItem("overlay_EOW")) {
				this.addButton("analog_EOW","OVERLAY EOW");
			}

			if (this.hasItem("overlay_IR")) {
				this.addButton("analog_IR","OVERLAY IR");
			}

			if (this.hasItem("overlay_EON")) {
				this.addButton("analog_EON","OVERLAY EON");
			}

			// this.addButton("customer_menu","CUSTOMER MENU");
			if (this.hasItem("steering_modes")) {
				this.addModule("steering_modes","STEERING MODES");
			}
			if (this.hasItem("geoscan")) {
				this.addModule("geoscan","GEOSCAN");
			}

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