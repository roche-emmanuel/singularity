define(["log","jquery","backbone","base/Tools","raphael"],function(log,$,Backbone,tools,raphael) {
		
	var M = tools.Move;
	var L = tools.Line;
	var C = tools.Close;
		
	var Class = Backbone.Model.extend({
		
		initialize: function() {			
			this._desc = "";
		},

		getWidth : function() {
			return this.get("width");
		},
		
		getHeight : function() {
			return this.get("height");
		},

		drawRect: function(xx,yy,ww,hh,offset) {
			offset = tools.defVal(offset,0.5);
			this._desc += M(xx+offset,yy+offset)+L(xx+ww-offset,yy+offset)+L(xx+ww-offset,yy+hh-offset)+L(xx+offset,yy+hh-offset)+C();		
		},
		
		drawBorder : function(offset) {
			var ww = this.getWidth();
			var hh = this.getHeight();
			// this._desc += M(offset,offset)+L(ww-offset,offset)+L(ww-offset,hh-offset)+L(offset,hh-offset)+C();
			this.drawRect(0,0,ww,hh,offset)
		},
		
		drawLine: function(x1,y1,x2,y2) {
			this._desc += M(x1,y1)+L(x2,y2);		
		},
		
		drawHLine : function(y,offset) {
			offset = tools.defVal(offset,0.5);
			var ww = this.getWidth();
			this._desc += M(offset,y)+L(ww-offset,y);
		},
		
		drawVLine : function(x,y,offset) {
			offset = tools.defVal(offset,0.5);
			var hh = this.getHeight();
			this._desc += M(x,y)+L(x,hh-offset);
		},
		
		drawHLines : function(lines,offset) {
			lines = tools.defVal(lines,[]);
			for (var i in lines) {
				this.drawHLine(lines[i],offset);
			}			
		},
		
		build : function() {
			var cont = this.get("parent");
			log.check(cont,"Invalid parent container");
			var ww = this.getWidth();
			var hh = this.getHeight();

			var size = tools.toScreen(ww,hh)
			var paper = raphael(cont.get(0),size.x,size.y);
				
			var frame = paper.path(this._desc);
			
			frame.attr("stroke-width",3);
			frame.attr("stroke","#FFF");					
			// frame.attr("fill","#0F0");					
		}
	});
	
	return Class;  
}); 