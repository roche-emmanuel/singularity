define(["log","jquery","backbone","models/MenuBase"],function(log,$,Backbone,Menu) {
		
	var Class = Backbone.Model.extend({
		
		initialize: function() {
			log.info("Initializing Menu manager.");
			
			$('#menus').css('position: absolute');
			
			// Create a simple menu:
			new Menu({name: "system_status", 
					  pos_x: 1, 
					  pos_y: 1, 
					  width: 45, 
					  height: 28,
					  hlines: [3.5]});
			
			//var paper = raphael(cont,ww,hh);
		},

	});
	
	return Class;  
}); 