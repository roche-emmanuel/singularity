define(["backbone","underscore","text!templates/overlay/hello.html"],function(Backbone,_,tpl) {
	var Overlay = Backbone.View.extend({
		el: $('#overlays'),
		
		initialize: function() {
			console.log("Wahoo!");
			// Using Underscore we can compile our template with data
			var data = {};
			var compiledTemplate = _.template( tpl, data );
			// Append our compiled template to this Views "el"
			this.$el.append( compiledTemplate );
		},
		
		render: function(){
		}
	
	});
	
	return Overlay;  
}); 