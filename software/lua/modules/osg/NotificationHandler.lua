local Class = require("classBuilder"){name="NotificationHandler",bases="base.Object"};

require "osg"

local tracer = require "tracer"
local Event = require "base.Event"

Class:generateWrapping(osg.NotifyHandler)

function Class:initialize(options)	
	self:debug2("Creating NotificationHandler object");
	
	self:createWrapper(osg.NotifyHandler)
	
	self:getEventManager():addListener{event=Event.APP_CLOSING,object=self}
end

function Class:notify(severity, message)
	message = message:sub(1,message:len()-1) -- remove the ending \n character.
	
	if severity == osg.ALWAYS then
		tracer:notice("OSG",message)
	elseif severity == osg.FATAL then
		tracer:fatal("OSG",message)
	elseif severity == osg.WARN then
		tracer:warn("OSG",message)
	elseif severity == osg.NOTICE then
		tracer:notice("OSG",message)
	elseif severity == osg.INFO then
		tracer:info("OSG",message)
	elseif severity == osg.DEBUG_INFO then
		tracer:debug("OSG",message)
	elseif severity == osg.DEBUG_FP then
		tracer:debug1("OSG",message)
	else
		self:warn("Could not match osg severity level: ",severity, " for message '",message,"'")
	end	
end

function Class:onAppClosing()
	-- release all the images:
	self:info("Releasing OSG NotifyHandler.")
	osg.setNotifyHandler(nil)
	self:release()
end

local instance = Class()

-- register this instance in the OSG notification pipeline:
osg.setNotifyHandler(instance:getWrapper())

return instance
