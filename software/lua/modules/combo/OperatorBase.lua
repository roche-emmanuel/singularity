local Class = require("classBuilder"){name="ComboOperatorBase",bases="combo.Vertex"};

function Class:getName()
	self:no_impl()
end

function Class:getTypeTree()
	self:no_impl()
end

function Class:getArity()
	self:no_impl()
end

--return the type node of the operator
function Class:getOutputTree()
	self:no_impl()
end

--return the type tree of the input argument of index i
function Class:getInputTree(index)
	self:no_impl()
end

return Class 
