local Class = require("classBuilder"){name="RedBirdApp",bases="gui.wx.SimpleApp"};

local osg = require "osg"

function Class:initialize(options)
	local Interface = require "gui.wx.ControlInterface"

	local intf = Interface{root=self:getFrame()}

	self:buildInterface(intf,options)
	
	self:getFrame():Layout()
	
	self:info("RedBird app is running.")
	
	self._socket = require("network.UDPSocket"){localPort=31001,port=31000,address="192.168.0.17"}
	
	self._startTick = osg.Timer.instance():tick()
	
	-- register a need timer event:
	self:getEventManager():addListener{event="Frame",object=self}
end

function Class:buildInterface(intf, options)
	intf:addOutputPanel{}
	self:getWindowManager():getMainFrame():SetSize(1280,720)
end

local bc = require "byteconverter"

function Class:resetBuffer()
	self._buf = ""
end

function Class:append(str)
	self._buf = self._buf .. str
end

function Class:getBuffer()
	return self._buf;
end

function Class:writeMessage()
	self:resetBuffer()
	
	local elapsed = osg.Timer.instance():delta_s(self._startTick,osg.Timer.instance():tick());
	local angle = 2.0*math.pi* elapsed/300.0
	
	local dlat = 0.01 * math.sin(angle)
	local dlon = 0.01 * math.cos(angle)
	
	local be = true
	self:append("redbird")
	self:append(bc.doubleToBytes(39.582354 + dlat,be))
	self:append(bc.doubleToBytes(-40.135323 + dlon,be))
	self:append(bc.doubleToBytes(100.0,be))
	self:append(bc.doubleToBytes(math.deg(-angle),be))
	self:append(bc.doubleToBytes(0.0,be)) -- -60.0
	self:append(bc.doubleToBytes(0.0,be))
end

function Class:onFrame()
	-- self:info("Executing frame event...")	
	self:writeMessage();
	self._socket:send(self:getBuffer())
end

return Class -- return class instance.
