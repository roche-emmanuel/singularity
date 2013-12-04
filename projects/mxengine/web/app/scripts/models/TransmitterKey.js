define(["log","jquery","backbone","base/Tools"],function(log,$,Backbone,tools) {

	var M = function(x,y) {
		return "M "+x+" "+y+" ";
	};

	var L = function(x,y) {
		return "L "+x+" "+y+" ";
	};
	
	var Class = Backbone.Model.extend({

		initialize: function() {
			var el = $("#transmitter_encryption")
			var size = tools.getSize(el,true)
			var ww = size.width;
			var hh = size.height;
			
			var paper = tools.createRaphaelPaper(el);
			
			var r = Math.min(ww/2.0,hh)/2.0;
			
			var cf = 0.9;
			var c = paper.circle(r,hh/2,r*0.8)
			c.attr("stroke-width",2);
			c.attr("stroke","#fff");
			
			// Now build the line part:
			var p = paper.path(M(r*2,hh/2)+L(ww-r*0.3,hh/2)+L(ww-r*0.3,hh/2+r*cf)+M(ww*0.7,hh/2)+L(ww*0.7,hh/2+r*cf));
			
			p.attr("stroke-width",2);
			p.attr("stroke","#fff");
			p.attr("stroke-linecap","round");
		},
	});
	
	return Class;  
}); 