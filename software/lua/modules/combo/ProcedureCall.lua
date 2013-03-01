local Class = require("classBuilder"){name="ComboProcedureCall",bases="combo.OperatorBase"};

local TypeTree = require "combo.TypeTree"
local TypeNode = require "combo.TypeNode"

function Class:initialize(options)
	self._name = options.name
	self._arity = options.arity
	self._body = options.tree
	self._type = TypeTree{root=TypeNode.UNKNOWN}
	
	if self._body:empty() then
		self._outputTree = TypeTree{root=TypeNode.ILL_FORMED}
	elseif options.inferType then
		local tt = self._body:inferTypeTree()
		self:setTypeTree(tt)
		self:check(self:isWellFormed(tt),"Ill formed type tree.")
	end
end

function Class:inferTypeTree(
function Class:getName()
	return self._name
end

-- type_tree
function Class:getTypeTree()
	
end

function Class:setTypeTree(ttree)

end

-- number of arguments that takes the operator
function Class:getArity()
	return self._arity
end

-- Return the type node of the operator
function Class:getOutputTree()

end

-- Return the type tree of the input argument of index i
-- it is assumed for now that there is no arg_list
function Class:getInputTree(index)

end

-- Get the procedure body
function Class:getBody()
	return self._body
end

-- Output the procedure_call
-- if complete is false then it returns only the name
-- otherwise name(arity) := body
function Class:toString(complete)

end
	
return Class 
