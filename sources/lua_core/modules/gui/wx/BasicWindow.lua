local Class = require("classBuilder"){name="BasicWindow",bases={"base.Object","gui.wx.HandlerConnector"}};

local wx = require "wx"
local tools = require "gui.wx.Tools"

--- Create an OSG Canvas:
function Class:initialize(options)
	self:check(options and options.parent, "A valid parent is needed to build a basic window.")
	self._parent = options.parent
end

function Class:createPanel(options)
	return tools:createPanel(options)
end

function Class:getOrCreateSizer(window)
	return tools:getOrCreateSizer(window)
end

function Class:getWindow()
	return self._window;
end

function Class:delete()
	self:info("Deleting ", self._CLASSNAME_, " object. Disconnecting handlers.")
	self:disconnectHandlers()
end

return Class
