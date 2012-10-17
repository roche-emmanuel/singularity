local Class = require("classBuilder"){name="CallbackHolder",bases="base.Object"};

local Map = require "std.Map"
local Set = require "std.Set"

function Class:initialize(options)
	-- the callbacks are saved as a Map of vectors of callbacks
	self._callbacks = Map();
end

function Class:registerCallback(cat,cb)
	self:checkNonEmptyString(cat,"Invalid callback category name.")
	self:check(cb,"Invalid callback object.")
	
	-- register a callback into the current mapping:
	local list = self._callbacks:get(cat)
	if not list then
		list = Set()
		self._callbacks:set(cat,list)
	end
	
	return list:push_back(cb)
end

function Class:handleEvent(eventCat,...)
	self:no_impl()
end

return Class
