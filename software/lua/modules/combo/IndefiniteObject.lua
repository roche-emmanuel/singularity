local Class = require("classBuilder"){name="ComboIndefiniteObject",bases="combo.OperatorBase"};

function Class:__tostring()
	return self:getName()
end

return Class 
