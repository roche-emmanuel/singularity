local Class = require("classBuilder"){name="ComboVertex",bases="base.Object"};

function Class:getTypeTree()
	self:no_impl()
end

function Class:isArgument()
	return false;
end

function Class:isAssociative()
	return false;
end

function Class:isCommutative()
	return false;
end

function Class:isUltrametric()
	return false;
end

function Class:isTransitive()
	return false;
end

function Class:isReflexive()
	return false;
end

function Class:isIrreflexive()
	return false;
end

function Class:isSymmetric()
	return false;
end

function Class:isIdentityOfIndiscernibles()
	return false;
end

return Class 
