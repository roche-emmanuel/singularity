function tintImage(imgElement) {
	// create hidden canvas (using image dimensions)
	var canvas = document.createElement("canvas");
	var w = imgElement.offsetWidth;
	var h = imgElement.offsetHeight;
	
	alert("Size: "+w+"x"+h);
	canvas.width = w;
	canvas.height = h;

	alert("get context!");
	var ctx = canvas.getContext("2d");
	
	alert("draw image");
	ctx.drawImage(imgElement,0,0);

	alert("get data");
	var map = ctx.getImageData(0,0,w,h);
	alert("map:"+map)
	var imdata = map.data;

	alert("change pixels");
	// convert image to grayscale
	for(var p = 0, len = imdata.length; p < len; p+=4) {
		imdata[p]=0;
		imdata[p+1]=255;
		imdata[p+2]=0;
	}

	alert("put data");
	ctx.putImageData(map,0,0);

	// overlay filled rectangle using lighter composition
	// ctx.globalCompositeOperation = "lighter";
	// ctx.globalAlpha = 0.5;
	// ctx.fillStyle=tintColor;
	// ctx.fillRect(0,0,canvas.width,canvas.height);
	
	alert("set src");
	// replace image source with canvas data
	imgElement.src = canvas.toDataURL();
	alert("Color changed!");
}

// window.onload = function(){
// $(document).load(function() {
$(window).load(function(){
	alert("In onload!");
	tintImage(document.getElementById('myImage'));
})

