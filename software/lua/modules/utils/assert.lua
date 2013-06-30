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

local throwObject = function(excep)
	error(excep,errorlevel())
end

local throw = function(...)
	-- retrieve the stacktrace:
	local Exception = require "core.Exception"
	throwObject(Exception{write(...),stack=stacktrace()})
end

local quote = function(arg)
	return type(arg)=="string" and '"'..arg..'"' or arg
end

local onError1 = function(val,reason,...)
	throw("Assertion failed: [value=",quote(val),"] (=> ",reason,"): ",...)
end

local onError2 = function(val1,val2,reason,...)
	throw("Assertion failed: [value1=",quote(val1),", value2=",quote(val2),"] (=> ",reason,"): ",...)
end

local doTest1 = function(result,val,reason,...)
	if result then
		return val
	end
	onError1(val,reason,...)
end

local doTest2 = function(result,val1,val2,reason,...)
	if result then
		return
	end
	onError2(val1,val2,reason,...)
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
function Class.isTrue(val,...)
	return doTest1(val==true,val,"is not true",...)
end

function Class.isFalse(val,...)
	return doTest1(val==false,val,"is not true",...)
end

function Class.isString(val,...)
	return doTest1(type(val)=="string",val,"is not a string",...)
end

function Class.isFunction(val,...)
	return doTest1(type(val)=="function",val,"is not a function",...)
end

function Class.isNonEmptyString(val,...)
	return doTest1(type(val)=="string" and #val>0,val,"is not a string or is the empty string",...)
end

function Class.areEquals(val1,val2,...)
	return doTest2(val1==val2,val1,val2,"are not equals",...)
end

function Class.areNotEquals(val1,val2,...)
	return doTest2(val1~=val2,val1,val2,"are equals",...)
end

function Class.isNil(val,...)
	return doTest1(val==nil,val,"is not nil",...)
end

Class.True = Class.isTrue
Class.False = Class.isFalse
Class.Nil = Class.isNil
Class.String = Class.isString
Class.Function = Class.isFunction
Class.equals = Class.areEquals
Class.notEquals = Class.areNotEquals
Class.nonEmptyString = Class.isNonEmptyString

return setmetatable(Class,Meta)
