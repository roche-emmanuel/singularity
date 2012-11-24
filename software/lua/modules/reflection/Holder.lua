
local oo = require "loop.cached"

local IFunctionHolder = require "reflection.IFunctionHolder"
local IVariableHolder = require "reflection.IVariableHolder"
local IEnumHolder = require "reflection.IEnumHolder"
local Scope = require "reflection.Scope"

local Set = require "std.Set"

-- The Holder class implements the IFunctionHolder and 
-- IvariableHolder interfaces. This class serves as a parent
-- for scope holding functions and variables: namespaces and classes
local Holder = oo.class({},Scope,IFunctionHolder,IVariableHolder,IEnumHolder)

-- Define the class name
Holder.CLASS_NAME = "reflection.Holder"

function Holder:__init(obj)
    obj = Scope:__init(obj or {})
    obj = IFunctionHolder:__init(obj)
    obj = IVariableHolder:__init(obj)
    obj = IEnumHolder:__init(obj)
    obj = oo.rawnew(self,obj)
    obj._TRACE_ = "reflection.Holder"

    return obj
end

return Holder
