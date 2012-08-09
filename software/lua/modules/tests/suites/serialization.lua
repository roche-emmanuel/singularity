module(..., package.seeall)

local log = require "tracer"
local osg = require "osg"
local fs = require "base.FileSystem"


function test_file_serialization()
	
	log:info("Tests","Doing serialization test...")
	
	-- create a new sgt object:
	local obj = sgt.Object()
	obj:setName("testObject")
	
	--local rw = osgDB.Registry.instance():getReaderWriterForExtension("osgt")
	--assert_not_equal(rw,nil,"Invalid readerwriter for extension.")
	
	local file = fs:getRootPath(true).."testObject.osgt"
	log:info("Tests","Writing test object to "..file)
	local res = osg.writeObjectFile(obj,file)
	assert_equal(true,res,"Cannot write object file.")

	log:info("Tests","Done writing object")
	
end
