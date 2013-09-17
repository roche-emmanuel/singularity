#!/bin/sgt

log:notice "Executing init script..."

-- local App = require "gui.web.TestApp"
local App = require "gui.web.BookApp"
local app = App{profileFile="test_web_profile.log",
	pages={
		{"http://www.google.fr"},
		-- {fs:getRootPath(true).."tests/data/web/test4.html"},
		-- {fs:getRootPath(true).."tests/data/web/test5.html"},
		-- {fs:getRootPath(true).."tests/data/web/test6.html"},
		-- {fs:getRootPath(true).."tests/data/web/test7.html"},
		-- {fs:getRootPath(true).."tests/data/web/test8.html"},
		-- {fs:getRootPath(true).."tests/data/web/test9.html"; transparent=true},
		-- {fs:getRootPath(true).."tests/data/web/test10.html"},
		-- {fs:getRootPath(true).."tests/data/web/test_wescam.html"; transparent=true},
	}
}

app:run()
	
log:notice "Script execution done."
