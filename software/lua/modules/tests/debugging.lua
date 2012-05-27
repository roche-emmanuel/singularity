module(..., package.seeall)

local SimpleDebugger = require "debugging.SimpleDebugger"

local dbg = require "debugger"

function test_assert()
	assert_not_equal(SimpleDebugger.assert,nil,"The class function is nil.")
	
	local obj = SimpleDebugger()
	obj:assert(true,"Invalid assert result")
	
	--dbg:assert(false,"Invalid assert result!")
end
