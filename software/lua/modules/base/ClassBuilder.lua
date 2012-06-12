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
	result.CLASS_NAME = options.name
	
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
	
	-- return the resulting class:
	return result;
end

-- Function alias for class creation:
Class.create = Class.__call

return Class
