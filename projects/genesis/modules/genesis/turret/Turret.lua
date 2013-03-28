local Class = require("classBuilder"){name="Turret",bases="genesis.Object"};

function Class:initialize(options)
	options = options or {}
	self._name = options.name or "default"
	self:debug("Creating turret '",self._name,"'")
	
	-- Start with creating the turret state object:
	options.turret = self
	self._state = require("turret.State")(options)
	self:debug("Turret ready.")
end

return Class 
