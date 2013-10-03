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

		drawBorder : function(offset) {
			offset = tools.defVal(offset,0.5);
			var ww = this.getWidth();
			var hh = this.getHeight();
			this._desc += M(offset,offset)+L(ww-offset,offset)+L(ww-offset,hh-offset)+L(offset,hh-offset)+C();
		},
				
		drawHLine : function(y,offset) {
			offset = tools.defVal(offset,0.5);
			var ww = this.getWidth();
			this._desc += M(offset,y)+L(ww-offset,y);
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
			
			frame.attr("stroke-width",4);
			frame.attr("stroke","#FFF");					
		}
	});
	
	return Class;  
}); 