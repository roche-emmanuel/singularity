$(function(){
	$("#config").load("config.html",function() {
		$('#configPanel').draggable().resizable().tooltip(); //{animate: true, helper: "ui-resizable-helper"});
		$('#tabs').tabs();
		$('.accordion').accordion({heightStyle: "fill"});
		$( ".spin_integer" ).spinner({min: 10, max: 100, step: 1});
	});
});


