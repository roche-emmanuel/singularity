local Class = require("classBuilder"){name="ComboVertex",bases="base.Object"};

-- adding comment in file.
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
