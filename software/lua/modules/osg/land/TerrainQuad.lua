local Class = require("classBuilder"){name="TerrainQuad",bases="base.Object"};

require "osg"
	
function Class:initialize(options)	
	self:check(options and options.node,"Invalid terrain node for quad creation.")
	self._node = options.node
	
	self._root = osg.Group()

	-- add the shared geode from terrain node to this quad by default:
	self._root:addChild(self._node:getTileGeode())
end

function Class:getRoot()
	return self._root
end

function Class:update()
	self:no_impl()
end

function Class:getZmax()
	self:no_impl()
end

return Class
