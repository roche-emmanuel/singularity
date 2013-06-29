--[[
Class: utils.assert

Implementation of assertion calls.
]]

local log = require "log"
local write = require "utils.tostring"
local base = require "utils.base"

local Meta = {}

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

local stacktrace = function(...)
	return debug.traceback(write(...),errorlevel()-1)
end

local throw = function(...)
	-- retrieve the stacktrace:
	local msg = stacktrace(...) 
	error(msg,errorlevel())
end

local onError1 = function(val,reason,...)
	throw("Assertion failed: [value=",val,"] (=> ",reason,"): ",...)
end

local doTest1 = function(result,val,reason,...)
	if result then
		return val
	end
	onError1(val,reason,...)
end

--- Meta method to handle the calls assert(val,msg,...)
Meta.__call = function(self,val,...)
	return doTest1(val,val,"is false or nil",...)
end

local Class = {}

--[[
Function: True

Method to check if a given value is true.

Parameters:
	val - The value to be tested.
	
Returns:
	The value itself if it is true, an error is triggered otherwise.
]]
function Class.True(val,...)
	return doTest1(val==true,val,"is not true",...)
end

function Class.False(val,...)
	return doTest1(val==false,val,"is not true",...)
end

function Class.isString(val,...)
	return doTest1(type(val)=="string",val,"is not a string",...)
end

Class.isTrue = Class.True

return setmetatable(Class,Meta)
