
local log = require "logger"
local Class = require("classBuilder"):create{name="UnitTester",bases="base.Object"};
local fs = require "base.FileSystem"

function Class:initialize()
	self:notice("Starting tests.")

	require "lunatest"

	local func = function(data) 
		local path = "tests.".. data.file:gsub("(.-)%.lua$","%1")
		log:info("Loading test suite ",path)
		lunatest.suite(path)
	end
	
	fs:traverse{path=root_path.."lua/modules/tests",
		func=func,
		pattern="%.lua$"}
	
	lunatest.run()		

	self:notice("Tests done.")
end

return Class()
