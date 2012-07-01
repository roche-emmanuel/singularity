
local oo = require "loop.cached"

local Set = require "std.Set"
local Map = require "std.Map"
 
local Object = require "base.Object"

-- This module contains the base functions needed to support writing library bindings
local TypeManager = oo.class({},Object)

TypeManager.CLASS_NAME = "bindings.TypeManager"

function TypeManager:__init()
    local object = Object:__init()
    object = oo.rawnew(self,object)
	object._types = Set()
    object._externals = Map()
    object._externalParents = Map()
    object._externalFuncs = Map()
    object._TRACE_ = "TypeManager"
    return object
end

function TypeManager:registerType(type)
	self:check(type and self:isInstanceOf(require"reflection.Type",type),"Invalid type object.")	
	self._types:push_back(type)
end

function TypeManager:parseTypes()
	for _,v in self._types:sequence() do
		v:parse()
	end
end

function TypeManager:registerExternals(file)
	self:info_v("Registering externals from ",file)
	local f = io.open(file,"r")
	
	local currentModule = nil
	local line = f:read("*l")
	while line do
		if line=="" then
			-- do nothing in that case.
		elseif line:find("module=(.*)$") then
			currentModule = line:gsub("module=(.*)$","%1")
			self:info_v("Switching to current module=",mod)
		else
			self:check(currentModule,"Invalid current module.")
			
			-- extract class and base from line:
			--self:debug("Checking external line:'",line,"'")
			
			local p1,p2, className, baseName=line:find("(.-) => (.*)$")
			
			if not p1 then
				--self:debug("Could not find external pattern");
				className = line;
				baseName = line
			end
			
			self:checkNonEmptyString(className,"Invalid empty class name")
			self:checkNonEmptyString(baseName,"Invalid empty base class name")
			
			local prevMod = self._externals:get(className)
			self:check(prevMod==nil,"The external class ",className," was already registered in module ",prevMod)			

			self:info_v("Registering external class: ",className," with parent: ", baseName)
			self._externals:set(className,currentModule)
			self._externalParents:set(className,baseName)
		end
		
		line = f:read("*l")	
	end
	
	self:info_v("Closing file ",file)
	f:close()
end

function TypeManager:registerExternalFunctions(file)
	self:info_v("Registering external functions from ",file)
	local f = io.open(file,"r")
	
	local currentModule = nil
	local line = f:read("*l")
	while line do
		if line=="" then
			-- do nothing.
		elseif line:find("module=(.*)$") then
			currentModule = line:gsub("module=(.*)$","%1")
			self:info_v("Switching to current module=",mod)
		else
			self:check(currentModule,"Invalid current module.")
			local prevMod = self._externalFuncs:get(line)
			self:check(prevMod==nil,"The external function ",line," was already registered in module",prevMod)			

			self:info_v("Registering external class: ",line)
			self._externalFuncs:set(line,currentModule)
		end
		line = f:read("*l")	
	end
	
	self:info_v("Closing file ",file)
	f:close()
end

function TypeManager:getModule(class)
	self:check(class and self:isInstanceOf(require"reflection.Class",class),"Invalid class argument")
	
	local tname = class:getTypeName()
	return self._externals:get(tname)
end

function TypeManager:getAbsoluteBaseName(class)
	self:check(class and self:isInstanceOf(require"reflection.Class",class),"Invalid class argument")
	
	local tname = class:getTypeName()
	return self._externalParents:get(tname)
end

function TypeManager:getFunctionModule(func)
	self:check(func and self:isInstanceOf(require"reflection.Function",func),"Invalid function argument")
	
	local tname = func:getFullName()
	return self._externalFuncs:get(tname)
end

return TypeManager()
