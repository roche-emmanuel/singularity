window.onload = function(){
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
}
