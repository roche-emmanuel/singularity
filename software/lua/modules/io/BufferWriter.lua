
local oo = require "loop.base"

local log = require "logger"

-- This module contains the base functions needed to support writing library bindings
local BufferWriter = oo.class{}

BufferWriter.CLASS_NAME = "bindings.BufferWriter"

function BufferWriter:__init()
    object = oo.rawnew(self,{})
    object.content = {} -- The current content of the writer.
    object.indent = 0 -- base intent value
    object.tab = "\t" -- default tabulation value
    object.keepBackup = false
    return object
end

--- Fix the indent value.
-- Set the indentation count that will be used for the next calls to the writeLine method.
-- @param val The new indent value as integer
function BufferWriter:setIndent(val)
    self.indent = val
end

function BufferWriter:setKeepBackup(keep)
	self.keepBackup = keep
end

function BufferWriter:setTargetFolder(folder)
    self.targetFolder = folder
end

--- Push the indentation forward.
-- Increase the indentation level by one
function BufferWriter:pushIndent()
    self.indent = self.indent+1
end

--- Push the indentation backward.
-- Decrease the indentation level by one. This function will ensure that the 
-- indentation value is always >= 0.
function BufferWriter:popIndent()
    self.indent = math.max(self.indent-1,0)
end

function BufferWriter:clearContent()
    self.content = {}
end

--- Append unformatted message to the content.
-- This function will simplyg contcatenate the given message on the output content
-- with no addition formating stage.
-- @param msg The message to be appended on the content buffer.
function BufferWriter:appendContent(msg)
    table.insert(self.content,msg)
end

function BufferWriter:appendBuffer(buf)
	for k,v in ipairs(buf.content) do
		table.insert(self.content,v)
	end
end

--- Write a line on the content buffer.
-- Write a complete line in the content buffer.
-- @param msg The message to be written without the final new line character or the indentation prefix.
function BufferWriter:writeLine(msg,sep)
  self:appendContent(string.rep(self.tab,self.indent) .. msg)
  self:appendContent(sep or "\n")
end

--- Append a newline character on the content buffer.
function BufferWriter:newLine()
    self:appendContent("\n")
end

--- Get writer content.
-- return the current content buffer of the writer as a single string
function BufferWriter:getContent()
    return table.concat(self.content)
end

function BufferWriter:writeSubLine(msg,...)
	local str = msg
	for id,v in ipairs({...}) do
		str = str:gsub("%${"..id.."}",v)
	end
	self:writeLine(str);
end

function BufferWriter:writeForeach(list,msg,...)
	for k,v in list:sequence() do
		local str = msg
		for id,func in ipairs({...}) do
			str = str:gsub("%${"..id.."}",type(func)=="function" and func(k,v) or func)
		end
		self:writeLine(str);
	end
end

function BufferWriter:replaceLastEntry(rep)
	table.remove(self.content)
	table.insert(self.content,rep)
end

--- Write the writer content to file if needed.
function BufferWriter:writeFile(filename)
    local str = ""
        
    filename = (self.targetFolder or "").. filename
    log:info("Writing file "..filename)

    local f = io.open(filename,"r")
    if f then
        str = f:read("*a")
        f:close()
    end
    
    local content = self:getContent()
    if str == content then
        log:info("No change in file ".. filename)
    else
        log:info("Updating content of ".. filename)
        -- now write the file:
        local f = io.open(filename,"w")
        if not f then
        	log:error("Cannot open file ",filename," for writing. (file is locked or parent path doesnt exist ?)")
        	return;
        end
        f:write(content)
        f:close()
        
        if str ~= "" and self.keepBackup then
            local f = io.open(filename..".bak","w")
            f:write(str)
            f:close()
        end
    end
end

BufferWriter.append = BufferWriter.appendContent

return BufferWriter
