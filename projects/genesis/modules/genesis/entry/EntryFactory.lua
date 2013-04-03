local Class = require("classBuilder"){name="TurretEntryFactory",bases="genesis.turret.Object"};

function Class:createEntry(name,details)
	-- create an entry from the provided details:
	details.name = details.name or name
	details.turret = details.turret or self:getTurret()
	local className = "genesis.entry." .. (details.class or "") .. "Entry"
	return require(className)(details)
end

return Class 
