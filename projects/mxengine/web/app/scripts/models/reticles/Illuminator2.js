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
			var rsize = 500;
			this._size = rsize;
			
			// retrieve the window size:
			// var wsize = tools.getWindowSize()
			// var bsize = tools.getBlockSize()
			
			//tools.setPosition(cont,(wsize.x/2 - rsize/2)/bsize.x,(wsize.y/2 - rsize/2)/bsize.y, rsize/bsize.x,rsize/bsize.y);
			cont.css({position: "absolute"});
			
			this._cont = cont;
			this.setPosition(0.5,0.5)
			this._paper = tools.createRaphaelPaper(cont);
			this.setSize(10/1280,10/720);

			tools.showElement("#"+this.getName(),false)
		},
		
		getName: function() {
			return "reticle_illuminator2";
		},
		
		// Set the position of this reticle from normalized coords
		setPosition: function(x,y) {
			var wsize = tools.getWindowSize();
			var bsize = tools.getBlockSize();
			
			this._x = x;
			this._y = y;
			
			var xx = this._x*wsize.x;
			var yy = this._y*wsize.y;
			var size = this._size
			
			tools.setPosition(this._cont,(xx - size/2)/bsize.x,(yy - size/2)/bsize.y, size/bsize.x,size/bsize.y);
		},
		
		setSize: function(ww,hh) {
			this._paper.clear();
			var wsize = tools.getWindowSize()
			ww *= wsize.x/2;
			hh *= wsize.y/2;
			
			// get the center coordinate:
			var c = this._size/2;
			
			var str = M(c-ww,c-hh)+L(c+ww,c-hh)+L(c+ww,c+hh)+L(c-ww,c+hh)+Z();
					 
			var p = this._paper.path(str)
			p.attr("stroke-width",2);
			p.attr("stroke","#fff");
			// p.attr("stroke-opacity",1.0);
			// p.attr("fill","#fff");	
		},
	});
	
	return Class;  
}); 