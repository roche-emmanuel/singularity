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
			var el = $("#avt_group")
			
			var cont = tools.getOrCreateDiv(el,this.getName());
			
			// maximum size of the reticle.
			var rsize = 500;
			this._size = rsize;
			
			// retrieve the window size:
			var wsize = tools.getWindowSize()
			var bsize = tools.getBlockSize()
			
			cont.css({position: "absolute"});
			this._cont = cont;
			this.setPosition(0.5,0.5)
						
			this._paper = tools.createRaphaelPaper(cont);
			
			this.setSize(10/1280,10/720);
		},
		
		getName: function() {
			return "avt_target_"+this.get("index")
		},

		setPosition: function(x,y) {
			var wsize = tools.getWindowSize();
			var bsize = tools.getBlockSize();
			
			this._x = x;
			this._y = 1.0 - y;
			
			var xx = this._x*wsize.x;
			var yy = this._y*wsize.y;
			var size = this._size
			
			tools.setPosition(this._cont,(xx - size/2)/bsize.x,(yy - size/2)/bsize.y, size/bsize.x,size/bsize.y);		
		},
		
		setSize: function(ww,hh) {
			this._paper.clear();
			var wsize = tools.getWindowSize()
			// Compute the half width and height:
			ww *= wsize.x/2.0;
			hh *= wsize.y/2.0;
			
			// Corner size in pixels:
			var ss = 20
			ss = Math.min(ss,2.0*ww/4.0)

			// get the center coordinate:
			var c = this._size/2;
			var str = M(c+ww,c)+L(c-ww,c)+
								M(c,c+hh)+L(c,c-hh)

			var p = this._paper.path(str)
			p.attr("stroke-width",2);
			p.attr("stroke","#fff");
			// p.attr("stroke-opacity",1.0);
			// p.attr("fill","#fff");	
		},
	});
	
	return Class;  
}); 