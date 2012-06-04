
local oo = require "loop.cached"
local dbg = require "debugger"

local Member = require "reflection.Member"

local EnumValue = oo.class({},Member)

-- Define the class name
EnumValue.CLASS_NAME = "reflection.EnumValue"

function EnumValue:__init(name)
    obj = Member:__init({})
    obj = oo.rawnew(self,obj)
    obj:setName(name or "")
    return obj
end

--- Retrieve the full name of that EnumValue.
-- The full name will take into account the parent scopes if any.
-- @return The fullname of the enum value, will have the form "ns1::ns2::enum::value".
function EnumValue:getFullName()
    if self:getParent() and self:getParent():getParent() then
        -- Assume the parent as a getFullName() function:
        -- get the parent of the parent:
        
        local pname = self:getParent():getParent():getFullName()
        return (pname=="" and "" or (pname .. "::")) .. self:getName()
    else
        return self:getName()
    end
end

return EnumValue
