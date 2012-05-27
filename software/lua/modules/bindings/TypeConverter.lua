
local oo = require "loop.base"

local Map = require "std.Map"

local dbg = require "debugger"

-- This module contains the base functions needed to support writing library bindings
local TypeConverter = oo.class{}

TypeConverter.CLASS_NAME = "bindings.TypeConverter"

function TypeConverter:__init()
    local object = oo.rawnew(self,{})
	object.fromLuaConverters = Map()
	object.toLuaConverters = Map() 
	object.typeCheckers = Map()   
	object._TRACE_ = "TypeConverter"
    return object
end

function TypeConverter:setTypeChecker(typename,checker)
	dbg:assert(type(checker)=="function", "Invalid function as type checker.")
	self.typeCheckers:set(typename,checker)
end

function TypeConverter:setFromLuaConverter(typename,converter)
	dbg:assert(type(converter)=="function", "Invalid function as fromlua converter.")
	self.fromLuaConverters:set(typename,converter)
end

function TypeConverter:setToLuaConverter(typename,converter)
	dbg:assert(type(converter)=="function", "Invalid function as tolua converter.")
	self.toLuaConverters:set(typename,converter)
end

function TypeConverter:getTypeChecker(typename)
	return self.typeCheckers:get(typename)
end

function TypeConverter:getFromLuaConverter(typename)
	return self.fromLuaConverters:get(typename)
end

function TypeConverter:getToLuaConverter(typename)
	return self.toLuaConverters:get(typename)
end

return TypeConverter()
