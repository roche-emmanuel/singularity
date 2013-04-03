local Class = require("classBuilder"){name="TurretState",bases="genesis.turret.Object"};

function Class:initialize(options)
	self:debug("Creating turret state...")
		
	-- Prepare the entry map:
	self._entries = require("std.Map")();
	
	-- Load the entries from the turret model:
	local modelName = options.model or "MXBase"
	self:debug("Loading turret model '",modelName,"'")
	
	local model = require("genesis.model."..modelName)
	
	-- Now parse all the entries in that model:
	local factory = require("genesis.entry.EntryFactory"){turret=self:getTurret()}
	local entry;
	
	for name,details in pairs(model) do
		entry = factory:createEntry(name,details)
		self._entries:set(name,entry)
	end
	
	self:debug("Turret state ready.")
end

function Class:getEntry(ename)
	return self._entries:get(ename)
end

function Class:getValue(ename,defVal)
	local ent = self:getEntry(ename)
	
	if ent then
		return ent:getValue(defVal) 
	end
	
	return defVal
end

return Class 
