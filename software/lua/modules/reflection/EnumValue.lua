
local Class = require("classBuilder"){name="EnumValue",bases="reflection.Member"};

--- Retrieve the full name of that EnumValue.
-- The full name will take into account the parent scopes if any.
-- @return The fullname of the enum value, will have the form "ns1::ns2::enum::value".
function Class:getFullName()
	local grand_parent = self:getParent() and self:getParent():getParent()
	
	self:check(grand_parent,"Invalid enum value grand parent for enum value ",self:getName())
	
	local pname = grand_parent:getFullName()
	return (pname .. "::") .. self:getName()
end

return Class
