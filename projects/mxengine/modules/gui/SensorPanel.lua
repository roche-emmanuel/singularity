local Class = require("classBuilder"){name="SensorPanel",bases="gui.BasicTurretComponent"};

local Enums = require "mx.Enums"

local scale=1.01
local clamp = function(val,range)
	return (val < range:x() and range:x()) or (val > range:y() and range:y()) or val
end

local cam_list = {
	EOW = {"SubVIC","DL","LL"},
	IR = {"SubVIC"},
	EON = {"SubVIC","DL","LL", "SWIR"},
}

local cam_index = { DL=0, LL=1, SWIR=2 }

local scene_setup_list = {
	{ "Default",Enums.SCENE_SETUP_DEFAULT},
	{ "High",Enums.SCENE_SETUP_HIGH},
	{ "Low",Enums.SCENE_SETUP_LOW},
}

function Class:buildComponent(intf,options)
	self:check(options and options.sname,"Invalid name for sensor panel.")
	
	self._sname = options.sname
	local sname = options.sname
	
	intf:pushSizerH{prop=0,flags=wx.wxALL+wx.wxEXPAND,function()
		intf:addDoubleEntry{name=sname..".focal_length",caption="Focal length", unit=" mm",handler="updateFocalLength",
							validItemOnly=true}
		intf:addActionButtonEntry{name="dec_fl",src="left_arrow", dir=-1,
								  handler="stepFocalLength",validItemOnly=true}
		intf:addActionButtonEntry{name="inc_fl",src="right_arrow", dir=1,
								  handler="stepFocalLength",validItemOnly=true}
	end}
	
	intf:pushSizerH{prop=0,flags=wx.wxALL+wx.wxEXPAND, function()
		intf:addDoubleEntry{name=sname..".focus",caption="Focus", unit=" m", prop=1,
							handler="updateFocus",validItemOnly=true}
		intf:addActionButtonEntry{name="dec_focus",src="left_arrow", dir=-1,
								  handler="stepFocus",validItemOnly=true}
		intf:addActionButtonEntry{name="inc_focus",src="right_arrow", dir=1,
								  handler="stepFocus",validItemOnly=true}
	end}
	
		
	intf:addSingleChoiceEntry{name=sname..".selected_camera",prop=0,caption="Target Camera",
		choices=cam_list[sname], handler="updateSelectedCamera"}

	intf:pushSizerV{text="Camera settings",prop=0,flags=wx.wxALL+wx.wxEXPAND, function()
		intf:addBoolEntry{name=sname..".auto_sensitivity",caption="Auto sensitivity",
						  handler="updateSensitivityMode",validItemOnly=true, style=0}
		intf:addIntegerEntry{name=sname..".sensitivity",caption="Sensitivity",
					handler="updateSensitivity",validItemOnly=true}
		intf:addIntegerEntry{name=sname..".level",caption="Level",range={0,100},
					handler="updateLevel",validItemOnly=true}
		intf:addStateChoiceEntry{name=sname..".scene_setup",prop=0,caption="Scene setup",
			choices=scene_setup_list, handler="updateSceneSetup"}
	end}
end

function Class:onTurretChanged(turret)
	self:info("Updating sensor GUI details for turret: ",turret:getName())
	
	local sensor = turret:getSensor(self._sname)
	if not sensor then return end
	
	local lens = sensor:getLens()
	if not lens then return end

	self:setEntryValue(self._sname..".focal_length",lens:getFocalLength(),lens:getFocalLengthRange())
	self:setEntryValue(self._sname..".focus",lens:getFocus(),lens:getFocusRange())
end

function Class:onInitTurretMap(dmap,turret)
	local sname = self._sname
	local sensor = turret:getSensor(sname)
	if not sensor then return end
	
	dmap:set(sname..".focal_length",sensor:getFocalLength())
	dmap:set(sname..".focus",sensor:getFocus())
	
	local svic = sensor:getSubVIC()
	dmap:set(sname..".auto_sensitivity",svic:isAutoSensitivity())
	dmap:set(sname..".sensitivity",svic:getSensitivity())
	dmap:set(sname..".level",svic:getBlackLevel()*100)
	dmap:set(sname..".scene_setup",svic:getSceneSetup())
end

