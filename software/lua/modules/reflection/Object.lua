
local oo = require "loop.cached"
local IName = require "reflection.IName"
local IParent = require "reflection.IParent"

-- The object class implements the IName and IParent interfaces
local Object = oo.class({},IName,IParent)

-- Define the class name
Object.CLASS_NAME = "reflection.Object"

function Object:__init(obj)
    obj = IName:__init(obj or {})
    obj = IParent:__init(obj)
    obj = oo.rawnew(self,obj)
    return obj
end

return Object

