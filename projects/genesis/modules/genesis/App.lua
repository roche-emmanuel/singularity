local Class = require("classBuilder"){name="GenesisApp",bases="osg.OSGTestApp"};

local awe = require "Awesomium"

function Class:new(options)
	self:info("Calling new for GenesisApp.")
	local WebTile = require "gui.web.WebTile"
	self._tile = WebTile{transparent=true}
end

function Class:initialize(options)
	self:getRoot():addChild(osg.Node(self._tile))	
	
	local mt = self:loadModel("tests/data/glider.osgt")
	self:createCube(1)
	self:createBase()
	self:applyCircleAnimation(mt, 4.0, 6.0)
	
	local view = self._tile:getWebView()

	self._hand = require("genesis.GenesisHandler")()
	view:set_js_method_handler(self._hand:getHandler())

	-- This is needed to force initialization of the window object ??
	local res = view:ExecuteJavascriptWithResult("window","");
	
	local sgtVal = view:CreateGlobalJavascriptObject("sgt")
	
	self:check(sgtVal:IsObject(),"Invalid sgtVal object")
	sgtVal = sgtVal:ToObject()
	local id = sgtVal:remote_id()
	self:info("sgtVal remote id is: ",id)
	sgtVal:SetCustomMethod("logInfo",false)
	
	self:showOutputPanel(false)

	-- local man = require "gui.web.WebManager"
    self:getWebManager():addDataPak("genesis", config.genesis_path .. "genesis_assets.pak");
	
	-- self._tile:loadURL("http://www.google.fr")
	-- self._tile:loadURL(config.genesis_path .. "web/overlays.html")	
	self._tile:loadURL("asset://genesis/overlays.html")	
	-- self._tile:loadURL("asset://genesis/hello.html")	
end

function Class:setupEventHandlers()
	self:info("Setting up event handlers from genesis app.")
	
	self:getViewer():addEventHandler( self._tile:getEventHandler() )	
	self:getViewer():addEventHandler( osgViewer.StatsHandler() )	
	self:getViewer():addEventHandler( osgViewer.WindowSizeHandler() )
end

return Class 
