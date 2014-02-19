define(["log","jquery","backbone","base/Tools"],function(log,$,Backbone,tools) {
	
	var M = function(x,y) {
		return "M "+x+" "+y+" ";
	};
	var L = function(x,y) {
		return "L "+x+" "+y+" ";
	};
	var Z = function() {
		return "Z ";
	};
	
	var Class = Backbone.Model.extend({

		initialize: function() {
			var el = $("#gate_group")
			
			var cont = tools.getOrCreateDiv(el,this.getName());
			
			// maximum size of the reticle.
			var rsize = tools.getWindowSize();
			this._size = rsize;
			
			// retrieve the window size:
			var wsize = tools.getWindowSize()
			var bsize = tools.getBlockSize()
			
			tools.setPosition(cont,(wsize.x/2 - rsize.x/2)/bsize.x,(wsize.y/2 - rsize.y/2)/bsize.y, rsize.x/bsize.x,rsize.y/bsize.y);
			cont.css({position: "absolute"});
						
			this._paper = tools.createRaphaelPaper(cont);
			
			this.setSize(0.5,0.5);
		},
		
		getName: function() {
			return "gate_size"
		},

		setPosition: function(x,y) {
		
		},
		
		setSize: function(ww,hh) {
			this._paper.clear();
			var wsize = tools.getWindowSize()
			ww *= wsize.x/2.0;
			hh *= wsize.y/2.0;

			// get the center coordinate:
			var cx = this._size.x/2;
			var cy = this._size.y/2;

			var str = M(cx-ww,cy-hh)+L(cx+ww,cy-hh)+L(cx+ww,cy+hh)+L(cx-ww,cy+hh)+Z()
					 
			var p = this._paper.path(str)
			p.attr("stroke-width",2);
			p.attr("stroke","#fff");
			// p.attr("stroke-opacity",1.0);
			// p.attr("fill","#fff");	
		},
	});
	
	return Class;  
}); 