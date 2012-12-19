local Class = require("classBuilder"){name="ValidValidator",bases="reflection.validators.BasicValidator"};

local Function = require "reflection.Function"

function Class:validate(object)	
	self:checkType(object,Function)
	return not object:isValidForWrapping()
end

return Class
