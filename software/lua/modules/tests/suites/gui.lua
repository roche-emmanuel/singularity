module(..., package.seeall)

local log = require "tracer"
local utils = require "utils"

local Container = require "gui.Container"

function logInfo(msg)
	log:info("Tests",msg)
end

function test_container()
	logInfo("Testing container")
	
	local cont = Container() 
	
	-- set a value:
	cont:set("key1.key2.key3.val",5)
	local val = cont:get("key1.key2.key3.val",0);
	assert_equal(5,val,"Invalid set/get behavior")
	
	local data = cont:getDataHolder() -- this is a simple table.
	assert_equal(5,data.key1.key2.key3.val,"Invalid data table")

	local sub = cont:getSubContainerForEntry("test.hello.world")
	assert_equal("table",type(sub),"Invalid sub container type.")
	
	logInfo("Container test done.")
end

