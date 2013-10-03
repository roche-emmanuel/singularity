local Class = require("classBuilder"){name="SensorBookPanel",bases="gui.BasicTurretComponent"};


function Class:buildComponent(intf)
	intf:pushSizer{text="Sensor settings",orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxALL+wx.wxEXPAND}
		intf:pushNotebook{prop=1,flags=wx.wxALL+wx.wxEXPAND}
			for _,sensor in ipairs{"EOW","IR","EON"} do
				intf:pushBookPage{caption=sensor}	
					require "gui.SensorPanel" {intf, sname=sensor}
				intf:popParent(true)
			end				
		intf:popParent()

	intf:popSizer()
end


return Class 
