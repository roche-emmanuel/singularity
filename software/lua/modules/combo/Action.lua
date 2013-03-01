local Class = require("classBuilder"){name="ComboAction",bases="combo.OperatorBase"};

local TypeTree = require "combo.TypeTree"
local TypeNode = require "combo.TypeNode"

local actions = {}
actions.seq_and={sig="->(arg_list(action_result) action_result)",associative=true}
actions.seq_or={sig="->(arg_list(action_result) action_result)",associative=true}
actions.seq_exec={sig="->(arg_list(action_result) action_result)",associative=true}

-- negate the action_result of an action, that is
-- action_not(action_succeed)=action_failure
-- action_not(action_failure)=action_succeed
actions.action_not={sig="->(action_result action_result)"}

-- boolean in condition,
-- action branch (for consistency this is action_boolean_if for i/o - moshe)
actions.action_boolean_if={sig="->(boolean action_result action_result action_result)"} 
						 
-- action_result in condition, boolean branch
actions.boolean_action_if={sig="->(action_result boolean boolean boolean)"}

-- action_result in condition, real branch 
actions.real_action_if={sig="->(action_result real real real)"}

-- action_result in condition, action branch
actions.action_action_if={sig="->(action_result action_result action_result action_result)"}

actions.action_success={sig="action_result"} 
actions.action_failure={sig="action_result"}
actions.action_while={sig="->(action_result action_result)"} 
actions.boolean_while={sig="->(boolean action_result action_result)"} 
actions.return_success={sig="action_result"}
actions.repeat_n={sig="->(real action_result action_result)"}

for k,v in pairs(actions) do
	Class[k:upper()] = k
	local typeTree = TypeTree()
	-- log:info("Parsing sig: ",v.sig, " for ", k)
	typeTree:parse(v.sig,"")
	v.ttree = typeTree;
	log:debug("Parsed type tree: ", tostring(v.ttree)," for ", k)
	v.arity = v.ttree:getArity()
	log:debug("Retrieved arity=", v.arity ," for ", k)
	
	-- retrieve the output type:
	local it = v.ttree:begin()
	--log:debug("Checking begin node of type: ",#it, "lamdba_type=",TypeNode.LAMBDA_TYPE)
	v.output_type = (#it):equals(TypeNode.LAMBDA_TYPE) and #(it:last_child()) or #it; 
	log:debug("Retrieved output_type=", v.output_type ," for ", k)
	
	-- retrieve the arguments:
	local last_child = it:last_child()
	local sib = it:begin()
	v.args = {}
	while(sib~=last_child) do
		local arg = (#sib):equals(TypeNode.ARG_LIST_TYPE) and sib:begin() or sib
		log:debug("Found argument: ",#arg)
		sib:inc()
		table.insert(v.args,TypeTree(arg));
	end
end


function Class:initialize(options)
	self:check(options,"Invalid action options")
	self._action = (type(options)=="string" and options) or options.type or options[1]
	self:check(actions[self._action],"Invalid action name: ",self._action)
end
		
function Class:getArity()
	local tt = self._action and actions[self._action]
	self:check(tt,"Invalid action table entry for : ", self._action)
	self:check(tt.arity,"Invalid arity for action : ", self._action)
	return tt.arity
end

function Class:getTypeTree()
	local tt = self._action and actions[self._action]
	self:check(tt,"Invalid action table entry for : ", self._action)
	self:check(tt.ttree,"Invalid type tree for action : ", self._action)
	return tt.ttree
end

function Class:getOutputType()
	local tt = self._action and actions[self._action]
	self:check(tt,"Invalid action table entry for : ", self._action)
	self:check(tt.output_type,"Invalid output_type for action : ", self._action)
	return tt.output_type
end

function Class:getInputTree(index)
	local tt = self._action and actions[self._action]
	self:check(tt,"Invalid action table entry for : ", self._action)
	self:check(tt.args[index],"Invalid argument ",index," for action : ", self._action)
	return tt.args[index]	
end

function Class:getName()
	return self._action
end

function Class:__tostring()
	self:check(self._action,"Invalid action handle")
	return self._action
end

function Class:__eq(rhs)
	return rhs:isInstanceOf(Class) and self._action==rhs._action
end

function Class:isAssociative()
    return actions[self._action].associative or false;
end

return Class 
