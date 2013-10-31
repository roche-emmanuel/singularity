local Class = require("classBuilder"){name="ConfigPanel",bases="gui.BasicTurretComponent"};

local Enums = require "mx.Enums"

function Class:buildComponent(intf,options)
	
	intf:pushSizerV{text="Config",prop=0,flags=wx.wxALL+wx.wxEXPAND,function()
		intf:addDoubleEntry{name="camera_auto_exposure",caption="Auto exposure", range={0.1,5.0}, 
							handler="updateAutoExposure", validItemOnly=true}
		intf:addIntegerEntry{name="destabilization_amplitude",caption="Destabilization", unit=" mrads",range={0,30.0}, 
							handler="updateDestabilization", validItemOnly=true}
		intf:pushSizerH{text="Temporal processing",prop=0,flags=wx.wxALL+wx.wxEXPAND,function()
			intf:pushSizerV{text="ON",prop=0,flags=wx.wxALL+wx.wxEXPAND,function()
				intf:addDoubleEntry{name="temporal_range_on",caption="Input range", range={0.0,0.5}, 
									handler="updateTemporalInputRange", validItemOnly=true}
				intf:addDoubleEntry{name="temporal_scale_on",caption="Noise scale", range={0.0,0.5}, 
									handler="updateTemporalNoiseScale", validItemOnly=true}
			end}
			intf:pushSizerV{text="OFF",prop=0,flags=wx.wxALL+wx.wxEXPAND,function()
				intf:addDoubleEntry{name="temporal_range_off",caption="Input range", range={0.0,0.5}, 
									handler="updateTemporalInputRange", validItemOnly=true}
				intf:addDoubleEntry{name="temporal_scale_off",caption="Noise scale", range={0.0,0.5}, 
									handler="updateTemporalNoiseScale", validItemOnly=true}
			end}
		end}
		intf:pushSizerH{text="Spatial processing",prop=0,flags=wx.wxALL+wx.wxEXPAND,function()
			intf:pushSizerV{text="ON",prop=0,flags=wx.wxALL+wx.wxEXPAND,function()
				intf:addDoubleEntry{name="spatial_range_on",caption="Input range", range={0.0,0.5}, 
									handler="updateSpatialInputRange", validItemOnly=true}
				intf:addDoubleEntry{name="spatial_scale_on",caption="Noise scale", range={0.0,0.5}, 
									handler="updateSpatialNoiseScale", validItemOnly=true}
			end}
			intf:pushSizerV{text="OFF",prop=0,flags=wx.wxALL+wx.wxEXPAND,function()
				intf:addDoubleEntry{name="spatial_range_off",caption="Input range", range={0.0,0.5}, 
									handler="updateSpatialInputRange", validItemOnly=true}
				intf:addDoubleEntry{name="spatial_scale_off",caption="Noise scale", range={0.0,0.5}, 
									handler="updateSpatialNoiseScale", validItemOnly=true}
			end}
		end}
	end}

end

function Class:onInitTurretMap(dmap,turret)
	dmap:set("camera_auto_exposure",turret:getConfig():fetch("Camera.auto_exposure"))
	dmap:set("destabilization_amplitude",turret:getConfig():get("Destabilization.amplitude",0))
	
	dmap:set("temporal_range_on",turret:getConfig():fetch("Filters.TemporalProcessing.input_range")[Enums.ON])
	dmap:set("temporal_scale_on",turret:getConfig():fetch("Filters.TemporalProcessing.noise_scale")[Enums.ON])
	dmap:set("temporal_range_off",turret:getConfig():fetch("Filters.TemporalProcessing.input_range")[Enums.OFF])
	dmap:set("temporal_scale_off",turret:getConfig():fetch("Filters.TemporalProcessing.noise_scale")[Enums.OFF])
	
	dmap:set("spatial_range_on",turret:getConfig():fetch("Filters.SpatialProcessing.input_range")[Enums.ON])
	dmap:set("spatial_scale_on",turret:getConfig():fetch("Filters.SpatialProcessing.noise_scale")[Enums.ON])
	dmap:set("spatial_range_off",turret:getConfig():fetch("Filters.SpatialProcessing.input_range")[Enums.OFF])
	dmap:set("spatial_scale_off",turret:getConfig():fetch("Filters.SpatialProcessing.noise_scale")[Enums.OFF])
end

function Class:updateTemporalInputRange(data)
	local dmap = data.item	
	local turret = dmap:fetch("turret")
	
	local slot = data.name == "temporal_range_on" and Enums.ON or Enums.OFF
	
	-- self:info("Setting input range to:", data.value)
	turret:getConfig():fetch("Filters.TemporalProcessing.input_range")[slot] = data.value
end

function Class:updateTemporalNoiseScale(data)
	local dmap = data.item	
	local turret = dmap:fetch("turret")
	
	local slot = data.name == "temporal_scale_on" and Enums.ON or Enums.OFF

	-- self:info("Setting noise scale to:", data.value)
	turret:getConfig():fetch("Filters.TemporalProcessing.noise_scale")[slot] = data.value
end

function Class:updateSpatialInputRange(data)
	local dmap = data.item	
	local turret = dmap:fetch("turret")
	
	local slot = data.name == "spatial_range_on" and Enums.ON or Enums.OFF
	
	-- self:info("Setting input range to:", data.value)
	turret:getConfig():fetch("Filters.SpatialProcessing.input_range")[slot] = data.value
end

function Class:updateSpatialNoiseScale(data)
	local dmap = data.item	
	local turret = dmap:fetch("turret")
	
	local slot = data.name == "spatial_scale_on" and Enums.ON or Enums.OFF

	self:info("Setting noise scale to:", data.value)
	turret:getConfig():fetch("Filters.SpatialProcessing.noise_scale")[slot] = data.value
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

function Class:updateDestabilization(data)
	local dmap = data.item	
	local turret = dmap:fetch("turret")
	
	-- self:info("Setting destabilization amplitude to:", data.value)
	local destab = turret:getComponent(turret.COMPONENT_DESTABILIZER)
	if destab then
		destab:setDestabilizationAmplitude(data.value)
	end
end

return Class 
