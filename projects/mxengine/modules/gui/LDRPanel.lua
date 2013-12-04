local Class = require("classBuilder"){name="LDRPanel",bases="gui.BasicTurretComponent"};

local Enums = require "mx.Enums"

local ldr_states = { "OFF", "STANDBY", "ARMED", "FIRE", "FAILED","THERMAL"}
local ldr_functions = { "RANGE_MANUAL", "RANGE_AUTO", "DESIGNATOR"}
local ldr_wls = { "1064", "1570" }

function Class:buildComponent(intf,options)
	intf:pushSizerV{text="LDR", prop=0,flags=wx.wxALL+wx.wxEXPAND,function()
		intf:pushSizerH{prop=0,flags=wx.wxALL+wx.wxEXPAND,function()
			intf:addSingleChoiceEntry{name="ldr_state",prop=0,caption="State",
				choices=ldr_states, handler="updateState"}
			intf:addSingleChoiceEntry{name="ldr_function",prop=0,caption="Function",
				choices=ldr_functions, handler="updateFunction"}
		end}
		intf:pushSizerH{prop=0,flags=wx.wxALL+wx.wxEXPAND,function()
			intf:addSingleChoiceEntry{name="ldr_wavelength",prop=0,caption="Wavelength",
				choices=ldr_wls, handler="updateWavelength"}
		end}	
	end}
end

function Class:onTurretChanged(turret)
	local ldr = turret:getModule(Enums.MODULE_LDR)
	if ldr then
		self:setEntryValue("ldr_state",ldr_states[ldr:getState()+1])
		self:setEntryValue("ldr_function",ldr_functions[ldr:getFunction()])
		self:setEntryValue("ldr_wavelength",ldr_wls[ldr:getWavelength()+1])
	else
		-- disable the entries:
		self._intf:getEntry("ldr_state"):setEnabled(false)
		self._intf:getEntry("ldr_function"):setEnabled(false)
		self._intf:getEntry("ldr_wavelength"):setEnabled(false)
	end
end

function Class:onInitTurretMap(dmap,turret)
	local ldr = turret:getModule(Enums.MODULE_LDR)
	if ldr then
		dmap:set("ldr_state",ldr_states[ldr:getState()+1])
		dmap:set("ldr_function",ldr_functions[ldr:getFunction()])
		dmap:set("ldr_wavelength",ldr_wls[ldr:getWavelength()+1])
	else
		-- disable the entries:
		self._intf:getEntry("ldr_state"):setEnabled(false)
		self._intf:getEntry("ldr_function"):setEnabled(false)
		self._intf:getEntry("ldr_wavelength"):setEnabled(false)
	end
end

function Class:updateState(data)	
	local dmap = data.item	
	local turret = dmap:fetch("turret")
	
	local ldr = turret:getModule(Enums.MODULE_LDR)
	if not ldr then 
		self:warn("No module ",Enums.MODULE_LDR," in this turret.")
		return 
	end
	
	ldr:setState(Enums["LDR_STATE_" .. data.value])
end

function Class:updateFunction(data)	
	local dmap = data.item	
	local turret = dmap:fetch("turret")
	
	local ldr = turret:getModule(Enums.MODULE_LDR)
	if not ldr then 
		self:warn("No module ",Enums.MODULE_LDR," in this turret.")
		return 
	end
	
	ldr:setFunction(Enums["LDR_FUNCTION_" .. data.value])
end

function Class:updateWavelength(data)	
	local dmap = data.item	
	local turret = dmap:fetch("turret")
	
	local ldr = turret:getModule(Enums.MODULE_LDR)
	if not ldr then 
		self:warn("No module ",Enums.MODULE_LDR," in this turret.")
		return 
	end
	
	local wl = Enums["LDR_WAVELENGTH_" .. data.value]
	self:check(wl==1064 or wl==1570,"Invalid wavelength value: '",data.value or "[nil]", "'")
	
	ldr:setWavelength(wl)
end

return Class 
