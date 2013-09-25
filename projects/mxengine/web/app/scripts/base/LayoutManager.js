define(['log','jquery','config','raphael'], function(log,$,cfg,raphael) {
	
	var buildNorthPointer = function(w,h) {
		var paper = raphael("north_arrow",w,h);
		var cx = w/2; // center x
		var cy = h/2; // center y
		var ir = w/2*0.35; // internal range
		var hr = w/2*0.7; // line heigth
		var er = w/2; // external range
		var aw = w/2*0.15; // arrow width
		var pw = w/2*0.3; // pointer width
		
		var move = function(x,y) {
			return "M "+x+" "+y+" ";
		}
		
		var line = function(x,y) {
			return "L "+x+" "+y+" ";
		}

		var close = function() {
			return "Z ";
		}
		
		var el = paper.path(move(cx+aw/2,cy-ir)+line(cx+aw/2,cy-hr)
			+line(cx+pw/2,cy-hr)+line(cx,cy-er)
			+line(cx-pw/2,cy-hr)+line(cx-aw/2,cy-hr)
			+line(cx-aw/2,cy-ir)+close()
			+move(cx+aw/2,cy+ir)+line(cx+aw/2,cy+er)
			+line(cx-aw/2,cy+er)+line(cx-aw/2,cy+ir)+close()
		);
		el.attr("stroke-width",1);
		el.attr("stroke","#000");
		el.attr("stroke-opacity",0.7);
		el.attr("fill","#fff");
		//el.glow(0.1,1.0,0,0);
	}
	
	
	var proto = {
		setup : function() {
			log.debug("Setting up main layout...");
			
			// add a loader on the window:
			// $(window).load(function(){
			
			var ww = $(window).width();
			var hh = $(window).height();
			log.debug("Window dimensions are: "+ww+"x"+hh);
			
			var sw = cfg.block_width; // screen width
			var sh = cfg.block_height; // screen height
			log.debug("Number of blocks are: "+sw+"x"+sh);

			var xr = ww/sw;
			var yr = hh/sh;

			// Set the font size. We leave one pixel above, and one pixel under.
			var fsize = Math.floor(yr-2);
			var test = $('#compute');
			test.css('fontSize',fsize);
			var height = test.height(); //(test.clientHeight);
			var width = test.width(); //(test.clientWidth);
			
			// Compute the letter-spacing value and padding in pixels:
			var ls = xr-width;
			var pad = ls/2.0;
			
			// Update the styles on the body element:
			//$('div').css('minHeight',fsize+2);
			$('.block div').css({letterSpacing: ls, paddingLeft: pad, paddingRight: pad, paddingTop: 1, paddingBottom: 1, marginRight: -pad});
			$('.block div').css({fontSize: fsize, lineHeight: (fsize)+'px'});
			$('.block div').css({minHeight: (fsize)+'px', height: (fsize)+'px', maxHeight: (fsize)+'px'});
			//$('#target_name').css({letterSpacing: ls+xr/2.0, marginRight: -ls-xr/2.0})
			// $('.lastchar').css({letterSpacing: ls/2.0});
			
			$("<style type='text/css'> .lastchar{ letter-spacing:"+(ls/2.0)+"px;} </style>").appendTo("head");
			
			// change the lastchar rule itself:
			// for (i in document.styleSheets[0].rules) {
				// log.info("Testing base rule "+document.styleSheets[0].rules[i].selectorText)
			
				// if (document.styleSheets[0].rules[i].selectorText == ".lastchar") {
					// log.info("Setting lastchar base rule to :"+(ls/2.0)+"px")
					// document.styleSheets[0].rules[i].style.letterSpacing = (ls/2.0)+"px";
				// }
			// }
			
			var setLeft = function(select,pos,width) {
				$(select).css('left', pos*xr);
				$(select).css('width', width*xr);
			}

			var setTop = function(select,pos,height) {
				$(select).css('top', pos*yr);
				if(height!=undefined) {
					$(select).css('height', height*yr);
				}
			}
			
			var setPos = function(select,x,y,ww,hh) {
				setLeft(select,x,ww);
				setTop(select,y,hh);
			}
			
			var setBottom = function(select,pos) {
				$(select).css('bottom', Math.floor(pos*yr));
			}

			setTop('.top',1)
			setBottom('.bottom',1)
			
			setBottom('.platform_l0',3)
			setBottom('.platform_l2',2)
			setBottom('.target_r5',3)
			
			setLeft('.left',1,9)
			setLeft('.sensor_l1',12,4)
			setLeft('.sensor_l2',18,5)
			setLeft('.sensor_l3',25,3)
			setLeft('.sensor_c',36,9)
			setLeft('.sensor_r1',48,5)
			setLeft('.sensor_r2',55,4)
			setLeft('.sensor_r3',61,4)
			setLeft('.sensor_r4',67,4)
			setLeft('.sensor_r5',74,5)
			setLeft('.platform_l0',1,4)
			setLeft('.platform_l1',1,10)
			setLeft('.platform_l2',13,4)
			setLeft('.platform_l3',13,7)
			setLeft('.spot_l1',22,8)
			setLeft('.target_r1',42,7)
			setLeft('.target_r2',52,6)
			setLeft('.target_r3',61,4)
			setLeft('.target_r4',69,10)
			setLeft('.target_r5',68,6)
			
			$('img').each(function(index,item) {
				log.info("Calling setImageColor...");
				// tintImage(this)
				log.info("setImageColor done.");
			});
			
			setPos('#az_pict_frame, #az_pict_fov',1,19,4,4);
			setPos('#elev_pict_frame',1,11,4,6);
			setPos('#elev_pict_fov',1,13.5,4,1);
			setPos('.elev_pict_value',1,17,5,1);
			setPos('.az_pict_value',2,24,4,1);

			setPos('#north_arrow',1,5,4,4)
			setPos('.north_indicator',2.5,6.5,1,1)
			setPos('#destabilization',40,3,1,1)
			setPos('.gated_imaging',69,20,10)
			setPos('.laser',68,23,11)
			setPos('.illuminator',1,29,18)
			setPos('.strata',73,4,6)
			
			$('#hand_controller1, #hand_controller2, #mission_grip_alt' ).css({width: Math.floor(xr), height: Math.floor(yr), padding:0, border:0, marginRight:0})
			$('#strata_waypoint' ).css({width: 6*xr, height: 6*yr, padding:0, border:0, marginRight:0})	

			// build the north pointer:
			buildNorthPointer(4*xr,4*yr);
		}
	};
	
	return proto;
});
