local suite = {}

function suite.test_entry_creation()
	log:info("Testing entry creation")
	
	local Entry = require "genesis.entry.Entry"
	local entry = Entry{name="my_entry",turret="dummy"} -- We use a dummy turret object here.

	assert_equal("my_entry",entry:getName(),"Invalid entry name")
	
	log:info("Done testing entry creation")
end

function suite.test_scene_creation()
	log:info("Testing scene creation")
	
	local Scene = require "scenes.TestScene1"
	
	local scn = Scene{name="testScene1"}
	
	-- ensure that we have a valid platform:
	
	assert_not_equal(nil,scn:getPlatform(),"Invalid platform in scene.")
	log:info("Done testing scene creation")
end

function suite.test_turret_creation()
	log:info("Testing turret creation")
	
	local Turret = require "genesis.turret.Turret"
	local turret = Turret{name="my_turret"}

	assert_equal("my_turret",turret:getName(),"Invalid turret name")
	
	log:info("Done testing turret creation")
end

function suite.test_entry_onChange()
	log:info("Testing onCHange event for entry")

	local Entry = require "genesis.entry.Entry"
	local entry = Entry{name="my_entry",turret="dummy"} -- We use a dummy turret object here.

	local executed = false
	
	entry:addListener("Changed",function()
		executed = true;
	end)
	
	local val = entry:getValue(5.0)

	assert_equal(5.0,val,"Invalid default value from Entry.")
	assert_equal(false,executed,"Invalid Changed event trigger.")
	
	entry:setValue(6.0)
	
	assert_equal(true,executed,"Invalid Changed event trigger 2.")
	
	log:info("Done testing entry Changed event")
end

function suite.test_tableentry_onChange()
	log:info("Testing onCHange event for entry")

	local Entry = require "genesis.entry.TableEntry"
	local entry = Entry{name="my_entry",turret="dummy"} -- We use a dummy turret object here.

	local executed = false
	local key, prevVal, newVal
	
	entry:addListener("Changed",function(handler, event, thekey, val, prev)
		executed = true;
		key = thekey
		prevVal = prev
		newVal = val
	end)
	
	local val = entry:getSubValue("my_key",5.0)

	assert_equal(5.0,val,"Invalid default value from Entry.")
	assert_equal(false,executed,"Invalid Changed event trigger.")
	
	entry:setSubValue("my_key", 6.0)
	
	assert_equal(true,executed,"Invalid Changed event trigger 2.")
	assert_equal("my_key",key,"Invalid key value on change")
	assert_equal(5.0,prevVal,"Invalid previous value on change")
	assert_equal(6.0,newVal,"Invalid previous value on change")
	
	log:info("Done testing entry Changed event")
end

return suite
