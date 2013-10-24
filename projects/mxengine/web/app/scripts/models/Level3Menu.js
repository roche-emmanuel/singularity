define(["log","jquery","backbone","base/Tools","models/MenuBase"],function(log,$,Backbone,tools,MenuBase) {
		
	var Class = MenuBase.extend({
		
		setupMenu: function() {
			MenuBase.prototype.setupMenu.apply(this, arguments);
			this.setFrameBorders({left: 2, right: 2, top: 5, bottom: 2})
			this._level = 3
			this._parentLines = []
			this._separatorLines = []
			// this._hlines.push(2.5)
			this._parentSize = {x: 40, y: 30 }
		},
		
		// Retrieve the origin point to use for this menu:
		getOriginPoint : function() {
			return { x: 0, y: 1 };
		},
		
		// retrieve the position of the title slot:
		getTitlePosition : function() {
			return { x: 3, y: 4 };
		},
		
		setupFrame: function(frame) {
			var size = this.getFrameSize()
			var pww = size.x + this._parentSize.x
			var phh = size.y + this._parentSize.y
			frame.drawRect(0,0,pww,3.0);
			var offset = 0.5;
			frame.drawLine(offset,3-offset,offset,phh-offset)
			frame.drawLine(offset,phh-offset,offset+1,phh-offset)
			frame.drawLine(pww-offset,3-offset,pww-offset,4-offset)

			frame.drawRect(1,3,size.x-1,size.y-3);

			frame.drawLine(1+offset,5+offset,size.x-offset,5+offset)
			
			for(var i in this._parentLines) {
				var y = this._parentLines[i]
				frame.drawLine(offset,y,offset+1,y)
			}

			for(var i in this._separatorLines) {
				var y = this._separatorLines[i]
				frame.drawLine(offset+1,y+this._borders.top,size.x-offset,y+this._borders.top)
			}

			
			MenuBase.prototype.setupFrame.apply(this, arguments);
		},
	});
	
	return Class;  
}); 