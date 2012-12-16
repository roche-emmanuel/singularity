local className = "base.ClassBuilder"

require("logger"):debug0_v("Generating class ",className)

local oo = require "loop.cached"

local Object = require "base.Object"

local Class = oo.class({},Object)
Class.CLASS_NAME = className

function Class:__init(options,instance)
	local obj = Object:__init(instance or {})
	obj = oo.rawnew(self,obj)
	obj._TRACE_ = className
	return obj
end

-- main function to create a new class
function Class:__call(options)
	self:check(options,"Invalid options to build class.")
	
	options.bases = type(options.bases)=="string" and {options.bases} or options.bases or {}
	
	if not options.name then
		self:debug1_v("Class name missing. Retrieving name from file.");
		
		-- retrieve the name from the file name.
		--local debug = require "debug"
		local filename = debug.getinfo(2).source
		self:debug2_v("Found filename: ",filename)
		-- retrieve the file name only:
		options.name = filename:gsub("^.-([%a%d_]+)%.lua$","%1")
		self:debug2_v("Extracted class name: ",options.name)
	end
	
	self:check(type(options.name)=="string" and options.name ~= "","Invalid options.name field.")
	
	-- actual bases tables:
	local bases = {}
	for _,base in ipairs(options.bases) do
		table.insert(bases,type(base)=="string" and require(base) or base)
	end
	

	
	self:debug0_v("Generating class for ",options.name)
	local result = oo.class({},unpack(bases))
	result.CLASS_NAME = options.name -- kept for backward compatibility (see binding modules for instance)
	result._CLASSNAME_ = options.name
	
	function result:__init(opt,instance)
		local obj = instance or {}
		
		for _,base in ipairs(bases) do
			obj = base:__init(opt,obj)
		end
		
		obj =  oo.rawnew(self,obj)
		obj._TRACE_ = options.name
				
		-- Call the initialize function if any:
		if obj.initialize then
			obj:initialize(opt)
		end
				
		return obj 
	end
	
	function result:release()
		self._wrappers = nil;
	end
	
	function result:getWrapper(index)
		index = index or 0
		return self._wrappers and self._wrappers[index+1]
	end
	
	function result:generateWrapping(wrapper,...) 
		self._wrappers = self._wrappers or {}
		local obj = wrapper(self,...)
		table.insert(self._wrappers, obj)
		
		for name,func in pairs(wrapper) do
			if(type(func)=="function" and not self[name]) and name~="new" and name~="__eq" and name~="__gc" then
				--self:info("Adding auto wrapped function: ",name)
				local wname = (name:sub(1,5)=="base_" and name) or (wrapper["base_"..name] and "base_"..name) or name -- force rediction to the base function call to avoid infinite looping.
				self[name] = function(arg1, ...) obj[wname](obj, ...) end
			end
		end			
	end
	
	-- return the resulting class:
	return result;
end

-- Function alias for class creation:
Class.create = Class.__call

return Class
