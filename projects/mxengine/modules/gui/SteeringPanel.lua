local Class = require("classBuilder"){name="SteeringPanel",bases="gui.BasicTurretComponent"};


function Class:buildComponent(intf)	
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
end

function Class:updateSteeringMode(data)
	self:info("Updating current steering mode...")
	local turret = data.item:fetch("turret")
	local gimbal = turret:getGimbal()
	
	-- set th turret to stow mode:
	-- the data name is precisely the name of the enum value to use:
	gimbal:setCurrentSteeringMode(gimbal[data.name])
end

return Class 
