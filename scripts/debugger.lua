#!/bin/sgt

xpcall(function() 
		io.stdout:setvbuf('no'); 
		dofile(arg[1]) 
	end,
	function(err) print(debug.traceback(err)) end)
