local Class = require("classBuilder"){name="LandTestApp",bases="osg.OSGTestApp"};

local tools = require "osg.Tools"
local fs = require "base.FileSystem"
local land = require "proland"

function Class:initialize(options)
	options = options or {}
		
	-- first we need to set the current context:
	proland.LandManager.setCurrentContext(0)
	self:info("Current context set to 0.")
	
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
	local deform = proland.Deformation()
	self:info("Creating tile geode...")
	local geode = self:createTileGeode()
	
	self:info("Creating terrain node...")
	local tn = proland.TerrainNode(deform,geode,500, -1, 1, 2.0, 7);
	
	self:getRoot():addChild(tn);
	
	self:setupProgram(tn)
	
	-- Here we try to create the needed elements to build the terrain1 example:
	
	-- create the multithreadScheduler:
	-- MultithreadScheduler(int prefetchRate = 0, int prefetchQueue = 0, float frameRate = 0.0f, int nThreads = 0)
	local scheduler = ork.MultithreadScheduler(0,0,0,3)
	--self._scheduler = scheduler
	self:info("Scheduler created.")
	
	-- Create the gpu storage for the elevation cache:
	-- src= <gpuTileStorage tileSize="101" nTiles="512" internalformat="RGB32F" format="RGB" type="FLOAT" min="LINEAR" mag="LINEAR"/>
	-- GPUTileStorage(int tileSize, int nTiles,
	-- 				  ork::TextureInternalFormat internalf, ork::TextureFormat f, ork::PixelType t,
	-- 				  const ork::Texture::Parameters &params, bool useTileMap = false)
	local params = ork.Texture_Parameters()
	self:info("Elevation GPU params created.")
	params:min(proland.TextureFilter.LINEAR):mag(proland.TextureFilter.LINEAR)
	self:info("Elevation GPU params updated.")

	local elevStorage = proland.GPUTileStorage(101,512,
											   proland.TextureInternalFormat.RGB32F, 
											   proland.TextureFormat.RGB, 
											   proland.PixelType.PIXEL_FLOAT, 
											   params, false)
	self:info("Elevation GPU storage created.")
	
	-- Create the tilecache for elevation:
	-- TileCache(ptr<TileStorage> storage, std::string name, ptr<Scheduler> scheduler = NULL);
	-- local elevCache = proland.TileCache(elevStorage,"groundElevations",scheduler);
	-- Note: we need to keep a ref on this because it must not destroy the scheduler before leaving this scope!
	-- otherwise, the scheduler variable will be a dandling pointer.
	self._elevCache = proland.TileCache(elevStorage,"groundElevations",scheduler);
	self:info("Elevation cache created.")
	
	
	-- Now Prepare the elevation producer:
	-- 1. prepare the dem texture:
	local tileWidth = 101; --self._elevCache:getStorage():getTileSize();
	local demTex = self:createTexture(tileWidth,proland.TextureInternalFormat.RGBA32F);
	self:info("Created dem texture for elevation.")
	
	-- <elevationProducer name="groundElevations1" cache="groundElevations" noise="-140,-100,-15,-8,5,2.5,1.5,1,0.5,0.25,0.1,0.05"/>
    -- ElevationProducer(ptr<TileCache> cache, ptr<TileProducer> residualTiles,
        -- ptr<Texture2D> demTexture, ptr<Texture2D> layerTexture, ptr<Texture2D> residualTexture,
        -- ptr<Program> upsample, ptr<Program> blend, int gridMeshSize,
        -- std::vector<float> &noiseAmp, bool flipDiagonals = false);

	
	-- self._elevProd = proland.ElevationProducer(self._elevCache,nil,demTex,nil,residualTex,
						-- upsample,blend,24,noiseVec,false);						
	-- self:info("Elevation producer created.")
	
	
	self:home()
end

function Class:createTexture(size,internalFormat)
	-- Texture2D(int w, int h, TextureInternalFormat tf, TextureFormat f, PixelType t,
    -- 			 const Parameters &params, const Buffer::Parameters &s, const Buffer &pixels)
	local params = ork.Texture_Parameters()
	params:min(proland.TextureFilter.NEAREST):mag(proland.TextureFilter.NEAREST);
	local buf = ork.CPUBuffer();
	local s = ork.Buffer_Parameters()
	s:compressedSize(0);
	
	local tex = ork.Texture2D(size,size,internalFormat,
							  proland.TextureFormat.RED,
							  proland.PixelType.PIXEL_FLOAT,
							  params,s,buf);
	return tex;
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
