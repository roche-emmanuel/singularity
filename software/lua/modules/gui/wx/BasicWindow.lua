local Class = require("classBuilder"){name="BasicWindow",bases="base.Object"};

local wx = require "wx"

--- Create an OSG Canvas:
function Class:initialize(options)
	self:check(options.intf,"Invalid interface in BasicWindow constructor.")

	local intf = options.intf
	
	self._intf = intf;
	self._parent = options.parent or intf:getCurrentParent()
end

function Class:getWindow()
	return self._window;
end

return Class
