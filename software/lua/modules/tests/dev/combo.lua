local suite = {}

function suite.test_combo_action()
	log:info("Testing combo action")
	
	local Action = require "combo.Action"
	local act = Action(Action.SEQ_AND)
	
	assert_equal("seq_and",tostring(act),"Invalid action to string")
	
	log:info("Done testing combo action")
end

function suite.test_type_node_eq()
	log:info("Testing combo typenode eq")
	
	local TypeNode = require "combo.TypeNode"
	local tn = TypeNode(TypeNode.LAMBDA_TYPE)
	
	assert_equal(true,tn:equals("lambda_type"),"Invalid typenode eq result.")
	assert_equal(true,#tn == "lambda_type","Invalid typenode eq result.")
	
	log:info("Done testing typenode eq")
end

function suite.test_combo_builtin()
	log:info("Testing combo builtin")
	
	local Builtin = require "combo.Builtin"
	local b = Builtin(Builtin.LOGICAL_TRUE)
	
	assert_equal("logical_true",tostring(b),"Invalid builtin to string")
	
	log:info("Done testing combo builtin")
end

function suite.test_combo_argument()
	log:info("Testing combo argument")
	
	local Argument = require "combo.Argument"
	local arg = Argument(1)
	
	assert_equal(true,arg:isIndexValid(3),"Invalid argument index")
	
	log:info("Done testing combo argument")
end

function suite.test_combo_action_symbol()
	log:info("Testing combo ActionSymbol")
	
	local ActionSymbol = require "combo.ActionSymbol"
	local as = ActionSymbol()
		
	log:info("Done testing combo ActionSymbol")
end

function suite.test_combo_builtin_action()
	log:info("Testing combo BuiltinAction")
	
	local BuiltinAction = require "combo.BuiltinAction"
	local ba = BuiltinAction()
		
	log:info("Done testing combo BuiltinAction")
end

function suite.test_combo_definite_object()
	log:info("Testing combo DefiniteObject")
	
	local DefiniteObject = require "combo.DefiniteObject"
	local obj = DefiniteObject("test_action")
	
	assert_equal(true,obj:isAction(),"Invalid definite object action")
	assert_equal("test",obj:getActionName(),"Invalid definite object action name")
	
	local obj = DefiniteObject("test2")
	assert_equal(false,obj:isAction(),"Invalid definite object action 2")
	assert_equal(nil,obj:getActionName(),"Invalid definite object action name 2")

	local obj = DefiniteObject.createAction("test3")
	assert_equal(true,obj:isAction(),"Invalid definite object action 3")
	assert_equal("test3",obj:getActionName(),"Invalid definite object action name 3")
	
	log:info("Done testing combo DefiniteObject")
end

function suite.test_combo_enum()
	log:info("Testing combo Enum")
	
	local Enum = require "combo.Enum"
	local e1 = Enum("val1")
		
	assert_equal(1,Enum.size(),"Invalid enum count")
	
	assert_equal(e1,Enum.getRandom(),"Invalid single enum random value")

	local e2 = Enum("val1")
	assert_equal(2,Enum.size(),"Invalid enum count 2")

	for i=1,20 do
		local res = Enum.getRandom()
		assert_equal(true,e1==res or e2==res,"Invalid enum random value for test "..i)
	end
	
	assert_not_equal(e1,Enum.invalid(),"Invalid enum is equal to something else.")
	assert_not_equal(e2,Enum.invalid(),"Invalid enum is equal to something else.")
	
	log:info("Done testing combo Enum")
end

function suite.test_combo_indefinite_object()
	log:info("Testing combo IndefiniteObject")
	
	local IndefiniteObject = require "combo.IndefiniteObject"

	log:info("Done testing combo IndefiniteObject")
end

return suite
