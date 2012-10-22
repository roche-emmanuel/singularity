#!/bin/sgt

require "luna"
 -- needed for the core module.
local log = require "logger"
log:notice "Executing init script..."

-- retrieve config:
local cfg = require "config"
local core = require "core"

core.LogManager.instance():setNotifyLevel(core.LogManager.DEBUG2)

local App = require "gui.wx.SimpleApp"
local BasicInterface = require "gui.wx.BasicInterface"

local app = App()

local parent = app:getFrame()
local msizer = wx.wxBoxSizer:new(wx.wxVERTICAL)
parent:SetSizer(msizer)

local panel = wx.wxPanel:new(parent,wx.wxID_ANY);
local sizer = wx.wxBoxSizer:new(wx.wxVERTICAL)
parent:GetSizer():Add(panel,1,wx.wxALL+wx.wxEXPAND,2)
panel:SetSizer(sizer)

local sizer = wx.wxBoxSizer:new(wx.wxVERTICAL)
local psizer = panel:GetSizer()
psizer:Add(sizer,1,wx.wxEXPAND+wx.wxALL,2)

local txt = wx.wxStaticText:new(panel,wx.wxID_ANY,"Coucou bis")
sizer:Add(txt,1,wx.wxALL,2)

local txt = wx.wxStaticText:new(panel,wx.wxID_ANY,"line 2")
sizer:Add(txt,1,wx.wxALL,2)

psizer:Layout()
sizer:Layout()

parent:Layout()

app:run()

log:info "Cleaning up"
collectgarbage('collect')
	
log:notice "Script execution done."
