local Class = require("classBuilder"){name="SceneManager",bases="genesis.Object"};

-- This class provides access to the list of scenes currently in use.
-- multile scenes can share the same scene using either shared or standalone platforms.
function Class:initialize()
	self._scenes = require("std.Set")()
end

function Class:getScene(sname)
	for _,scene in self._scenes:sequence() do
		if scene:getName() == sname then
			return scene
		end
	end
	
	self:warn("Could not find scene with name ",sname)
end

function Class:hasScene(sname)
	for _,scene in self._scenes:sequence() do
		if scene:getName() == sname then
			return true
		end
	end
	
	return false;
end

function Class:registerScene(scene)
	self:check(scene,"Invalid scene object");
	
	local sname = scene:getName()
	self:debug("Registering scene ",sname,".")
	self:check(not self:hasScene(sname),"A scene with the name ",sname," was already registered.")
	
	self._scenes:push_back(scene)
end

-- unregistering a scene is not supported yet.

return Class()
