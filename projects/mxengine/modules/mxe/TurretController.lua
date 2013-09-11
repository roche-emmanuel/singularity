local Class = require("classBuilder"){name="TurretController",bases="base.Object"};

function Class:buildControlPanel()
	local turrets = {
	};
	
	self._turrets = turrets
	
	local intf = self._intf
	
	local prev_prov = intf:getDefaultProvider()
	local panel = intf:getCurrentParent()
	
	self._controlPanel = panel
	
	-- add selector for the turret to control:
	intf:addComboBoxSelector{caption="Current turret: ",cont=turrets}
	-- intf:addSingleChoiceEntry{name="controlled_turret",prop=1,caption="Current turret",choices={""}}
	-- intf:addDoubleEntry{name="my_double",caption="My double"}
	intf:pushSizer{orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxALL+wx.wxEXPAND}
		intf:pushSizer{text="Steering mode",orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxALL+wx.wxEXPAND}
			intf:pushSizer{orient=wx.wxVERTICAL,prop=0,flags=wx.wxALL+wx.wxEXPAND}
			-- intf:addActionButtonEntry{name="STEERING_DISABLED",caption="DISABLED",
									  -- handler="updateSteeringMode"}
			intf:addActionButtonEntry{name="STEERING_STOW",caption="STOW",
									  handler="updateSteeringMode"}
			intf:addActionButtonEntry{name="STEERING_FORWARD",caption="FORWARD",
									  handler="updateSteeringMode"}
			intf:addActionButtonEntry{name="STEERING_MANUAL",caption="MANUAL",
									  handler="updateSteeringMode"}
			intf:addActionButtonEntry{name="STEERING_AUTO",caption="AUTO",
									  handler="updateSteeringMode"}
									  
			intf:popSizer()
			intf:addSpacer{prop=1}
			local _, steer = intf:addCustomWindow{"mxe.SteeringTransducer",prop=0,flags=wx.wxALL}
			
			intf:addDummyEntry{name="slew_transducer_updater",handler=function(data)
				local dmap = data.item
				if not dmap then
					self:info("Removing target turret for steering transducer.")
					steer:setTargetTurret(nil)
				else
					local turret = dmap:fetch("turret")		
					self:info("Assigning turret ",turret:getName()," as target for steering transducer.")
					steer:setTargetTurret(turret)			
				end
			end}
		intf:popSizer()
		
		intf:pushSizer{text="Sensor settings",orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxALL+wx.wxEXPAND}
			intf:addDummyEntry{name="sensor_updater",validItemOnly=true, handler=function(data)
				local dmap = data.item
				local turret = dmap:fetch("turret")		
				self:info("Updating sensor GUI details for turret: ",turret:getName())
				
				local setRange = function(eName,val,range)
					local entry = intf:getEntry(eName)
					if entry then
						self:check(range:x()<=val and val <= range:y(),"Out of range initial value val=",val,", range=",range)
						entry._range[1] = range:x()
						entry._range[2] = range:y()	
						entry:setValue(val)
						-- entry:updateDisplay()
					end
				end
				
				turret:foreachSensor(function(sensor)
					local lens = sensor:getLens()
					setRange(sensor:getName()..".focal_length",lens:getFocalLength(),lens:getFocalLengthRange())
					setRange(sensor:getName()..".focus",lens:getFocus(),lens:getFocusRange())
				end)
			end}
			
			intf:pushNotebook{prop=1,flags=wx.wxALL+wx.wxEXPAND}
				for _,sensor in ipairs{"EOW","IR","EON"} do
					intf:pushBookPage{caption=sensor}	
						self:buildSensorPanel(sensor)
					intf:popParent(true)
				end				
			intf:popParent()

		intf:popSizer()
	
	intf:popSizer()

	intf:pushSizer{text="Platform",orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxALL+wx.wxEXPAND}
		intf:pushSizer{orient=wx.wxVERTICAL,prop=0,flags=wx.wxALL+wx.wxEXPAND}
			intf:addBoolEntry{name="fix_platform_position",caption="Fix platform position",style=0,
							  flags=wx.wxALIGN_CENTER_VERTICAL,
							  tip="Fix the position of the platform for this turret.", 
							  handler="toggleFixPlatformPosition", validItemOnly=true,
							  }
			intf:addVec3dEntry{name="fixed_platform_position",caption="Position",range={-10000,10000}}
		intf:popSizer()
		intf:addSpacer{size=5}
		intf:pushSizer{orient=wx.wxVERTICAL,prop=0,flags=wx.wxALL+wx.wxEXPAND}
			intf:addBoolEntry{name="fix_platform_attitude",caption="Fix platform attitude",style=0,
							  flags=wx.wxALIGN_CENTER_VERTICAL,
							  tip="Fix the attitude of the platform for this turret.", 
							  handler="toggleFixPlatformAttitude", validItemOnly=true,
							  }
			intf:addVec3dEntry{name="fixed_platform_attitude",caption="Attitude",
							   range={{-180,180},{-90,90},{-180,180}},
							   subcaptions={"Yaw","Pitch","Roll"}}
		intf:popSizer()		
	intf:popSizer()
	
	intf:pushSizer{text="Debugging",orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxALL+wx.wxEXPAND}
		intf:addBoolEntry{name="dump_state",caption="Dump state",style=0,
						  flags=wx.wxALIGN_CENTER_VERTICAL,
						  tip="Dump the turret state", 
						  handler="dumpTurretState", validItemOnly=true,
						  }
		intf:addBoolEntry{name="grid_state",caption="Fill state grid",style=0,
						  flags=wx.wxALIGN_CENTER_VERTICAL,
						  tip="Use the turret state to fill the state grid", 
						  --handler="toggleFillGrid", validItemOnly=true,
						  }
		intf:addSpacer{prop=1}
		intf:addActionButtonEntry{name="reload_web_pages",caption="reload",src="reload",tip="Reload all web views",handler="reloadWebPages",validItemOnly=true}
	intf:popSizer()
	
	-- self._grid = intf:addGrid{prop=1,flags=wx.wxALL+wx.wxEXPAND}
	
	-- self:setupGrid()
	
	intf:setDefaultProvider(prev_prov)
	
	panel:Enable(false)
	
	-- add an event listener on the mission start and stop events:
	local mman = self:getMissionManager()
	mman:addListener{mman.EVT_STARTED_MISSION,function()
		self:info("Enabling turret control...")
		
		self:updateTurretList()
	end}
	
	mman:addListener{mman.EVT_ENDING_MISSION,function()
		self:info("Disabling turret control...")
		
		panel:Enable(false)
		while #turrets > 0 do
			table.remove(turrets,1)
		end
		intf:updateProviders()
		
	end}	
