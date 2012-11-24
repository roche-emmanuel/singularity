local Class = require("classBuilder"){name="Class",bases="reflection.Member"}

--- Retrieve the full name of that Class.
-- The full name will take into account the parent scopes if any.
function Class:getFullName()
    if self:getParent() then
        -- Assume the parent as a getFullName() function:
        local pname = self:getParent():getFullName()
        return (pname=="" and "" or (pname .. "::")) .. self:getName()
    else
        return self:getName()
    end
end

return Class
