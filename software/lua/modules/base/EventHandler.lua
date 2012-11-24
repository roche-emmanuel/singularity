local Class = require("classBuilder"){name="EventHandler",bases="base.Object"};

local Map = require "std.Map"
local Set = require "std.Set"

function Class:initialize(options)
	-- The listeners are saved in a Map of vectors per category.
	self._listeners = Map();
	self._oneShots = Map();
end

function Class:addListener(eventName,cb,oneShot)
	self:check(eventName~=nil,"Invalid callback even name.")
	self:check(cb,"Invalid callback object.")
	
	if oneShot then
		self._oneShots:getOrCreate(eventName,Set):push_back(cb)
	end
	
	-- register a callback into the current mapping:
	return self._listeners:getOrCreate(eventName,Set):push_back(cb)
end

function Class:removeListener(cb,eventName)
	--self:checkNonEmptyString(eventName,"Invalid callback even name.")
	self:check(cb,"Invalid callback object.")
	
	if eventName then
		local list = self._oneShots:get(eventName)
		if list then
			list:eraseValue(cb);
		end
		
		local list = self._listeners:get(eventName)
		if not list then
			return false-- nothing to do.
		end
		
		return list:eraseValue(cb)	
	else
		-- remove this listener from all events:
		for _,list in self._oneShots:sequence() do
			list:eraseValue(cb)
		end

		local found = false
		for _,list in self._listeners:sequence() do
			found = list:eraseValue(cb) or found
		end
		
		return found
	end
end

function Class:removeAllListeners(eventName)
	if eventName then
		-- Remove all the listeners for this category only:
		self._listeners:erase(eventName)
		self._oneShots:erase(eventName)
	else
		self._listeners:clear();
		self._oneShots:clear();
	end
end

function Class:fireEvent(eventName,...)
	local list = self._listeners:get(eventName)
	local once = self._oneShots:get(eventName)

	if not list then
		self:check(not once,"once list is not empty while event list is. once=",once)
		return; -- nothing to do.
	end
	
	for _, cb in list:sequence() do
		local tcb = type(cb)
		--self:info("Executing listener: ",cb)
		if tcb == "function" then
			cb{handler=self,event=eventName,args={...}}
		elseif tcb == "table" then
			if cb["on"..eventName] then
				cb["on"..eventName](cb,{handler=self,event=eventName,args={...}})
			else
				self:warn("Could not find handling method for event '",eventName,"' in cb=",cb);
			end
		else
			self:warn("Unsupported listener type: ",tcb)
		end		
	end
	
	if not once then
		return
	end
	
	-- clear the once methods:
	for _,cb in once:sequence() do
		list:eraseValue(cb)
	end
	once:clear();
end

return Class
