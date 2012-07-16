module(..., package.seeall)

local log = require "tracer"
local osg = require "osg"

function test_vectors()
	local vec = osg.Vec4f(1.0,0.0,0.0,1.0);
	log:info("Tests","Generated vector is: (",vec:x(),", ",vec:y(),", ",vec:z(),", ",vec:w(),")")
end
