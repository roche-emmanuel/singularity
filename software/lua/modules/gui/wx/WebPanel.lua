local Class = require("classBuilder"){name="WebPanel",bases={"gui.wx.BasicWindow","gui.web.View"}};

local wx = require "wx"

local Event = require "base.Event"
local prof = require "debugging.Profiler"

--- Create an Output panel:
function Class:initialize(options)
	self:debug("Initializing WebPanel.")
	
	self:create()

	self:debug("WebPanel initialization done.")
end

function Class:getParentWindowHandle()
	return self._window:GetHandle()
end

function Class:getManager()
	return require "gui.web.WebManager"
end

function Class:createWebView(options)
	-- do nothing in this function.
end

function Class:onAppClosing()
	-- release all the images:
	self:info("Removing OutputPanel Sink.")
	sgt.LogManager.instance():removeSink(self._sink);

	self:info("Removing wx log handler...")
	sgt.LogManager.instance():setLogHandler(self._prevLogHandler)
	self._prevLogHandler = nil;		
end

function Class:create()
	local Interface = require "gui.wx.ControlInterface"
	self._window = self:createPanel{parent=self._parent}

	local handle =
	self:info("Window handle is: ", handle)
	
	-- create the webview here:
	
	self:setupWebView()
end

return Class
