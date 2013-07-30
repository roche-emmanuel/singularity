local Class = require("classBuilder"){name="TurretController",bases="base.Object"};

function Class:buildControlPanel(intf)
	local turrets = {
	};
	
	local prev_prov = intf:getDefaultProvider()
	local panel = intf:getCurrentParent()
	
	-- add selector for the turret to control:
	intf:addComboBoxSelector{caption="Current turret: ",cont=turrets}
	-- intf:addSingleChoiceEntry{name="controlled_turret",prop=1,caption="Current turret",choices={""}}
	intf:addDoubleEntry{name="my_double",caption="My double"}
	
	intf:pushSizer{text="Steering mode",orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxALL+wx.wxEXPAND}
		intf:addActionButtonEntry{name="STEERING_DISABLED",caption="DISABLED",
								  handler="updateSteeringMode"}
		intf:addActionButtonEntry{name="STEERING_STOW",caption="STOW",
								  handler="updateSteeringMode"}
		intf:addActionButtonEntry{name="STEERING_FORWARD",caption="FORWARD",
								  handler="updateSteeringMode"}
		intf:addActionButtonEntry{name="STEERING_MANUAL",caption="MANUAL",
								  handler="updateSteeringMode"}
		intf:addActionButtonEntry{name="STEERING_AUTO",caption="AUTO",
								  handler="updateSteeringMode"}
	intf:popSizer()
	
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

function Class:updateSteeringMode(data)
	self:info("Updating current steering mode...")
	local turret = data.item:fetch("turret")
	local gimbal = turret:getGimbal()
	
	-- set th turret to stow mode:
	-- the data name is precisely the name of the enum value to use:
	gimbal:setCurrentSteeringMode(gimbal[data.name])
end

return Class -- return class instance.