end

function Class:updateTurretList()
	-- retrieve the turret Manager:
	local tman = self:getTurretManager()
	local DataMap = require "utils.DataMap"
	
	local turrets = self._turrets

	-- first we have to clear the list:
	while #turrets > 0 do
		table.remove(turrets,1)
	end
		
	-- now populate the list:
	for i=1,tman:getNumTurrets() do
		local turr = tman:getTurretByIndex(i)
		self:check(turr,"Invalid turret object.")
		self:info("Adding turret ", turr:getName())
		local dmap = DataMap()
		dmap:set("name","Turret "..i.." - ".. turr:getName())
		dmap:set("turret",turr)
		
		turr:foreachSensor(function(sensor)
			local sname = sensor:getName()
			dmap:set(sname..".focal_length",sensor:getFocalLength())
			dmap:set(sname..".focus",sensor:getFocus())
		end)
		table.insert(turrets,dmap:getTable())
	end
	
	self._intf:updateProviders()
	self._intf:updateEntries()
	self._controlPanel:Enable(true)
end

-- build a panel to display/control the given sensor details:
function Class:buildSensorPanel(sname)
	local intf = self._intf
	
	intf:pushSizer{orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxALL+wx.wxEXPAND}
		intf:addDoubleEntry{name=sname..".focal_length",caption="Focal length", unit=" mm",handler="updateFocalLength",validItemOnly=true, sname=sname}
		intf:addActionButtonEntry{name="dec_fl",src="left_arrow", dir=-1,
								  handler="stepFocalLength",validItemOnly=true, sname=sname}
		intf:addActionButtonEntry{name="inc_fl",src="right_arrow", dir=1,
								  handler="stepFocalLength",validItemOnly=true, sname=sname}
	intf:popSizer()
	
	intf:pushSizer{orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxALL+wx.wxEXPAND}
		intf:addDoubleEntry{name=sname..".focus",caption="Focus", unit=" m", sname=sname, prop=1,
							handler="updateFocus",validItemOnly=true}
		intf:addActionButtonEntry{name="dec_focus",src="left_arrow", dir=-1,
								  handler="stepFocus",validItemOnly=true, sname=sname}
		intf:addActionButtonEntry{name="inc_focus",src="right_arrow", dir=1,
								  handler="stepFocus",validItemOnly=true, sname=sname}
	intf:popSizer()
end

function Class:setupGrid()
	local grid = self._grid
	grid:CreateGrid( 0, 0 );
	grid:AppendRows(100);
    grid:AppendCols(2);
end

function Class:getLens(data)
	local dmap = data.item	
	local turret = dmap:fetch("turret")

	local sname = data.entry.options.sname
	local sensor = turret:getSensor(sname)
	self:check(sensor,"Invalid turret sensor for id=",sname)
	
	local lens = sensor:getLens()
	return lens
