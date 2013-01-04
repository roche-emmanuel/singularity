module(..., package.seeall)

local log = require "tracer"

function test_wrapper_destruction()
	log:info("Tests","Testing wrapper destructor callback.")
	
	local cbCalled = false;
	
	local sink = sgt.LogSink{delete=function(tt) log:warn("Tests","Now calling sink destruction cb."); cbCalled = true; end }
	
	log:info("Tests","Sink ref count=",sink:referenceCount())
	
	sink:delete()
	
	assert_equal(true,cbCalled,"Destructor cb was not called.")
	
	log:info("Tests","Wrapper destructor callback test done.")
end

