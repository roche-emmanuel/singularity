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

return suite
