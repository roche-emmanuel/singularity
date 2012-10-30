local Class = require("classBuilder"){name="ProtectionValidator",bases="reflection.validators.BasicValidator"};

local Protection = require "reflection.Protection"

function Class:initialize(options)
	self._protection = options.protection or Protection.PUBLIC
end

function Class:validate(object)	
	-- Check the protection status of the object:
	self:check(object.getProtection,"No getProtection method found.")	
	return object:getProtection()==self._protection
end

return Class
