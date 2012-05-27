
local oo = require "loop.cached"
local IProtection = require "reflection.IProtection"
local Object = require "reflection.Object"

-- The object class implements the IName and IParent interfaces
local Member = oo.class({},Object,IProtection)

-- Define the class name
Member.CLASS_NAME = "reflection.Member"

function Member:__init(obj)
    obj = Object:__init(obj or {})
    obj = IProtection:__init(obj)
    obj = oo.rawnew(self,obj)
    return obj
end

return Member


