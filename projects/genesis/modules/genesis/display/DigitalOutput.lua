local Class = require("classBuilder"){name="DigitalOutput",bases={"genesis.display.VideoOutput"}};

local osg = require "osg"
local tools = require "osg.Tools"

-- This is a specialization of the video output class for digital output format.
function Class:new(options)
	self:check(options and options.id,"Invalid video output id")
	self._type="digital"
	self._id = options.id
end

return Class 
