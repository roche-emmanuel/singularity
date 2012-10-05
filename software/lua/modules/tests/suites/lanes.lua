module(..., package.seeall)

local log = require "tracer"

function test_lane_timer()
	log:info("Tests","Testing Lane timer");
	
	local lanes = require "lanes"
	lanes.configure()
	
	local linda= lanes.linda()
	
	-- First timer once a second, not synchronized to wall clock
    --
	lanes.timer( linda, "sec", 1, 1 )
	
	-- Timer to a future event (next even minute); wall clock synchronized 
	--
	local t= os.date( "*t", os.time()+60 )    -- now + 1min
	t.sec= 0
	
	lanes.timer( linda, "min", t, 60 )   -- reoccur every minute (sharp)
	count = 0
	
	while true and count < 10 do
	  local v,key= linda:receive( "sec", "min" )
	  log:info("Tests","Timer "..key..": "..v )
	  count = count+1
	end

	lanes.timer( linda, "sec", 0 )
	lanes.timer( linda, "min", 0 )
	
	log:info("Tests","Done testing Lane timer.")
end

