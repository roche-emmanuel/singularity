local Class = require("classBuilder"){name="AlarmPanel",bases="gui.BasicTurretComponent"};

local Enums = require "mx.Enums"


function Class:buildComponent(intf,options)
	local size = 20
	
	intf:pushSizerV{text="Alarms", prop=0,flags=wx.wxALL+wx.wxEXPAND,function()
		intf:addIntegerEntry{name="bit_id",caption="Module", range={1,34}}			
		intf:addIntegerEntry{name="error_code",caption="Error", range={1,20}}			
		
		intf:pushSizerH{prop=0,flags=wx.wxALL+wx.wxEXPAND,function()
			intf:addActionButtonEntry{name="add_alarm",src="enter",size=size,
							  handler="onAddAlarm",validItemOnly=true}
			intf:addActionButtonEntry{name="clear_alarms",src="delete",size=size,
							  handler="onClearAlarms",validItemOnly=true}
		end}
	end}
end

function Class:onAddAlarm(data)
	local dmap = data.item	
	local turret = dmap:fetch("turret")
	
	local am = turret:getAlarmManager()
	if not am then
		self:warn("This turret cannot handle alarms.")
		return
	end
	
	local bit_id = dmap:fetch("bit_id")
	local error_code = dmap:fetch("error_code")
	
	self:debug("Triggering alarm #",bit_id,".",error_code)
	am:addAlarm(bit_id,error_code)
end

function Class:onClearAlarms(data)
	local dmap = data.item	
	local turret = dmap:fetch("turret")
	
	local am = turret:getAlarmManager()
	if not am then
		self:warn("This turret cannot handle alarms.")
		return
	end

	am:clearAllAlarms()
end

return Class 
