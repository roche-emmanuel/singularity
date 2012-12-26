local Class = require("classBuilder"){name="EventHandler",bases="base.Object"};

local Map = require "std.Map"
local Set = require "std.Set"
local EventCallback = require "base.EventCallback"

function Class:initialize(options)
	-- The listeners are saved in a Map of vectors per category.
	self._listeners = Map();
	self._oneShots = Set();
end

function Class:addListener(desc,cb,oneShot)
	
	if type(desc)~="table" then
		self:deprecated("Should call addListener with an option table argument.")
		local func = type(cb)=="function" and cb
		local obj = type(cb)=="table" and cb
		return self:addListener{event=desc,func=func,object=obj,oneShot=oneShot}
	end
	
	local cb = EventCallback(desc);
	
	-- register a callback into the current mapping:
	self._listeners:getOrCreate(desc.event,Set):push_back(cb)
	return cb
end

function Class:removeListener(cb,eventName)
	--self:checkNonEmptyString(eventName,"Invalid callback even name.")
	self:check(cb,"Invalid callback object.")
	self:checkType(cb,EventCallback)
	
	if eventName then
		local list = self._listeners:get(eventName)
		if not list then
			return false-- nothing to do.
		end
		
		return list:eraseValue(cb)	
	else
		-- remove this listener from all events:
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
	else
		self._listeners:clear();
	end
end

function Class:fireEvent(eventName,...)
	local list = self._listeners:get(eventName)

	if not list then
		return; -- nothing to do.
	end
	
	for _, cb in list:sequence() do
		-- call the callback:
		cb{handler=self,event=eventName,args={...}};
		
		if cb:isOneShot() then
			self._oneShots:push_back(cb)
		end
	end
	
	-- clear the once methods:
	for _,cb in self._oneShots:sequence() do
		list:eraseValue(cb)
	end
	self._oneShots:clear();
end

return Class
