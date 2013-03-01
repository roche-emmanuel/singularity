local Class = require("classBuilder"){name="ComboActionSymbol",bases="combo.OperatorBase"};

function Class:__tostring()
	return self:getName()
end

return Class 
