#!/bin/sgt
	
log:notice "Script execution done."

local wx = require "wx"


function main()
	local App = require "gui.wx.SimpleApp"
	local Interface = require "gui.wx.EntryInterface"
	local im = require "gui.wx.ImageManager"

	local app = App()

	local parent = app:getFrame()

	local intf = Interface{root=app:getFrame()}

	local panel = intf:pushPanel{prop=1,flags=wx.wxALL+wx.wxEXPAND}
	require "gui.wx.components.LogPanel" {intf, prop=1}
	require "gui.wx.components.JoystickPanel" {intf}
	intf:popParent(true)
	
	parent:SetSize(wx.wxSize(1024,600))
	parent:Layout()
	-- parent:Fit()

	app:run()
end


main()

log:notice "Cleaning up."
collectgarbage("collect")
	
log:notice "Script execution done."
