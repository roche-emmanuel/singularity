local Class = require("classBuilder"){name="GenesisApp",bases="osg.OSGTestApp"};

function Class:new(options)
	self:info("Calling new for GenesisApp.")
	local WebTile = require "gui.web.WebTile"
	self._tile = WebTile{transparent=true,width=1920,height=1080}
end

function Class:initialize(options)
	self:getRoot():addChild(osg.Node(self._tile))	
	
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
		
	if true then
	local view = self._tile
	
	-- assign a document ready callback:
	view:onDocumentReady(function()
		-- here we can register the global object:
		if not self._initialized then
			self._initialized = true;
		end
	end)
	end
	
	self:showOutputPanel(false)

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
