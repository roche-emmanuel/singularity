local Class = createClass{name="Linda",bases="core.Object"}

--[[
Class: core.Linda

Encapsulation for a lane linda object to support object passing.

This class inherits from <core.Object>.
]]

--[=[
--[[
Constructor: Linda

Create a new instance of the class.

Parameters:
	options.linda - the base linda object.
]]
function Linda(options)
]=]
function Class:initialize(options)
	self._linda = options.linda or options[1]
	-- self:check(self._linda,"Invalid linda object!")
end

function Class:getLinda()
	return self._linda
end

function Class:wait(interval)
	self._linda:receive(interval, "dummy_key")
end

function Class:toPtr(obj)
	if obj==nil then
		return nil
	end
	
	local ptr = obj:asVoid()
	return sgt.toLightUserdata(ptr)
end

function Class:fromPtr(ptr,class)
	if ptr==nil then
		return nil
	end
	
	local vptr = sgt.fromLightUserdata(ptr)
	return class.fromVoid(vptr)
end

function Class:setObject(key,obj)	
	self._linda:set(key,self:toPtr(obj))
end

function Class:getObject(key,class)
	return self:fromPtr(self._linda:get(key),class)
end

function Class:receive(...)
	return self._linda:receive(...)
end

function Class:send(...)
	return self._linda:send(...)
end

function Class:count(...)
	return self._linda:count(...)
end

function Class:get(...)
	return self._linda:get(...)
end

function Class:set(...)
	return self._linda:set(...)
end

function Class:limit(key,num)
	return self._linda:limit(key,num)
end

return Class
