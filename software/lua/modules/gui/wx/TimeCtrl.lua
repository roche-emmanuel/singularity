local Class = require("classBuilder"){name="TimeCtrl",bases="gui.wx.BasicWindow"};

local wx = require "wx"

--- Create an OSG Canvas:
function Class:initialize(options)

end

function Class:getWindow()
	return self._window;
end

return Class
