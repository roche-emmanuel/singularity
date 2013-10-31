// Simple definition of a logger module.
define(['log','jquery','config',"raphael","raphaelsvg","canvg","format"],function(log,$,cfg,raphael,rsvg,canvg,fmt) {
	var res = {};
	
	var ww = $(window).width();
	var hh = $(window).height();
	log.debug("Window dimensions are: "+ww+"x"+hh);
	
	var sw = cfg.block_width; // screen width
	var sh = cfg.block_height; // screen height
	log.debug("Number of blocks are: "+sw+"x"+sh);

	var xr = ww/sw;
	var yr = hh/sh;
	log.debug("Block size is: "+xr+"x"+yr);
	
	// Compute the letter-spacing value and padding in pixels:
	var ls = 0.0;
	
	res.getLetterSpacing = function() {
		if (ls==0.0) {
			// Set the font size. We leave one pixel above, and one pixel under.
			var fsize = res.getFontSize();
			var test = $('#compute');
			test.css('fontSize',fsize);
			var height = test.height(); //(test.clientHeight);
			var width = test.width(); //(test.clientWidth);
			
			// Compute the letter-spacing value and padding in pixels:
			ls = xr-width;		
		}
		
		return ls;
	}
	
	res.getFontSize = function() {
		return Math.floor(yr-2);
	};
	
	res.getBlockWidth = function() {
		return xr;
	};
	
	res.getBlockHeight = function() {
		return yr;
	};

	res.getWindowSize = function() {
		return { x: ww, y: hh };
	},
	
	res.getBlockSize = function() {
		return { x: xr, y: yr};
	},
	
	res.getNumBlocks = function() {
		return { x: sw, y: sh };
	}
	
	res.toScreen = function(x,y) {
		return { x : xr*x, y: yr*y }; 
	},
	
	res.blocks = function(x,y) {
		return { x: x, y: y };
	}
	
	res.getOrCreateChild = function(parent,childSelector,content,override) {
		override = typeof override !== 'undefined' ? override : false;
		
		if (typeof childSelector == "string") {
			childSelector = res.escapePoints(childSelector)
		}
		
		// Ensure we have a jquery object:
		parent = $(parent); 
		
		var el = parent.find(" > "+childSelector)
		if(el.length==0) {
			if(override) {
				parent.html(content);
			}
			else {
				$(content).appendTo(parent);
			}
			
			el = parent.find(" > "+childSelector);
		}
		
		log.check(el.length>0,"Element '> "+childSelector+"' could not be created with content: '"+content+"'");
		
		return el
	};
	
	res.getOrCreateDiv = function(parent,name,x,y,w,h) {
		var el = res.getOrCreateChild(parent,"#"+name,"<div id='"+name+"'></div>");
		if (typeof x !== 'undefined' && typeof w !== 'undefined' ) {
			res.setPosition(el,x,y,w,h);
		}
		return el
	};
	
	res.createTextSlot = function(parent,content,classes,id) {
		classes = res.defVal(classes,"");
		content = res.formatValue(content)
		
		if (typeof id !== 'undefined') {
			// Id is provided:
			return $("<div class='textslot "+classes+"' id='"+id+"'><span>"+content+"</span></div>").appendTo($(parent))
		}
		else {
			return $("<div class='textslot "+classes+"'><span>"+content+"</span></div>").appendTo($(parent))
		}
	}
	
	res.createTextLabel = function(parent,content,x,y,ww,hh) {
		var el = res.createTextSlot(parent,content)
		
		ww = res.defVal(ww,content.length)
		hh = res.defVal(hh,1)
		res.setPosition(el,x,y,ww,hh)
		
		return el
	}
	
	res.createTextItem = function(parent,id,classes,content,x,y,ww,hh,sww) {
		var el = res.createTextSlot(parent,content,classes,id)
		
		ww = res.defVal(ww,content.length)
		hh = res.defVal(hh,1*27/30); // 26/30 ratio is used here to leave enough space for the underline cursor.
		res.setPosition(el,x,y,ww,hh,sww)
		
		return el
	}
	
	res.formatValue = function(value) {
		var str = value+"";
		if (typeof value == "string" && value.length > 0) {
			var lastChar = value.substring(value.length-1);
			if (lastChar == " ") {
				lastChar = "&nbsp;"
			}
			str = str.replace(/\s/g,"&nbsp;");
			// str = value.substring(0,value.length-1) + "<em class='lastchar'>" + lastChar +"</em>"
			str = str.replace(/°/g,"&deg;");
		}	
		
		return str;
	}
	
	res.highlightPart = function(el,p1,p2) {
		el = res.getItem(el);
		
		var txt = el.text();
		
		var str = txt;
		
		if (p1 > 0 && p2 <= txt.length) {
			str = txt.substring(0,p1-1) + "<em class='highlighted'>" + txt.substring(p1-1,p2) + "</em>" + txt.substring(p2);
		}
		else {
			log.error("Invalid highlight range:"+p1+", "+p2+" with length="+txt.length);
		}

		el.html(str);
	}

	res.highlightItem = function(item,state) {
		el = res.getItem(item);

		if(typeof state == "boolean") {
			if(state) {
				el.addClass("highlighted");
			}
			else {
				el.removeClass("highlighted");
				el.html(el.text()) // remove internal highlight if any.
			}
		}
		else {
			// the state is an array:
			var p1 = state[0];
			var p2 = state[1];
			// log.info("Should highlight the range: "+ p1+" to "+p2);
			res.highlightPart(item,p1,p2);
		}		
	}
	
	res.getItemDiv = function(el) {
		if (typeof el == "string") {
			el = res.escapePoints(el)
		}
		
		return $(el); // no item found.		
	}
	
	res.getItem = function(el,create) {
		el = res.getItemDiv(el)
				
		var result = $(el).find("> span");
		create = res.defVal(create,true);
		if (result.length==0) {
			if(create) {
				// log.warn("Could not find the element '"+el+" > span'"+" parent content is: "+$(el).html()+". Forcing creation...")
				
				// force creation:
				$(el).html("<span></span>")
				result = $(el).find("> span");
			}
			else {
				log.error("Could not find the element '"+el+" > span'"+" parent content is: "+$(el).html()+".")
				return;
			}
		}
		
		//log.check(result.length>0,"Invalid item '"+el+"'")
		return result;		
	}
	
	res.unselectAll = function() {
		$(".selected").removeClass("selected");
	}
	
	res.selectItem = function(el) {
		res.unselectAll();
		var el = res.getItem(el)
		el.addClass("selected")
		
		// var offset = el.offset()
		// var caret = $("#caret")
		// caret.css({position: "absolute", left: offset.left, top: offset.top, width: el.width(), height: el.height()})
	}
	
	res.setItemContent = function(el,content,create) {
		content = res.formatValue(content);
		
		res.getItem(el,create).html(content);
	}
	
	// set the position of an element in block coords:
	res.setPosition = function(el,x,y,ww,hh,sww) {
		el = $(el);
		if (typeof x !== 'undefined') {
			el.css('left', x*xr);
		}
		if (typeof y !== 'undefined') {
			el.css('top', y*yr);
		}
		if (typeof ww !== 'undefined') {
			el.css('width', ww*xr);
		}
		if (typeof hh !== 'undefined') {
			el.css('height', hh*yr);
		}
		if(typeof sww !== 'undefined') {
			el.find("> span").width(sww*xr);
		}
	};

	// Apply relative transformation on the field:
	res.extendItem = function(el,ww,dir) {
		el = res.getItemDiv(el)
		var bx = el.offset().left; //el.css('left')
		var bww = el.width()/xr; //el.css('width')/xr
		var bsww = el.find("> span").width()/xr

		var diff = ww-bww;
		
		if (dir=="right") {
			res.setPosition(el,null,null,ww,null,bsww+diff);
		}
		else {
			// we should on the left so we modify the left position:
			log.error("extending on left to left="+bx+", bww="+bww+", diff="+diff+", ww="+ww+", bsww="+bsww);
			res.setPosition(el,bx-diff,null,ww,null,bsww+diff);			
		}
		
	}
	
	res.defVal = function(variable,defVal) {
		return typeof variable !== 'undefined' ? variable : defVal;
	};
	
	res.Move = function(x,y,iso) {
		var iyr = (iso==true ? xr : yr)
		return "M "+(x*xr)+" "+(y*iyr)+" ";
	};
	
	res.Line = function(x,y,iso) {
		var iyr = (iso==true ? xr : yr)
		return "L "+(x*xr)+" "+(y*iyr)+" ";
	};

	res.Close = function() {
		return "Z ";
	};
	
	res.Arc = function(rx,ry,x,y,large_arc,sweep,iso) {
		var iyr = (iso==true ? xr : yr)
		return "A "+(rx*xr)+" "+(ry*iyr)+" 0 "+large_arc+" "+sweep+" "+(x*xr)+" "+(y*iyr)+" ";
	};

	res.Curve = function(x1,y1,x2,y2,x,y,iso) {
		var iyr = (iso==true ? xr : yr)
		return "C "+(x1*xr)+" "+(y1*iyr)+" "+(x2*xr)+" "+(y2*iyr)+" "+(x*xr)+" "+(y*iyr)+" ";
	};
	
	res.showElement = function(el,enabled) {
		el = $(el);
		if(enabled) 
			el.removeClass("hidden");
		else
			el.addClass("hidden");
	}
	
	res.toggleVisibility = function(el) {
		el = $(el);
		if (el.hasClass("hidden")) {
			log.debug("Toggling display to visible.");
			el.removeClass("hidden");
		}
		else {
			log.debug("Toggling display to hidden.");
			el.addClass("hidden");			
		}		
	};
	
	res.addStyleRule = function(str) {
		str = "<style type='text/css'> "+str+"</style>"
		$(str).appendTo("head");
	}
	
	res.format = function() {
		// The string containing the format items (e.g. "{0}")
		// will and always has to be the first argument.
		var theString = arguments[0];
		
		// start with the second argument (i = 1)
		for (var i = 1; i < arguments.length; i++) {
			// "gm" = RegEx options for Global search (more than one instance)
			// and for Multiline search
			var regEx = new RegExp("\\{" + (i - 1) + "\\}", "gm");
			theString = theString.replace(regEx, arguments[i]);
		}
		
		return theString;
	}
	
	res.escapePoints = function(txt) {
		return txt.replace(/\./gm,"\\\.")
	}
	
	res.setupShape = function(shape) {
		shape.attr("stroke-width",0);
		shape.attr("stroke","#FFF");		
		shape.attr("fill","#FFF");	
	}
	
	var off = 0
	res.drawRightTriangle = function(paper,size) {
		paper.clear()
		
		var str = "M{0} {1} L {2} {3} L {4} {5} Z"
		str = res.format(str,off,off,size.x-2*off,size.y/2,off,size.y-2*off)
		var shape = paper.path(str);

		res.setupShape(shape);
		
		return paper.toSVG();
	}

	res.drawLeftTriangle = function(paper,size) {
		paper.clear()
		
		var str = "M{0} {1} L {2} {3} L {4} {5} Z"
		str = res.format(str,off,size.y/2,size.x-2*off,off,size.x-2*off,size.y-2*off)
		var shape = paper.path(str);

		res.setupShape(shape);
		
		return paper.toSVG();
	}
	
	res.drawLosange = function(paper,size) {
		paper.clear()
		
		var str = "M{0} {1} L {2} {3} L {4} {5} L {6} {7} Z"
		str = res.format(str,off,size.y/2,size.x/2,off,size.x-2*off,size.y/2,size.x/2,size.y-2*off)

		var shape = paper.path(str);

		res.setupShape(shape);
		
		return paper.toSVG();
	}

	CanvasRenderingContext2D.prototype.clear = 
	  CanvasRenderingContext2D.prototype.clear || function (preserveTransform) {
		if (preserveTransform) {
		  this.save();
		  this.setTransform(1, 0, 0, 1, 0, 0);
		}

		this.clearRect(0, 0, this.canvas.width, this.canvas.height);

		if (preserveTransform) {
		  this.restore();
		}           
	};
	
	res.getSize = function(el,inpixel) {
		el = $(el);
		inpixel = res.defVal(inpixel,false)
		
		var ww = el.width();
		var hh = el.height();
		
		return inpixel ? { width: ww, height: hh} : {width: ww/xr, height: hh/yr}
	};
	
	res.createRaphaelPaper = function(parent,ww,hh) {
		var el = $(parent)
		var size = res.getSize(el)
		ww = res.defVal(ww,size.width)
		hh = res.defVal(hh,size.height)
		
		var paper = raphael(el.get(0),ww*xr,hh*yr)
		return paper
	}
	
	res.createMenuShapes = function() {
		// Use el as a temporary parent for a block canvas:
		el = $("#draw_canvas");
		var size = res.toScreen(0.8, 0.9); //
		// log.warn("Using paper size: ("+size.x+"x"+size.y+")");
		
		var paper = raphael(el.get(0),size.x,size.y);
				
		var svg = res.drawRightTriangle(paper,size)

		// log.info("Got SVG content: "+svg);
		
		var canvas = document.getElementById('draw_canvas');
		var ctx = canvas.getContext('2d');
		ctx.clear();
	
		// Note that res.getLetterSpacing()-2 is used here to adapt to the resized canvas size of (0.8,0.9)
		// Still need to clarify how to control the image size (width and height are not respected completely ?)
		var style = '.menu_{0}::{1} { \
				content:""; \
				float:{3}; \
				width:'+size.x+'px; \
				height:'+size.y+'px; \
				margin:0 '+(res.getLetterSpacing()-2)+'px 0 0; \
				padding: 0; \
				border:0; \
			    background: url("{2}"); \
				text-decoration: none; \
			}';
		
		canvg(canvas, svg, { renderCallback: function() {
			log.info("Rendered right arrow.");
			// This is the right pointing arrow:
			var data = canvas.toDataURL();
			ctx.clear();
			
			res.addStyleRule(res.format(style,"button","after",data,"right"));
			res.addStyleRule(res.format(style,"value","before",data,"left"));
			
			var svg = res.drawLeftTriangle(paper,size)
			canvg(canvas, svg, { renderCallback: function() {
				log.info("Rendered left arrow.");
				var data = canvas.toDataURL();
				ctx.clear();
	
				res.addStyleRule(res.format(style,"button","before",data,"left"));
				res.addStyleRule(res.format(style,"value","after",data,"right"));
			
				var svg = res.drawLosange(paper,size)
				canvg(canvas, svg, { renderCallback: function() {
					log.info("Rendered losange.");
					var data = canvas.toDataURL();
					ctx.clear();
		
					res.addStyleRule(res.format(style,"field","before",data,"left"));
					res.addStyleRule(res.format(style,"field","after",data,"right"));				
				}});				
			}});
			
		} });
		
	}
	
	res.createMenuShapes();
	
	return res;
});
