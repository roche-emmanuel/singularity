local Class = require("classBuilder"){name="GenesisApp",bases="osg.OSGTestApp"};

function Class:new(options)
	self:info("Calling new for GenesisApp.")
	local WebTile = require "gui.web.WebTile"
	self._tile = WebTile()
end

function Class:initialize(options)
	self:getRoot():addChild(osg.Node(self._tile))
	-- self._tile:loadURL("http://www.google.fr")
	self._tile:loadURL(config.genesis_path .. "web/overlays.html")
	
	self:showOutputPanel(false)
end

function Class:setupEventHandlers()
	self:info("Setting up event handlers from genesis app.")
	
	self:getViewer():addEventHandler( self._tile:getEventHandler() )	
	self:getViewer():addEventHandler( osgViewer.StatsHandler() )	
	self:getViewer():addEventHandler( osgViewer.WindowSizeHandler() )
end

return Class 
