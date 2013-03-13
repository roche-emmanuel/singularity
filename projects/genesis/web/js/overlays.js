
$(function(){
	// update the block positions:
	// positions are given in number of blocks from the top/left corner
	
	var sw = 80; // screen width
	var sh = 36; // screen height
	var xr = 100.0/sw;
	var yr = 100.0/sh;
	
	var setLeft = function(select,pos) {
		$(select).css('left', pos*xr + "%");
	}

	var setTop = function(select,pos) {
		$(select).css('top', pos*yr + "%");
	}
	
	setTop('.top',1)
	
	setLeft('.left',1)
	setLeft('.sensor_l1',12)
	setLeft('.sensor_l2',18)
	setLeft('.sensor_l3',25)
	setLeft('.sensor_c',36)
	setLeft('.sensor_r1',48)
	setLeft('.sensor_r2',55)
	setLeft('.sensor_r3',61)
	setLeft('.sensor_r4',67)
	setLeft('.sensor_r5',74)
	
	
	var test = document.getElementById("Compute");
	test.style.fontSize = 20.0;
	var height = (test.clientHeight);
	var width = (test.clientWidth);
	
	// Compute the letter-spacing value and padding in pixels:
	var ls = height-width;
	var pad = ls/2.0;
	
	// Update the styles on the body element:
	document.body.style.letterSpacing = ls+'px';
	document.body.style.paddingLeft = pad+'px';
	document.body.style.paddingRight = pad+'px';
	
	var test = document.getElementById("output");
	output.innerHTML = "A size is: "+width+"x"+height+". Setting letter spacing to "+ls+"px";
})

