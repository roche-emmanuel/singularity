
local oo = require "loop.base"
local ooc = require "loop.cached"
local Set = require "std.Set"
local dbg = require "debugger"
local Function = require "reflection.Function"
local IProtection = require "reflection.IProtection"
local log = require "logger"

local IFunctionHolder = oo.class{}

-- Define the class name
IFunctionHolder.CLASS_NAME = "reflection.IFunctionHolder"

function IFunctionHolder:__init(obj)
    obj = oo.rawnew(self,obj or {})
    dbg:assert(obj.functions==nil,"Object already contains a 'functions' field")
    obj.functions = Set()
    return obj
end

--- Retrieve the function Set in that object.
function IFunctionHolder:getFunctions(prot,validOnly)
	if prot then
		local result = Set()
		for _,v in self.functions:sequence() do
			if v:getProtection() == prot and (not validOnly or v:isValidForWrapping()) then
				result:push_back(v)
			end
		end
		return result
	else
    	return self.functions
    end
end

function IFunctionHolder:getPublicFunctions()
	if not self._publicFunctions then
		self._publicFunctions = self:getFunctions(IProtection.PUBLIC,false); 
	end
	
	return self._publicFunctions 
end

function IFunctionHolder:getValidPublicFunctions()
	if not self._validPublicFunctions then
		self._validPublicFunctions = self:getFunctions(IProtection.PUBLIC,true)
	end
	
	return self._validPublicFunctions;
end


--- Add a function to the function Set.
function IFunctionHolder:addFunction(func)
	dbg:assert(func,"'func' argument is nil")
	dbg:assertType(func,Function)
		
	if (func:getParent() == self) then
		return -- nothing to do.
	end
	
	dbg:assertNil(func:getParent(),
		"Changing function parent.",
		"\nFunction=",func,
		"\nPrevious parent=",func:getParent(),
		"\nNew parent=",self)
	func:setParent(self)

	if func:isConstructor() then	
		self:addConstructor(func)
	elseif func:isDestructor() then
		self:setDestructor(func)
	elseif func:isOperator() then
		if not self.addOperator then
			log:warn("Discarding non class member operator function '",func:getName(),"' in namespace '",self:getName(),"'") 
			return
		end
		
		--dbg:assert(self.addOperator,"No addOperator method in class ", ooc.classof(self).CLASS_NAME)
		self:addOperator(func)
	else
		self.functions:push_back(func)
	end	
end

return IFunctionHolder
