local suite = {}

local land = require "land"

function suite.test_half()
	log:info("Testing half")
	
	local v1 = sgt.half(2.0)
	local v2 = sgt.half(3.0)
	local v3 = sgt.half(5.0)
	
	assert_equal(v3,v1+v2,"Invalid half addition result.")
	assert_equal(5.0,v3:toFloat(),"Invalid toFloat result.")
	
	log:info("Done testing half")
end

return suite
