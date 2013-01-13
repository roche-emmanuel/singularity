local Class = require("classBuilder"){name="Variable",bases="reflection.Member"}

function Class:isValidForWrapping()
	return not self:getName():find("%[")
end

return Class
