local Class = require("classBuilder"){name="XPlaneControllerApp",bases="gui.wx.SimpleApp"};

local osg = require "osg"

local bc = require "byteconverter"
local applyOffset = false

function Class:initialize(options)
	local Interface = require "gui.wx.ControlInterface"

	local intf = Interface{root=self:getFrame()}

	self:buildInterface(intf,options)
	
	self:getFrame():Layout()
	
	self:info("XPlaneController app is running.")
	
	self._socket = require("network.UDPSocket"){localPort=49000,port=49010,address="192.168.0.37"}
	
	self._startTime = osg.Timer.instance():tick()
	self._packetID = 0;
	self._bigendian = false

	-- register a need timer event:
	self:getEventManager():addListener{event="Frame",object=self}
end

function Class:buildInterface(intf, options)
	-- intf:addActionButtonEntry{name="toggle_mode",src="enter",size=16,handler="onActivate"}
	intf:addButton{text="Activate",handler=Class.onActivate}

	intf:addOutputPanel{}
	self:getWindowManager():getMainFrame():SetSize(1280,720)
end

function Class:onActivate()
	self:debug("Activating button!")
	applyOffset = not applyOffset
end

function Class:resetBuffer()
	self._buf = ""
end

function Class:append(str)
	self._buf = self._buf .. str
end

function Class:prepend(str)
	self._buf = str .. self._buf
end

function Class:getBuffer()
	return self._buf;
end

function Class:writeMessage()
	self:resetBuffer()
	
	local elapsed = osg.Timer.instance():delta_s(self._startTime,osg.Timer.instance():tick());
	local angle = 2.0*math.pi* elapsed/300.0
	
	-- self:info("Elapsed= ",elapsed, " angle=",angle)
	local dlat = 0.01 * math.sin(angle)
	local dlon = 0.01 * math.cos(angle)
	
	local roll = 0.0
	local pitch = 0.0
	local yaw = 0.0
	local llaId = 20
	local yprId = 17

	-- add the header:
	self:append("DATAx")

	self._bigendian = false

	-- add the id for the message:
	self:append(bc.int32ToBytes(llaId,self._bigendian))
	-- self:append(bc.floatToBytes(39.582354 + dlat,self._bigendian))
	-- self:append(bc.floatToBytes(-40.135323 + dlon,self._bigendian))
	-- self:append(bc.floatToBytes(200/0.3048,self._bigendian))
	self:append(bc.floatToBytes(0.0,self._bigendian)) --applyOffset and 0.01 or 0.0
	self:append(bc.floatToBytes(0.0,self._bigendian))
	self:append(bc.floatToBytes(0.0,self._bigendian))
	for i=1,5 do
		self:append(bc.floatToBytes(0.0,self._bigendian))
	end		

	-- add the header:
	-- self:append("DATAx")

	-- add the id for the message:
	self:append(bc.int32ToBytes(yprId,self._bigendian))
	self:append(bc.floatToBytes(applyOffset and -45.0 or 0.0,self._bigendian))
	self:append(bc.floatToBytes(0.0,self._bigendian))
	self:append(bc.floatToBytes(0.0,self._bigendian))
	for i=1,5 do
		self:append(bc.floatToBytes(0.0,self._bigendian))
	end		


end

function Class:onFrame()
	-- self:info("Executing frame event...")	
	self:writeMessage();
	-- self:info("Sending packet of size: ", #self:getBuffer())
	
	-- self:info("Sending data: ",self:toByteString(self:getBuffer()))
	self._socket:send(self:getBuffer())
end

function Class:toHexString(msg)
	local hex = {}
	for i=1,#msg do
		table.insert(hex,bit.tohex(string.byte(msg:sub(i,i)), -2))
	end
	
	return table.concat(hex)
end

function Class:toByteString(msg)   	
	local str = {};
	for i=1,msg:len() do
       	table.insert(str,string.byte(msg:sub(i,i)))
	end
	return "| " .. table.concat(str," | ") .. " |";
end

return Class -- return class instance.
