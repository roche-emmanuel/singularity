
local oo = require "loop.base"
local dbg = require "debugger"

local IParent = oo.class{}

-- Define the class name
IParent.CLASS_NAME = "reflection.IParent"

function IParent:__init(obj)
    obj = oo.rawnew(self,obj or {})
    obj._parent = nil
    return obj
end

--- Retrieve the parent of that object.
-- @return the object parent object or nil if no parent.
function IParent:getParent()
    return self._parent
end

--- Set the parent of that object.
function IParent:setParent(parent)
	obj:checkType(parent,require("reflection.Scope"))
    self._parent = parent  -- the parent may be nil.
end

return IParent
