local Class = require("classBuilder"){name="PlatformPanel",bases="gui.BasicTurretComponent"};


function Class:buildComponent(intf)	
	intf:pushSizerH{text="Platform",prop=0,flags=wx.wxALL+wx.wxEXPAND, function()
		
		intf:pushSizerV{prop=0,flags=wx.wxALL+wx.wxEXPAND, function()
			intf:addBoolEntry{name="fix_platform_position",caption="Fix platform position",style=0,
							  flags=wx.wxALIGN_CENTER_VERTICAL,
							  tip="Fix the position of the platform for this turret.", 
							  handler="toggleFixPlatformPosition", validItemOnly=true,
							  }
			intf:addVec3dEntry{name="fixed_platform_position",caption="Position",range={-10000,10000}}
		end}
		
		intf:addSpacer{size=5}
		
		intf:pushSizerV{prop=0,flags=wx.wxALL+wx.wxEXPAND, function()
			intf:addBoolEntry{name="fix_platform_attitude",caption="Fix platform attitude",style=0,
							  flags=wx.wxALIGN_CENTER_VERTICAL,
							  tip="Fix the attitude of the platform for this turret.", 
							  handler="toggleFixPlatformAttitude", validItemOnly=true,
							  }
			intf:addVec3dEntry{name="fixed_platform_attitude",caption="Attitude",
							   range={{-180,180},{-90,90},{-180,180}},
							   subcaptions={"Yaw","Pitch","Roll"}}
		end}
	end}
end


function Class:toggleFixPlatformPosition(data)
	-- the data map must be valid at that point:
	local dmap = data.item
	local turret = self:getTurret(data)
	
	local prevCB = dmap:get("fixPlatformPosCB")
	if prevCB then
		turret:removeListener(prevCB)
	end
	
	if data.value then
		-- first update the platform position:
		local pform = turret:getPlatform()
		
		local pos = pform:getPosition()
		dmap:set("fixed_platform_position",pos)
		
		self._intf:updateEntries()
		
		local cb = turret:addListener{turret.EVT_PRE_UPDATE,function()
			-- retrieve the platform:
			local pos = dmap:fetch("fixed_platform_position")
			
			self:debug_v("Setting platform position to: ",pos)
			pform:setPosition(pos)
		end}
		
		dmap:set("fixPlatformPosCB",cb)
	end	
end

function Class:toggleFixPlatformAttitude(data)
	-- the data map must be valid at that point:
	local dmap = data.item
	
	local turret = self:getTurret(data)
	
	local prevCB = dmap:get("fixPlatformAttCB")
	if prevCB then
		turret:removeListener(prevCB)
	end
	
	if data.value then
		-- first update the platform position:
		local pform = turret:getPlatform()
		
		local att = pform:getAttitude()
		local ypr = att:toYPR():toDeg()
		dmap:set("fixed_platform_attitude",ypr)
		
		data.intf:updateEntries()
		
		local cb = turret:addListener{turret.EVT_PRE_UPDATE,function()
			-- retrieve the platform:
			local ypr = dmap:fetch("fixed_platform_attitude")
			
			self:debug_v("Setting platform attitude to: ",ypr)
			local q = osg.Quat()
			q:fromYPR(ypr:toRad())
			
			pform:setAttitude(q)
		end}
		
		dmap:set("fixPlatformAttCB",cb)
	end	
end

return Class 
