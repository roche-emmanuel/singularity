local oo = require "loop.cached"
local dbg = require "debugger"

local Member = require "reflection.Member"
local Scope = require "reflection.Scope"
local Vector = require "std.Vector"
local Set = require "std.Set"

local im = require "bindings.IgnoreManager"
local tm = require "bindings.TypeManager"

local log = require "logger"

local Function = oo.class({},Member)

-- Define the class name
Function.CLASS_NAME = "reflection.Function"

function Function:__init(name)
    local obj = Member:__init({})
    obj = oo.rawnew(self,obj)
    obj:setName(name or "")
	obj.returnType = nil
    obj.parameters = Vector()
    obj.templateParameters = Vector()
    obj.isConst = false
    obj._isStatic = false
    obj._isAbstract = false;
    obj._isExtension = false;
	obj._TRACE_ = "Function"
    return obj
end

opmap = {}
opmap["operator+"] = "__add"
opmap["operator-"] = "__sub"
opmap["operator*"] = "__mul"
opmap["operator/"] = "__div"
opmap["operator=="] = "__eq"
opmap["operator<"] = "__lt"
opmap["operator!="] = "op_neq"
opmap["operator+="] = "op_add"
opmap["operator-="] = "op_sub"
opmap["operator*="] = "op_mult"
opmap["operator/="] = "op_div"
opmap["operator^"] = "op_pow"
opmap["operator[]"] = "op_index"
opmap["operator()"] = "op_call"
opmap["operator="] = "" -- ignored
opmap["operator delete"] = "" -- ignored
opmap["operator new"] = "" -- ignored

function Function:getLuaName()
	if self._luaName then
		return self._luaName;
	elseif self:isOperator() then
		local name = self:getName()
		local lname = opmap[name]
		if lname == "" then
			return -- discard this.
		end
		
		if lname == nil then
			log:warn("Cannot select lua name for operator ".. name)
		end
		
		if lname == "__sub" then
			-- check if this is the unary minus operator:
			if self:getNumParameters() == 0 then
				lname = "__unm"
			end
		end
		
		return lname
	else
		return self:getName()
	end
end

function Function:setLuaName(name)
	self._luaName = name
end

function Function:getFullName()
    if self:getParent() then
        -- Assume the parent as a getFullName() function:
        local pname = self:getParent():getFullName()
        return (pname=="" and "" or (pname .. "::")) .. self:getName()
    else
        return self:getName()
    end
end


--- Get the return type of the function
-- @return The return type for this function. Note that this may be nil in case the
-- function is a class constructor/destructor.
function Function:getReturnType()
    return self.returnType
end

--- Set the return type of the function
-- Assign a return type to this function.
-- @param rtype The Type to be assigned. May be nil.
function Function:setReturnType(rtype)
    self.returnType = rtype
end

--- Retrieve the vector of parameters for this function.
-- @return The Vector of parameters. The Vector may be empty if the function
-- has no parameter.
function Function:getParameters()
    return self.parameters;
end

--- Retrieve the offset of the first parameter with a default value
function Function:getDefaultOffset()
	local offset = 0;
	for _,v in self.parameters:sequence() do
		if v:getDefaultValue() then
			return offset
		end	
		offset = offset+1
	end
	
	return; -- no default value.
end

--- Retrieve the Vector of template parameters.
-- The vector is normally empty for regular classes.
function Function:getTemplateParameters()
    return self.templateParameters;
end

--- Add a parameter to the list.
-- @param arg The new Parameter to add. Should not be nil.
function Function:addParameter(arg)
	dbg:assert(arg,"Parameter argument is nil")
    self.parameters:push_back(arg)
end

--- Add a template parameter to the list.
-- @param arg The new parameter to add. Should not be nil.
function Function:addTemplateParameter(arg)
	dbg:assert(arg,"Template parameter argument is nil")
    self.templateParameters:push_back(arg)
end

--- Set the constness of the function.
-- @param isconst The constness state of the function.
function Function:setConst(isconst)
	self._isConst = isconst
end

--- Check if this function is const.
function Function:isConst()
	return self._isConst;
end

function Function:setAsExtension(ext)
	self._isExtension = ext
end

function Function:isExtension()
	return self._isExtension;
end

--- Set the static state of the function.
function Function:setStatic(static)
    self._isStatic = static
end

--- Check if this function is static	retuunr
function Function:isStatic()
	return self._isStatic;
end

--- Set the abstract state of the function.
function Function:setAbstract(abstract)
    self._isAbstract = abstract
end

--- Check if this function is abstract
function Function:isAbstract()
    return self._isAbstract;
end

--- Check if function is a constructor.
function Function:isConstructor()
	return self:getLuaName() == self:getParent():getName()
end

--- Check if function is a destructor.
function Function:isDestructor()
	dbg:assert(self:getParent(),"Invalid parent object.")
	dbg:assert(self:getParent():getName(), "Invalid parent name")
	
	return self:getName() == "~".. self:getParent():getName()
end

--- Check if function is an operator.
function Function:isOperator()
    return self:getName():find("^operator")~=nil
end

--- Assign the doxygen argsstring to this function.
-- The doxygen argsstring can be used to easy extract information
-- on this function.
-- @param str the doxygen Argsstring
function Function:setArgsString(str)
    self.argsString = str;
