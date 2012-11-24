local Class = require("classBuilder"){name="Scope",bases="reflection.Entity"};

-- Enumeration values:
Class.NAMESPACE = 0
Class.CLASS = 1
Class.ENUM = 2
Class.TEMPLATE = 3

function Class:initialize(options)
	self._scopeType = nil -- this value should be overriden by sub classes.
end

-- function Class:getHeaderFile()
	-- return self._headerFile
-- end

-- function Class:setHeaderFile(header)
	-- self:check(header==nil or type(header)=="string","Invalid header argument.")
	-- self._headerFile = header
-- end

--- Retrieve the type of this scope
-- @return the scope type corresponding to the object class
-- can be either Scope.NAMESPACE, Scope.CLASS or Scope.ENUM or Scope.TEMPLATE
-- Will return nil for the base Scope class
function Class:getScopeType()
	self:check(self._scopeType,"Invalid scope type.")
	return self._scopeType;
end

function Class:setScopeType(stype)
	self:check(stype,"Invalid scope type") -- scope type should not be nil.
	if stype == self._scopeType then
		return; -- nothing to do.
	end
	self:check(not self._scopeType,"scope type was already set to value: ",self._scopeType)
	self._scopeType = stype;
end

return Class
