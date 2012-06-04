
local oo = require "loop.cached"
local IName = require "reflection.IName"
local IParent = require "reflection.IParent"

local ObjectBase = require "base.Object"

-- The object class implements the IName and IParent interfaces
local Object = oo.class({},ObjectBase, IName,IParent)

-- Define the class name
Object.CLASS_NAME = "reflection.Object"

function Object:__init()
	local obj = ObjectBase:__init({})
    obj = IName:__init(obj)
    obj = IParent:__init(obj)
    obj = oo.rawnew(self,obj)
    obj._TRACE_ = "ReflectionObject"
    return obj
end

return Object