end

--- Retrieve the doxygen argsstring from this function.
function Function:getArgsString()
    return self.argsString
end

--- Check if this function contains at least one
-- array declaration.
-- Only arguments are checked not the returnn type.
function Function:containsArray()
    return self.argsString:find("%[")~=nil --[0-9]*%]
    --local proto = self:getPrototype()
    --return proto:find("%[[0-9]*%]")~=nil
end

--- Check if function contains at least one pointer on pointer declaration.
function Function:containsPointerOnPointer()
    return self.argsString:find("%*%*")~=nil
    --local proto = self:getPrototype()
    --return proto:find("%[[0-9]*%]")~=nil
end

function Function:containsFunctionArg()
	for k,param in self.parameters:sequence() do
		if param:getType():getName():find("%(") then
			return true
		end
	end
	
	if self.returnType and self.returnType:getName():find("%(") then
		return true;
	end
end

--- Check if this function has template parameters.
function Function:isTemplated()
    return not self.templateParameters:empty();
end

--- Return number of parameters for this function.
function Function:getNumParameters()
	return self.parameters:size()
end

--- Check if this function is valid for wrapping .
-- only used for luabind and Swig bindings.
function Function:isValidForWrapping()
    return (
    	not self:isVariadic()
    	--and self:getNumParameters()<=10 
    	--and not self:isOperator() 
    	and not self:containsArray() 
    	and not self:containsPointerOnPointer() 
    	and not self:isTemplated()
    	and not self:containsFunctionArg()
    	and not self:getName():find("~")
    	and not im:ignoreFunction(self))
end

--- Check if the function is variadic
function Function:isVariadic()
    return self.argsString:find("%.%.%.")~=nil
end

--- Retrieve only the arguments prototypes.
-- The parameters  in the string will be comma separated.
function Function:getArgumentsPrototype(withNames)
	local sig = "";
	local num = self:getParameters():size();
	
    for k,v in self:getParameters():sequence() do
        local def = v:getDefaultValue() and v:getDefaultValue():getName()
        local name = v:getName() .. (def and " = "..def or "")
        sig = sig.. v:getType():getName() .. (withNames and (" ".. name) or "") .. (k<num and ", " or "")
    end
    
    return sig;
end

--- Generate function prototype:
-- @param withNames When set to true the parameter names and default values are added in the prototype.
function Function:getPrototype(withNames,fullname,noargstring)
    local sig =  "".. (self:getReturnType() and (self:getReturnType():getName().." ") or "") .. (fullname and self:getFullName() or self:getName()) 
    
    if noargstring then
		sig = sig .. "(" .. self:getArgumentsPrototype(withNames) .. ")"
	    
	    if self:getConstness() then
	        sig = sig .. " const"
	    end
    else
    	sig = sig .. self.argsString
    end
    
    if self:getStatic() then
        sig = "static " .. sig
    end

    return sig
end

--- Retrieve the function signature.
-- (this is different from the function prototype)
function Function:getSignature()
	local sig = self:getReturnType() and self:getReturnType():getName() or ""
	if self:getParent():getScopeType() == Scope.CLASS and not self:getStatic() then
		sig = sig .. "(".. self:getParent():getFullName().. "::*)"
	else
		sig = sig .. "(*)"
	end
	
	sig = sig .. "(" .. self:getArgumentsPrototype(false) .. ")"
    
    if self:getConstness() then
        sig = sig .. " const"
    end

    return sig
end

--- Check if two functions are exactly the sames.
function Function:isEqualTo(other)
	return self:getPrototype(false,false,true)==other:getPrototype(false,false,true)
end

--- Check if function is overloaded.
-- @return The function overload state
-- @return When the function is overloaded, this function will also
-- return the Set of all the overloaded functions with that name.
function Function:isOverloaded()
	if self._isOverloaded == nil then
	-- find the overloads in the parent holder:
	self._overloads = Set();
	local list = self:isConstructor() and self:getParent():getValidPublicConstructors() 
		or self:isOperator() and self:getParent():getValidPublicOperators()
		or self:getParent():getValidPublicFunctions()
	
	local thisname = self:getLuaName() -- retrieve the lua name as this may make a difference for operator-()
	 
	for _,v in list:sequence() do
		if v:getLuaName() == thisname then
			self._overloads:push_back(v)
		end
	end
	
		self._isOverloaded = self._overloads:size()>1;
	end
	
	return self._isOverloaded, self._overloads
end

--function Function:__eq(op2)
--    return self:isEqualTo(op2)
--end

function Function:isClassMethod()
	return self:getParent():getScopeType() == Scope.CLASS
end

function Function:isGlobal()
	return self:getParent():getScopeType() == Scope.NAMESPACE
end

--- Check if this function contains the lua_State type in its parameter list.
function Function:hasLuaState()
	for _,param in self:getParameters():sequence() do
		if param:isLuaState() then 
			return true
		end		
	end
	
	return false;
end

function Function:isExternal()
	return tm:getFunctionModule(self)
end

-- deprecated, for backward compatibility only
Function.setConstness = Function.setConst 
Function.getConstness = Function.isConst
Function.getStatic = Function.isStatic
Function.getAbstract = Function.isAbstract

return Function
