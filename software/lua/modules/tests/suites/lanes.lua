module(..., package.seeall)

local log = require "tracer"

function test_lane_timer()
	log:info("Tests","Testing Lane timer");
	
	require"lanes"

	log:info("Tests","Done testing Lane timer.")
end

