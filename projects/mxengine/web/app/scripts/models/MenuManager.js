define(["log","jquery","backbone","base/Tools",
"models/menus/SystemStatus",
"models/menus/Gimbal",
"models/menus/EOW",
"models/menus/IR",
"models/menus/EON",
"models/menus/LRF",
"models/menus/AVT",
"models/menus/Illum1",
"models/menus/Illum2",
"models/menus/VideoIO",
"models/menus/OperatorGimbal",
"models/menus/OperatorPayload",
"models/menus/Mission",
"models/menus/DigitalOverlays",
"models/menus/AnalogOverlays",
"models/menus/SteeringModes",
"models/menus/Profiles",
"models/menus/EOW_misc",
"models/menus/IR_misc",
"models/menus/GeoScan",
"models/menus/POI",
"models/menus/LDR",
"models/menus/DigitalTX",
"models/menus/AnalogTX",
"models/menus/EditEncryption",
"models/menus/MXPOD",
"models/menus/Waypoints",
"models/menus/SeeSpot",
"models/menus/ImageBlending",
"models/menus/Alarms"
],
function(log,$,Backbone,tools,SystemStatus,Gimbal,EOW,IR,EON,LRF,AVT,Illum1,Illum2,VideoIO,OpGimbal,OpPayload,Mission,
		 DigitalOverlays,AnalogOverlays,SteeringModes,Profiles,EOW_misc,IR_misc,GeoScan,POI,LDR,
		 DigitalTX,AnalogTX,EditEncryption,MXPOD,Waypoints,SeeSpot,ImageBlending,Alarms) {
		
	var Class = Backbone.Model.extend({
		
		initialize: function() {
			log.info("Initializing Menu manager.");
			
			$('#menus').css('position: absolute');
			
			this.menus = [];
			
			// Create a simple menu:
			this.menus.push(new SystemStatus());
			this.menus.push(new Gimbal());
			this.menus.push(new EOW());
			this.menus.push(new IR());
			this.menus.push(new EON());
			this.menus.push(new LRF());
			this.menus.push(new AVT());
			this.menus.push(new Illum1());
			this.menus.push(new Illum2());
			this.menus.push(new VideoIO());
			this.menus.push(new OpGimbal());
			this.menus.push(new OpPayload());
			this.menus.push(new Mission());
			this.menus.push(new DigitalOverlays());
			this.menus.push(new AnalogOverlays());
			this.menus.push(new SteeringModes());
			this.menus.push(new Profiles());
			this.menus.push(new EOW_misc());
			this.menus.push(new IR_misc());
			this.menus.push(new GeoScan());
			this.menus.push(new POI());
			this.menus.push(new LDR());
			this.menus.push(new DigitalTX());
			this.menus.push(new AnalogTX());
			this.menus.push(new EditEncryption());
			this.menus.push(new MXPOD());
			this.menus.push(new Waypoints());
			this.menus.push(new SeeSpot());
			this.menus.push(new ImageBlending());
			
			// Alarm pages:
			this.menus.push(new Alarms({name:"menu.alarms", parent_title:"SYSTEM STATUS", level: 2}));
			this.menus.push(new Alarms({name:"menu.gimbal.alarms", parent_title:"GIMBAL"}));
			this.menus.push(new Alarms({name:"menu.EOW.alarms", parent_title:"EOW"}));
			this.menus.push(new Alarms({name:"menu.IR.alarms", parent_title:"IR"}));
			this.menus.push(new Alarms({name:"menu.EON.alarms", parent_title:"EON"}));
			
			// this.showMenu("menu");
			this.showMenu("menu.gimbal");
			
			//var paper = raphael(cont,ww,hh);
		},
		
		setEnabled : function(visible) {
			if(visible) {
				$("#menus").show();
			}
			else {
				$("#menus").hide();			
			}
		},
		
		showMenu: function(menu_name) {
			for(var i in this.menus) {
				this.menus[i].show(this.menus[i].getName()==menu_name)
			}
		},

		getMenu: function(menu_name) {
			for(var i in this.menus) {
				if (this.menus[i].getName()==menu_name) {
					return this.menus[i]
				}
			}
		
		},
		
		selectItem: function(menu_name,item_name,sub_index) {
			this.showMenu(menu_name)
			tools.selectItem("#"+menu_name+"."+item_name,sub_index)
		},
		
		setField : function(mname,field,value) {
			tools.setItemContent("#"+mname+"."+field,value)			
		},
	});
	
	return Class;  
}); 