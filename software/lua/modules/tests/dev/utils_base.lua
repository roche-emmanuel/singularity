local man = require("test.Manager")

man:addSuite("utils.base tests",function()
	
	local base = require "utils.base"
	
	Test("base.getOSName",function()
		log.info("Current OS name is: ", base.getOSName())
	end)
	
	Test("base.isWindows",function()
		assert.True(base.isWindows())
		assert.True(base.is_windows)
	end)
end)
