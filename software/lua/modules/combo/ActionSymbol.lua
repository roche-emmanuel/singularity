local Class = require("classBuilder"){name="ComboActionSymbol",bases="combo.OpeartorBase"};

function Class:__tostring()
	return self:getName()
end

return Class 
