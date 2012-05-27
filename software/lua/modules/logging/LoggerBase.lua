local oo = require "loop.base"

require "core" -- load the core library.

local Set = require "std.Set"

-- Default logger class
local LoggerBase = oo.class{}

local levels = {}
levels.fatal = core.LogManager.FATAL
levels.error = core.LogManager.ERROR
levels.warn = core.LogManager.WARNING
levels.notice = core.LogManager.NOTICE
levels.info = core.LogManager.INFO
levels.debug = core.LogManager.DEBUG0
levels.debug0 = core.LogManager.DEBUG0
levels.debug1 = core.LogManager.DEBUG1
levels.debug2 = core.LogManager.DEBUG2
levels.debug3 = core.LogManager.DEBUG3
levels.debug4 = core.LogManager.DEBUG4
levels.debug5 = core.LogManager.DEBUG5

LoggerBase.levels = levels

function LoggerBase:__init()
	local obj = oo.rawnew(self,{})
	obj.indent = 0
	obj.indentStr = "   "
	obj.writtenTables = Set(); -- used to ensure each table is written only once in a table hierarchy.
	obj.currentLevel = 0
	obj.maxLevel = 5
	return obj
end

function LoggerBase:pushIndent()
	self.indent = self.indent+1
end

function LoggerBase:popIndent()
	self.indent = math.max(0,self.indent-1)
end

function LoggerBase:incrementLevel()
	self.currentLevel = math.min(self.currentLevel+1,self.maxLevel)
	return self.currentLevel~=self.maxLevel; -- return false if we are on the max level.
end

function LoggerBase:decrementLevel()
	self.currentLevel = math.max(self.currentLevel-1,0)
end

--- Write a table to the log stream.
function LoggerBase:writeTable(t)
	local msg = "" -- we do not add the indent on the first line as this would 
	-- be a duplication of what we already have inthe write function.
	
	local id = tostring(t);
	
	if self.writtenTables:contains(t) then
		msg = id .. " (already written)"
	else
		msg = id .. " {\n"
		
		-- add the table into the set:
		self.writtenTables:push_back(t)
		
		self:pushIndent()
		if self:incrementLevel() then
			for k,v in pairs(t) do
				msg = msg .. string.rep(self.indentStr,self.indent) .. k .. " = ".. self:writeItem(v) .. ",\n" -- 
			end
			self:decrementLevel()
		else
			msg = msg .. string.rep(self.indentStr,self.indent) .. "(too many levels)";
		end
		self:popIndent()
		msg = msg .. string.rep(self.indentStr,self.indent) .. "}"
		
		--local dbg = require "debugger"
		--dbg:assert(,"writtenTable set is invalid.");
	end
	
	return msg;
end

--- Write a single item as a string.
function LoggerBase:writeItem(item)
	if type(item) == "table" then
		-- concatenate table:
		return self:writeTable(item)
	else
		-- simple concatenation:
		return tostring(item);
	end
end

--- Write input arguments as a string.
function LoggerBase:write(...)
	self.writtenTables:clear();
	self.currentLevel = 0
	
	local msg = string.rep(self.indentStr,self.indent);
	for _,v in ipairs({...}) do
		msg = msg .. self:writeItem(v)
	end
	
	return msg;
end

return LoggerBase
