local Class = require("classBuilder"){name="SparkTestApp",bases="osg.OSGTestApp"};

local spark = require "spark"
local tools = require "osg.Tools"
local fs = require "base.FileSystem"
local gl = require "luagl"

function Class:initialize(options)
	options = options or {}
		
	local mt = self:loadModel("tests/data/glider.osgt")
	-- app:createCube(1)
	-- app:createBase()
	self:applyCircleAnimation(mt, 4.0, 6.0)

	local spark = require "spark"

	--local handler = spark.SparkUpdatingHandler();
	--handler:removeSpark(1)

	local gl = require "luagl"
	local tools = require "osg.Tools"

	spark.System.setClampStep( true, 0.1 );
	spark.System.useAdaptiveStep( 0.001, 0.01 );
		
	local sdraw = spark.SparkDrawable();
	local tracking = false;
	
	if options.system == "simple" then
		sdraw:addImage( "flare", tools:getImage("tests/data/flare.bmp"), gl.ALPHA );
		
		local SimpleSystem = require "spark.SimpleSystem"
		sdraw:setBaseSystemCreator( SimpleSystem():getWrapper() );
		sdraw:addParticleSystem();
	else
		self:error("Invalid system for SPARK test.")
	end

	local geode = osg.Geode();
	geode:addDrawable( sdraw );
	geode:getOrCreateStateSet():setRenderingHint( osg.StateSet.TRANSPARENT_BIN );
	geode:getOrCreateStateSet():setMode( gl.LIGHTING, osg.StateAttribute.OFF );

	local handler = spark.SparkUpdatingHandler();
	handler:addSpark( sdraw );
	if tracking then
		handler:setTrackee( 0, mt );
	end
	
	--self._handler = handler;
	
	self:getRoot():addChild(geode)
	self:getViewer():addEventHandler( handler );

	self:home()
end

return Class -- return class instance.
