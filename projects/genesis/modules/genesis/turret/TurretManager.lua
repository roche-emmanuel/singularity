local Class = require("classBuilder"){name="TurretManager",bases="genesis.Object"};

-- This class provides access to the list of turrets currently in use.
function Class:initialize()
	self._turrets = require("std.Set")()
end

function Class:getTurret(tname)
	for _,turret in self._turrets:sequence() do
		if turret:getName() == tname then
			return turret
		end
	end
	
	self:warn("Could not find turret with name ",tname)
end

function Class:hasTurret(tname)
	for _,turret in self._turrets:sequence() do
		if turret:getName() == tname then
			return true
		end
	end
	
	return false;
end

function Class:registerTurret(turret)
	self:check(turret,"Invalid turret object");
	
	local tname = turret:getName()
	self:debug("Registering turret ",tname,".")
	self:check(not self:hasTurret(tname),"A turret with the name ",tname," was already registered.")
	
	self._turrets:push_back(turret)
end

-- unregistering a turret is not supported yet.

return Class()
