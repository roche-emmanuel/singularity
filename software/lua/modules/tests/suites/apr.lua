module(..., package.seeall)

local log = require "tracer"

function test_lane_timer()
	log:info("Tests","Testing APR");
	
	local apr = require "apr"
	
	-- perform the internal tests:
	local tests = require "apr.test"
	
	tests()
	
	log:info("Tests","Done testing APR.")
end

