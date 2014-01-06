local Class = require("classBuilder"){name="FSDPanel",bases="gui.BasicTurretComponent"};

local Enums = require "mx.Enums"

local fsd_modes = { "AUTO", "MANUAL" }


function Class:buildComponent(intf,options)
	intf:pushSizerH{text="FSD", prop=0,flags=wx.wxALL+wx.wxEXPAND,function()
		intf:pushSizerV{prop=0,flags=wx.wxALL+wx.wxEXPAND,function()
			intf:addBoolEntry{name="fsd_enabled",caption="Enabled",
							  handler="updateEnabled",validItemOnly=true, style=0}
			intf:addSingleChoiceEntry{name="fsd_blend_mode",prop=0,caption="Mode",
				choices=fsd_modes, handler="updateMode",validItemOnly=true}
		end}
		intf:pushSizerV{prop=0,flags=wx.wxALL+wx.wxEXPAND,function()
			intf:addIntegerEntry{name="fsd_combination",caption="Combination", range={0,6}, 
								handler="updateCombination", validItemOnly=true}			
			intf:addDoubleEntry{name="fsd_blend",caption="Blend", range={0,1}, 
								handler="updateBlend", validItemOnly=true}			
		end}
	end}
end

function Class:onTurretChanged(turret)
	local fsd = turret:getStream(Enums.VIDEO_BLD)
	if fsd then
		self:setEntryValue("fsd_combination",fsd:getCombination())
		self:setEntryValue("fsd_blend_mode",fsd_modes[fsd:getBlendMode()+1])
		self:setEntryValue("fsd_enabled",fsd:getEnabled())
		self:setEntryValue("fsd_blend",fsd:getBlendFactor())
	else
		-- disable the entries:
		self._intf:getEntry("fsd_combination"):setEnabled(false)
		self._intf:getEntry("fsd_blend_mode"):setEnabled(false)
		self._intf:getEntry("fsd_enabled"):setEnabled(false)
		self._intf:getEntry("fsd_blend"):setEnabled(false)
	end
end

function Class:onInitTurretMap(dmap,turret)
	local fsd = turret:getStream(Enums.VIDEO_BLD)
	if fsd then
		dmap:set("fsd_combination",fsd:getCombination())
		dmap:set("fsd_blend_mode",fsd_modes[fsd:getBlendMode()+1])
		dmap:set("fsd_enabled",fsd:getEnabled())
		dmap:set("fsd_blend",fsd:getBlendFactor())
	else
		-- disable the entries:
		self._intf:getEntry("fsd_combination"):setEnabled(false)
		self._intf:getEntry("fsd_blend_mode"):setEnabled(false)
		self._intf:getEntry("fsd_enabled"):setEnabled(false)
		self._intf:getEntry("fsd_blend"):setEnabled(false)
	end
end

function Class:updateCombination(data)
	local dmap = data.item	
	local turret = dmap:fetch("turret")
	
	local fsd = turret:getStream(Enums.VIDEO_BLD)
	if not fsd then 
		self:warn("No FSD stream in this turret.")
		return 
	end
	
	fsd:setCombination(data.value)
end

function Class:updateMode(data)
	local dmap = data.item	
	local turret = dmap:fetch("turret")
	
	local fsd = turret:getStream(Enums.VIDEO_BLD)
	if not fsd then 
		self:warn("No FSD stream in this turret.")
		return 
	end
	
	fsd:setBlendMode(Enums["IMAGE_BLENDING_MODE_" .. data.value])
end

function Class:updateEnabled(data)
	local dmap = data.item	
	local turret = dmap:fetch("turret")
	
	local fsd = turret:getStream(Enums.VIDEO_BLD)
	if not fsd then 
		self:warn("No FSD stream in this turret.")
		return 
	end
	
	fsd:setEnabled(data.value)
end

function Class:updateBlend(data)
	local dmap = data.item	
	local turret = dmap:fetch("turret")
	
	local fsd = turret:getStream(Enums.VIDEO_BLD)
	if not fsd then 
		self:warn("No FSD stream in this turret.")
		return 
	end
	
	fsd:setBlendFactor(data.value)
end

return Class 
