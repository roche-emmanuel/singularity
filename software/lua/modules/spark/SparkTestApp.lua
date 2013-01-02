local Class = require("classBuilder"){name="SparkTestApp",bases="osg.OSGTestApp"};

local spark = require "spark"
local tools = require "osg.Tools"
local fs = require "base.FileSystem"
local gl = require "luagl"

function Class:initialize()
	local app = self;
	
	local mt = app:loadModel("tests/data/glider.osgt")
	-- app:createCube(1)
	-- app:createBase()
	app:applyCircleAnimation(mt, 4.0, 6.0)

	app:home()

	local spark = require "spark"

	--local handler = spark.SparkUpdatingHandler();
	--handler:removeSpark(1)

	local gl = require "luagl"
	local tools = require "osg.Tools"

	spark.System.setClampStep( true, 0.1 );
	spark.System.useAdaptiveStep( 0.001, 0.01 );
		
	local sdraw = spark.SparkDrawable();
	sdraw:addImage( "flare", tools:getImage("tests/data/flare.bmp"), gl.ALPHA );

	local SimpleSystem = require "spark.SimpleSystem"

	sdraw:setBaseSystemCreator( SimpleSystem():getWrapper() );
	sdraw:addParticleSystem();

	local geode = osg.Geode();
	geode:addDrawable( sdraw );
	geode:getOrCreateStateSet():setRenderingHint( osg.StateSet.TRANSPARENT_BIN );
	geode:getOrCreateStateSet():setMode( gl.LIGHTING, osg.StateAttribute.OFF );

	
	local handler = spark.SparkUpdatingHandler();
	handler:addSpark( sdraw );
	handler:setTrackee( 0, mt );
	self._handler = handler;
	
	app:getRoot():addChild(geode)
	app:getViewer():addEventHandler( handler );
end

return Class -- return class instance.
