
$(window).ready(function(){
	// update the block positions:
	// positions are given in number of blocks from the top/left corner
	
	var hh = $(window).height();
	var ww = $(window).width();

	var sw = 80; // screen width
	var sh = 36; // screen height
	var xr = ww/sw;
	var yr = hh/sh;

	// Set the font size:
	var fsize = Math.floor(yr-2)
	var test = $('#compute');
	test.css('fontSize',fsize);
	var height = test.height(); //(test.clientHeight);
	var width = test.width(); //(test.clientWidth);
	
	// Compute the letter-spacing value and padding in pixels:
	var ls = xr-width;
	var pad = ls/2.0;
	
	// Update the styles on the body element:
	//$('div').css('minHeight',fsize+2);
	$('.block div').css({letterSpacing: ls, paddingLeft: pad, paddingRight: pad, marginRight: -ls, paddingTop: 1, paddingBottom: 1});
	$('.block div').css({fontSize: fsize, lineHeight: (fsize)+'px'});
	$('#target_name').css({letterSpacing: ls+xr/2.0, marginRight: -ls-xr/2.0})
	
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
	
	setPos('#az_pict_frame, #az_pict_fov',1,19,4,4);
	setPos('#elev_pict_frame',1,11,4,6);
	setPos('#elev_pict_fov',1,13.5,4,1);

	setPos('#north_arrow',2,5,2,4)
	setPos('.north_indicator',2.5,6.5,1,1)
	setPos('#destabilization',40,3,1,1)
	setPos('.gated_imaging',69,20,10)
	setPos('.laser',68,23,11)
	setPos('.illuminator',1,29,18)
	setPos('.strata',73,4,6)
	
	$('#hand_controller1, #hand_controller2, #mission_grip_alt' ).css({width: Math.floor(xr), height: Math.floor(yr), padding:0, border:0, marginRight:0})
	$('#strata_waypoint' ).css({width: 6*xr, height: 6*yr, padding:0, border:0, marginRight:0})

	var test = document.getElementById("output");
	// output.innerHTML = "font="+ fsize +", size is: "+width+"x"+height+". spacing="+ls+"px"+", window size="+ww+"x"+hh;
	//output.innerHTML = "width="+ width +", bwidth="+xr;
	// output.innerHTML = "ls="+ ls +", pad="+pad;
	output.innerHTML = "";
	
	sgt.logInfo("Hello from JS!");
	log.info("This message is from the logger. x=", 3.456);
	log.warn("Hmmm, we have a problem!");
	
	
	//output.innerHTML = "window size=" + ww + "x" + hh;
});


