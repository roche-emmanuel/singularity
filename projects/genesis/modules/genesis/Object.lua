local Class = require("classBuilder"){name="GenesisObject",bases="base.Object"};

function Class:getTurretManager()
	return require "genesis.turret.TurretManager"
end

function Class:getSceneManager()
	return require "genesis.scene.SceneManager"
end

return Class 
