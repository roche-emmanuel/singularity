define(["backbone","underscore","base/LayoutManager",
		"models/Overlay",
		"text!templates/overlay/default.html"],
function(Backbone,_,lman,OverlayModel,tpl) {
	
	var model = new OverlayModel;
	
	var Overlay = Backbone.View.extend({
		el: $('#overlays'),
		
		initialize: function() {
			console.log("Wahoo!");
			// Using Underscore we can compile our template with data
			var data = {};
			var compiledTemplate = _.template( tpl, data );
			// Append our compiled template to this Views "el"
			this.$el.append( compiledTemplate );
			
			// setup the layout:
			lman.setup();
			
			// setup the default Overlay values:
			model.setDefaults();
		},
		
		// Retrieve the overlay model used for this display:
		getModel : function() {
			return model;
		},
	
	});
	
	return Overlay;  
}); 