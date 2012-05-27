
local oo = require "loop.base"
local dbg = require "debugger"

local IParent = oo.class{}

-- Define the class name
IParent.CLASS_NAME = "reflection.IParent"

function IParent:__init(obj)
    obj = oo.rawnew(self,obj or {})
    dbg:assert(obj.parent==nil,"Object already contains a 'parent' field")
    obj.parent = nil
    return obj
end

--- Retrieve the parent of that object.
-- @return the object parent object or nil if no parent.
function IParent:getParent()
    return self.parent
end

--- Set the parent of that object.
function IParent:setParent(parent)
	dbg:assertType(parent,require("reflection.Scope"))
    self.parent = parent
end

return IParent
