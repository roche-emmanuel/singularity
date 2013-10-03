local Class = require("classBuilder"){name="VICPanel",bases="gui.BasicTurretComponent"};

local subs = {
	EOW = { "DL", "LL" },
	EON = { "DL", "LL", "SWIR" }
}

function Class:buildComponent(intf)	
	intf:pushSizer{text="Source control",orient=wx.wxVERTICAL,prop=0,flags=wx.wxALL+wx.wxEXPAND}
		intf:pushSizer{text="Video in Control",orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxALL+wx.wxEXPAND}
			for _,sensor in ipairs{"EOW","IR","EON"} do
				intf:addBoolEntry{name="vic_"..sensor,caption=sensor,group="vic",asButton=true,
										  handler="updateVIC",validItemOnly=true,sensor=sensor}
			end				
		intf:popSizer()

		
		for _,sensor in ipairs{"EOW","EON"} do
			intf:pushSizer{text=sensor .. " SubVIC",orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxALL+wx.wxEXPAND}
			for k,sname in ipairs(subs[sensor]) do
				intf:addBoolEntry{name=sensor ..".subvic_"..sname,caption=sname,group="subvic_"..sensor,asButton=true,
										  handler="updateSubVIC",validItemOnly=true,sensor=sensor,subId=k-1}
			end
			intf:popSizer()
		end
		
	intf:popSizer()
end

function Class:onInitTurretMap(dmap,turret)
	turret:foreachSensor(function(sensor)
		local sname = sensor:getName()
		dmap:set("vic_"..sname,sensor:isCurrentVIC())
		
		sensor:foreachCamera(function(cam)
			if cam:getName()~= "" then
				dmap:set(sname..".subvic_"..cam:getName(),cam:isCurrentSubVIC())
			end
		end)
	end)
end

function Class:updateVIC(data)
	if data.value then
		local sname = data.entry.options.sensor
		self:info("Setting VIC to ",sname)
		local turret = data.item:fetch("turret")
		local src = turret:getSensor(sname)
		if not src then
			self:warn("Sensor ",sname," is not available.")
			return
		end
		
		turret:setVIC(src:getID())
	end
end

function Class:updateSubVIC(data)
	if data.value then
		local sname = data.entry.options.sensor
		local subId = data.entry.options.subId
		
		self:info("Setting SubVIC to ",subId," for sensor ",sname)
		
		local turret = data.item:fetch("turret")
		local src = turret:getSensor(sname)
		if not src then
			self:warn("Sensor ",sname," is not available.")
			return
		end
		if subId >= src:getNumCameras() then
			self:warn("Subvic index ",subId," for sensor ",sname," is not available.")
			return
		end
		
		src:setSubVIC(subId)
	end
end

return Class 
