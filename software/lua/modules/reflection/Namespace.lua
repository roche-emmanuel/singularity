
local oo = require "loop.cached"
local dbg = require "debug"

local Holder = require "reflection.Holder"
local Scope = require "reflection.Scope"

-- The namespace class represents a regular namespace
-- which may contain functions and variables.
local Namespace = oo.class({},Holder)

-- Define the class name
Namespace.CLASS_NAME = "reflection.Namespace"

function Namespace:__init(obj)
    obj = Holder:__init(obj or {})
    obj = oo.rawnew(self,obj)
	obj.scopeType = Scope.NAMESPACE
    return obj
end

return Namespace
