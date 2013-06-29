--[[
Class: utils.base

Base utility functions.

]]

local write = require "utils.tostring"
local log = require "log"

local errorlevel = function()
  -- find the first level, not defined in the same file as this
  -- code file to properly report the error
  local level = 1
  local info = debug.getinfo(level)
  local thisfile = (info or {}).source
  while thisfile and thisfile == (info or {}).source do
    level = level + 1
    info = debug.getinfo(level)
  end
  if level > 1 then level = level - 1 end -- deduct call to errorlevel() itself
  return level
end

--[=[
--[[
Function: stacktrace

Return the current stack trace.	
  
Parameters:
	... - Any argument to print in from of the stack
	
Returns:
	The trace as a string.
]]
function base.stacktrace()
]=]
local stacktrace = function(...)
	return debug.traceback(write(...),errorlevel()-1)
end

--[=[
--[[
Function: printStacktrace

Print the current stack trace. The stack trace is printed on the debug log level.

Parameters:
	... - Any argument to print in from of the stack  
]]
function base.printStacktrace()
]=]
local printStacktrace = function(...)
	log.debug(stacktrace(...))
end

--[=[
--[[
Function: throw

Method used to throw an error.

Parameters:
	... - Any argument to print as the error message.	  
]]
function base.throw()
]=]
local throw = function(...)
	-- retrieve the stacktrace:
	local msg = stacktrace(...) 
	error(msg,errorlevel())
end

--[=[
--[[
Function: deprecated

Simple deprecation method.
This method can be used to notify that a given function/method should be considered deprecated.

Parameters:
	... - Message to output.
]]
function base.deprecated(...)
]=]
local deprecated = function(...)
	log.warn(stacktrace("Deprecated: ",...))
end


----------------------------------------------------------------------------
-- Public interface:


local Class = {}

Class.stacktrace = stacktrace
Class.printStacktrace = printStacktrace
Class.throw = throw
Class.deprecated = deprecated

return Class;
