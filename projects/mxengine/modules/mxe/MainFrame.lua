local Class = require("classBuilder"){name="MainFrame",bases="base.Object"};

function Class:initialize(options)
	-- build the main frame on the app frame:
	self:check(options and options.app,"Invalid app to build main frame")
	
	local Interface = require "gui.wx.EntryInterface"
	local im = require "gui.wx.ImageManager"
	
	local app = options.app
	
	local parent = app:getFrame()

	local intf = Interface{root=app:getFrame(),handler=self}
	self._intf = intf
	
	local panel = intf:pushPanel{prop=1,flags=wx.wxEXPAND}
	
	intf:pushNotebook{prop=1,flags=wx.wxALL+wx.wxEXPAND}
		intf:pushBookPage{caption="Mission"}
			require "gui.MissionPanel" {intf}
		intf:popParent(true) -- mission page
		
		intf:pushBookPage{caption="Controls"}
			require "gui.TurretControllerPage" {intf}
		intf:popParent(true) -- controls page
		
		-- intf:pushBookPage{caption="Turrets"}
		-- intf:popParent(true) -- turrets page

		-- intf:pushBookPage{caption="Outputs"}
		-- intf:popParent(true) -- outputs page
		
		-- intf:pushBookPage{caption="Network"}
		-- intf:popParent(true) -- Network page
	intf:popParent()

	require "gui.LogPanel" {intf}
	require "gui.JoystickPanel" {intf}
	
	intf:popParent(true)
	
	parent:Layout()	
	parent:Fit()
	
	intf:updateProviders()
	intf:updateEntries() -- force updating the content of the data map.
	
	-- local data = intf:getDefaultProvider():getDataHolder()
	-- self:warn("Datamap content: ",data)
end


return Class
