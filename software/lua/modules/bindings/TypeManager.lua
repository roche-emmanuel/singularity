
local oo = require "loop.base"

local Set = require "std.Set"
local dbg = require "debugger"
 
-- This module contains the base functions needed to support writing library bindings
local TypeManager = oo.class{}

TypeManager.CLASS_NAME = "bindings.TypeManager"

function TypeManager:__init()
    local object = oo.rawnew(self,{})
	object._types = Set()
    object._TRACE_ = "TypeManager"
    return object
end

function TypeManager:registerType(type)
	dbg:assert(type,"Invalid type object.")	
	self._types:push_back(type)
end

function TypeManager:parseTypes()
	for _,v in self._types:sequence() do
		v:parse()
	end
end

return TypeManager()
