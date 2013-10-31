define(["log","jquery","backbone","base/Tools"],function(log,$,Backbone,tools) {
	
	var M = function(x,y) { return tools.Move(x,y,true) };
	var L = function(x,y) { return tools.Line(x,y,true) };
	var Z = tools.Close;
	var A = tools.Arc;
	var C = tools.Curve;
	
	var Class = Backbone.Model.extend({

		initialize: function() {
			var el = $("#elev_pict_frame")
			var size = tools.getSize(el)
			var ww = size.width;
			
			var paper = tools.createRaphaelPaper(el);
			
			var x1 = 1.0; //0.9
			var y1 = 2.0; //1.95
			var cx = 2.0
			var cy = 3.0
			var x2 = 2.666; //2.75
						
			// Compute the desired radius:
			var r = Math.sqrt(Math.pow(cx-x1,2)+Math.pow(cy-y1,2))
			var y2 = cy - Math.sqrt(r*r-Math.pow(cx-x2,2));

			var p = paper.path(M(0.5,0.5)+L(ww-0.5,0.5)+L(ww-0.5,1)+L(0.5,1)+Z()+
			  M(0.5,1)+L(0.5,1.75)+L(1.333,2.1)+L(1.333,3)+C(1.333,3.5,2.666,3.5,2.666,3.0,true)+
			  L(2.666,1.7)+L(ww-0.5,1.5)+L(ww-0.5,1)+
			  M(x1,y1)+A(r,r,x2,y2,1,0,true)+M(1.333,0.75)+L(2.5,0.75))
			  
			p.attr("stroke-width",2);
			p.attr("stroke","#fff");
			
			var p2 = paper.path(M(2.5,0.95)+L(2.75,0.75)+L(2.5,0.55)+Z())
			p2.attr("stroke-width",1);
			// p2.attr("stroke","#fff");
			p2.attr("stroke","none");
			p2.attr("fill","#fff");
		},
	});
	
	return Class;  
}); 