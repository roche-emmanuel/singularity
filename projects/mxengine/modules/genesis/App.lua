local Class = require("classBuilder"){name="GenesisApp",bases="osg.OSGTestApp"};

function Class:new(options)
	self:info("Calling new for GenesisApp.")
	-- need to create the webtile here as we will use it in 
	-- setupEventHandlers() before initialization.
	local WebTile = require "gui.web.WebTile"
	self._tile = WebTile{transparent=true,width=1920,height=1080}
end

function Class:setupInterface(options)
	local Interface = require "gui.wx.EntryInterface"
	local im = require "gui.wx.ImageManager"

	local intf = Interface{root=self:getFrame(),handler=self}

	intf:pushPanel{prop=1,flags=wx.wxALL+wx.wxEXPAND}
		local ctrl, canvas = intf:addOSGCtrl{prop=3,handlers=options.handlers}
		self._canvas = canvas;
	
		require "gui.LogPanel" {intf}
		-- self._outputPanel = intf:addOutputPanel{}

	intf:popParent(true)
	
	self:getWindowManager():getMainFrame():SetSize(1280,720)
	
end

function Class:initialize(options)
	self:getRoot():addChild(osg.Node(self._tile))	

	-- build the default scene here:
	self:setupDefaultScene()

	
	local view = self._tile
	
	-- assign a document ready callback:
	-- view:onInitialize(function()
		-- here we can register the global object:
	-- end)
	
	-- self:showOutputPanel(true)

	-- local man = require "gui.web.WebManager"
    -- self:getWebManager():addDataPak("genesis", config.genesis.root_path .. "assets.pak");
	
	-- self._tile:loadURL("asset://genesis/hello.html")	
	-- self._tile:loadURL("http://www.google.fr")

	-- self._tile:loadURL(config.genesis.root_path .. "assets/main.html")	
	self._tile:loadURL(config.genesis.root_path .. "web/app/index.html")	
	-- self._tile:loadURL("W:/Cloud/Projects/singularity/projects/genesis/assets/main.html")	
	-- self._tile:loadURL("W:/Cloud/Projects/singularity/projects/mxengine/web/app/index.html")	
	-- self._tile:loadURL("asset://genesis/main.html")	
end

function Class:setupEventHandlers()
	self:info("Setting up event handlers from genesis app.")
	
	self:getViewer():addEventHandler( self._tile:getEventHandler() )	
	self:getViewer():addEventHandler( osgViewer.StatsHandler() )	
	self:getViewer():addEventHandler( osgViewer.WindowSizeHandler() )
end

return Class 
