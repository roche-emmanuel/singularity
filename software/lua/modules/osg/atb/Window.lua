local Class = require("classBuilder"){name="ATBWindow",bases="base.Object"};

require "osg"
local atb = require "atb"

function Class:initialize(options)	
	self:check(options and options.name,"Invalid ATB window name")
	self._name = options.name
	self._bar = atb.TwNewBar(self._name);
end

function Class:addSeparator(name,def)
	atb.TwAddSeparator(self._bar, name or "", def or "");
end

return Class
