// Simple definition of a logger module.
define(['log','jquery','config'],function(log,$,cfg) {
	var res = {};
	
	var ww = $(window).width();
	var hh = $(window).height();
	log.debug("Window dimensions are: "+ww+"x"+hh);
	
	var sw = cfg.block_width; // screen width
	var sh = cfg.block_height; // screen height
	log.debug("Number of blocks are: "+sw+"x"+sh);

	var xr = ww/sw;
	var yr = hh/sh;
	
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
	
	res.getOrCreateDiv = function(parent,name) {
		return res.getOrCreateChild(parent,"#"+name,"<div id='"+name+"'></div>");
	};
	
	// set the position of an element in block coords:
	res.setPosition = function(el,x,y,ww,hh) {
		el = $(el);
		el.css('left', x*xr);
		el.css('top', y*yr);
		if (typeof ww !== 'undefined') {
			el.css('width', ww.x*xr);
		}
		if (typeof hh !== 'undefined') {
			el.css('height', hh*yr);
		}
	};
	
	res.defVal = function(variable,defVal) {
		return typeof variable !== 'undefined' ? variable : defVal;
	};
	
	res.Move = function(x,y) {
		return "M "+(x*xr)+" "+(y*yr)+" ";
	};
	
	res.Line = function(x,y) {
		return "L "+(x*xr)+" "+(y*yr)+" ";
	};

	res.Close = function() {
		return "Z ";
	};
	
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
	
	return res;
});
