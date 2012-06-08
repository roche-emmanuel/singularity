local oo = require "loop.cached"

local log = require "tracer"

local Object = oo.class{}
Object.CLASS_NAME = "base.Object"

function Object:__init()
	obj = oo.rawnew(self,{})
	obj._TRACE_ = "Object"
	return obj
end

function Object:check(cond,msg,...)
	if not cond then
		self:throw(msg,...)
	end
end

function Object:getClassOf(obj)
	return oo.classof(obj or self)
end

function Object:isInstanceOf(class,obj)	
	--self:check(oo.isclass(class),"Invalid class argument.")
	local obj_class = oo.classof(obj or self)
	return obj_class==class or oo.subclassof(obj_class,class)
end

function Object:checkType(obj,base,strict)
	if not obj then 
		return 
	end
	
	local obj_class = oo.classof(obj)
	if not (obj_class == base or (not strict and oo.subclassof(obj_class,base))) then
		self:throw("Expected class ",base.CLASS_NAME," and got ",obj_class.CLASS_NAME, " for object ", obj)
	end 
end

function Object:throw(msg,...)
	log:error(self,msg,...)
	self:backtrace()
	error("Stopping because error occured.")
end

function Object:deprecated(msg)
	log:warn(self,"Deprecated: "..msg)
	self:backtrace("warn")
end

function Object:backtrace(level)
	log[level or "error"](log,self,"Current stack trace:\n",debug.traceback())
end

for k,v in pairs(log.levels) do
	Object[k] = function(self,trace,...) 
		return log[k](log,self,trace,...); end
	Object[k.."_v"] = function(self,trace,...) 
		return log[k.."_v"](log,self,trace,...); end
end

return Object
