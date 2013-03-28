local Class = require("classBuilder"){name="TurretState",bases="genesis.Object"};

function Class:initialize(options)
	self:check(options and options.turret,"Invalid parent turret");
	self:debug("Creating turret state...")
	
	-- assign the parent turret to this state:
	self._turret = options.turret
	
	-- Prepare the entry map:
	self._entries = require("std.Map")();
	
	-- Load the entries from the turret model:
	local modelName = options.model or "MXBase"
	self:debug("Loading turret model '",modelName,"'")
	
	local model = require("genesis.model."..modelName)
	
	-- Now parse all the entries in that model:
	local factory = require("genesis.turret.EntryFactory")()
	local entry;
	
	for name,details in pairs(model) do
		entry = factory:createEntry(name,details)
		self._entries:set(name,entry)
	end
	
	self:debug("Turret state ready.")
end

return Class 
