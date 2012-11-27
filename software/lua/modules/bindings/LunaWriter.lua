
local oo = require "loop.cached"

local ReflectionWriter = require "bindings.ReflectionWriter"
local BaseWriter = require "bindings.BaseWriter"
local Enum = require "reflection.Enum"
local table = table

local dbg = require "debugger"

local log = require "logger"
local im = require "bindings.IgnoreManager"
local snippets = require "bindings.SnippetManager"

local Set = require "std.Set"
local utils = require "utils"

-- Default type checker:
local typeChecker = require("bindings.TypeCheckerBase")()

local writeOverloadBind = require("bindings.OverloadBinderBase")()
local writeBind = require("bindings.BinderBase")()

local tc = require "bindings.TypeConverter"
local tm = require "bindings.TypeManager"

local injector = require "bindings.CodeInjector"
local corr = require "bindings.TextCorrector"

-- Helper function for writeForeach traversals:
local getValueName = function(k,v)
	return v:getFullName()
end

local getValueShortName = function(k,v)
	return v:getName()
end

local getValueLuaName = function(k,v)
	return v:getLuaName()
end

local getKeyName = function(k,v)
	return k:getName()
end

-- This module defines the writer used to generate lunagen bindings.
local LunaWriter = oo.class({},ReflectionWriter)

LunaWriter.CLASS_NAME = "bindings.LunaWriter"

function LunaWriter:__init(datamap,withConverters)
    local object = ReflectionWriter:__init(datamap) -- pass the datamap to the ReflectionWriter class.
    object = oo.rawnew(self,object)
    object:setBindingFolder("luna")
    object.implementConverters = withConverters
    return object
end

function LunaWriter:writeClassSources()
	local ClassWriter = require "bindings.ClassWriter"
	
	local written = Set();
	
	for _,v in self.classes:sequence() do
		local tname = v:getTypeName()
		if not im:ignore(tname,"class_declaration") and not written:contains(tname) and not v:isExternal() then
			written:push_back(tname)
			self:debug0_v("writing reflection for class ", v:getFullName(), " with Typename: ", tname)
			local writer = ClassWriter{class=v}
			writer:writeFile()
		else
			self:notice("Discarding reflection generation for class ", v:getFullName(), " with Typename: ", tname)
		end
	end
end

--- Write the complete reflection
function LunaWriter:writeBindings(folder)
	local ClassExporter = require "bindings.ClassListExporter"
	local FunctionExporter = require "bindings.FunctionListExporter"
	local MainHeaderWriter = require "bindings.MainHeaderWriter"
	local ExternalWriter = require "bindings.ExternalWriter"
	local EnumWriter = require "bindings.EnumWriter"
	local DefineWriter = require "bindings.DefineWriter"
	local ModuleWriter = require "bindings.ModuleWriter"
	local GlobalFunctionWriter = require "bindings.GlobalFunctionWriter"
	
    self:setTargetFolder(folder)
	
	local classExp = ClassExporter();
	classExp:writeFile()
	
	local funcExp = FunctionExporter()
	funcExp:writeFile()
	
	local mainWriter = MainHeaderWriter();
	mainWriter:writeFile();
	
	local extWriter = ExternalWriter();
	extWriter:writeFile();
	
	local enumWriter = EnumWriter();
	enumWriter:writeFile();
	
	local defWriter = DefineWriter();
	defWriter:writeFile();
	
	local modWriter = ModuleWriter();
	modWriter:writeFile();
	
	local gfuncWriter = GlobalFunctionWriter()
	gfuncWriter:writeFile();
	
    self:writeClassSources()
end

return LunaWriter

