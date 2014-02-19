define(['log','jquery','config','raphael','base/Tools'], function(log,$,cfg,raphael,tools) {
	
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
			
			var xr = tools.getBlockWidth();
			var yr = tools.getBlockHeight();
			
			var baspect = yr/xr; // The height of the block is greater than its width.
			
			var fsize = tools.getFontSize();
			var ls = tools.getLetterSpacing()
			var pad = ls/2.0;
			
			// Update the styles on the body element:
			//$('div').css('minHeight',fsize+2);
			$('.block div').css({letterSpacing: ls, paddingLeft: pad, paddingRight: pad, paddingTop: 1, paddingBottom: 1, marginRight: -ls});
			$('.block div').css({fontSize: fsize, lineHeight: (fsize)+'px'});
			$('.block div').css({minHeight: (fsize)+'px', height: (fsize)+'px', maxHeight: (fsize)+'px'});
			//$('#target_name').css({letterSpacing: ls+xr/2.0, marginRight: -ls-xr/2.0})
			// $('.lastchar').css({letterSpacing: ls/2.0});
			
			var str = ".textslot { \
				position: absolute; \
				//text-shadow: -1px -1px 1px #000, -1px 1px 1px #000, 1px -1px 1px #000, 1px 1px 1px #000; \
				letter-spacing: {0}px; \
				padding-left: {1}px; \
				padding-right: {1}px; \
				padding-top: 1px; \
				padding-bottom: 1px; \
				margin-right: {2}px; \
				font-size: {3}px; \
				line-height: {3}px; \
				min-height: {3}px; \
				max-height: {3}px; \
				height: {3}px; \
			}";
			
			str = tools.format(str,ls,pad,-ls,fsize,fsize)
			tools.addStyleRule(str);
			
			str = ".lastchar { \
				letter-spacing:{0}px; \
			}";
			str = tools.format(str,(ls/2.0))
			tools.addStyleRule(str);
			
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

			var setRight = function(select,pos,width) {
				$(select).css('right', pos*xr);
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
			setLeft('.sensor_r2b',59,1)
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
			
			setLeft('.illuminator',1,20)
			setBottom('.illuminator',5)
			
			setRight('.lrf',1,10)
			setBottom('.lrf',5)

			setRight('.see',1,11)
			setBottom('.see',4)
			
			setRight('.designator',1,12)
			setBottom('.designator',6)
			
			setRight("#transmitter_waypoint",1,6);
			setTop("#transmitter_waypoint",4,5);			
			setRight("#transmitter_waypoint_fov",1,6);
			setTop("#transmitter_waypoint_fov",4,5);
			
			setRight("#transmitter_encryption",4,2);
			setTop("#transmitter_encryption",11,1);
			
			setRight('.transmitter',1,6)
			setTop('.transmitter',9)
			
			setPos('.alarm_slot',10,5,cfg.block_width - 2*10)
			setPos('.status_slot',10,28,cfg.block_width - 2*10)
			
			var hh1 = 6/baspect
			var hh2 = 4/baspect
			var d0 = (hh1 - hh2)/2.0
			var d1 = 6 - 6/baspect
			var d2 = 4 - 4/baspect
			setPos('#az_pict_frame, #az_pict_fov',1,19+d2,4,hh2);
			setPos('#elev_pict_frame',1,11+d1,4,hh1);
			setPos('#elev_pict_fov',1,11+d0+d1,4,hh2);
			setPos('.elev_pict_value',1,16,5,1);
			setPos('.az_pict_value',2,23,4,1);
			
			setPos('#az_scale',34,31,13,2);
			setPos('#az_indicator',40,31,1,3);
			setPos('#elev_scale',1,12,2,10);
			setPos('#elev_indicator',0,16.5,4,1);

			setPos('#north_arrow',1,5,4,4)
			setPos('.north_indicator',2.5,6.5,1,1)
			setPos('#destabilization',40,3,1,1)
						
			setPos('.gated_imaging',69,20,10)
			setPos('.laser',68,23,11)			
			setPos('.strata',73,4,6)
			
			$('#hand_controller1, #hand_controller2, #mission_grip_alt' ).css({width: Math.floor(xr), height: Math.floor(yr), padding:0, border:0, marginRight:0})
			$('#strata_waypoint' ).css({width: 6*xr, height: 6*yr, padding:0, border:0, marginRight:0})	

			// build the north pointer:
			buildNorthPointer(4*xr,4*yr);
		}
	};
	
	return proto;
});
