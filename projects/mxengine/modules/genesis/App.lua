local Class = require("classBuilder"){name="GenesisApp",bases="osg.OSGTestApp"};

local awe = require "Awesomium"

local menu_list = { "menu", "menu.gimbal", "menu.EOW", "menu.IR", "menu.EON", "menu.ELRF", "menu.AVT",
				    "menu.illuminator1", "menu.video_io", "menu.operator_gimbal", "menu.operator_payload",
					"menu.mission", "menu.digital_overlays", "menu.analog_overlays", "menu.steering_modes",
					"menu.profiles","menu.EOW.misc", "menu.IR.misc","menu.steering_modes.geoscan",
					"menu.steering_modes.points_of_interest", "menu.LDR", "menu.digital_transmitter",
					"menu.analog_transmitter", "menu.digital_transmitter.edit_encryption_id", "menu.mx_pod",
					"menu.mx_pod.edit_waypoints"}

function Class:new(options)
	self:info("Calling new for GenesisApp.")
	-- need to create the webtile here as we will use it in 
	-- setupEventHandlers() before initialization.
	-- local WebTile = require "gui.web.WebTile"
	local WebTile = require "genesis.OverlayWebTile"
	self._tile = WebTile{transparent=true,width=1920,height=1080}
end

function Class:setupInterface(options)
	local Interface = require "gui.wx.EntryInterface"
	local im = require "gui.wx.ImageManager"

	local intf = Interface{root=self:getFrame(),handler=self}

	intf:pushPanel{prop=1,flags=wx.wxALL+wx.wxEXPAND}
		
		local ctrl, canvas = intf:addOSGCtrl{prop=3,handlers=options.handlers}
		self._canvas = canvas;
	
		intf:pushSizer{orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxALL+wx.wxEXPAND}
		intf:addActionButtonEntry{name="reload_web_page",caption="reload",src="reload",
								  tip="Reload web view",handler="reloadWebPage",
								  validItemOnly=true}
		intf:addActionButtonEntry{name="toggle_overlays",caption="toggle_overlays",src="overlays",
								  tip="Toggle overlay display",handler="toggleOverlays",
								  validItemOnly=true}		
		intf:addActionButtonEntry{name="toggle_menus",caption="toggle_menus",src="menu",
								  tip="Toggle menu display",handler="toggleMenus",
								  validItemOnly=true}	
		intf:addSpacer{prop=1}
		
		intf:addSingleChoiceEntry{name="selected_menu",prop=0,caption="Current menu",
		choices=menu_list, handler="updateCurrentMenu"}
		
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
	elseif fval:find("{") then
		-- this is an array, we should extract the values:
		local p1, p2, v1, v2 = fval:find("{([0-9]+)%s*,%s*([0-9]+)%s*}")
		self:info("Extracted values: ",v1," and ",v2)
		fval = {v1, v2}
	end
	
	self._tile:setFields{ [fname] = fval }
	self:info("field was set.")	
end

function Class:reloadWebPage(data)
	self:info("Reloading page...")
	self._tile:reload()
end

function Class:initialize(options)
	self:getRoot():addChild(osg.Node(self._tile))	

	-- build the default scene here:
	self:setupDefaultScene()

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

function Class:toggleOverlays()
	self._tile:call("toggleOverlays")
end

function Class:toggleMenus()
	self._tile:call("toggleMenus")
end

function Class:updateCurrentMenu(data)
	self:info("Showing menu: ",data.value)
	-- self._tile:call("showMenu",data.value)
	self._tile:call("setMenuSelection",data.value,"done")
end

return Class 
