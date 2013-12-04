define(["log","jquery","backbone","base/Tools"],function(log,$,Backbone,tools) {
	
	var M = function(x,y) {
		return "M "+x+" "+y+" ";
	};

	var L = function(x,y) {
		return "L "+x+" "+y+" ";
	};
	
	var Class = Backbone.Model.extend({

		initialize: function() {
			var el = $("#transmitter_waypoint_fov")
			var size = tools.getSize(el,true)
			this._ww = size.width;
			this._hh = size.height;
			
			this._paper = tools.createRaphaelPaper(el);
		
			this.setMode("high")
		},
		
		setMode: function(mode) {
			if(mode=="high") {
				this.setFOVAngle(40);
			}
			else {
				this.setFOVAngle(0);
			}
		},
		
		setFOVAngle: function(angle) {
			this._paper.clear();
			
			var cx = this._ww/2;
			var cy = this._hh/2;
			
			var r = Math.min(this._ww,this._hh)/2.0;
			var t2 = 0.72
			
			r *= t2;
			var theta = angle*Math.PI/360.0;
			var cost = Math.cos(theta)
			var sint = Math.sin(theta)
			
			var p = this._paper.path(M(cx,cy)+L(cx-r*sint,cy-r*cost)+M(cx,cy)+L(cx+r*sint,cy-r*cost));
			// p.attr("stroke","none");
			p.attr("stroke-width",4);
			p.attr("stroke","#fff");
			p.attr("stroke-linecap","round");
			// p.attr("stroke-opacity",0.7);
			// p.attr("fill","#fff");	
		},
	});
	
	return Class;  
}); 