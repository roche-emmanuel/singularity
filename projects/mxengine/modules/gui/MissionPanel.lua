local Class = require("classBuilder"){name="MissionPanel",bases="gui.wx.InterfaceComponent"};

function Class:findMissions(folder,list)
	list = list or {}
	
	local dir = require "utils.dir"
	local path = require "utils.path"
	
	local files = dir.getFiles(folder,"*.pbo")
	local ext
	for _,file in files:sequence() do
		file, ext = path.splitExt(path.baseName(file))
		table.insert(list,file)
	end
	
	return list
end

function Class:buildComponent(intf)
	-- local missionList = self:findMissions(vbs2_root.."mpmissions/")
	local missionList = self:findMissions(vbs2_root.."missions/")
	
	intf:pushSizer{text="Mission",orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxALL+wx.wxEXPAND}
		intf:addSingleChoiceEntry{name="selected_mission",prop=1,caption="Mission",
			choices=missionList,
			actionHandler="startStopMission",
			actions={"start_mission","stop_mission"}}
	intf:popSizer()
	
	intf:pushSizer{text="Mission settings",orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxALL+wx.wxEXPAND}
		intf:pushChoicebook{prop=1,flags=wx.wxALL+wx.wxEXPAND,
							name="mission_type",
							defaultValue="SingleTurret",
							handler="onMissionChanged"}
			
			intf:pushBookPage{caption="TestCameraManager"}
				intf:addStaticText{text="This type of mission has no parameter."}
			intf:popParent(true)
			
			intf:pushBookPage{caption="SingleTurret"}
				require "gui.SingleTurretMissionPanel" {intf}
			intf:popParent(true)
		
		intf:popParent() -- choicebook.
	intf:popSizer()
	
	require "gui.DebugPanel" {intf}
end

function Class:startStopMission(data)
	require "fusion3"
	
	local mname = data.value
	if data.action == "start_mission" then
		if self:isMissionRunning() then
			self:warn("Mission is currently running. Please stop the previous mission first.")
			return
		end
		
		self:info("Starting mission ",mname)
		-- This version is not compatible with VBS 2.12: Adding parent folders
		-- doesn't seem to work any more.
		-- VBS2Fusion.MissionUtilities.playMission("","../mpmissions/"..mname,true);
		VBS2Fusion.MissionUtilities.playMission("",mname,true);
	elseif data.action == "stop_mission" then
		if not self:isMissionRunning() then
			self:warn("No mission running.")
			return
		end
		
		self:info("Ending mission ",mname)
		VBS2Fusion.MissionUtilities.endMission("END1");	
	end
end

function Class:onMissionChanged(data)
	self:debug("Mission was changed to ",data.value)
	self:getMissionManager():setMissionClass(data.value)
end

return Class 
