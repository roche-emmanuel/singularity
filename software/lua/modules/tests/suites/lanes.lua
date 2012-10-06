module(..., package.seeall)

local log = require "tracer"

function test_lane_timer()
	log:info("Tests","Testing Lane timer");
	
	local lanes = require "lanes"
	lanes.configure({with_timers=false})
		
	local f= lanes.gen( function(n) return 2*n end )
	local a= f(1)
	local b= f(2)

	log:info("Tests","Lane results are, a=",a[1],", b=",b[1] )
	  
	--lanes = nil
	--collectgarbage("collect")
	
	local linda= lanes.linda()
	
	--local ffi = require "ffi"
	--ffi.cdef "unsigned int sleep(unsigned int seconds);"
	--ffi.cdef "unsigned int usleep(unsigned int microseconds);"

	count = 0
	while true and count < 10 do
	  local key,v= linda:receive( 0.1, "dummy_key")
	  --ffi.C.sleep(1)
	  --ffi.C.usleep(500000)
	  
	  --log:info("Tests","Timer "..key..": "..v )
	  log:info("Tests","Timer : ".. lanes.now_secs() )
	  count = count+1
	end
	
	--[[
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
	]]
	
	log:info("Tests","Done testing Lane timer.")
end

