local className = "base.Object"

local oo = require "loop.cached"

local log = require "tracer"

require("logger"):debug0_v("Generating class ",className)

local Object = oo.class{}
Object.CLASS_NAME = className

--- Additional data to support i18n:
Object.i18n = require "i18n"

function Object:__init(options,instance)
	local obj = oo.rawnew(self,instance or {})
	obj._TRACE_ = className
	
	return obj
end

function Object:isString(var)
	return type(var)=="string"
end

function Object:isNonEmptyString(var)
	return type(var)=="string" and #var>0
end

function Object:isEmptyString(var)
	return var==""
end

function Object:isTable(var)
	return type(var)=="table"
end

function Object:isNumber(var)
	return type(var)=="number"
end

function Object:isFunction(var)
	return type(var)=="function"
end

function Object:isNil(var)
	return type(var)=="nil"
end

function Object:isInteger(var)
	return type(var)=="number" and math.floor(var)==var
end

function Object:check(cond,msg,...)
	if not cond then
		self:throw(msg,...)
	end
end

function Object:checkFunction(var,msg,...)
	if not self:isFunction(var) then
		self:throw("(var=",var,") ",msg,...)
	end
end

function Object:checkString(var,msg,...)
	if not self:isString(var) then
		self:throw("(var=",var,") ",msg,...)
	end
end

function Object:checkTable(var,msg,...)
	if not self:isTable(var) then
		self:throw("(var=",var,") ",msg,...)
	end
end

function Object:checkNonEmptyString(var,msg,...)
	if not self:isNonEmptyString(var) then
		self:throw("(var=",var,") ",msg,...)
	end
end

function Object:checkEmptyString(var,msg,...)
	if not self:isEmptyString(var) then
		self:throw("(var=",var,") ",msg,...)
	end
end

function Object:checkNumber(var,msg,...)
	if not self:isNumber(var) then
		self:throw("(var=",var,") ",msg,...)
	end
end

function Object:checkInteger(var,msg,...)
	if not self:isInteger(var) then
		self:throw("(var=",var,") ",msg,...)
	end
end

function Object:checkNil(var,msg,...)
	if not self:isNil(var) then
		self:throw("(var=",var,") ",msg,...)
	end
end

function Object:getClassOf(obj)
	return oo.classof(obj or self)
end

function Object:isInstanceOf(class,obj)	
	local obj_class = oo.classof(obj or self)
	return obj_class==class or oo.subclassof(obj_class,class)
end

function Object:checkType(obj,base,strict)
	--self:deprecated("checkType() should be replaced with isInstanceOf()")
	
	if not obj then 
		return 
	end
	
	local obj_class = oo.classof(obj)
	if not (obj_class == base or (not strict and oo.subclassof(obj_class,base))) then
		self:throw("Expected class ",base.CLASS_NAME," and got ",obj_class.CLASS_NAME, " for object ", obj)
	end 
end

function Object:throw(msg,...)
	self:error(msg,...)
	self:backtrace()
	error("Stopping because error occured.")
end

function Object:no_impl()
	self:error("The function called is not implemented yet.")
	self:backtrace()
	error("Stopping because error occured.")
end

function Object:deprecated(msg)
	self:warn("Deprecated: ",msg)
	self:backtrace("warn")
end

function Object:backtrace(level)
	log[level or "error"](log,self,debug.traceback())
end

for k,v in pairs(log.levels) do
	Object[k] = function(self,trace,...) 
		return log[k](log,self,trace,...); end
	Object[k.."_v"] = function(self,trace,...) 
		return log[k.."_v"](log,self,trace,...); end
end

return Object
