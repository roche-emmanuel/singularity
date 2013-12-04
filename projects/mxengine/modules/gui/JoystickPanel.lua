local Class = require("classBuilder"){name="JoystickPanel",bases="gui.BasicTurretComponent"};

function Class:buildComponent(intf)
	
	local jpanel = require "gui.wx.components.JoystickPanel" {intf};
	
	if jpanel:getNumJoysticks() > 0 then
		self._joy = jpanel:getJoystick(1)
	end
	
	-- we prepare a base behavior when not in a mission, and a mission behavior:
	self._missionBehavior = require "mx.behaviors.JoyMissionBehavior" ()
	
	local mm = self:getMissionManager()
	mm:addListener{mm.EVT_STARTED_MISSION,function()
		-- self:showMessage("Adding mission behavior")
		if self._joy then
			self._joy:pushBehavior(self._missionBehavior)
		end
	end}
	
	mm:addListener{mm.EVT_ENDING_MISSION,function()
		if self._joy then
			self._joy:popBehavior()
		end
	end}	
end

function Class:onTurretChanged(turret, data)
	self._missionBehavior:setTurret(turret)
end

return Class 
