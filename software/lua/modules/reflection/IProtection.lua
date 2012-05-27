
local oo = require "loop.base"
local dbg = require "debugger"

local IProtection = oo.class{}

IProtection.PUBLIC = 0
IProtection.PROTECTED = 1
IProtection.PRIVATE = 2

-- Define the class name
IProtection.CLASS_NAME = "reflection.IProtection"

function IProtection:__init(obj)
    obj = oo.rawnew(self,obj or {})
    dbg:assertNil(obj.protection,"Object already contains a 'protection' field")
    obj.protection = IProtection.PUBLIC
    return obj
end

--- Retrieve the protection state of that object.
function IProtection:getProtection()
    return self.protection
end

--- Set the protection of that object.
function IProtection:setProtectionFromString(prot)
    if prot == "public" then
		self:setProtection(IProtection.PUBLIC)    
    elseif prot == "protected" then
    	self:setProtection(IProtection.PROTECTED)
    elseif prot == "private" then
    	self:setProtection(IProtection.PRIVATE)
    else
    	dbg:error("Invalid protection string: ".. prot)
    end
end

function IProtection:getProtectionString()
    if self.protection == IProtection.PUBLIC then
		return "public"
    elseif self.protection == IProtection.PROTECTED then
		return "protected"
    else
		return "private"
	end
end

--- Set the protection state on that object.
function IProtection:setProtection(prot)
	dbg:assert(prot==IProtection.PUBLIC
		or prot==IProtection.PROTECTED
		or prot==IProtection.PRIVATE,
		"Invalid protection value")
	self.protection = prot
end

function IProtection:isPublic()
	return self.protection==IProtection.PUBLIC
end

function IProtection:isProtected()
	return self.protection==IProtection.PROTECTED
end

function IProtection:isPrivate()
	return self.protection==IProtection.PRIVATE
end

return IProtection
