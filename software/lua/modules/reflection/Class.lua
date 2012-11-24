local oo = require "loop.cached"
local dbg = require "debugger"

local Holder = require "reflection.Holder"
local Function = require "reflection.Function"
local Entity = require "reflection.Entity"
local Scope = require "reflection.Scope"
local Vector = require "std.Vector"
local Set = require "std.Set"
local utils = require "utils"
local table = table
local tm = require "bindings.TypeManager"

local im = require "bindings.IgnoreManager"

local log = require "logger"

-- The Class class represents a regular class
-- which may contain functions and variables.
-- and may also be templated.
local Class = oo.class({},Holder)

-- Define the class name
Class.CLASS_NAME = "reflection.Class"

function Class:__init()
    local obj = Holder:__init({})
    obj = oo.rawnew(self,obj)
    dbg:assertNil(obj.bases,"Object already contains a 'bases' field")
    dbg:assertNil(obj.derivations,"Object already contains a 'derivations' field")
    dbg:assertNil(obj.sourceTemplate,"Object already contains a 'templates' field")
    dbg:assertNil(obj.concreteTypes,"Object already contains a 'concreteTypes' field")
    obj._scopeType = Scope.CLASS
    obj.bases = Set()
    obj.derivations = Set()
    obj.constructors = Set()
    obj.operators = Set()
    obj.templateParameters = Vector()
    obj.sourceTemplate = nil
    obj.concreteTypes = nil
    obj.externalModule = nil
    obj.mappedType = nil
    return obj
end

--- Retrieve the root namespace for this parent
function Class:getRootNamespace()
	local prevParent = nil;
	local parent = self:getParent();
	while(parent:getName()~="") do
		prevParent = parent
		parent = parent:getParent();
	end
	
	return prevParent
end

function Class:getMappedType()
	return self.mappedType
end

function Class:setMappedType(type)
	self.mappedType = type
end

--- Retrieve the absolute base classes of that class.
-- The absolute bases are the root classes  with no parent
-- in the current class hierarchy. Note that when the 
-- current class as no parent, this class is considered
-- its own absolute base class. As a result, the returned Set
-- can never be empty.
-- Note that multiple base classes only occurs when using multiple
-- inheritance.
-- @param set The set of bases to extend. Should always be nil on user call (used for internal
-- recursion).
-- @return The Set of the absolute bases.  
function Class:getAbsoluteBases(set)
	set = set or Set()
	for k,v in self.bases:sequence() do
		v:getAbsoluteBases(set)
	end 
	
	if self.bases:empty() then
		set:push_back(self)
	end
	
	return set;
end

function Class:getNumBases()
	return self.bases:size()
end

function Class:getAllAbsoluteBaseHashes()
    local hashes = {}
	if self:isExternal() then
		table.insert(hashes,utils.getHash(tm:getAbsoluteBaseName(self)))
	else
	    for _,v in self:getAbsoluteBases():sequence() do
	        table.insert(hashes,utils.getHash(v:getFullName()));
	    end
    end
    return hashes
end

--- Retrieve the first absolute base of that class.
-- Only return the first class in the list of all absolute base
-- classes for the current class. 
function Class:getFirstAbsoluteBase()
	local abs = self:getAbsoluteBases()
	if abs:size()>1 then
		log:info("Found more that one absolute base for class: ".. self:getName())
	end
	return abs:front()
end

--- Retrieve the hash code of the first absolute base class.  
function Class:getAbsoluteBaseHash()
	if self:isExternal() then
		local str = tm:getAbsoluteBaseName(self)
		--self:check(str,"Invalid absoluteBaseName for external ",self:getFullName())
		
		return utils.getHash(str)
	else
		local abs = self:getFirstAbsoluteBase()
		local str = abs:getFullName()
		
		self:check(str,"Invalid absoluteBaseName for non-external ",self:getFullName())
		return utils.getHash(str)
	end
end

--- Retrieve the bases of this class.
-- @return Set of bases. The Set can be empty but should never be nil.
function Class:getBases()
	return self.bases
end

--- Retrieve the constructors of that class.
-- This function only returns the declared constructors.
-- Default constructors will not appear here if not declared in
-- the doxygen interface files.
-- @param prot The protection of the constructors to retrieve. Can be either:
-- or nil.
-- @return The Set of constructors matching the given protection requested, or all
-- constructors if prot == nil 
function Class:getConstructors(prot,validOnly)
	if prot then
		local result = Set()
		for _,v in self.constructors:sequence() do
			if v:getSection() == prot and (not validOnly or v:isValidForWrapping()) then
				result:push_back(v)
			end
		end
		return result
	else
		return self.constructors
	end
