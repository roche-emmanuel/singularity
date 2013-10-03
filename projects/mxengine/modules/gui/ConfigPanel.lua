local Class = require("classBuilder"){name="ConfigPanel",bases="gui.BasicTurretComponent"};

function Class:buildComponent(intf,options)
	
	intf:pushSizerV{text="Config",prop=0,flags=wx.wxALL+wx.wxEXPAND,function()
		intf:addDoubleEntry{name="camera_auto_exposure",caption="Auto exposure", range={0.1,5.0}, 
							handler="updateAutoExposure", validItemOnly=true}
	end}

end

function Class:onInitTurretMap(dmap,turret)
	dmap:set("camera_auto_exposure",turret:getConfig():fetch("Camera.auto_exposure"))
end

function Class:updateAutoExposure(data)
	local dmap = data.item	
	local turret = dmap:fetch("turret")
	
	-- self:info("Setting Camera auto exposure to:", data.value)
	turret:getConfig():set("Camera.auto_exposure",data.value)
	
	turret:foreachCamera(function(cam)
		cam:updateExposure()
	end)
end

return Class 
