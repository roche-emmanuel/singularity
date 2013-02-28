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

return suite
