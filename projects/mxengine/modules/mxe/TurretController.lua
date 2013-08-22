local Class = require("classBuilder"){name="TurretController",bases="base.Object"};

function Class:buildControlPanel()
	local turrets = {
	};
	
	local intf = self._intf
	
	local prev_prov = intf:getDefaultProvider()
	local panel = intf:getCurrentParent()
	
	-- add selector for the turret to control:
	intf:addComboBoxSelector{caption="Current turret: ",cont=turrets}
	-- intf:addSingleChoiceEntry{name="controlled_turret",prop=1,caption="Current turret",choices={""}}
	-- intf:addDoubleEntry{name="my_double",caption="My double"}
	
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
	intf:popSizer()
	
	-- self._grid = intf:addGrid{prop=1,flags=wx.wxALL+wx.wxEXPAND}
	
	-- self:setupGrid()
	
	intf:setDefaultProvider(prev_prov)
	
	panel:Enable(false)
	
	-- add an event listener on the mission start and stop events:
	local mman = self:getMissionManager()
	mman:addListener{mman.EVT_STARTED_MISSION,function()
		self:info("Enabling turret control...")
		
		-- retrieve the turret Manager:
		local tman = self:getTurretManager()
		for i=1,tman:getNumTurrets() do
			local turr = tman:getTurretByIndex(i)
			self:check(turr,"Invalid turret object.")
			self:info("Adding turret ", turr:getName())
			table.insert(turrets,{name="Turret "..i.." - ".. turr:getName(),turret=turr})
		end
		
		intf:updateProviders()
		intf:updateEntries()
		panel:Enable(true)
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

function Class:setupGrid()
	local grid = self._grid
	grid:CreateGrid( 0, 0 );
	grid:AppendRows(100);
    grid:AppendCols(2);
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

return Class -- return class instance.
