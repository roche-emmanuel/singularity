local Class = require("classBuilder"){name="TurretView",bases={"gui.wx.OSGCanvas","osg.CanvasExtensions"}};

local tools = require "osg.Tools"

function Class:initialize(options)
	self:debug("Creating TurretView")

	--[[
	local WebTile = require "gui.web.WebTile"
	self._tile = WebTile{transparent=true,width=1920,height=1080}
	
	self:addListener{event="onResize",name="TurretView",func=function(handler,eventName,ww,hh)
		--self:warn("Should resize the webtile here to ",ww,"x",hh)
		self._tile:resize(ww,hh)
	end}
	]]
	self:setupEventHandlers()
	
	self:setup()	
end

function Class:setupEventHandlers()
	self:info("Setting up event handlers from OSG app.")
	if self._tile then
		self:getViewer():addEventHandler( self._tile:getEventHandler() )
	end
	self:getViewer():addEventHandler( osgViewer.StatsHandler() )	
	self:getViewer():addEventHandler( osgViewer.WindowSizeHandler() )
end

function Class:setup()
	--self:getRoot():addChild(osg.Node(self._tile))	
	
	--self:createCube(1)
	
	--[[
	local mt = self:loadModel("tests/data/glider.osgt")
	self:createCube(1)
	self:createBase()
	self:applyCircleAnimation(mt, 4.0, 6.0)
	
	local tools = require "osg.Tools"
	
	local sb = tools:createSkyBox{
		x_pos="skybox1/right.jpg",
		x_neg="skybox1/left.jpg",
		y_pos="skybox1/front.jpg",
		y_neg="skybox1/back.jpg",
		z_pos="skybox1/top.jpg",
		z_neg="skybox1/bottom.jpg",
	}
	
	self:getRoot():addChild(sb)
	]]
	--local scene = require("scenes.TestScene1")()
	--self:getRoot():addChild(scene:getRoot())
	
	local Turret = require "genesis.turret.Turret"
	self._turret = Turret{name="my_turret"}
	
	self:getRoot():addChild(self._turret:getRoot())
	
	-- add a screen quad for the video output display:
	self._videoQuad = tools:createScreenQuad{}
	self._videoStateSet = self._videoQuad:getOrCreateStateSet()
	--tools:createTexture2DProgram{stateSet=self._videoStateSet}
	
	local shman = require "osg.ShaderManager"
	-- local prog = shman:loadProgram{"test_half_red"}
	local prog = shman:loadProgram{"copy_texture"}
	
	self._videoStateSet:setAttributeAndModes(prog)
	self._videoStateSet:getOrCreateUniform("tex",osg.Uniform.SAMPLER_2D):setInt(0);
		
	self:getRoot():addChild(self._videoQuad)
	
	self._viewer:setCameraManipulator(nil)
	
	local output = self._turret:getVideoOutput(config.genesis.default_video_output)
	
	self:setVideoOutput(output)
	
	--[[
	local view = self._tile:getWebView()

	self._hand = require("genesis.GenesisHandler")()
	view:set_js_method_handler(self._hand:getHandler())

	-- This is needed to force initialization of the window object ??
	local res = view:ExecuteJavascriptWithResult("window","");
	
	require("gui.web.objects.Logger"){name="log",view=view}
	
	local sgtVal = view:CreateGlobalJavascriptObject("sgt")
	
	self:check(sgtVal:IsObject(),"Invalid sgtVal object")
	sgtVal = sgtVal:ToObject()
	local id = sgtVal:remote_id()
	self:info("sgtVal remote id is: ",id)
	sgtVal:SetCustomMethod("logInfo",false)

	-- local man = require "gui.web.WebManager"
    self:getWebManager():addDataPak("genesis", config.genesis.root_path .. "assets.pak");
	
	-- self._tile:loadURL("asset://genesis/hello.html")	
	-- self._tile:loadURL("http://www.google.fr")

	self._tile:loadURL(config.genesis.root_path .. "assets/main.html")	
	-- self._tile:loadURL("asset://genesis/main.html")	
	]]
end

function Class:setVideoOutput(output)
	self:debug("Assigning output ",output:getName()," to TurretView")
	self._videoOutput = output
	
	-- apply the sensor texture on the view quad:
	local tex = output:getColorTexture()
	self._videoStateSet:setTextureAttributeAndModes(0,tex);
end

return Class 
