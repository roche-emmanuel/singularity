local Class = require("classBuilder"){name="HandlerConnector", bases={"base.EventHandler"}};

local wx = require "wx"

local Vector = require "std.Vector"
local prof = require "debugging.Profiler"

-- This class provides functions to add wx controls.
function Class:initialize(options)
	self:info("Executing initialize for BasicInterface...")
	
	self._connectedHandlers = Vector()	
end

function Class:disconnectHandlers()
	for _,connection in self._connectedHandlers:sequence() do
		self:debug3("Disconnecting handler with id=",connection.id," eventType=",connection.eventType)
		connection.ctrl:disconnect(connection.id,connection.id,connection.eventType)
	end
end

function Class:connectHandler(ctrl,eventType,func,id,data)
    self:check(ctrl,"Invalid control in connectHandler")
    self:check(eventType,"Invalid event type in connectHandler")
    self:check(func,"Invalid event handler in connectHandler")
    
    --self:warn("Connecting event handler...")
    
    ctrl:connect(id or wx.wxID_ANY,eventType,function(event) 
    	--prof:start("Event handlers")
		local className = event:GetClassInfo():GetClassName()
    	--self:info("Casting event to class: ",className)
    	--prof:start("Event dyncat")
		event = event:dynCast(className)
		--prof:stop()
    	self:check(event,"Invalid event after cast to ",className)
    	func(self,event,data) 
		--prof:stop()
	end)
	
	-- register a connection item:
	local connection = {ctrl=ctrl,id=id or wx.wxID_ANY,eventType=eventType}
	self._connectedHandlers:push_back(connection)
end

return Class
