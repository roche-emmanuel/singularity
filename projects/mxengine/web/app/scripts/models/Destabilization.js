define(["log","jquery","backbone","base/Tools"],function(log,$,Backbone,tools) {
	
	var M = function(x,y) { return tools.Move(x,y,true) };
	var L = function(x,y) { return tools.Line(x,y,true) };
	var Z = tools.Close;
	var A = tools.Arc;
	var C = tools.Curve;
	
	var Class = Backbone.Model.extend({

		initialize: function() {
			var el = $("#destabilization")
			var size = tools.getSize(el,true)
			
			var x1 = 0.25
			var y1 = 0.36
			var delta = 0.55-y1
			var angle = 70*Math.PI/180.0
			var force = 0.3
			
			var cf = Math.cos(angle)*force;
			var sf = Math.sin(angle)*force;
			var x2 = 1 - x1
			var y2 = y1-0.14;
			
			var paper = tools.createRaphaelPaper(el);

			var p = paper.path(M(x1,y1)+C(x1+cf,y1-sf,x2-cf,y2+sf,x2,y2,true))
			p.attr("stroke-width",2);
			p.attr("stroke","#fff");
			
			var p2 = p.clone()
			p2.transform("t 0,"+delta*size.width)
		},
	});
	
	return Class;  
}); 