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

function suite.test_vec2f()
	log:info("Testing vec2f")
	
	local v1 = sgt.vec2f(2.0,3.0)
	local v2 = sgt.vec2f(3.0,2.0)
	local v3 = sgt.vec2f(6.0,6.0)
	
	assert_equal(v3,v1*v2,"Invalid vector mult result.")
	assert_equal(12.0,v1:dot(v2),"Invalid dot result.")
	
	log:info("Done testing vec2f")
end

function suite.test_vec3d()
	log:info("Testing vec3d")
	
	local v1 = sgt.vec3d(2.0,3.0,1.0)
	local v2 = sgt.vec3d(3.0,2.0,1.0)
	local v3 = sgt.vec3d(6.0,6.0,1.0)
	
	assert_equal(v3,v1*v2,"Invalid vector mult result.")
	assert_equal(13.0,v1:dot(v2),"Invalid dot result.")
	
	log:info("Done testing vec3d")
end

return suite
