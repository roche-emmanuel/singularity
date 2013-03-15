
Awesomium.JSValue.__tostring = function(self)
	if self:IsBoolean() then
		return self:ToBoolean() and "true" or "false"
	elseif self:IsInteger() then
		return ""..self:ToInteger()
	elseif self:IsDouble() then
		return ""..self:ToDouble()
	elseif self:IsString() then
		return self:ToString()
	elseif self:IsArray() then
		return "[JSArray]"
	elseif self:IsObject() then
		return "[JSObject]"
	elseif self:IsNull() then
		return "[JSNull]"
	elseif self:IsUndefined() then
		return "[JSUndefined]"
	end
	
	return "[JSInvalid]"
end

Awesomium.JSValue.unbox = function(self)
	if self:IsBoolean() then
		return self:ToBoolean()
	elseif self:IsInteger() then
		return self:ToInteger()
	elseif self:IsDouble() then
		return self:ToDouble()
	elseif self:IsString() then
		return self:ToString()
	elseif self:IsArray() then
		return self:ToArray()
	elseif self:IsObject() then
		return self:ToObject()
	elseif self:IsNull() then
		return Awesomium.JSValue.Null()
	elseif self:IsUndefined() then
		return Awesomium.JSValue.Undefined()
	end	
end

Awesomium.JSArray.__tostring = function(self)
	return "[JSArray]"
end

Awesomium.JSObject.__tostring = function(self)
	return "[JSObject]"
end

Awesomium.JSArray.asTable = function(self)
	local tt = {}
	local item, res
	
	for i=0,self:size()-1 do
		item = self:At(i)
		if item:IsBoolean() then
			res = item:ToBoolean()
		elseif item:IsInteger() then
			res = item:ToInteger()
		elseif item:IsDouble() then
			res = item:ToDouble()
		elseif item:IsString() then
			res = item:ToString()
		elseif item:IsArray() then
			res = item:ToArray():toTable()
		elseif item:IsObject() then
			res = item:ToObject()
		elseif item:IsNull() then
			res = awe.JSValue.Null()
		elseif item:IsUndefined() then
			res = awe.JSValue.Undefined()
		end
		
		table.insert(tt,res)
	end	
	
	return tt
end


-- Extending base.Object:
local Object = require "base.Object"

function Object:getWebManager()
	if not self._webManager then
		self._webManager = require("gui.web.WebManager")
	end
	
	return self._webManager;
end
