local Class = require("classBuilder"){name="GenesisApp",bases="gui.wx.SimpleApp"};

function Class:initialize(options)
	self._screens = require("std.Vector")()
	self:getEventManager():addListener{event="AppClosing",object=self}

	local Screen = require "genesis.Screen"	
	self._screens:push_back(Screen())
end

function Class:onAppClosing()
	-- release all the images:
	self:info("Destroying all screens...")
	for _,screen in self._screens:sequence() do
		screen:destroy()
	end
	self._screens:clear();
end

return Class 
