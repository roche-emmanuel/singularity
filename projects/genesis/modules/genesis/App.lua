local Class = require("classBuilder"){name="GenesisApp",bases="gui.wx.SimpleApp"};

function Class:initialize(options)
	self._screens = require("std.Vector")()
	self:getEventManager():addListener{event="AppClosing",object=self}

	local Interface = require "gui.wx.ControlInterface"
	local intf = Interface{root=self:getFrame()}
	
	intf:pushPanel{prop=1,flags=wx.wxALL+wx.wxEXPAND}
	self._outputPanel = intf:addOutputPanel{}
	intf:popParent(true)
	
	self:getFrame():SetTitle("NervTech - Genesis")
	self:getFrame():SetSize(1000,300)
	self:getFrame():Layout()
	
	local Screen = require "genesis.display.SimpleScreen"	
	self._screens:push_back(Screen())
end

function Class:onAppClosing()
	-- release all the images:
	self:info("Closing all screens...")
	for _,screen in self._screens:sequence() do
		screen:close()
	end
	self._screens:clear();
end

return Class 
