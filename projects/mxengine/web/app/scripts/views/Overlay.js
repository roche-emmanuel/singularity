define(["backbone","underscore","base/LayoutManager",
		"text!templates/overlay/default.html",
		"models/OverlayManager"],
function(Backbone,_,lman,tpl,manager) {
		
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
			manager.setDefaults();
		},	
	});
	
	return Overlay;  
}); 