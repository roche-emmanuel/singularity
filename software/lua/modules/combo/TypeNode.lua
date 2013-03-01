local Class = require("classBuilder"){name="TypeNode",bases="base.Object"};

local types = {
    "lambda_type",      -- Example : lambda_type(T1 T2 T3)
                      -- represents a function that takes arguments of
                      -- type T1 and T2, and returns an output of type T3
    "application_type", -- Represents the application of a function to
                      -- its arguments
    "union_type",
    "arg_list_type",    -- Denotes a var-args style list of zero or more
                      -- arguments of a given type.
                      -- Example : arg_list(T) corresponds to a list of
                      -- zero or more elements of type T

    -- Elementary types.
    "boolean_type",     -- True or False, 1 or 0
    "real_type",      -- continuously-valued (floating point)
    "enum_type",        -- alphanumeric string (& limited punctuation)
    "list_type",        -- Denotes a list of zero or more items of a 
                      -- given type; list(T) corresponds to a list of
                      -- zero or more elements of type T.   This is like
                      -- arg_list, but is not used for var-args.


    -- Types for motor control, sensory data.
    "action_result_type",
    "definite_object_type",
    "action_definite_object_type", -- Like definite_object, but contains
                                 -- the suffix _action
    "indefinite_object_type",
    "message_type",
    "action_symbol_type",
    "wild_card_type",

    -- Neural networks
    "ann_type",                   -- For evolving anns

    "unknown_type",  -- The uber type.  All types inherit from unkown
                   -- but ill_formed_type

    "ill_formed_type", -- When the type is just wrong

    -- Argument. This is a small hack to avoid using union or variant
    -- or similar ideas to list argument types.  THIS MUST BE LAST IN
    -- THE ENUM.  The rest of the integers enumerate variables. That
    -- is, argument_type corresponds to $1, argument_type+1 corresponds
    -- to $2, and so on.
    "argument_type"
}
	
for k,v in ipairs(types) do
	Class[v:upper()] = v
end

function Class:initialize(options)
	local ttype = (type(options)=="string" and options) 
		or options.type or options[1]
	
	self._type, self._index = self:parse(ttype)
		
	self:check(self._type,"Invalid TypeNode type")
end

function Class:getType()
	return self._type
end

local tmap = {}
tmap["->"] = "lambda_type"
tmap["lambda"] = "lambda_type"
tmap["lambda_type"] = "lambda_type"
tmap["application"] = "application_type"
tmap["application_type"] = "application_type"
tmap["union"] = "union_type"
tmap["union_type"] = "union_type"
tmap["arg_list"] = "arg_list_type"
tmap["arg_list_type"] = "arg_list_type"
tmap["boolean"] = "boolean_type"
tmap["boolean_type"] = "boolean_type"
tmap["real"] = "real_type"
tmap["real_t"] = "real_type"
tmap["real_type"] = "real_type"
tmap["enum"] = "enum_type"
tmap["enum_t"] = "enum_type"
tmap["enum_type"] = "enum_type"
tmap["ann"] = "ann_type"
tmap["ann_type"] = "ann_type"
tmap["argument"] = "argument_type"
tmap["argument_type"] = "argument_type"
tmap["list"] = "list_type"
tmap["list_t"] = "list_type"
tmap["list_type"] = "list_type"
tmap["action_result"] = "action_result_type"
tmap["action_result_type"] = "action_result_type"
tmap["definite_object"] = "definite_object_type"
tmap["definite_object_type"] = "definite_object_type"
tmap["action_definite_object"] = "action_definite_object_type"
tmap["action_definite_object_type"] = "action_definite_object_type"
tmap["indefinite_object"] = "indefinite_object_type"
tmap["indefinite_object_type"] = "indefinite_object_type"
tmap["message"] = "message_type"
tmap["message_type"] = "message_type"
tmap["action_symbol"] = "action_symbol_type"
tmap["action_symbol_type"] = "action_symbol_type"
tmap["wild_card"] = "wild_card_type"
tmap["wild_card_type"] = "wild_card_type"
tmap["unknown"] = "unknown_type"
tmap["unknown_type"] = "unknown_type"
tmap["ill_formed"] = "ill_formed_type"
tmap["ill_formed_type"] = "ill_formed_type"

local get_type = function(str)
	local tname = tmap[str]
		
	local index;
	if not tname and str:sub(1,1)=="$" then
		tname = "argument_type"
		index = tonumber(str:sub(2))
	end
	
	return tname, index
end

function Class:parse(str)
	self:check(str,"Invalid TypeNode name")
	
	local tname, index = get_type(str)
	
	self:check(tname,"Invalid TypeNode result for input: ",str)
	return tname, index
end

function Class:__tostring()
	return self._type
end

function Class:__len()
	return self._type
end

function Class:equals(rhs)
	-- return self._type==rhs._type and self._index==rhs._index;
	return (type(rhs)=="string" and self._type==rhs) or (type(rhs)=="table" and rhs:isInstanceOf(Class) and self._type==rhs._type and self._index==rhs._index)
end

function Class:__eq(rhs)
	return self:equals(rhs)
end

for k,v in ipairs(types) do
	-- creating the type instances:
	local name = v:gsub("_type$","")
	Class[name:upper()] = Class(v)
end

function Class.fromString(str)
	if not str then
		log:error("Invalid str input for TypeNode.fromString()");
		return
	end
	
	local tname, index = get_type(str)
	
	if not tname then
		log:error("Invalid tname result for TypeNode.fromString()");
		return
	end
	
	tname = tname:gsub("_type$",""):upper()
	
	if index then
		local res = Class["arg"..index]
		if not res then
			res = Class(str)
			Class["arg"..index] = res
		end
		
		return res;
	else
		return Class[tname]
	end
end

function Class:isArgument()
	return self._type == "argument_type"
end

function Class:isArgumentType()
	return self:isArgument()
end

function Class:getArgIndex()
    self:check(self:isArgument(),"Cannot find the idx of a non-argument type");
	self:check(self._index,"Invalid index for argument.")
	return self._index
end

local unknown_type_tree

function Class:getArgType(arg_types)
    if not unknown_type_tree then
		local TypeTree = require "combo.TypeTree"
		unknown_type_tree = TypeTree{Class.UNKNOWN}
	end
	
	local idx = self:getArgIndex()
    if (idx <= arg_types:size()) then
        return arg_types[idx];
    else 
		return unknown_type_tree;	
	end
end

return Class
