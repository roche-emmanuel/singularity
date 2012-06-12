module(..., package.seeall)

local Object = require "base.Object"

function test_object()
	-- create new class:
	local obj = Object()
	
	assert_equal(true,obj:isString("hello world"),"Invalid isString result");
	assert_equal(false,obj:isString(5.0),"Invalid negative isString result");
	
	assert_equal(true,obj:isNumber(5.0),"Invalid isNumber result");
	assert_equal(false,obj:isNumber("hello"),"Invalid negative isNumber result");
	
	assert_equal(true,obj:isInteger(5.0),"Invalid isInteger result");
	assert_equal(false,obj:isInteger(5.3),"Invalid negative isInteger result");

	assert_equal(true,obj:isNil(nil),"Invalid isNil result");
	assert_equal(false,obj:isNil("hello"),"Invalid negative isNil result");

end
