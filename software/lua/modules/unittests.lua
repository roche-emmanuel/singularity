
local Class = require("classBuilder"):create{name="UnitTester",bases="base.Object"};

function Class:initialize()
	self:notice("Starting tests.")

	require "tests.lunatest"

	lunatest.suite("tests.suites.classBuilder")
	lunatest.run()		

	self:notice("Tests done.")
end

return Class()