function Class:getSensor(data)
	local dmap = data.item	
	local turret = dmap:fetch("turret")

	return turret:getSensor(self._sname)
end

function Class:getLens(data)
	local sensor = self:getSensor(data)
	if not sensor then
		return
	end
	
	self:check(sensor,"Invalid turret sensor for id=",sname)
	
	local lens = sensor:getLens()
	return lens
end


function Class:updateFocalLength(data)
	local lens = self:getLens(data)
	if not lens then return end
	
	if lens:hasDiscreteFocalLength() then
		local fl = lens:getFocalLength()
		-- compare the current fl with the requested value:
		if data.value > fl then
			lens:incrementFocalLengthIndex()
		elseif data.value < fl then
			lens:decrementFocalLengthIndex()
		end
		
		fl = lens:getFocalLength() -- get the new fl value.
		
		if data.value ~= fl then
			self:info("Setting fl value to: ",fl," instead of: ", data.value)
			
			-- No clear understanding why but we should also fix the entry range here:
			local range = lens:getFocalLengthRange()
			data.entry._range[1] = range:x()
			data.entry._range[2] = range:y()
			
			-- we also need to update the value of this entry:
			data.entry:setValue(fl)
			data.entry:updateDisplay()
		end
	else
		lens:setFocalLength(data.value)
	end
end

function Class:updateFocus(data)
	local lens = self:getLens(data)
	if not lens then return end
	lens:setFocus(data.value)
end

function Class:stepFocalLength(data)
	local entry = self._intf:getEntry(self._sname..".focal_length")
	local lens = self:getLens(data)
	
	if not lens then return end
	
	local fl = lens:getFocalLength()
	
	local val = data.entry.options.dir > 0 and fl*scale or fl/scale
	val = clamp(val,lens:getFocalLengthRange())
	
	entry:setValue(val)
	entry:updateDisplay()
end

function Class:stepFocus(data)
	local entry = self._intf:getEntry(self._sname..".focus")
	local lens = self:getLens(data)
	if not lens then return end

	local focus = lens:getFocus()
	
	local val = data.entry.options.dir > 0 and focus*scale or focus/scale
	val = clamp(val,lens:getFocusRange())
	
	entry:setValue(val)
	entry:updateDisplay()
end

function Class:getSelectedCamera(data)
	local sensor = self:getSensor(data)
	if not sensor then return end
	
	local selected = data.item:get(self._sname..".selected_camera")
	
	if selected == "SubVIC" then
		return sensor:getSubVIC()
	else
		local id = cam_index[selected]
		if id>= sensor:getNumCameras() then
			self:notice("No matching camera found for ", selected)
			return -- no matching camera.
		end
		return sensor:getCamera(id)
	end
end

function Class:updateCameraFields(cam)
	self:setEntryValue(self._sname..".auto_sensitivity",cam:isAutoSensitivity())
	
	self:setEntryValue(self._sname..".sensitivity",cam:getSensitivity(),cam:getSensitivityRange())
	self:setEntryValue(self._sname..".level",cam:getBlackLevel()*100.0)
	self:setEntryValue(self._sname..".scene_setup",cam:getSceneSetup())
end

function Class:updateSelectedCamera(data)
	local cam = self:getSelectedCamera(data)
	if not cam then return end;
	
	self:updateCameraFields(cam)
end

function Class:updateSensitivityMode(data)
	local cam = self:getSelectedCamera(data)
	if not cam then
		return -- no matching camera.
	end
	
	cam:setSensitivityMode(data.value and Enums.SENSITIVITY_AUTO or Enums.SENSITIVITY_MANUAL)
	
	self:updateCameraFields(cam)
end

function Class:updateSensitivity(data)
	local cam = self:getSelectedCamera(data)
	if not cam then
		return -- no matching camera.
	end
	
	cam:setSensitivity(data.value)
end

function Class:updateLevel(data)
	local cam = self:getSelectedCamera(data)
	if not cam then
		return -- no matching camera.
	end
	
	cam:setBlackLevel(data.value/100.0)
end

function Class:updateSceneSetup(data)
	local cam = self:getSelectedCamera(data)
	if cam then
		self:info("Setting scene setup to :",data.value)
		cam:setSceneSetup(data.value)
	end

end

return Class 
