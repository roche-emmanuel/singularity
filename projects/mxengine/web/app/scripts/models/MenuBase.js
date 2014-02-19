define(["log","jquery","backbone","base/Tools","models/MenuFrame"],function(log,$,Backbone,tools,MenuFrame) {
	
	var menu_map;
	
	var Class = Backbone.Model.extend({

		initialize: function() {
			this._currentXPos = 0;
			this._currentYPos = 0;
			this._currentAlign = "left";
			this._currentVAlign = "top";
			
			this._currentTextAlign = "left";
			this._currentRef = "frame";
			this._borders = {left: 3, right: 3, top: 4, bottom: 2}
			this._frameSize = {x: 45, y: 28};
			this._hlines = [];
			this._vlines = [];
			this.setupMenu();
			
			this.buildMenu();
			this.show(false);
		},
		
		setupMenu: function() {
			// log.info("Calling BaseMenu.setupMenu()");
			this._with_title = true
		},
		
		hasItem: function(mname) {
			if (typeof turretProxy !== 'undefined') {
				if (typeof menu_map == 'undefined') {
					menu_map = turretProxy.getMenuMap();
				}

				if (typeof menu_map == 'undefined') {
					return true;
				}

				var fname = this._name+"." +mname;
				// log.info("Menu map is valid, looking for item "+fname);
				
				var num = menu_map.length;
				// log.info("Menu map length: "+num);
				for(i=0;i<num;++i) {
					if(menu_map[i]==fname) {
						// log.info("Found item "+fname);
						return true;
					}
				}
				// log.info("NOT Found item "+fname);
				return false;
			}
			
			// check if the given menu is available or not:
			// if (typeof turretProxy != 'undefined') {
				// return turretProxy.hasItem(this._name+"." +mname);
			// }
			
			// be default show the item:
			return true;
		},
		
		setFrameBorders: function(borders) {
			this._borders.left = tools.defVal(borders.left,this._borders.left);
			this._borders.right = tools.defVal(borders.right,this._borders.right);
			this._borders.top = tools.defVal(borders.top,this._borders.top);
			this._borders.bottom = tools.defVal(borders.bottom,this._borders.bottom);
		},
		
		getFrameBorders: function() {
			return this._borders;
		},
		
		getName: function() {
			return this._name
		},
		
		getLevel: function() {
			return this._level
		},
		
		// Retrieve the origin point to use for this menu:
		getOriginPoint : function() {
			return { x: 0, y: 0 };
		},
		
		// retrieve the position of the title slot:
		getTitlePosition : function() {
			return { x: 2, y: 2 };
		},
		
		setFrameSize: function(ww,hh) {
			this._frameSize.x = ww;
			this._frameSize.y = hh;
		},
		
		getFrameSize: function() {
			return this._frameSize
		},
		
		buildFrame : function(cont) {
			
			var pt = this.getOriginPoint()
			tools.setPosition(cont,pt.x,pt.y);
			cont.css({position: "absolute"});
			
			var size = this.getFrameSize();
			var frame = new MenuFrame({parent: cont, width: size.x, height: size.y});
			this.setupFrame(frame);
			
			frame.build();			
		},
		
		show: function(visible) {
			var el = this.get("root");
			if (visible) {
				el.show();
			}
			else {
				el.hide();
			}
		},
		
		fixFrameHeight: function() {
			var hh = this._borders.top + this._currentYPos + this._borders.bottom;
			this._frameSize.y = hh
		},	
		
		buildMenu : function() {
			var parent = $("#menus");
			var name = this.getName();
			log.info("Building Menu "+name);
		
			// Get or create the container for this menu:
			var el = tools.getOrCreateDiv(parent,name);
			this.set("root",el)

			var cont = tools.getOrCreateDiv(el,this.getName()+".frame");
			
			this.show(false);
			
			var pt = this.getOriginPoint()
			// Create the title place holder:
			var ptt = this.getTitlePosition();
			
			if(this._with_title) {
				tools.createTextItem(el,name+".title","","MENU TITLE",pt.x+ptt.x,pt.y+ptt.y,this.getFrameSize().x)
			}
			
			if(this._with_parent) {
				// level 3 menus also have a parent title:
				tools.createTextItem(el,this.getName()+".parent_title","","MENU TITLE",pt.x+ptt.x-1,pt.y+ptt.y-3,this.getFrameSize().x)
			}
			
			this.setupContent()
						
			this.buildFrame(cont)
		},
		
		setParentTitle: function(title) {
			var name = this.getName()+".parent_title"			
			tools.setItemContent("#"+name,"LEVEL "+(this.getLevel()-1)+" - "+title);
		},
		
		setTitle: function(title) {
			var name = this.getName()+".title"			
			tools.setItemContent("#"+name,"LEVEL "+this.getLevel()+" - "+title);
		},
		
		setupFrame: function(frame) {
			for(var i in this._hlines) {
				var y = this._hlines[i];
				frame.drawHLine(y);
			}
			var y = tools.defVal(this._hlines[0],0)
			for(var i in this._vlines) {
				var x = this._vlines[i];
				frame.drawVLine(x,y);
			}
		},
		
		addSeparator: function(offset) {
			offset = tools.defVal(offset,0)
			var y = this._currentYPos+offset+this._borders.top;
			this._hlines.push(y);
		},
		
		addVerticalLine: function(x) {
			this._vlines.push(x);		
		},
		
		addEmptyLine: function() {
			this._currentYPos += 1.0;
		},
		
		getSlotDetails: function(options,classes) {
			options = tools.defVal(options,{});
			
			var decoSize = classes=="" ? 0.0 : 1.0;
			
			var el = this.get("root")
			log.check(el,"Invalid root element!");
			
			var x = tools.defVal(options.x,this._currentXPos);
			var y = tools.defVal(options.y,this._currentYPos);
			
			this._currentXPos = x;
			this._currentYPos = y+1.0;

			var ref = tools.defVal(options.ref,this._currentRef)
			this._currentRef = ref;
			
			var align = tools.defVal(options.align,this._currentAlign);
			this._currentAlign = align;

			var valign = tools.defVal(options.valign,this._currentVAlign);
			this._currentVAlign = valign;
			
			var frameOrig = this.getOriginPoint();
			var borders = this.getFrameBorders();
			var width = options.width;
			var height = tools.defVal(options.height,1);
			
			if(align=="right") {
				
				// We have to change the x position to reflect the desired result:
				var ww = frameOrig.x + this.getFrameSize().x - borders.right;
				
				if(ref=="window") {
					ww = tools.getNumBlocks().x;
				}
				
				x = ww - x - options.width; // width must be provided here.
			}
			else if(ref=="frame") {
				// We need to offset the position by the frame origin and border:
				x += frameOrig.x + borders.left;
			}
			
			if(valign=="bottom") {
				// We have to change the x position to reflect the desired result:
				var hh = frameOrig.y + this.getFrameSize().y - borders.bottom;
				
				if(ref=="window") {
					hh = tools.getNumBlocks().y;
				}
				
				y = hh - y - height;
				// log.info("using bottom y of: "+y)
			}
			else if(ref=="frame") {
				// We need to offset the position by the frame origin and border:
				y += frameOrig.y + borders.top;
			}
			
			var text_align = tools.defVal(options.textAlign,this._currentTextAlign);
			this._currentTextAlign = text_align;
			
			if (text_align != "left") {
				classes += " text_"+text_align;
			}
		
			
			var spanWidth = width;
			if(decoSize> 0.0) {
				x -= decoSize;
				if(width!="auto") {
					width += 2.0*decoSize;
				}
			}
			
			return {el: el, x: x, y: y, width: width, height: options.height, classes: classes, spanWidth: spanWidth};
		},
		
		// Add a new label text slot to the menu.
		addLabel: function(content,options) {
			options.width = tools.defVal(options.width,content.length);	
			options = this.getSlotDetails(options,"");
			return tools.createTextLabel(options.el,content,options.x,options.y,options.width,options.height);
		},
		
		addItem: function(id,content,classes,options) {
			
			if (typeof options.label != "undefined") {
				// add label before item:
				var width = options.width
				var x = options.x;
				delete options.width;
				delete options.x;
				var y = tools.defVal(options.y,this._currentYPos);
				options.y = y;
				options.x = tools.defVal(options.labelx,0);
				options.align = "left"
				options.textAlign = "left"
				this.addLabel(options.label,options)
				options.y = y;
				options.x = x;
				options.width = width;
				options.align = "right";
				options.textAlign = "right"
			}
			
			options = this.getSlotDetails(options,classes);
			
			return tools.createTextItem(options.el,this.getName()+"."+id,options.classes,content,options.x,options.y,options.width,options.height,options.spanWidth);		
		},
		
		addStatus: function(id,content,options) {
			return this.addItem(id,content,"",options)
		},
		
		addValue: function(id,content,options) {
			return this.addItem(id,content,"menu_value",options)
		},

		addButton: function(id,content,options) {
			options = tools.defVal(options,{})
			options.width = tools.defVal(options.width,content.length);
			return this.addItem(id,content,"menu_button",options)
		},
		
		addField: function(id,content,options) {
			return this.addItem(id,content,"menu_field",options)		
		},
		
		addButtonLine: function(ids,captions,spacer,options) {
			for(var i in ids)  {
				var name = tools.defVal(captions[i], ids[i].toUpperCase());
				options.width = name.length;
				this.addButton(ids[i],name,options)
				options.x += spacer + name.length;
			}
		},
		
		addModuleStatus: function(xpos) {
			this.addStatus("module_mode","XXXXXXXXXXX",{label: "MODE", x: xpos, width: 11});
			this.addStatus("error_level","XX",{label: "ALARMS", x: xpos, width: 5});
		},
		
		setupContent: function() {
			
		},
	});
	
	return Class;  
}); 