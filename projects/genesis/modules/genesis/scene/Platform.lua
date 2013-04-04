local Class = require("classBuilder"){name="Scene",
	bases={"genesis.scene.Object","base.EventHandler"}};

-- This class represents a basic 3D scene where platforms are evolving
-- turrets can then be attached to those platforms.
function Class:initialize(options)
	self:check(options and options.root,"Invalid platform root object")
	self._name = options and options.name or config.genesis.default_platform_name
	self._root = options.root
	
	self._root:setUpdateCB(function(node,nv)
		local mat = osg.computeLocalToWorld(nv:getNodePath())
		self:fireEvent("PlatformUpdated",mat)
		-- self:info("Update frame id=",nv:getFrameStamp():getFrameNumber())
	end)
	
	self:getScene():addPlatform(self)
end

function Class:getName()
	return self._name
end

function Class:getRoot()
	return self._root
end

-- function Class:getLocalToWorldMatrix(id)
	-- local list = self._root:getWorldMatrices()
	-- return list:at(id or 0)
-- end

return Class
