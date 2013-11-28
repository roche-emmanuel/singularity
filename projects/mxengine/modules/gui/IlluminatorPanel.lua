local Class = require("classBuilder"){name="IlluminatorPanel",bases="gui.BasicTurretComponent"};

local Enums = require "mx.Enums"

local illum_states = { "ARMED", "CUTOUT", "ACTIVE", "DISARMED", "TIMELMT","DELAY","NOHD"}
local illum_modes = { "OFF", "LOW", "HIGH", "PULSE", "ALIGN"}

function Class:buildComponent(intf,options)
	intf:pushSizerH{text="Illuminator 1", prop=0,flags=wx.wxALL+wx.wxEXPAND,function()
		intf:addSingleChoiceEntry{name="illum1_state",prop=0,caption="State",
			choices=illum_states, handler="updateState"}
		intf:addSingleChoiceEntry{name="illum1_mode",prop=0,caption="Mode",
			choices=illum_modes, handler="updateMode"}
	end}
	
	intf:pushSizerH{text="Illuminator 2", prop=0,flags=wx.wxALL+wx.wxEXPAND,function()
		intf:addSingleChoiceEntry{name="illum2_state",prop=0,caption="State",
			choices=illum_states, handler="updateState"}
		intf:addSingleChoiceEntry{name="illum2_mode",prop=0,caption="Mode",
			choices=illum_modes, handler="updateMode"}
	end}
end

function Class:onTurretChanged(turret)
	for i=1,2 do
		local li = turret:getModule(Enums["MODULE_ILLUM_"..i])
		if li then
			self:setEntryValue("illum"..i.."_state",illum_states[li:getState()+1])
			self:setEntryValue("illum"..i.."_mode",illum_states[li:getEmissionMode()+1])
		end
	end
end

function Class:onInitTurretMap(dmap,turret)
	for i=1,2 do
		local li = turret:getModule(Enums["MODULE_ILLUM_"..i])
		if li then
			dmap:set("illum"..i.."_state",illum_states[li:getState()+1])
			dmap:set("illum"..i.."_mode",illum_states[li:getEmissionMode()+1])
		end
	end
end

function Class:updateState(data)
	local id = data.name == "illum1_state" and Enums.MODULE_ILLUM_1 or Enums.MODULE_ILLUM_2
	
	local dmap = data.item	
	local turret = dmap:fetch("turret")
	
	local li = turret:getModule(id)
	if not li then 
		self:warn("No module ",id," in this turret.")
		return 
	end
	
	li:setState(Enums["ILLUM_STATE_" .. data.value])
end

function Class:updateMode(data)
	local id = data.name == "illum1_mode" and Enums.MODULE_ILLUM_1 or Enums.MODULE_ILLUM_2
	
	local dmap = data.item	
	local turret = dmap:fetch("turret")
	
	local li = turret:getModule(id)
	if not li then 
		self:warn("No module ",id," in this turret.")
		return 
	end
	
	li:setEmissionMode(Enums["ILLUM_MODE_" .. data.value])
end


return Class 
