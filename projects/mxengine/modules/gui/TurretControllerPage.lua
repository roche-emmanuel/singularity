local Class = require("classBuilder"){name="TurretControllerPage",bases="gui.BasicTurretComponent"};

Class.EVT_TURRETS_CHANGED = "turrets_changed"

function Class:buildComponent(intf)	
	local turrets = {
	};
	
	self._turrets = turrets
	
	local prev_prov = intf:getDefaultProvider()
	local panel = intf:getCurrentParent()
	
	self._controlPanel = panel
	
	-- add selector for the turret to control:
	intf:addComboBoxSelector{caption="Current turret: ",cont=turrets}
	
	intf:addDummyEntry{name="turret_updater",validItemOnly=true, handler=function(data)
		intf:fireEvent("turret_changed",data.item:fetch("turret"),data)
	end}
	
	-- intf:addSingleChoiceEntry{name="controlled_turret",prop=1,caption="Current turret",choices={""}}
	-- intf:addDoubleEntry{name="my_double",caption="My double"}
	intf:pushSizerH{prop=0,flags=wx.wxALL+wx.wxEXPAND, function()
		intf:pushSizerV{prop=0,flags=wx.wxEXPAND,function()
			require "gui.SteeringPanel" {intf};
		end}
		
		intf:pushNotebook{prop=1,flags=wx.wxALL+wx.wxEXPAND}
			intf:pushBookPage{caption="Basic control"}	
				intf:pushSizerH{prop=0,flags=wx.wxALL+wx.wxEXPAND, function()
					intf:pushSizerV{prop=0,flags=wx.wxEXPAND,function()			
						require "gui.VICPanel" {intf};			
						require "gui.MenuPanel" {intf};
					end}
					intf:pushSizerV{prop=0,flags=wx.wxEXPAND,function()			
						require "gui.SensorBookPanel" {intf};
					end}
					intf:pushSizerV{prop=0,flags=wx.wxEXPAND,function()			
						require "gui.SEEPanel" {intf};
						require "gui.FSDPanel" {intf};
					end}					
				end}
			intf:popParent(true)
			
			intf:pushBookPage{caption="Lasers"}	
				intf:pushSizerH{prop=0,flags=wx.wxALL+wx.wxEXPAND, function()
					intf:pushSizerV{prop=0,flags=wx.wxEXPAND,function()			
						require "gui.LDRPanel" {intf};
						require "gui.LRFPanel" {intf};	
					end}
					intf:pushSizerV{prop=0,flags=wx.wxEXPAND,function()			
						require "gui.IlluminatorPanel" {intf};	
					end}					
				end}			
			intf:popParent(true)
			
			intf:pushBookPage{caption="Debug"}
				intf:pushSizerV{prop=0,flags=wx.wxALL+wx.wxEXPAND, function()
					intf:pushSizerV{prop=0,flags=wx.wxEXPAND,function()			
						require "gui.ConfigPanel" {intf};	
					end}
					intf:pushSizerH{prop=0,flags=wx.wxEXPAND,function()			
						require "gui.PlatformPanel" {intf};	
						require "gui.TurretDebugPanel" {intf};
						require "gui.AlarmPanel" {intf};	
					end}					
				end}			
				
			intf:popParent(true)
		intf:popParent()		
	end}
	
	-- self._grid = intf:addGrid{prop=1,flags=wx.wxALL+wx.wxEXPAND}
	
	-- self:setupGrid()
	
	intf:setDefaultProvider(prev_prov)
	
	panel:Enable(false)
	
	-- add an event listener on the mission start and stop events:
	local mman = self:getMissionManager()
	mman:addListener{mman.EVT_STARTED_MISSION,function()
		self:info("Enabling turret control...")
		
		self:updateTurretList()
	end}
	
	mman:addListener{mman.EVT_ENDING_MISSION,function()
		self:info("Disabling turret control...")
		
		panel:Enable(false)
		while #turrets > 0 do
			table.remove(turrets,1)
		end
		intf:updateProviders()
		
	end}
	
	intf:addListener{Class.EVT_TURRETS_CHANGED,function()
		self:updateTurretList()
	end}
end

function Class:updateTurretList()
	-- retrieve the turret Manager:
	if not self:getMission():asMXMission() then
		return -- nothing to do here.
	end
	
	local tman = self:getTurretManager()
	local DataMap = require "utils.DataMap"
	
	local turrets = self._turrets

	-- first we have to clear the list:
	while #turrets > 0 do
		table.remove(turrets,1)
	end
		
	-- now populate the list:
	for i=1,tman:getNumTurrets() do
		local turr = tman:getTurretByIndex(i)
		self:check(turr,"Invalid turret object.")
		self:info("Adding turret ", turr:getName())
		
		local dmap = DataMap()
		dmap:set("name","Turret "..i.." - ".. turr:getName())
		dmap:set("turret",turr)
		
		self._intf:fireEvent("init_turret_map",dmap,turr)

		table.insert(turrets,dmap:getTable())
	end
	
	self._intf:updateProviders()
	self._intf:updateEntries()
	self._controlPanel:Enable(true)
end

function Class:setupGrid()
	local grid = self._grid
	grid:CreateGrid( 0, 0 );
	grid:AppendRows(100);
    grid:AppendCols(2);
end


function Class:fillGrid(dmap)
	-- use the provided dmap to fill the grid:
	
end

function Class:toggleFillGrid(data)
	self:info("Toggling turret state grid to ",data.value)
	local dmap = data.item

	local turret = dmap:fetch("turret")
	
	local prevCB = dmap:get("gridStateCB")
	if prevCB then
		turret:removeListener(prevCB)
	end
	
	if data.value then
		local cb = turret:addListener{turret.EVT_POST_UPDATE,function()
			self:fillGrid(turret:getState())
		end}
		dmap:set("gridStateCB",cb)
	end
end


return Class
