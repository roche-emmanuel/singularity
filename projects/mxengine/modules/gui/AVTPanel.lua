local Class = require("classBuilder"){name="AVTPanel",bases="gui.BasicTurretComponent"};

local Enums = require "mx.Enums"

local avt_algo = { "CENTROID", "CORR_AUTO", "CORR_MANUAL", "SCENELOCK" }
local avt_acqsize = { "SMALL", "MEDIUM", "LARGE" }

function Class:buildComponent(intf,options)
	local size = 20

	intf:pushSizerV{text="AVT", prop=0,flags=wx.wxALL+wx.wxEXPAND,function()
		intf:pushSizerH{prop=0,flags=wx.wxALL+wx.wxEXPAND,function()
			intf:addSingleChoiceEntry{name="avt_algo",prop=0,caption="Algorithm",
				choices=avt_algo, handler="updateAlgorithm",validItemOnly=true}
			intf:addSingleChoiceEntry{name="avt_acqsize",prop=0,caption="Acq. Size",
				choices=avt_acqsize, handler="updateAcqSize",validItemOnly=true}
			intf:addActionButtonEntry{name="avt_acquire",src="disc1",size=size,
									  handler="acquireTarget",validItemOnly=true}				
			intf:addActionButtonEntry{name="avt_lock",src="enter",size=size,
									  handler="lockTarget",validItemOnly=true}				
		end}
	end}
end

function Class:onTurretChanged(turret)
	local avt = turret:getModule(Enums.MODULE_AVT)
	if avt then
		self:setEntryValue("avt_algo",avt_algo[avt:getAlgorithm()+1])
		self:setEntryValue("avt_acqsize",avt_acqsize[avt:getAcquisitionWindowSize()+1])
	else
		-- disable the entries:
		self._intf:getEntry("avt_algo"):setEnabled(false)
		self._intf:getEntry("avt_acqsize"):setEnabled(false)
	end
end

function Class:onInitTurretMap(dmap,turret)
	local avt = turret:getModule(Enums.MODULE_AVT)
	if avt then
		dmap:set("avt_algo",avt_algo[avt:getAlgorithm()+1])
		dmap:set("avt_acqsize",avt_acqsize[avt:getAcquisitionWindowSize()+1])
	else
		-- disable the entries:
		self._intf:getEntry("avt_algo"):setEnabled(false)
		self._intf:getEntry("avt_acqsize"):setEnabled(false)
	end
end

function Class:updateAlgorithm(data)
	local dmap = data.item	
	local turret = dmap:fetch("turret")
	
	local avt = turret:getModule(Enums.MODULE_AVT)
	if not avt then 
		self:warn("No AVT module in this turret.")
		return 
	end
	
	avt:setAlgorithm(Enums["AVT_ALGO_" .. data.value])
end

function Class:updateAcqSize(data)
	local dmap = data.item	
	local turret = dmap:fetch("turret")
	
	local avt = turret:getModule(Enums.MODULE_AVT)
	if not avt then 
		self:warn("No AVT Module in this turret.")
		return 
	end
	
	avt:setAcquisitionWindowSize(Enums["AVT_ACQWIN_" .. data.value])
end

function Class:lockTarget(data)
	local dmap = data.item	
	local turret = dmap:fetch("turret")
	
	local avt = turret:getModule(Enums.MODULE_AVT)
	if not avt then 
		self:warn("No AVT Module in this turret.")
		return 
	end
	
	avt:lockTarget()
end

function Class:acquireTarget(data)
	local dmap = data.item
	local turret = dmap:fetch("turret")
	
	local avt = turret:getModule(Enums.MODULE_AVT)
	if not avt then
		self:warn("No AVT Module in this turret.")
		return 
	end
	
	avt:setTrackStatus(Enums.AVT_TRACK_ARMED)
end

return Class 
