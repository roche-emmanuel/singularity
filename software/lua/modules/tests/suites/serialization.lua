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
	
	local file = fs:getRootPath(true).."tests/Object.osgt"
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
	
	local file = fs:getRootPath(true).."tests/TimeProvider.osgt"
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

function test_anyvector()
	log:info("Tests","Performing AnyVector creation...")
	local obj = sgt.AnyVector()
	assert_not_equal(nil,obj,"Invalid AnyVector object.")
	log:info("Tests","AnyVector test done.")
end

function test_anyvector_serialization()
	log:info("Tests","Performing AnyVector serialization...")
	local obj = sgt.AnyVector()
	assert_not_equal(nil,obj,"Invalid AnyVector object.")
	log:info("Tests","AnyVector serialization test done.")
	
	local file = fs:getRootPath(true).."tests/anyvector.osgt"
	
	if fs:exists(file) then
		log:info("Tests","Removing previous version of file ",file)
		fs:removeFile(file)
	end
	
	log:info("Tests","Writing test object to "..file)
	local res = osg.writeObjectFile(obj,file)
	assert_equal(true,res,"Cannot write object file.")
	
	log:info("Tests","Reading object from file=",file)
	local res = osg.readObjectFile(file,nil)
	log:info("Tests","Object read.")
	
	assert_not_equal(nil,res,"Cannot read object file.")
	
	local vec = res:dynCast("sgt::AnyVector")
	
	assert_not_equal(nil,vec,"Cannot dyncast anyvector.")
end

