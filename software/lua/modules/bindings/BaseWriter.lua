
local oo = require "loop.cached"

local BufferWriter = require "io.BufferWriter"

local header_template = [[#ifndef ${1}
#define ${1}

${2}

#endif
]]
 
-- This module contains the base functions needed to support writing library bindings
local BaseWriter = oo.class({},BufferWriter)

BaseWriter.CLASS_NAME = "bindings.BaseWriter"

function BaseWriter:__init()
    local object = BufferWriter:__init({})
    object = oo.rawnew(self,object)
    return object
end

function BaseWriter:setBindingFolder(folder)
	self.bindingFolder = folder
end

--- Remove the ending part of content until last comma.
-- Remove the ending part of the message with the latest comma included.
function BaseWriter:removeLastComma()
    self:replaceLastEntry("\n")
end

function BaseWriter:writeLineComma(msg)
	return self:writeLine(msg,",\n")
end

function BaseWriter:writeHeaderContent(buffer,filename)
	self:clearContent()
	
	local def = "_".. filename:gsub("^([^%.]+)%.h","%1"):gsub("%A","_"):gsub("_+","_"):upper().."_H_"
	self:writeSubLine("#ifndef ${1}",def)
	self:writeSubLine("#define ${1}",def)
	self:newLine()
	self:writeLine("#include <plug_common.h>")
	self:newLine()
	
	-- write the buffer content:
	self:appendBuffer(buffer)
	
	self:newLine()
	self:writeLine("#endif")
	self:newLine()
	
	self:writeHeader(filename)
end

function BaseWriter:writeSourceContent(buffer,filename)
	self:clearContent()
	
	self:writeLine("#include <plug_common.h>")
	self:newLine()
		
	-- write the buffer content:
	self:appendBuffer(buffer)
	
	self:newLine()
	
	self:writeSource(filename)
end

function BaseWriter:writeHeader(filename)
	return self:writeFile("include/".. (self.bindingFolder and self.bindingFolder .. "/" or "") .. filename)
end

function BaseWriter:writeSource(filename)
	return self:writeFile("src/".. (self.bindingFolder and self.bindingFolder .. "/" or "") .. filename)
end

return BaseWriter
