define(["log","jquery","backbone","base/Tools","sprintf"],function(log,$,Backbone,tools,sprintf) {
	
	var M = function(x,y) { return tools.Move(x,y,true) };
	var L = function(x,y) { return tools.Line(x,y,true) };
	var Z = tools.Close;
	var A = tools.Arc;
	var C = tools.Curve;
	
	var Class = Backbone.Model.extend({

		initialize: function() {
			// Create the first part of the widget with the fixed line:
			var el = $("#az_indicator")
			var paper = tools.createRaphaelPaper(el);
			
			var p = paper.path(M(0.5,0.0)+L(0.5,0.5)+M(0.5,2.0)+L(0.5,3.0))
			p.attr("stroke-width",2);
			p.attr("stroke","#fff");
			
			var el = $("#az_scale")
			el.css("overflow","hidden")
			
			var size = tools.getSize(el)
			
			var xr = tools.getBlockWidth()
			var yr = tools.getBlockHeight()
			

			var dx = 2.0;
			var y = 0.5;
			var ty = 1.2;
			var thh = 0.7; // text height.
			var l1 = 0.5;
			var l2 = 1.0;
			var x = 0.0;
			
			var str = ""
			var txt;

			var pad = function(a,b){return(1e15+a+"").slice(-b)}
			
			paper = tools.createRaphaelPaper(el,dx*36*3);
			
			paper.setStart()
			
			for(var i=0;i<3;++i) {
				for(var j=0;j<36;++j) {
					str += M(x,y)+L(x,y+l1)+M(x+dx/2.0,y)+L(x+dx/2.0,y+l2);
					
					paper.text(x*xr,ty*yr,sprintf("%02d",j)).attr(
					  {"font-family":"OverlayFont",
					   "font-size":""+thh*yr,
					   "fill":"#fff"})
   
					x += dx;
				}
			}
			
			var p = paper.path(str)
			p.attr("stroke-width",2);
			p.attr("stroke","#fff");
			
			this._set = paper.setFinish()
		
			this.setAngle = function(angle) {
				var pos = 36*dx + angle*dx/10.0 - size.width/2.0
				// log.warn("Setting position to: "+(pos*xr)+", dx="+dx+", size.ww="+size.width+", angle="+angle)
				
				this._set.transform("T -"+(pos*xr)+",0")
			}
			
			this.setAngle(0.0);
		},
	});
	
	return Class;  
}); 