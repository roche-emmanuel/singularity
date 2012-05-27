
local oo = require "loop.cached"
local dbg = require "debugger"

local Member = require "reflection.Member"

local Variable = oo.class({},Member)

-- Define the class name
Variable.CLASS_NAME = "reflection.Variable"

function Variable:__init(name)
    obj = Member:__init({})
    obj = oo.rawnew(self,obj)
    obj:setName(name or "")
    return obj
end

--- Retrieve the full name of that Variable.
-- The full name will take into account the parent scopes if any.
function Variable:getFullName()
    if self.parent then
        -- Assume the parent as a getFullName() function:
        local pname = self.parent:getFullName()
        return (pname=="" and "" or (pname .. "::")) .. self.name
    else
        return self:getName()
    end
end

return Variable
