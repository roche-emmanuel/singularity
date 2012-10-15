module(..., package.seeall)

local log = require "tracer"
local utils = require "utils"

function test_split_string()
	log:info("Tests","Testing split string")

	local str1 = "aa.bb.cc.dd.ee"
	local v1 = {"aa","bb","cc","dd","ee"}
	
	local res = utils.splitString(str1,".")
	assert_equal(#v1,#res,"Invalid result 1 table size.")
	for k,v in ipairs(v1) do
		assert_equal(v,res[k],"Invalid result 1 table value.")
	end
		
	local str1 = "aa/bb/cc/dd/ee"
	local v1 = {"aa","bb","cc","dd","ee"}
	
	local res = utils.splitString(str1,"/")
	assert_equal(#v1,#res,"Invalid result 2 table size.")
	for k,v in ipairs(v1) do
		assert_equal(v,res[k],"Invalid result 2 table value.")
	end
	
	log:info("Tests","Split string test done.")
end
