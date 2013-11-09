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
			var el = $("#los_reticle_group")
			
			var cont = tools.getOrCreateDiv(el,this.getName());
			
			// maximum size of the reticle.
			var rsize = 100;
			this._size = rsize;
			
			// retrieve the window size:
			var wsize = tools.getWindowSize()
			var bsize = tools.getBlockSize()
			
			tools.setPosition(cont,(wsize.x/2 - rsize/2)/bsize.x,(wsize.y/2 - rsize/2)/bsize.y, rsize/bsize.x,rsize/bsize.y);
			cont.css({position: "absolute"});
						
			this._paper = tools.createRaphaelPaper(cont);
			
			this.setSize(10/1280,10/720);
		},
		
		getName: function() {
			return "reticle_maltesecross";
		},
		
		setPosition: function(x,y) {
		
		},
		
		setSize: function(ww,hh) {
			this._paper.clear();
			var wsize = tools.getWindowSize()
			ww *= wsize.x/2;
			hh *= wsize.y/2;
			
			// get the center coordinate:
			var c = this._size/2;
			var wm = 1*ww/3; // this is half of the minor width.
			var hm = 1*hh/3; // this is half of the minor height.
			
			var str = M(c-wm,c)+L(c-ww,c)+M(c+wm,c)+L(c+ww,c)
					 +M(c,c-hm)+L(c,c-hh)+M(c,c+hm)+L(c,c+hh)
					 +M(c-ww,c-hm)+L(c-ww,c+hm)+M(c+ww,c-hm)+L(c+ww,c+hm)
					 +M(c-wm,c-hh)+L(c+wm,c-hh)+M(c-wm,c+hh)+L(c+wm,c+hh)
					 
			var p = this._paper.path(str)
			p.attr("stroke-width",2);
			p.attr("stroke","#fff");
			// p.attr("stroke-opacity",1.0);
			// p.attr("fill","#fff");	
		},
	});
	
	return Class;  
}); 