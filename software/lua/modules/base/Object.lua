local oo = require "loop.cached"

local log = require "tracer"

local Object = oo.class{}

function Object:__init()
	obj = oo.rawnew(self,{})
	obj._TRACE_ = "Object"
	return obj
end

function Object:check(cond,msg,...)
	if not cond then
		log:error(self,msg,...)
		self:backtrace()
		error("Stopping because an assertion error occured.")
	end
end

function Object:error(msg,...)
	log:error(msg,...)
	self:backtrace()
	error("Stopping because error occured.")
end

function Object:deprecated(msg)
	log:warn(self,"Deprecated: "..msg)
	self:backtrace("warn")
end

function Object:backtrace(level)
	log[level or "error"](self,"Current stack trace:\n",debug.traceback())
end

for k,v in pairs(log.levels) do
	Object[k] = function(self,trace,...) 
		return log[k](log,self,trace,...); end
	Object[k.."_v"] = function(self,trace,...) 
		return log[k.."_v"](log,self,trace,...); end
end

return Object
