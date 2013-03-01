--[[
 * perception_base is an abstract class to be implemented
 * to define the set of perceptions, their name (get_name()),
 * their type (get_type_tree(), get_output_type_tree(), etc) and properties
 * (is_symetric(), etc)
 * It is up to the user how to represent the set of actions
 * (std::set, enum, etc)
 * Name, type (and type helpers) are mandatory because of the type
 * checker engine
 * whereas perception properties are only mandatory when using the
 * reduct engine
 *
 * For an example of an implementation of that class see ant_perception
 * in files ant_perception.h/cc
 *
]]
 
local Class = require("classBuilder"){name="ComboPerception",bases="combo.OperatorBase"};

function Class:__tostring()
	return self:getName()
end

function Class:isUltrametric()
	self:no_impl()
end

function Class:isTransitive()
	self:no_impl()
end

function Class:isIrreflexive()
	self:no_impl()
end

function Class:isReflexive()
	self:no_impl()
end

function Class:isSymmetric()
	self:no_impl()
end

function Class:isIdentityOfIndiscernibles()
	self:no_impl()
end

return Class 