end

--- Retrieve only the public constructors.
-- @param nooverloads Specify if only the first constructor should be 
-- listed or all constructors. (additional overloads can be retrieved from the
-- function with func:isOverloaded())
-- @return The Set of public constructors with all overloads or only the first constructor found.
function Class:getPublicConstructors(nooverloads)
	local funcs = self:getConstructors(Entity.SECTION_PUBLIC) 
	if nooverloads then
		-- remove the overloads from the set:
		local handled = Set()
		local result = Set()
		for _,v in funcs:sequence() do
			if v:isOverloaded() then
				if not handled:contains(v:getName()) then
					result:push_back(v)
					handled:push_back(v:getName())
				end
			else
				result:push_back(v)
			end
		end
		
		return result;
	else
		return funcs
	end
end

function Class:getValidPublicConstructors()
	local funcs = self:getConstructors(Entity.SECTION_PUBLIC,true) 
	return funcs
end


--- Retrieve the operator functions in that class.
-- @return Set of operator functions.
function Class:getOperators(prot)
	if prot then
		local result = Set()
		for _,v in self.operators:sequence() do
			if v:getSection() == prot then
				result:push_back(v)
			end
		end
		return result
	else
		return self.operators
	end
end

function Class:getPublicOperators(nooverloads)
	local funcs = self:getOperators(Entity.SECTION_PUBLIC) 
	--[=[if nooverloads then
		-- remove the overloads from the set:
		local handled = Set()
		local result = Set()
		for _,v in funcs:sequence() do
			if v:isOverloaded() then
				if not handled:contains(v:getName()) then
					result:push_back(v)
					handled:push_back(v:getName())
				end
			else
				result:push_back(v)
			end
		end
		
		return result;
	else]=]
		return funcs
	--end
end

function Class:getValidPublicOperators()
	if not self._validPublicOperators then
		local ops = self:getPublicOperators(true)
		self._validPublicOperators = Set()
		for _,v in ops:sequence() do
			if v:getLuaName() and v:isValidForWrapping() then
				self._validPublicOperators:push_back(v)
			end
		end
	end

	return self._validPublicOperators
end

--- Add a new operator function to this class.
-- @param func, The operator function to add. Should not be nil or this will trigger an assertion error.
function Class:addOperator(func)
	dbg:assert(func,"'func' argument is nil")
	dbg:assertType(func,Function)
	self.operators:push_back(func)
end

--- Add a new constructor function to this class.
-- @param func The constructor function to add, should not be nil or this will trigger an assertion error. 
function Class:addConstructor(func)
	dbg:assert(func,"'func' argument is nil")
	dbg:assertType(func,Function)
	self.constructors:push_back(func)
end

--- Retrieve the class destructor.
-- @return The assigned class destructor or nil if no destructor was assigned to that class.
function Class:getDestructor()
	return self.destructor
end

--- Assign the destructor of that class.
-- @param func The destructor to assign to this class. Should not be nil, and there should be
-- no destructor previously assigned to the class or an assertion error will be triggered.
function Class:setDestructor(func)
	--dbg:assertNil(self.destructor,"Replacing existing destructor")
	dbg:assert(func,"'func' argument is nil")
	dbg:assertType(func,Function)
	dbg:assert(func:getName()=="~"..self:getName(),"Invalid destructor name")
	self.destructor = func
end

--- Add a new base to this class.
-- This function will automatically add this class object as a derivation
-- of the base.
-- @param base The base class to add. Should not be nil.
function Class:addBase(base)
	dbg:assert(base,"base argument is nil");
	dbg:assertType(base,Class,true);	
	self.bases:push_back(base);
	
	-- Also add this class as a derivation of "base"
	base:addDerivation(self)
end

--- Check if this class has at least one base class.
-- @return True if this class has at least one base class, false otherwise.
function Class:hasBases()
	return not self.bases:empty()
end

--- Retrieve the list of the derivations from this class.
-- @return the derivation set.
function Class:getDerivations()
	return self.derivations
end

--- Add a derivation from this class.
-- This function is called internally when using Class:addBase()
function Class:addDerivation(deriv)
	dbg:assert(deriv,"deriv argument is nil");
	dbg:assertType(deriv,Class);	
	self.derivations:push_back(deriv);	
end

--- Check if this class has at least one derivation.
function Class:hasDerivations()
	return not self.derivations:empty()
end

--- Assign source template for this class.
function Class:setSourceTemplate(temp)
	dbg:assert(temp,"temp argument is nil");
	dbg:assertType(temp,require("reflection.Template"));	
	self.sourceTemplate = temp
