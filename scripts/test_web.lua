#!/bin/sgt

log:notice "Executing init script..."

-- local App = require "gui.web.TestApp"
local App = require "gui.web.BookApp"
local app = App{profileFile="test_web_profile.log",
	pages={
		-- fs:getRootPath(true).."tests/data/web/test4.html",
		fs:getRootPath(true).."tests/data/web/test5.html",
		fs:getRootPath(true).."tests/data/web/test6.html",
		fs:getRootPath(true).."tests/data/web/test7.html",
	}
}

app:run()
	
log:notice "Script execution done."
