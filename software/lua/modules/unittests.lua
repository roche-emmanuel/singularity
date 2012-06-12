
local log = require "logger"
local Class = require("classBuilder"):create{name="UnitTester",bases="base.Object"};
local fs = require "base.FileSystem"

function Class:initialize()
	self:notice("Starting tests.")

	require "tests.lunatest"

	local func = function(data) 
		local path = "tests.suites.".. data.file:gsub("(.-)%.lua$","%1")
		log:info("Loading test suite ",path)
		lunatest.suite(path)
	end
	
	fs:traverse{path=root_path.."lua/modules/tests/suites",
		func=func,
		pattern="%.lua$"}
	
	lunatest.run()		

	self:notice("Tests done.")
end

return Class()