end

--- Retrieve the source template for this class.
-- The source template may be nil if this class is not
-- templated.
function Class:getSourceTemplate()
	return self.sourceTemplate
end

--- Assign concrete types.
-- Assign the concrete types used for the template
-- instantiation.
function Class:setConcreteTypes(types)
	dbg:assert(types,"types argument is nil");
	dbg:assert(oo.classof(types)==require("std.Vector"));	
	self.concreteTypes = types
end

--- Retrieve the concrete types.
-- Return the vector of concrete types used for the template
-- instantiation.
function Class:getConcreteTypes()
	return self.concreteTypes
end

--- Return a lua compatible version of the class name.
-- The bind name of the class is the name ussed in a 
-- lua  environment for access to this class.
function Class:getBindName()
	return self:getName()
end

--- Retrieve the list of abstract functions.
-- This function will recursively search for the abstract functions
-- in this class and its parent classes.
function Class:getAbstractFunctions()
	local abstractFuncs = Set()
	local concreteFuncs = Set()
	
	-- First collect the abstract/non abstract functions in 
	-- this class.
	for _,v in self:getFunctions():sequence() do
		if v:isAbstract() then
			self:notice("Found abstract method: ",v:getFullName())
			abstractFuncs:push_back(v)
		else
			concreteFuncs:push_back(v)
		end
	end
	 
	-- retrieve the abstract functions inherited from each base
	-- class:
	for _,v in self:getBases():sequence() do
		local baseAbstracts = v:getAbstractFunctions()
		
		-- remove from that set the functions that have concrete 
		-- implementation in the current derived class
		for _,func in baseAbstracts:sequence() do
			local isConcrete = false;
			for _,concFunc in concreteFuncs:sequence() do
				if func:isEqualTo(concFunc) then
					isConcrete=true;
					self:notice("Found concrete implementation for : ",v:getFullName())
					break;
				end
			end
			
			if not isConcrete then
				abstractFuncs:push_back(func)
			end
		end 
	end
	
	return abstractFuncs
end

function Class:getAbstractOperators()
	local abstractFuncs = Set()
	local concreteFuncs = Set()
	
	-- First collect the abstract/non abstract functions in 
	-- this class.
	for _,v in self:getOperators():sequence() do
		if v:isAbstract() then
			self:notice("Found abstract operator: ",v:getFullName())
			abstractFuncs:push_back(v)
		else
			concreteFuncs:push_back(v)
		end
	end
	 
	-- retrieve the abstract functions inherited from each base
	-- class:
	for _,v in self:getBases():sequence() do
		local baseAbstracts = v:getAbstractOperators()
		
		-- remove from that set the functions that have concrete 
		-- implementation in the current derived class
		for _,func in baseAbstracts:sequence() do
			local isConcrete = false;
			for _,concFunc in concreteFuncs:sequence() do
				if func:isEqualTo(concFunc) then
					isConcrete=true;
					break;
				end
			end
			
			if not isConcrete then
				abstractFuncs:push_back(func)
			end
		end 
	end
	
	return abstractFuncs
end

--- Check if this class should be ignored.
-- Request the IgnoreManager whever this class should be
-- ignored or not for the bindings generation.
function Class:isIgnored()
	--error("Checking class ignore status for " ..self:getName())
	return im:ignoreClass(self)
end

--- Check if the converter from that class should be ignored.
-- Request the IgnoreManager whever the converter for this class should be
-- ignored or not for the bindings generation. This is only applicable to absolute
-- base classes which can be down casted to child classes.
function Class:isConverterIgnored()
	return im:ignoreConverter(self)
end

--- Check if this class is templated.
-- Should always return false for this class. (would return true
-- for the derived Template type)
-- @return false
function Class:isTemplated()
	return not self.templateParameters:empty()
end

function Class:addTemplateParameter(param)
	dbg:assert(param,"Invalid template parameter argument");
	self.templateParameters:push_back(param)
end

--- Function used to check if a class is abstract.
function Class:isAbstract()
	return not self:getAbstractFunctions():empty() or not self:getAbstractOperators():empty()
end

function Class:getTypeName()
	return self:getMappedType() and self:getMappedType():getName() or self:getFullName()
end

function Class:isValidForWrapping()
	return not self:isTemplated()
end

function Class:setModule(modname)
	self.externalModule = modname
end

function Class:getDeleter()
	return tm:getDeleter(self)
end

function Class:getModule()
	return self.externalModule or tm:getModule(self) or tm:getMappedModuleName(self)
end

function Class:isExternal()
	return self.externalModule or tm:getModule(self)
end

return Class
