local Class = require("classBuilder"){name="GenesisApp",bases="osg.OSGTestApp"};

local awe = require "Awesomium"

function Class:new(options)
	self:info("Calling new for GenesisApp.")
	local WebTile = require "gui.web.WebTile"
	self._tile = WebTile{transparent=true}
end

function Class:initialize(options)
	self:getRoot():addChild(osg.Node(self._tile))
	-- self._tile:loadURL("http://www.google.fr")
	self._tile:loadURL(config.genesis_path .. "web/overlays.html")
	
	local view = self._tile:getWebView()
	
	local mt = self:loadModel("tests/data/glider.osgt")
	self:createCube(1)
	self:createBase()
	self:applyCircleAnimation(mt, 4.0, 6.0)
	
	-- This is needed to force initialization of the window object ??
	local res = view:ExecuteJavascriptWithResult("window","");
	
	local sgtVal = view:CreateGlobalJavascriptObject("sgt")
	
	self:check(sgtVal:IsObject(),"Invalid sgtVal object")
	sgtVal = sgtVal:ToObject()
	sgtVal:SetCustomMethod("logInfo",false)
	
	--local res = view:ExecuteJavascript("window",""); --.innerWidth
	--local err = view:last_error()
	--if err~=awe.kError_None then
	--	self:error("Received error code: ", err)
	--end
	
	--self:check(res:IsInteger(),"Invalid integer result")
	--res = res:ToInteger()
	--self:info("Received res=",res)
	
	self:showOutputPanel(false)
end

function Class:setupEventHandlers()
	self:info("Setting up event handlers from genesis app.")
	
	self:getViewer():addEventHandler( self._tile:getEventHandler() )	
	self:getViewer():addEventHandler( osgViewer.StatsHandler() )	
	self:getViewer():addEventHandler( osgViewer.WindowSizeHandler() )
end

return Class 
