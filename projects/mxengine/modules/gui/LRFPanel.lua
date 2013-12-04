local Class = require("classBuilder"){name="LRFPanel",bases="gui.BasicTurretComponent"};

local Enums = require "mx.Enums"

local lrf_states = { "READY", "CHARGING", "OFF", "FIRE", "RANGING","BIT"}
local lrf_modes = { "MANUAL", "AUTO"}


function Class:buildComponent(intf,options)
	intf:pushSizerH{text="LRF", prop=0,flags=wx.wxALL+wx.wxEXPAND,function()
		intf:addSingleChoiceEntry{name="lrf_state",prop=0,caption="State",
			choices=lrf_states, handler="updateLRFState"}
		intf:addSingleChoiceEntry{name="lrf_mode",prop=0,caption="Ranging",
			choices=lrf_modes, handler="updateLRFMode"}
	end}
end

function Class:onTurretChanged(turret)
	local lrf = turret:getModule(Enums.MODULE_LRF)
	if lrf then
		self:setEntryValue("lrf_state",lrf_states[lrf:getState()+1])
		self:setEntryValue("lrf_mode",lrf_modes[lrf:getRangeMode()+1])
	else
		-- disable the entries:
		self._intf:getEntry("lrf_state"):setEnabled(false)
		self._intf:getEntry("lrf_mode"):setEnabled(false)
	end
end

function Class:onInitTurretMap(dmap,turret)
	local lrf = turret:getModule(Enums.MODULE_LRF)
	if lrf then
		dmap:set("lrf_state",lrf_states[lrf:getState()+1])
		dmap:set("lrf_mode",lrf_modes[lrf:getRangeMode()+1])
	else
		-- disable the entries:
		self._intf:getEntry("lrf_state"):setEnabled(false)
		self._intf:getEntry("lrf_mode"):setEnabled(false)
	end
end

function Class:updateLRFState(data)	
	local dmap = data.item	
	local turret = dmap:fetch("turret")
	
	local lrf = turret:getModule(Enums.MODULE_LRF)
	if not lrf then 
		self:warn("No module ",Enums.MODULE_LRF," in this turret.")
		return 
	end
	
	lrf:setState(Enums["LRF_STATE_" .. data.value])
end

function Class:updateLRFMode(data)	
	local dmap = data.item	
	local turret = dmap:fetch("turret")
	
	local lrf = turret:getModule(Enums.MODULE_LRF)
	if not lrf then 
		self:warn("No module ",Enums.MODULE_LRF," in this turret.")
		return 
	end
	
	lrf:setRangeMode(Enums["LRF_RANGE_MODE_" .. data.value])
end

return Class 
