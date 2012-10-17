module(..., package.seeall)

local log = require "tracer"
if flavor=="ds411" then
	log:notice("Tests","Ignoring OSG tests on ds411.")
	return
end

local osg = require "osg"

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
