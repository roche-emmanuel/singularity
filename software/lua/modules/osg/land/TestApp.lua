local Class = require("classBuilder"){name="LandTestApp",bases="osg.OSGTestApp"};

local tools = require "osg.Tools"
local fs = require "base.FileSystem"
local land = require "land"

function Class:initialize(options)
	options = options or {}
		
	local mt = self:loadModel("tests/data/glider.osgt")
	self:createCube(1)
	self:createBase{width=1500,height=1500,zoffset=-60.0}
	
	self:applyCircleAnimation(mt, 4.0, 6.0)
		
	local sb = tools:createSkyBox{
		x_pos="skybox1/right.jpg",
		x_neg="skybox1/left.jpg",
		y_pos="skybox1/front.jpg",
		y_neg="skybox1/back.jpg",
		z_pos="skybox1/top.jpg",
		z_neg="skybox1/bottom.jpg",
	}
	
	self:getRoot():addChild(sb)	
	
	-- now create the terrainnode:
	self:info("Creating deformation...")
	local deform = sgt.Deformation()
	self:info("Creating tile geode...")
	local geode = self:createTileGeode()
	
	self:info("Creating terrain node...")
	local tn = sgt.TerrainNode(deform,geode,500, -1, 1, 2.0, 7);
	
	self:getRoot():addChild(tn);
	
	self:setupProgram(tn)
	
	self:home()
end

function Class:setupProgram(node)
	local ss = node:getOrCreateStateSet()
	local shman = require "osg.ShaderManager"
	local prog = shman:loadProgram{"terrain_shader_minimal"}
	ss:setAttributeAndModes(prog)	
end

function Class:setupEventHandlers()
	self:getViewer():addEventHandler( osgViewer.StatsHandler() )	
	self:getViewer():addEventHandler( osgViewer.WindowSizeHandler() )
end

function Class:createTileGeode()
	local geode = osg.Geode()
	geode:setCullingActive(false)
	
	local geom = osg.Geometry()
	geom:setUseVertexBufferObjects(true)
	geode:addDrawable(geom)
	
	local vertices = osg.Vec3Array()
	vertices:push_back(osg.Vec3f(0.0,0.0,0.0))
	vertices:push_back(osg.Vec3f(1.0,0.0,0.0))
	vertices:push_back(osg.Vec3f(0.0,1.0,0.0))
	vertices:push_back(osg.Vec3f(1.0,1.0,0.0))
	
	geom:setVertexArray(vertices)
	geom:addPrimitiveSet(osg.DrawArrays(osg.PrimitiveSet.TRIANGLE_STRIP,0,4));
	
	return geode
end

return Class 
