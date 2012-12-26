local Class = require("classBuilder"){name="EventCallback",bases="base.Object"};


function Class:initialize(desc)
	self:check(desc,"Invalid callback description.")
	self:check(desc.event,"Invalid event name for callback description.")
	
	self:check(desc.func or desc.object,"Invalid event callback function or object.")
	
	if not desc.func then
		self:check(desc.object,"Invalid object in unnamed callback description.")
		desc.func = desc.object["on".. desc.event]
	end
	
	if type(desc.func)=="string" then
		self:check(desc.object,"Invalid object in unnamed callback description.")
		desc.func = desc.object[desc.func]	
	end
	
	self._event = desc.event
	self._name = desc.name
	self._func = desc.func
	self._object = desc.object
	self._args = desc.args or {}
	self._oneShot = desc.oneShot
	
	-- insert the object as first argument is available:
	if self._object then
		table.insert(self._args,1,self._object)
	end
end

function Class:__call(...)
	-- call the callback with some extra arguments:
	return self._func(unpack(self._args),...)		
end

function Class:isOneShot()
	return self._oneShot
end

function Class:getName()
	return self._name
end

return Class
