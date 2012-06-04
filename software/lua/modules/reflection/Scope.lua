local oo = require "loop.cached"

local Object = require "reflection.Object"
local dbg = require "debugger"

-- The Scope class is the parent class for all scope type
-- containers: namespaces, classes, enums.
local Scope = oo.class({},Object)

-- Define the class name
Scope.CLASS_NAME = "reflection.Scope"

-- Enumeration values:
Scope.NAMESPACE = 0
Scope.CLASS = 1
Scope.ENUM = 2
Scope.TEMPLATE = 3

function Scope:__init(obj)
    obj = Object:__init(obj or {})
    obj = oo.rawnew(self,obj)
    obj._TRACE_ = Scope.CLASS_NAME
	obj.scopeType = nil -- invalid by default.
    return obj
end

function Scope:getHeaderFile()
	return self._headerFile
end

function Scope:setHeaderFile(header)
	self:check(header==nil or type(header)=="string","Invalid header argument.")
	self._headerFile = header
end


--- Retrieve the full name of that scope.
-- The full name will take into account the parent scopes if any.
function Scope:getFullName()
    if self:getParent() then
        -- Assume the parent as a getFullName() function:
        local pname = self:getParent():getFullName()
        return (pname=="" and "" or (pname .. "::")) .. self:getName()
    else
        return self:getName()
    end
end

--- Retrieve the type of this scope
-- @return the scope type corresponding to the object class
-- can be either Scope.NAMESPACE, Scope.CLASS or Scope.ENUM
-- Will return nil for the base Scope class
function Scope:getScopeType()
	return self.scopeType;
end

return Scope
