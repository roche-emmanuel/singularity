define(["log","jquery","backbone","base/Tools"],function(log,$,Backbone,tools) {

	var Class = Backbone.Model.extend({

		initialize: function() {
			var el = $("#transmitter_waypoint")
			var size = tools.getSize(el,true)
			var ww = size.width;
			var hh = size.height;
			
			var paper = tools.createRaphaelPaper(el);
			
			var r = Math.min(ww,hh)/2.0;
			var t1 = 0.88
			var t2 = 0.72
			var c = paper.circle(ww/2,hh/2,r*t1)
			c.attr("stroke-width",4);
			c.attr("stroke","#fff");
			
			c = paper.circle(ww/2,hh/2,r*t2)
			c.attr("stroke-width",4);
			c.attr("stroke","#fff");
			
			var r2 = r*(1.0 - t1 - 0.01);
			var rect = paper.rect(ww/2-r2/2,0,r2,r2)
			rect.attr("stroke","none");
			rect.attr("fill","#fff");
		},
	});
	
	return Class;  
}); 