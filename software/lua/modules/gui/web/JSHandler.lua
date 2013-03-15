local Class = require("classBuilder"){name="JSHander",bases="base.Object"};

local awe = require "Awesomium"

function Class:initialize(options)
	self:info("Creating new JSHandler object.")
	
	self._handler = awe.JSMethodHandler{
		OnMethodCall = function(tt, obj, caller, objectId, method_name, args)
			--self:info("Calling JS handler with self=",tostring(self),", handler=",tostring(self._handler))
			self(caller,objectId, method_name, args)
		end,
		
		OnMethodCallWithReturnValue = function(tt, obj, caller, objectId, method_name, args)
			return self(caller,objectId, method_name, args) or awe.JSValue.Null()
		end,
	}
end

function Class:__call(caller, objectId, methodName, argsArray)
	-- check if we have a method with the given name:
	if not self[methodName] then
		self:warn("No method named ",methodName, " in JSMethodHandler.");
		return awe.JSValue.Undefined()
	end

	-- create a table for the args:
	local args = argsArray:asTable()
	
	-- call the method with those arguments:
	return self[methodName](self,objectId,unpack(args))		
end

function Class:getHandler()
	return self._handler;
end

return Class
