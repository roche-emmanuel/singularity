local Class = require("classBuilder"){name="TerrainNode",bases="base.Object"};

require "osg"
	
function Class:initialize(options)	
	self:info("Creating TerrainNode.")
	self._root = osg.MatrixTransform()
	self._ss = self._root:getOrCreateStateSet()
	
	-- attach to parent if provide:
	if options and options.parent then
		options.parent:addChild(self._root)
	end
	
	-- Create the deformation object:
	local Deformation = require "osg.land.Deformation"
	self._deform = Deformation{node=self}
	
	self._splitFactor = options and options.splitFactor or 2.0;
	
	-- create the shared tile geode:
	self:info("Creating Tile geode.")
	self:createTileGeode()
	
	-- create the quad tree:
	self:info("Creating root TerrainQuad.")
	local TerrainQuad = require "osg.land.TerrainQuad"
	self._quad = TerrainQuad{node=self}
	self._root:addChild(self._quad:getRoot())

end

function Class:getSplitDistance()
	self:no_impl()
end

function Class:getCameraToScreen()
	self:no_impl()
end

function Class:getLocalToCamera()
	self:no_impl()
end

function Class:getLocalCamera()
	self:no_impl()
end

function Class:getLocalToWorld()
	self:no_impl()
end

function Class:createTileGeode()
	self._tileGeode = osg.Geode()
	
	local geom = osg.Geometry()
	geom:setUseVertexBufferObjects(true)
	self._tileGeode:addDrwable(geom)
	
	local vertices = osg.Vec3Array()
	vertices:push_back(osg.Vec3f(0.0,0.0,0.0))
	vertices:push_back(osg.Vec3f(1.0,0.0,0.0))
	vertices:push_back(osg.Vec3f(0.0,1.0,0.0))
	vertices:push_back(osg.Vec3f(1.0,1.0,0.0))
	
	geom:setVertexArray(vertices)
	geom:addPrimitiveSet(osg.DrawArrays(osg.PrimitiveSet.TRIANGLE_STRIP,0,4));
end

function Class:setupProgram()
	local shman = require "osg.ShaderManager"
	local prog = shman:loadProgram{"terrain_shader_minimal"}
	self._ss:setAttributeAndModes(prog)	
end

function Class:getTileGeode()
	self:check(self._tileGeode,"Invalid tile geode.")
	return self._tileGeode
end

function Class:getRoot()
	return self._root
end

return Class
