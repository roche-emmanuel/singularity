local Class = require("classBuilder"){name="GenesisSimpleScreen",bases="genesis.display.BasicScreen"};

function Class:setup(options)
	-- Create a single turret view taking the complete screen:
	local TurretView = require "genesis.display.TurretView"
	
	self._turretView = TurretView{parent=self:getFrame()}
end

function Class:getRoot()
	return self._turretView:getRoot()
end

function Class:getViewer()
	return self._turretView:getViewer()
end

function Class:getTurretView()
	return self._turretView
end

return Class 
