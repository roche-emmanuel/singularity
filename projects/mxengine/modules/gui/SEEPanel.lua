local Class = require("classBuilder"){name="SEEPanel",bases="gui.BasicTurretComponent"};

local Enums = require "mx.Enums"

local see_modes = { "AUTO", "MANUAL" }
local see_combs = { "IR:EON-SW", "EON-DL:SW", "EON-LL:SW", "EON-SW" }
local comb_names = {
	["IR:EON-SW"]="IR_SWIR",
	["EON-DL:SW"]="EON_DL_SWIR",
	["EON-LL:SW"]="EON_LL_SWIR",
	["EON-SW"]="EON_SWIR",
}

function Class:buildComponent(intf,options)
	intf:pushSizerV{text="SEE", prop=0,flags=wx.wxALL+wx.wxEXPAND,function()
		intf:pushSizerH{prop=0,flags=wx.wxALL+wx.wxEXPAND,function()
			intf:addSingleChoiceEntry{name="see_combination",prop=0,caption="Combination",
				choices=see_combs, handler="updateCombination",validItemOnly=true}
			intf:addSingleChoiceEntry{name="see_comb_mode",prop=0,caption="Mode",
				choices=see_modes, handler="updateMode",validItemOnly=true}
		end}
		intf:pushSizerH{prop=0,flags=wx.wxALL+wx.wxEXPAND,function()
			intf:addBoolEntry{name="see_enabled",caption="Enabled",
							  handler="updateEnabled",validItemOnly=true, style=0}
		end}
	end}
end

function Class:onTurretChanged(turret)
	local see = turret:getStream(Enums.VIDEO_SEE)
	if see then
		self:setEntryValue("see_combination",see_combs[see:getCombination()+1])
		self:setEntryValue("see_comb_mode",see_modes[see:getCombinationMode()+1])
		self:setEntryValue("see_enabled",see:getEnabled())
	else
		-- disable the entries:
		self._intf:getEntry("see_combination"):setEnabled(false)
		self._intf:getEntry("see_comb_mode"):setEnabled(false)
		self._intf:getEntry("see_enabled"):setEnabled(false)
	end
end

function Class:onInitTurretMap(dmap,turret)
	local see = turret:getStream(Enums.VIDEO_SEE)
	if see then
		dmap:set("see_combination",see_combs[see:getCombination()+1])
		dmap:set("see_comb_mode",see_modes[see:getCombinationMode()+1])
		dmap:set("see_enabled",see:getEnabled())
	else
		-- disable the entries:
		self._intf:getEntry("see_combination"):setEnabled(false)
		self._intf:getEntry("see_comb_mode"):setEnabled(false)
		self._intf:getEntry("see_enabled"):setEnabled(false)
	end
end

function Class:updateCombination(data)
	local dmap = data.item	
	local turret = dmap:fetch("turret")
	
	local see = turret:getStream(Enums.VIDEO_SEE)
	if not see then 
		self:warn("No SEE stream in this turret.")
		return 
	end
	
	see:setCombination(Enums["SEESPOT_COMBINATION_" .. comb_names[data.value]])
end

function Class:updateMode(data)
	local dmap = data.item	
	local turret = dmap:fetch("turret")
	
	local see = turret:getStream(Enums.VIDEO_SEE)
	if not see then 
		self:warn("No SEE stream in this turret.")
		return 
	end
	
	see:setCombinationMode(Enums["SEESPOT_COMBINATION_MODE_" .. data.value])
end

function Class:updateEnabled(data)
	local dmap = data.item	
	local turret = dmap:fetch("turret")
	
	local see = turret:getStream(Enums.VIDEO_SEE)
	if not see then 
		self:warn("No SEE stream in this turret.")
		return 
	end
	
	see:setEnabled(data.value)
end

return Class 
