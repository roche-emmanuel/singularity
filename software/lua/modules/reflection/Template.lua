
local oo = require "loop.cached"
local dbg = require "debugger"

local Class = require "reflection.Class"
local Vector = require "std.Vector"

-- The Template class represents a template class
-- which may contain functions and variables.
-- and may also have templated bases.
local Template = oo.class({},Class)

-- Define the class name
Template.CLASS_NAME = "reflection.Temmplate"

function Template:__init(obj)
    obj = Class:__init(obj or {})
    obj = oo.rawnew(self,obj)
    dbg:assertNil(obj.bases,"Object already contains a 'bases' field")
    dbg:assertNil(obj.derivations,"Object already contains a 'derivations' field")
	obj.scopeType = Scope.TEMPLATE
	obj.templateParameters = Vector()
    return obj
end

--- Add a new base to this class.
-- This function is reimplemented from the Class class
-- to accept also Template bases.
-- @param base The base class to add.
function Template:addBase(base)
	dbg:assert(base,"base argument is nil");
	dbg:assertType(base,Class);	
	self.bases:push_back(base);
	
	-- Also add this class as a derivation of "base"
	base:addDerivation(self)
end


--- Retrieve template parameters:
function Template:getTemplateParameters()
	return self.templateParameters;
end

--- Add a template parameter to this template
function Template:addTemplateParameter(param)
	dbg:assert(param,"param argument is nil");
	dbg:assertType(param,Parameter);	
	self.templateParameters:push_back(param);	
end

--- Instantiate a concrete class from this template.
-- @param concreteTypes Vector of concrete types used for the instantiation
-- process.
function Template:instantiate(concreteTypes)
	-- check on the parameter:
	dbg:assert(concreteTypes,"concreteTypes argument is nil");
	dbg:assertType(concreteTypes,Vector,true)
	dbg:assertEqual(concreteTypes:size(),self.templateParameters:size(),"Invalid concrete types vector size")

	--[[
	local parentClasses = Set();
	
	-- We have to instanciate all the parent templates:
	for _,v in self:getBases():sequence() do
		if oo.classof(v)==Template then
			local 
		end 
	end
	]]
	error("Template:instantiate() is not implemented yet.")
end

return Template
