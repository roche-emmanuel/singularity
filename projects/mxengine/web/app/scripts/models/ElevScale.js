define(["log","jquery","backbone","base/Tools","sprintf"],function(log,$,Backbone,tools,sprintf) {
	
	var M = tools.Move;
	var L = tools.Line;
	var Z = tools.Close;
	var A = tools.Arc;
	var C = tools.Curve;
	
	var Class = Backbone.Model.extend({

		initialize: function() {
			// Create the first part of the widget with the fixed line:
			var el = $("#elev_indicator")
			var paper = tools.createRaphaelPaper(el);
			
			var p = paper.path(M(0.2,0.5)+L(1.0,0.5)+M(2.8,0.5)+L(3.5,0.5))
			p.attr("stroke-width",2);
			p.attr("stroke","#fff");
			
			var el = $("#elev_scale")
			el.css("overflow","hidden")
			
			var size = tools.getSize(el)
			
			var xr = tools.getBlockWidth()
			var yr = tools.getBlockHeight()
			

			var dy = 2.0; //*xr/yr;
			var tx = 1.65;
			var thh = 0.7; // text height.
			var y = 0.0; //(1.0 - thh)/2.0;
			
			var str = ""
			var txt;
			
			paper = tools.createRaphaelPaper(el,undefined,24*dy);
			
			paper.setStart()
			
			for(var j=12;j>-13;--j) {				
				paper.text(tx*xr,y*yr,sprintf("%s%02d",j<0?"-":"",Math.abs(j))).attr( //
				  {"font-family":"OverlayFont",
				   "font-size":""+thh*yr,
				   "fill":"#fff",
				   "text-anchor": "end"})

				y += dy;
			}
			
			var p = paper.path(str)
			p.attr("stroke-width",2);
			p.attr("stroke","#fff");
			
			this._set = paper.setFinish()
		
			this.setAngle = function(angle) {
				var pos = 12*dy + angle*dy/10.0 - size.height/2.0; // + thh/2.0
				// log.warn("Setting position to: "+(pos*xr)+", dx="+dx+", size.ww="+size.width+", angle="+angle)
				
				this._set.transform("T 0,-"+(pos*yr))
			}
			
			this.setAngle(0.0);
		},
	});
	
	return Class;  
}); 