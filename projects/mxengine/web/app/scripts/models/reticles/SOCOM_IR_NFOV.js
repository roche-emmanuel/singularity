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
			return "reticle_socom_ir_nfov";
		},
		
		setPosition: function(x,y) {
		
		},
		
		setSize: function(ww,hh) {
			this._paper.clear();
			var wsize = tools.getWindowSize()
			ww *= wsize.x/6; // Horizontal tick size
			hh *= wsize.y/4; // vertical tick size
			
			var ms = ww/4.0;
			var radius = ww*0.05;

			// get the center coordinate:
			var c = this._size/2;
			
			var str = M(c+ww*0.5,c)+L(c+ww*3,c)+M(c-ww*0.5,c)+L(c-ww*3,c)
					 +M(c,c+hh*0.5)+L(c,c+hh*2.0)+M(c,c-hh*0.5)+L(c,c-hh*2.0)

			for(i=-3;i<=3;++i) {
				if(i!=0) {
					str += M(c+ww*i,c-ms*0.5)+L(c+ww*i,c+ms*0.5)	
				}
			}

			for(i=-2;i<=2;++i) {
				if(i!=0) {
					str += M(c-ms*0.5,c+hh*i)+L(c+ms*0.5,c+hh*i)	
				}
			}		 
			
			this._paper.setStart() 
			this._paper.path(str)

			// add the 4 circles here:
			this._paper.circle(c+ms,c,radius)
			this._paper.circle(c-ms,c,radius)
			this._paper.circle(c,c+ms,radius)
			this._paper.circle(c,c-ms,radius)

			var p = this._paper.setFinish()
			p.attr("stroke-width",2);
			p.attr("stroke","#fff");
			// p.attr("stroke-opacity",1.0);
			p.attr("fill","#fff");	
		},
	});
	
	return Class;  
}); 