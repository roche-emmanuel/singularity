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

function suite.test_mat3d()
	log:info("Testing mat3d")
	
	local v1 = sgt.mat3d(2.0,0.0,0.0,
						 0.0,2.0,0.0,
						 0.0,0.0,2.0)
	local v2 = sgt.mat3d(3.0,0.0,0.0,
						 0.0,3.0,0.0,
						 0.0,0.0,3.0)
	local v3 = sgt.mat3d(6.0,0.0,0.0,
						 0.0,6.0,0.0,
						 0.0,0.0,6.0)
	local v4 = sgt.mat3d(1.0/3.0,0.0,0.0,
						 0.0,1.0/3.0,0.0,
						 0.0,0.0,1.0/3.0)
	
	assert_equal(v3,v1*v2,"Invalid mat3 mult result.")
	assert_equal(v4,v2:inverse(),"Invalid mat3 inverse result.")
	
	log:info("Done testing mat3d")
end

function suite.test_mat4d()
	log:info("Testing mat4d")
	
	local v1 = sgt.mat4d(sgt.mat3d(2.0,0.0,0.0,
						 0.0,2.0,0.0,
						 0.0,0.0,2.0))
	local v2 = sgt.mat4d(sgt.mat3d(3.0,0.0,0.0,
						 0.0,3.0,0.0,
						 0.0,0.0,3.0))
	local v3 = sgt.mat4d(sgt.mat3d(6.0,0.0,0.0,
						 0.0,6.0,0.0,
						 0.0,0.0,6.0))
	local v4 = sgt.mat4d(sgt.mat3d(1.0/3.0,0.0,0.0,
						 0.0,1.0/3.0,0.0,
						 0.0,0.0,1.0/3.0))
	
	assert_equal(v3,v1*v2,"Invalid mat4 mult result.")
	assert_equal(v4,v2:inverse(),"Invalid mat4 inverse result.")
	
	log:info("Done testing mat4d")
end

function suite.test_quatd()
	log:info("Testing quatd")
	
	local v1 = sgt.quatd(sgt.vec3d(1.0,1.0,1.0),48)
	local v2 = sgt.quatd(sgt.vec3d(1.0,1.0,1.0),-48)
		
	assert_equal(v2:getAngle(),v1:inverse():getAngle(),"Invalid quat inverse angle result.")
	assert_equal(v2:getAxis(),v1:inverse():getAxis(),"Invalid quat inverse axis result.")
	
	log:info("Done testing quatd")
end

function suite.test_task()
	log:info("Testing Task")
	
	local v1 = sgt.Task("MyTask",false,3)
	
	assert_equal("MyTask",v1:getName(),"Invalid task name result.")
	assert_equal(false,v1:isGpuTask(),"Invalid task isGpuTask() result.")
	assert_equal(3,v1:getDeadline(),"Invalid task getDeadline() result.")
	
	log:info("Done testing Task")
end

function suite.test_taskgraph()
	log:info("Testing TaskGraph")
	

	local v1 = sgt.TaskGraph()
	local v2 = sgt.Task("MyTask",false,3)
	
	assert_equal(true,v1:isEmpty(),"Invalid taskgraph isEmpty result.")
	v1:addTask(v2)
	
	assert_equal(false,v1:isEmpty(),"Invalid taskgraph isEmpty result bis.")
	
	log:info("Done testing TaskGraph")
end


return suite
