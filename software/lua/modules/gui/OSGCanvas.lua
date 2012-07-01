local Class = require("classBuilder"){name="OSGCanvas",bases="base.Object"};

local wx = require "wx"
local i18n = require "i18n"
local cfg = require "config"

--- Create an OSG Canvas:
function Class:initialize(options)
	self:debug4("Initializing OSG Canvas.")
	
	self._panel =
	self:debug4("OSG Canvas initialization done.")
end

return Class
