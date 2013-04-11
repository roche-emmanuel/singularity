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

function suite.test_vec4i()
	log:info("Testing vec4i")
	
	local v1 = sgt.vec4i(2.0,3.0,1.0,2.0)
	local v2 = sgt.vec4i(3.0,2.0,1.0,2.0)
	local v3 = sgt.vec4i(6.0,6.0,1.0,4.0)
	local v4 = sgt.vec3i(6.0,6.0,1.0)
	
	assert_equal(v3,v1*v2,"Invalid vector mult result.")
	assert_equal(v4,v3:xyz(),"Invalid dot result.")
	
	log:info("Done testing vec4i")
end

function suite.test_box2i()
	log:info("Testing box2i")
	
	local v1 = sgt.box2i(-1.0,1.0,-1.0,1.0)
	local v2 = sgt.vec2i(2.0,1.0)
	local v3 = sgt.vec2i(1.0,1.0)
	
	assert_equal(0,v1:center():op_index(0),"Invalid center x result.")
	assert_equal(0,v1:center():op_index(1),"Invalid center x result.")
	assert_equal(v3,v1:nearestInnerPoint(v2),"Invalid nearest point result.")
	assert_equal(1,v1:distanceTo(v2),"Invalid distance to result.")
	
	log:info("Done testing box2i")
end

function suite.test_box3d()
	log:info("Testing box3d")
	
	local v1 = sgt.box3d(-1.0,1.0,-1.0,1.0,-1.0,1.0)
	local v2 = sgt.vec3d(0.0,0.0,0.0)
	local v3 = sgt.vec3d(0.5,0.5,-0.5)
	
	assert_equal(v2,v1:center(),"Invalid center result.")
	assert_equal(true,v1:contains(v3),"Invalid contains result.")
	
	log:info("Done testing box3d")
end

function suite.test_mat2f()
	log:info("Testing mat2f")
	
	local v1 = sgt.mat2f(2.0,0.0,
						 0.0,2.0)
	local v2 = sgt.mat2f(3.0,0.0,
						 0.0,3.0)
	local v3 = sgt.mat2f(6.0,0.0,
						 0.0,6.0)
	local v4 = sgt.mat2f(1.0/3.0,0.0,
						 0.0,1.0/3.0)
	
	assert_equal(v3,v1*v2,"Invalid mat2 mult result.")
	assert_equal(v4,v2:inverse(),"Invalid mat2 inverse result.")
	
	log:info("Done testing mat2f")
end

return suite