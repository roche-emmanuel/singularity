local Class = require("classBuilder"){name="BasicTurretPanel",bases="gui.wx.InterfaceComponent"};


function Class:initialize(options)
	self._intf:addListener{"init_turret_map",function(dmap,turret)
		self:onInitTurretMap(dmap,turret)
	end}
	
	self._intf:addListener{"turret_changed",function(turret,data)
		self:onTurretChanged(turret,data)
	end}
end

function Class:getTurret(data)
	return data.item:fetch("turret")
end

function Class:onTurretChanged(turret, data)

end

function Class:onInitTurretMap(dmap,turret)

end

function Class:setEntryValue(eName,val,range)
	local entry = self._intf:getEntry(eName)
	if entry then
		if range then
			self:check(range:x()<=val and val <= range:y(),"Out of range initial value val=",val,", range=",range)
			entry._range[1] = range:x()
			entry._range[2] = range:y()	
		end
		entry:setValue(val)
		entry:updateDisplay()
	end
end

return Class 
