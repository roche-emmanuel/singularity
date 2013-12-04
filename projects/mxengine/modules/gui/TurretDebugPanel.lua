local Class = require("classBuilder"){name="TurretDebugPanel",bases="gui.BasicTurretComponent"};


function Class:buildComponent(intf)	
	intf:pushSizerH{text="Debugging",prop=0,flags=wx.wxALL+wx.wxEXPAND, function()
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
		intf:addSpacer{prop=1}
		intf:addActionButtonEntry{name="reload_web_pages",caption="reload",src="reload",tip="Reload all web views",handler="reloadWebPages",validItemOnly=true}
	end}
	
	intf:pushSizerV{text="MXPOD",prop=0,flags=wx.wxALL+wx.wxEXPAND, function()
		intf:addDoubleEntry{name="mx_pod_bearing",range={0,360},caption="Bearing",handler="updateBearing",
							validItemOnly=true}	
	end}
end

function Class:dumpTurretState(data)
	self:info("Toggling turret state dump to ",data.value)	
	local dmap = data.item

	local turret = self:getTurret(data)
	
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

function Class:updateBearing(data)
	local dmap = data.item
	local turret = dmap:fetch("turret")
	
	local pod = turret:getModule(turret.MODULE_MX_POD)
	if not pod then
		self:warn("No MXPOD module in this turret")
		return;
	end
	
	pod:setBearingToWaypoint(data.value)
end

function Class:reloadWebPages(data)
	local dmap = data.item
	local turret = dmap:fetch("turret")

	local AweOverlay = require "display.effects.AweOverlay"
	
	-- find all the webView components, and reload them:
	turret:getComponents():foreach(function(comp)
		if comp:isInstanceOf(AweOverlay) then
			comp:reload()
		end
	end)
end


return Class 
