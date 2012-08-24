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
	
	log:info("Tests","Reading object from file=",file)
	local res = osg.readObjectFile(file,nil)
	log:info("Tests","Object read.")
	
end

function test_timeprovider_serialization()
	
	log:info("Tests","Doing TimeProvider serialization test...")
	
	-- create a new sgt object:
	local obj = sgt.TimeProvider()
	obj:setName("MyProvider")
	obj:setTimeSpeed(2.0)
	
	--local rw = osgDB.Registry.instance():getReaderWriterForExtension("osgt")
	--assert_not_equal(rw,nil,"Invalid readerwriter for extension.")
	
	local file = fs:getRootPath(true).."testTimeProvider.osgt"
	log:info("Tests","Writing test object to "..file)
	local res = osg.writeObjectFile(obj,file)
	assert_equal(true,res,"Cannot write object file.")

	log:info("Tests","Done writing object")
	
	-- Now read back the serialized object:
	log:info("Tests","Reading object from file=",file)
	local res = osg.readObjectFile(file,nil)
	log:info("Tests","Object read.")
	
	assert_not_equal(nil,res,"Cannot read object file.")
	
	local tp = res:dynCast("sgt::TimeProvider")
	assert_not_equal(nil,tp,"Cannot dyncast timeprovider.")
	
	local st = tp:getStartTime()
	log:info("Tests","Retrieved start time is: ", st)
end

