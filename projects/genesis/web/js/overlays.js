
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
	$('div').css('minHeight',fsize+2);
	$('.block div').css({letterSpacing: ls, paddingLeft: pad, paddingRight: pad, marginRight: -ls, paddingTop: 1, paddingBottom: 1});
	$('.block div').css({fontSize: fsize});
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
	
	var setBottom = function(select,pos) {
		$(select).css('bottom', Math.floor(pos*yr));
	}

	setTop('.top',1)
	setBottom('.bottom',1)
	setBottom('.platform_l0',3)
	setBottom('.platform_l2',2)
	
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
	
	setTop('#az_pict_frame',19,4)
	setLeft('#az_pict_frame',1,4)
	setTop('#az_pict_fov',19,4)
	setLeft('#az_pict_fov',1,4)
	
	var test = document.getElementById("output");
	// output.innerHTML = "font="+ fsize +", size is: "+width+"x"+height+". spacing="+ls+"px"+", window size="+ww+"x"+hh;
	//output.innerHTML = "width="+ width +", bwidth="+xr;
	output.innerHTML = "ls="+ ls +", pad="+pad;
	
	//output.innerHTML = "window size=" + ww + "x" + hh;
});


