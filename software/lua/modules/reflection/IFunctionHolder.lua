local Class = require("classBuilder"){name="IFunctionHolder",bases="base.Object"};

local Set = require "std.Set"
local Function = require "reflection.Function"
local IProtection = require "reflection.IProtection"

function Class:initialize(options)
    self._functions = Set()
end

--- Retrieve the function Set in that object.
function Class:getFunctions(prot,validOnly)
	if prot then
		local result = Set()
		for _,v in self._functions:sequence() do
			if v:getProtection() == prot and (not validOnly or v:isValidForWrapping()) then
				result:push_back(v)
			end
		end
		return result
	else
    	return self._functions
    end
end

function Class:getPublicFunctions()
	if not self._publicFunctions then
		self._publicFunctions = self:getFunctions(IProtection.PUBLIC,false); 
	end
	
	return self._publicFunctions 
end

function Class:getValidPublicFunctions()
	if not self._validPublicFunctions then
		self._validPublicFunctions = self:getFunctions(IProtection.PUBLIC,true)
	end
	
	return self._validPublicFunctions;
end


--- Add a function to the function Set.
function Class:addFunction(func)
	self:check(func and self:isInstanceOf(Function,func),"Invalid enum");
	
	if (func:getParent() == self) then
		return -- nothing to do.
	end
	
	self:check(func:getParent()==nil,
		"Changing function parent.",
		"\nFunction=",func:getName(),
		"\nPrevious parent=",func:getParent() and func:getParent():getFullName(),
		"\nNew parent=",self:getFullName())
	func:setParent(self)

	if func:isConstructor() then	
		self:addConstructor(func)
	elseif func:isDestructor() then
		self:setDestructor(func)
	elseif func:isOperator() then
		if not self.addOperator then
			self:warn("Discarding non class member operator function '",func:getName(),"' in namespace '",self:getName(),"'") 
			return
		end
		
		--dbg:assert(self.addOperator,"No addOperator method in class ", ooc.classof(self).CLASS_NAME)
		self:addOperator(func)
	else
		self._functions:push_back(func)
	end	
end

return Class
