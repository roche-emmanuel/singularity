#!/bin/sgt

require "luna"
 
--require("mobdebug").start()

-- needed for the core module.
local log = require "logger"
log:notice "Executing init script..."

-- retrieve config:
local cfg = require "config"
local core = require "core"

core.LogManager.instance():setNotifyLevel(core.LogManager.DEBUG2)

local App = require "osg.OSGTestApp"
local app = App{profileFile="test_spark_profile.log"}

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

app:getRoot():addChild(geode)
app:getViewer():addEventHandler( handler );

app:run()
	
log:notice "Script execution done."
