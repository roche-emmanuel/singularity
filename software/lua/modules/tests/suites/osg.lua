module(..., package.seeall)

local log = require "tracer"
if flavor=="ds411" then
	log:notice("Tests","Ignoring OSG tests on ds411.")
	return
end

local osg = require "osg"

require "extensions.osg"

function test_vectors()
	local vec = osg.Vec4f(1.0,0.0,0.0,1.0);
	log:info("Tests","Generated vector is: (",vec:x(),", ",vec:y(),", ",vec:z(),", ",vec:w(),")")
end

function test_object_equality()
	log:info("Tests","Testing object equality.")
	
	local grp = osg.Group()
	
	local node = osg.Node()
	grp:addChild(node)
	
	local grp2 = node:getParent(0)
	
	assert_equal(grp,grp2,"Group equality test failed.")
	
	assert_equal(true,grp==grp2,"Group equality test 2 failed.")
	
	assert_equal(true,grp~=node,"Group equality test 3 failed.")

	log:info("Tests","Object equality tests done.")
end

function test_function_injection()
	
	log:info("Tests","Testing function injection.")
	
	local vec = osg.Vec4f(1.0,2.0,3.0,0.666)
	local res = vec:helloworld()
	
	assert_equal("string",type(res),"Invalid vec4f helloword result.")
	log:info("Tests","Result from vec4f is: ",res)
end
