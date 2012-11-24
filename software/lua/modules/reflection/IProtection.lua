local Class = require("classBuilder"){name="IProtection",bases="base.Object"}

Class.PUBLIC = 0
Class.PROTECTED = 1
Class.PRIVATE = 2

function Class:initialize(options)
    self.protection = Class.PUBLIC
end

--- Retrieve the protection state of that object.
function Class:getProtection()
    return self.protection
end

--- Set the protection of that object.
function Class:setProtectionFromString(prot)
    if prot == "public" then
		self:setProtection(Class.PUBLIC)    
    elseif prot == "protected" then
    	self:setProtection(Class.PROTECTED)
    elseif prot == "private" then
    	self:setProtection(Class.PRIVATE)
    else
    	self:error("Invalid protection string: ".. prot)
    end
end

function Class:getProtectionString()
    if self.protection == Class.PUBLIC then
		return "public"
    elseif self.protection == Class.PROTECTED then
		return "protected"
    else
		return "private"
	end
end

--- Set the protection state on that object.
function Class:setProtection(prot)
	self:check(prot==Class.PUBLIC
		or prot==Class.PROTECTED
		or prot==Class.PRIVATE,
		"Invalid protection value")
	self.protection = prot
end

function Class:isPublic()
	return self.protection==Class.PUBLIC
end

function Class:isProtected()
	return self.protection==Class.PROTECTED
end

function Class:isPrivate()
	return self.protection==Class.PRIVATE
end

return Class
