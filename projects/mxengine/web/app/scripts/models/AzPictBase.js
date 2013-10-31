define(["log","jquery","backbone","base/Tools"],function(log,$,Backbone,tools) {

	var Class = Backbone.Model.extend({

		initialize: function() {
			var el = $("#az_pict_frame")
			var size = tools.getSize(el,true)
			var ww = size.width;
			var hh = size.height;
			
			//var ww = this.get("width")
			//var hh = this.get("height")
			var paper = tools.createRaphaelPaper(el);
			
			var c = paper.circle(ww/2,hh/2,(ww/2)*0.75)
			c.attr("stroke-width",2);
			c.attr("stroke","#fff");
		},
	});
	
	return Class;  
}); 