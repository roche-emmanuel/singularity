local Class = require("classBuilder"){name="SceneObject",bases="genesis.Object"};

function Class:initialize(options)
	self:check(options and options.scene,"Invalid scene object");

	self._scene = options.scene	
end

function Class:getScene()
	return self._scene
end

return Class 
