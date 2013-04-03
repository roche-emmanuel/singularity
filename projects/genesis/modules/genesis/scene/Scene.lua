local Class = require("classBuilder"){name="Scene",bases="genesis.Object"};

local osg = require "osg"

-- This class represents a basic 3D scene where platforms are evolving
-- turrets can then be attached to those platforms.
function Class:initialize(options)
	self._name = (options and options.name) or self._name or config.genesis.default_scene_name
	self:debug("Creating scene ", self._name);
	
	-- register this scene:
	self:getSceneManager():registerScene(self)
	
	self._root = osg.Group()
	self._platforms = require("std.Set")()
end

function Class:getName()
	return self._name
end

function Class:getRoot()
	return self._root
end

-- return a platform with a given name
-- or the default platform is no name is provided.
function Class:getPlatform(pname)
	self:check(not self._platforms:empty(),"No platform found.")
	pname = pname or config.genesis.default_platform_name
	
	for _,pform in self._platforms:sequence() do
		if pform:getName() == pname then
			return pform
		end
	end
	
	self:warn("Could not find plaftorm with name '",pname,"'")
end

function Class:hasPlatform(pname)
	for _,pform in self._platforms:sequence() do
		if pform:getName() == pname then
			return true
		end
	end
	
	return false
end

function Class:addPlatform(pform)
	self:check(not self:hasPlatform(pform:getName()),"Platform with name ",pform:getName()," was already created in scene ",self._name)
	
	self._platforms:push_back(pform)
end

function Class:getPlatforms()
	return self._platforms
end

return Class
