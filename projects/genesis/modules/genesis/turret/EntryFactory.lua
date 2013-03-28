local Class = require("classBuilder"){name="TurretEntryFactory",bases="genesis.Object"};

local Entry = require "genesis.turret.Entry"

function Class:createEntry(name,details)
	-- create an entry from the provided details:
	details.name = details.name or name
	return Entry(details)
end

return Class 
