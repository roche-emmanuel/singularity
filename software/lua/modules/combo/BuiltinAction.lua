local Class = require("classBuilder"){name="ComboBuiltinAction",bases="combo.OperatorBase"};

function Class:__tostring()
	return self:getName()
end

function Class:isReversible()
	self:no_impl()
end

function Class:alwaysSucceeds()
	self:no_impl()
end

function Class:getReversal()
	self:no_impl()
end

function Class:isIdempotent()
	self:no_impl()
end

function Class:isAdditive(index)
	self:no_impl()
end

function Class:existsAdditiveArgument()
	self:no_impl()
end

function Class:isZeroNeutral(index)
	self:no_impl()
end

function Class:existsZeroNeutralArgument()
	self:no_impl()
end

function Class:isModulo(index)
	self:no_impl()
end

function Class:moduloMin(index)
	self:no_impl()
end

function Class:moduloMax(index)
	self:no_impl()
end

function Class:preconditions()
	self:no_impl()
end

return Class 
