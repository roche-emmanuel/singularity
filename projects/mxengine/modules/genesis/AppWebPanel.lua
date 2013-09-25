local Class = require("classBuilder"){name="GenesisApp",bases="osg.OSGTestApp"};

local awe = require "Awesomium"

function Class:new(options)
	self:info("Calling new for GenesisApp.")
	-- need to create the webtile here as we will use it in 
	-- setupEventHandlers() before initialization.
	-- local WebTile = require "gui.web.WebTile"
	local WebTile = require "genesis.OverlayWebTile"
	-- self._tile = WebTile{transparent=true,width=1920,height=1080}
end

function Class:setupInterface(options)
	local Interface = require "gui.wx.EntryInterface"
	local im = require "gui.wx.ImageManager"

	local intf = Interface{root=self:getFrame(),handler=self}

	intf:pushPanel{prop=1,flags=wx.wxALL+wx.wxEXPAND}
		
		intf:pushSizer{orient=wx.wxHORIZONTAL,prop=3,flags=wx.wxALL+wx.wxEXPAND}
			local ctrl, canvas = intf:addOSGCtrl{prop=1,handlers=options.handlers}
			self._canvas = canvas;
			
			ctrl = canvas:getGLCanvas()
			self._tile = require "gui.wx.WebOverlay" { transparent=true, window = ctrl }
			-- self._tile:loadURL("http://www.google.fr")
			self._tile:loadURL(config.genesis.root_path .. "web/app/index.html")	
			
			-- if not ctrl:GetSizer() then
				-- ctrl:SetSizer(wx.wxBoxSizer:new(wx.wxHORIZONTAL))
			-- end
			
			-- intf:pushParent(ctrl,ctrl:GetSizer())
				-- local ctrl, webPanel = intf:addCustomWindow{"gui.wx.WebPanel",prop=1,flags=wx.wxALL+wx.wxEXPAND}
				-- webPanel:loadURL("http://www.google.fr")
				-- webPanel:loadURL(config.genesis.root_path .. "web/app/index.html")	
				-- self._webPanel = webPanel;
				-- ctrl:SetTransparent(50)
				-- ctrl:SetSize(wx.wxSize(100,100))
			-- intf:popParent(true)
			
		intf:popSizer()
		
		intf:pushSizer{orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxALL+wx.wxEXPAND}
		intf:addActionButtonEntry{name="reload_web_page",caption="reload",src="reload",
								  tip="Reload web view",handler="reloadWebPage",
								  validItemOnly=true}
		
		intf:addSpacer{prop=1}
		
		intf:addStringEntry{name="field_name",caption="Field"}
		intf:addStringEntry{name="field_value",caption="Value"}
		
		intf:addActionButtonEntry{name="set_field",src="check",
								  tip="Set the field value",handler="setField",
								  validItemOnly=true}
		intf:popSizer()
		require "gui.LogPanel" {intf}


	intf:popParent(true)
	
	self:getWindowManager():getMainFrame():SetSize(1280,720)
end

function Class:setField(data)		
	self:info("Setting field value...")
	local fname = data.item:get("field_name")
	local fval = data.item:get("field_value")
	if fval=="true" then
		fval = true
	elseif fval=="false" then
		fval = false
	end
	
	self._tile:setFields{ [fname] = fval }
	self:info("field was set.")	
end

function Class:reloadWebPage(data)
	self:info("Reloading page...")
	-- self._tile:reload()
	-- self:info("Destroying...")
	-- self._webPanel:destroy()
	-- self:info("Done")	
end

function Class:initialize(options)
	-- self:getRoot():addChild(osg.Node(self._tile))	

	-- build the default scene here:
	self:setupDefaultScene()

	-- local man = require "gui.web.WebManager"
    -- self:getWebManager():addDataPak("genesis", config.genesis.root_path .. "assets.pak");
	
	-- self._tile:loadURL("asset://genesis/hello.html")	
	-- self._tile:loadURL("http://www.google.fr")

	-- self._tile:loadURL(config.genesis.root_path .. "assets/main.html")	
	-- self._tile:loadURL(config.genesis.root_path .. "web/app/index.html")	
	-- self._tile:loadURL("W:/Cloud/Projects/singularity/projects/genesis/assets/main.html")	
	-- self._tile:loadURL("W:/Cloud/Projects/singularity/projects/mxengine/web/app/index.html")	
	-- self._tile:loadURL("asset://genesis/main.html")	
end

function Class:setupEventHandlers()
	self:info("Setting up event handlers from genesis app.")
	
	-- self:getViewer():addEventHandler( self._tile:getEventHandler() )	
	self:getViewer():addEventHandler( osgViewer.StatsHandler() )	
	self:getViewer():addEventHandler( osgViewer.WindowSizeHandler() )
end

return Class 