end

local scale=1.01
local clamp = function(val,range)
	return (val < range:x() and range:x()) or (val > range:y() and range:y()) or val
end

function Class:stepFocalLength(data)
	local entry = self._intf:getEntry(data.entry.options.sname..".focal_length")
	local lens = self:getLens(data)
	local fl = lens:getFocalLength()
	
	local val = data.entry.options.dir > 0 and fl*scale or fl/scale
	val = clamp(val,lens:getFocalLengthRange())
	
	entry:setValue(val)
	entry:updateDisplay()
end

function Class:stepFocus(data)
	local entry = self._intf:getEntry(data.entry.options.sname..".focus")
	local lens = self:getLens(data)
	local focus = lens:getFocus()
	
	local val = data.entry.options.dir > 0 and focus*scale or focus/scale
	val = clamp(val,lens:getFocusRange())
	
	entry:setValue(val)
	entry:updateDisplay()
end

function Class:updateFocalLength(data)
	local lens = self:getLens(data)
	
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
	lens:setFocus(data.value)
end

function Class:updateSteeringMode(data)
	self:info("Updating current steering mode...")
	local turret = data.item:fetch("turret")
	local gimbal = turret:getGimbal()
	
	-- set th turret to stow mode:
	-- the data name is precisely the name of the enum value to use:
	gimbal:setCurrentSteeringMode(gimbal[data.name])
end

function Class:fillGrid(dmap)
	-- use the provided dmap to fill the grid:
	
end

function Class:toggleFixPlatformPosition(data)
	-- the data map must be valid at that point:
	local dmap = data.item
	
	local turret = dmap:fetch("turret")
	
	local prevCB = dmap:get("fixPlatformPosCB")
	if prevCB then
		turret:removeListener(prevCB)
	end
	
	if data.value then
		-- first update the platform position:
		local pform = turret:getPlatform()
		
		local pos = pform:getPosition()
		dmap:set("fixed_platform_position",pos)
		
		self._intf:updateEntries()
		
		local cb = turret:addListener{turret.EVT_PRE_UPDATE,function()
			-- retrieve the platform:
			local pos = dmap:fetch("fixed_platform_position")
			
			self:debug_v("Setting platform position to: ",pos)
			pform:setPosition(pos)
		end}
		
		dmap:set("fixPlatformPosCB",cb)
	end	
end

function Class:toggleFixPlatformAttitude(data)
	-- the data map must be valid at that point:
	local dmap = data.item
	
	local turret = dmap:fetch("turret")
	
	local prevCB = dmap:get("fixPlatformAttCB")
	if prevCB then
		turret:removeListener(prevCB)
	end
	
	if data.value then
		-- first update the platform position:
		local pform = turret:getPlatform()
		
		local att = pform:getAttitude()
		local ypr = att:toYPR():toDeg()
		dmap:set("fixed_platform_attitude",ypr)
		
		self._intf:updateEntries()
		
		local cb = turret:addListener{turret.EVT_PRE_UPDATE,function()
			-- retrieve the platform:
			local ypr = dmap:fetch("fixed_platform_attitude")
			
			self:debug_v("Setting platform attitude to: ",ypr)
			local q = osg.Quat()
			q:fromYPR(ypr:toRad())
			
			pform:setAttitude(q)
		end}
		
		dmap:set("fixPlatformAttCB",cb)
	end	
end

function Class:dumpTurretState(data)
	self:info("Toggling turret state dump to ",data.value)	
	local dmap = data.item

	local turret = dmap:fetch("turret")
	
	local prevCB = dmap:get("dumpStateCB")
	if prevCB then
		turret:removeListener(prevCB)
	end
	
	if data.value then
		local cb = turret:addListener{turret.EVT_POST_UPDATE,function()
			self:info("Turret ",turret:getName()," state:\n",turret:getState():getTable())
		end}
		dmap:set("dumpStateCB",cb)
	end
end

function Class:toggleFillGrid(data)
	self:info("Toggling turret state grid to ",data.value)
	local dmap = data.item

	local turret = dmap:fetch("turret")
	
	local prevCB = dmap:get("gridStateCB")
	if prevCB then
		turret:removeListener(prevCB)
	end
	
	if data.value then
		local cb = turret:addListener{turret.EVT_POST_UPDATE,function()
			self:fillGrid(turret:getState())
		end}
		dmap:set("gridStateCB",cb)
	end
end

function Class:reloadWebPages(data)
	local dmap = data.item
	local turret = dmap:fetch("turret")

	local AweOverlay = require "display.effects.AweOverlay"
	
	-- find all the webView components, and reload them:
	turret:getComponents():foreach(function(comp)
		if comp:isInstanceOf(AweOverlay) then
			comp:reload()
		end
	end)
end


return Class -- return class instance.
