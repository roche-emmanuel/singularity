local Class = require("classBuilder"){name="VICPanel",bases="gui.BasicTurretComponent"};

local Enums = require "mx.Enums"

local vics = {"EOW","IR","EON","SEE"}
local EOW_subs = {"DL","LL"}
local EON_subs = {"DL","LL", "SWIR"}

local subs = {
	EOW = { "DL", "LL" },
	EON = { "DL", "LL", "SWIR" },
	SEE = { "SEE","PRIMARY","SECONDARY" },
}

local ids = {
	EOW = { DL=0, LL=1 },
	EON = { DL=0, LL=1, SWIR=2 },
	SEE = { SEE=0,PRIMARY=1,SECONDARY=2 },
}

function Class:buildComponent(intf)	
	intf:pushSizerV{text="Source control",prop=0,flags=wx.wxALL+wx.wxEXPAND,function()
		intf:pushSizerH{text="Video in Control",prop=0,flags=wx.wxALL+wx.wxEXPAND,function()
			-- for _,sensor in ipairs{"EOW","IR","EON"} do
				-- intf:addBoolEntry{name="vic_"..sensor,caption=sensor,group="vic",asButton=true,
										  -- handler="updateVIC",validItemOnly=true,sensor=sensor}
			-- end	
			intf:addSingleChoiceEntry{name="selected_vic",prop=0,caption="VIC",
				choices=vics, handler="updateVIC", validItemOnly=true}			
		end}

		intf:pushSizerH{text="SubVIC",prop=0,flags=wx.wxALL+wx.wxEXPAND,function()
			-- for _,sensor in ipairs{"EOW","IR","EON"} do
				-- intf:addBoolEntry{name="vic_"..sensor,caption=sensor,group="vic",asButton=true,
										  -- handler="updateVIC",validItemOnly=true,sensor=sensor}
			-- end	
			for _,v in ipairs{"EOW","EON","SEE"} do
				intf:addSingleChoiceEntry{name=v.."_subvic",prop=0,caption=v,stream=v,
					choices=subs[v], handler="updateSubVIC", validItemOnly=true}			
			end
		end}
		
		-- for _,sensor in ipairs{"EOW","EON"} do
			-- intf:pushSizerH{text=sensor .. " SubVIC",prop=0,flags=wx.wxALL+wx.wxEXPAND,function()
				-- for k,sname in ipairs(subs[sensor]) do
					-- intf:addBoolEntry{name=sensor ..".subvic_"..sname,caption=sname,group="subvic_"..sensor,asButton=true,
											  -- handler="updateSubVIC",validItemOnly=true,sensor=sensor,subId=k-1}
				-- end
			-- end}
		-- end
		
	end}
end

function Class:onInitTurretMap(dmap,turret)
	turret:foreachVideoStream(function(stream)
		local sname = stream:getName()
		if stream:isVIC() then
			dmap:set("selected_vic",stream:getName())
		end
		
		if stream:getID() == Enums.VIDEO_SEE then
			dmap:set("SEE_subvic",subs.SEE[stream:getSeeVIC()+1])
		elseif subs[sname] then
			dmap:set(sname.."_subvic",subs[sname][stream:getResolvedSensor():getSubVICIndex()+1])
		end
	end)
end

function Class:updateVIC(data)
	-- local sname = data.entry.options.sensor
	local sname = data.value
	self:info("Setting VIC to ",sname)
	local turret = data.item:fetch("turret")
	local stream = turret:getStreamByName(sname)
	if not stream then
		self:warn("Stream ",sname," is not available.")
		return
	end
	
	turret:setVIC(stream:getID())
end

function Class:updateSubVIC(data)
	local sname = data.entry.options.stream
	local subId = ids[sname][data.value]
	
	self:info("Setting SubVIC to ",subId," for sensor ",sname)
	
	local turret = data.item:fetch("turret")
	local stream = turret:getStreamByName(sname)
	if not stream then
		self:warn("Sensor ",sname," is not available.")
		return
	end
	if sname=="SEE" then
		-- update the see vic:
		stream:setSeeVIC(subId)
	else
		local sensor = stream:getResolvedSensor()
		if subId >= sensor:getNumCameras() then
			self:warn("Subvic index ",subId," for sensor ",sname," is not available.")
			return
		end
		
		sensor:setSubVIC(subId)
	end
end

return Class 
