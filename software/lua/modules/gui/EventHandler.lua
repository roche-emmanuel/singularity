local Class = require("classBuilder"){name="EventHandler",bases="base.Object"};

local Map = require "std.Map"
local Set = require "std.Set"

function Class:initialize(options)
	-- The listeners are saved in a Map of vectors per category.
	self._listeners = Map();
end

function Class:addListener(eventName,cb)
	self:checkNonEmptyString(eventName,"Invalid callback even name.")
	self:check(cb,"Invalid callback object.")
	
	-- register a callback into the current mapping:
	local list = self._listeners:get(eventName)
	if not list then
		list = Set()
		self._listeners:set(eventName,list)
	end
	
	return list:push_back(cb)
end

function Class:removeListener(eventName,cb)
	self:checkNonEmptyString(eventName,"Invalid callback even name.")
	self:check(cb,"Invalid callback object.")
	
	local list = self._listeners:get(eventName)
	if not list then
		return false-- nothing to do.
	end
	
	return list:erase(cb)
end

function Class:fireEvent(eventName,...)
	local list = self._listeners:get(eventName)
	if not list then
		return; -- nothing to do.
	end
	
	for _, cb in list:sequence() do
		local tcb = utils.type(cb)
		if tcb == "function" then
			cb(self,...)
		elseif tcb == "table" then
			if cb["on"..eventName] then
				cb["on"..eventName](cb,self,...)
			else
				self:warn("Could not find handling method for event '",eventName,"' in cb=",cb);
			end
		else
			self:warn("Unsupported listener type: ",tcb)
		end
	end
end

return Class
