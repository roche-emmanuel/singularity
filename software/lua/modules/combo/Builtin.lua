local Class = require("classBuilder"){name="ComboBuiltin",bases="combo.OperatorBase"};

local TypeTree = require "combo.TypeTree"
local TypeNode = require "combo.TypeNode"

local builtins = {}

builtins.null_vertex = {sig="unknown"}

-- simple boolean functions
-- contants are put first to be in
-- sync with
-- lexicographic_subtree_order, it is
-- not mandatory but it should make
-- the reduct engine a bit faster
builtins.logical_true  = {sig="boolean"}
builtins.logical_false = {sig="boolean"}       
builtins.logical_and = {sig="->(arg_list(boolean) boolean)",associative=true,commutative=true} 
builtins.logical_or = {sig="->(arg_list(boolean) boolean)",associative=true,commutative=true}
builtins.logical_not = {sig="->(boolean boolean)"}

-- real functions (take real as arg, or return real)
builtins.plus = {sig="->(arg_list(real) real)",associative=true,commutative=true} 
builtins.times = {sig="->(arg_list(real) real)",associative=true,commutative=true}
builtins.div = {sig="->(real real real)"}
builtins.exp = {sig="->(real real)"}
-- if ABS_LOG is enabled then log(x) := log(abs(x))
builtins.log = {sig="->(real real)"} 
builtins.sin = {sig="->(real real)"}
builtins.greater_than_zero = {sig="->(real boolean)"}
builtins.impulse = {sig="->(boolean real)"}
-- random real_t in [0,1) FIXME TODO : update reduct rules
builtins.rand = {sig="real"}         

-- List constructor
builtins.list = {sig="->(arg_list(unknown) list)"} 

-- Functions on lists          
builtins.car = {sig="->(list unknown)"} 
builtins.cdr = {sig="->(list list)"} 
builtins.cons = {sig="->(unknown list list)"} 
builtins.foldr = {sig="->(unknown unknown list unknown)"} 
builtins.foldl = {sig="->(unknown unknown list unknown)"}
-- Generic functions
-- Currently take enum as arg or return enum, but should
-- be generalized soon.  XXX do this...
builtins.cond = {sig="->(arg_list(boolean unknown) unknown unknown)"}
builtins.equ = {sig="->(enum enum boolean)"}

builtins.lambda = {sig="->(arg_list(unknown) ->)"}
builtins.apply = {sig="->(-> unknown unknown)"}

-- XXX This should be obsoleted by cond, at some point. 
-- Maybe builtin_boolean_if too, I guess?
builtins.real_if = {sig="->(boolean real real real)"}

for k,v in pairs(builtins) do
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
	self:check(options,"Invalid builtin options")
	self._builtin = (type(options)=="string" and options) or options.type or options[1]
	self:check(builtins[self._builtin],"Invalid builtin name: ",self._builtin)
end
			
function Class:getArity()
	local tt = self._builtin and builtins[self._builtin]
	self:check(tt,"Invalid builtin table entry for : ", self._builtin)
	self:check(tt.arity,"Invalid arity for builtin : ", self._builtin)
	return tt.arity
end

function Class:getTypeTree()
	local tt = self._builtin and builtins[self._builtin]
	self:check(tt,"Invalid builtin table entry for : ", self._builtin)
	self:check(tt.ttree,"Invalid type tree for builtin : ", self._builtin)
	return tt.ttree
end

function Class:getOutputType()
	local tt = self._builtin and builtins[self._builtin]
	self:check(tt,"Invalid builtin table entry for : ", self._builtin)
	self:check(tt.output_type,"Invalid output_type for builtin : ", self._builtin)
	return tt.output_type
end

function Class:getInputTree(index)
	local tt = self._builtin and builtins[self._builtin]
	self:check(tt,"Invalid builtin table entry for : ", self._builtin)
	self:check(tt.args[index],"Invalid argument ",index," for builtin : ", self._builtin)
	return tt.args[index]	
end

function Class:getName()
	return self._builtin
end

function Class:__tostring()
	self:check(self._builtin,"Invalid builtin handle")
	return self._builtin
end

function Class:__eq(rhs)
	return rhs:isInstanceOf(Class) and self._builtin==rhs._builtin
end

function Class:isAssociative()
    return builtins[self._builtin].associative or false;
end

function Class:isCommutative()
    return builtins[self._builtin].commutative or false;
end

return Class 
