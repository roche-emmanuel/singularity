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
			var wsize = tools.getWindowSize()
			var bsize = tools.getBlockSize()
			
			tools.setPosition(cont,(wsize.x/2 - rsize/2)/bsize.x,(wsize.y/2 - rsize/2)/bsize.y, rsize/bsize.x,rsize/bsize.y);
			cont.css({position: "absolute"});
						
			this._paper = tools.createRaphaelPaper(cont);
			
			this.setSize(10/1280,10/720);

			tools.showElement("#"+this.getName(),false)			
		},
		
		getName: function() {
			return "reticle_socom_eow";
		},
		
		setPosition: function(x,y) {
		
		},
		
		setSize: function(ww,hh) {
			this._paper.clear();
			var wsize = tools.getWindowSize()
			ww *= wsize.x/8;
			hh *= wsize.y/8;
			
			// get the center coordinate:
			var c = this._size/2;
			
			var str = M(c+ww,c)+L(c+ww*2,c)+M(c+ww*3,c)+L(c+ww*4,c)
					 +M(c-ww,c)+L(c-ww*2,c)+M(c-ww*3,c)+L(c-ww*4,c)
					 +M(c,c+hh)+L(c,c+hh*2)+M(c,c+hh*3)+L(c,c+hh*4)
					 +M(c,c-hh)+L(c,c-hh*2)+M(c,c-hh*3)+L(c,c-hh*4)
					 +M(c-ww*4,c-hh*0.5)+L(c-ww*4,c+hh*0.5)+M(c+ww*4,c-hh*0.5)+L(c+ww*4,c+hh*0.5)
					 +M(c-ww*2,c-hh)+L(c-ww*2,c+hh)+M(c+ww*2,c-hh)+L(c+ww*2,c+hh)
					 +M(c-ww*0.5,c-hh*4)+L(c+ww*0.5,c-hh*4)+M(c-ww*0.5,c+hh*4)+L(c+ww*0.5,c+hh*4)
					 +M(c-ww,c-hh*2)+L(c+ww,c-hh*2)+M(c-ww,c+hh*2)+L(c+ww,c+hh*2)
					 
			var p = this._paper.path(str)
			p.attr("stroke-width",2);
			p.attr("stroke","#fff");
			// p.attr("stroke-opacity",1.0);
			// p.attr("fill","#fff");	
		},
	});
	
	return Class;  
}); 