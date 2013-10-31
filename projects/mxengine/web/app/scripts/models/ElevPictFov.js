define(["log","jquery","backbone","base/Tools"],function(log,$,Backbone,tools) {
	
	var M = tools.Move;
	var L = tools.Line;
	var C = tools.Close;
	var A = tools.Arc;
	
	var Class = Backbone.Model.extend({

		initialize: function() {
			var el = $("#elev_pict_fov")
			var size = tools.getSize(el)
			this._ww = size.width;
			this._hh = size.height;
			
			this._paper = tools.createRaphaelPaper(el);
		
			this.setFOVAngle(60)
		},
		
		setFOVAngle: function(angle) {
			this._paper.clear();
			
			var cx = this._ww/2;
			cy = cx;
			var r = cx*0.90;
			var theta = angle*Math.PI/360.0;
			var cost = Math.cos(theta)
			var sint = Math.sin(theta)
			
			var p = this._paper.path(M(cx,cy,true)+L(cx+r*cost,cy+r*sint,true)+A(r,r,cx+r*cost,cy-r*sint,0,0,true)+C())
			p.attr("stroke-width",1);
			p.attr("stroke","#000");
			p.attr("stroke-opacity",0.7);
			p.attr("fill","#fff");	
		},
	});
	
	return Class;  
}); 