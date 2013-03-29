local Class = require("classBuilder"){name="GenesisScreen",bases="base.Object"};

local wx = require "wx"
local awe = require "Awesomium"
local tools = require "osg.Tools"
local fs = require "base.FileSystem"

function Class:initialize(options)
	self:debug("Creating Genesis screen.")
	local winman = require "gui.wx.WindowManager"
	
    self._frame = wx.wxMiniFrame:new( nil, --winman:getMainFrame(),
                wx.wxID_ANY,          -- don't need a wxWindow ID
                "turret view",-- caption on the frame
                wx.wxPoint(-1,-1), -- let system place the frame
                wx.wxSize(450, 450),  -- set the size of the frame
                wx.wxCAPTION+wx.wxRESIZE_BORDER ) -- use default frame styles

	local WebTile = require "gui.web.WebTile"
	self._tile = WebTile{transparent=true,width=1920,height=1080}
	
	local Interface = require "gui.wx.ControlInterface"
	local intf = Interface{root=self:getFrame()}
	
	intf:pushPanel{prop=1,flags=wx.wxALL+wx.wxEXPAND}
	local ctrl, canvas = intf:addOSGCtrl{prop=3}
	self._outputPanel = intf:addOutputPanel{}
	intf:popParent(true)
	
	self._canvas = canvas;

	-- self._canvas:addListener{event="onClose",name="Screen",func=function()
		-- self._tile:release()
		-- self._tile = nil;
	-- end}
	
	self:getFrame():SetSize(1280,720)
	
	self:getFrame():Layout()

	self:setupEventHandlers()
	
	self:setup()
	
	self:show()
end

function Class:destroy()
	self._canvas:release()
	self._frame:Close()
end

function Class:getRoot()
	return self._canvas:getRoot()
end

function Class:getViewer()
	return self._canvas:getViewer()
end

function Class:getCanvas()
	return self._canvas
end

function Class:showOutputPanel(enabled)
	local sizer = self._outputPanel:GetParent():GetSizer()
	sizer:Show(self._outputPanel,enabled==nil or enabled)
	sizer:Layout()
end

function Class:getFrame()
	return self._frame
end

function Class:show()
	self._frame:Show(true)
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
	
	self:showOutputPanel(false)

	-- local man = require "gui.web.WebManager"
    self:getWebManager():addDataPak("genesis", config.genesis_path .. "assets.pak");
	
	-- self._tile:loadURL("asset://genesis/hello.html")	
	-- self._tile:loadURL("http://www.google.fr")

	self._tile:loadURL(config.genesis_path .. "assets/main.html")	
	-- self._tile:loadURL("asset://genesis/main.html")	
end

-------------------------------------------
-- some test functions:

function Class:loadModel(filename)
	local node = tools:loadModel(fs:getRootPath(true) .. filename)
	
	local mt = osg.MatrixTransform()
	mt:addChild(node)
	
	self._canvas:getRoot():addChild(mt)
	self._canvas:home()
	return mt
end


function Class:home()
	self._canvas:home()
end

function Class:createCube(size)
	local cube = osg.Box(osg.Vec3f(0.0,0.0,0.0),size)
	local drawable = osg.ShapeDrawable(cube,nil)
	local geode = osg.Geode()
	geode:addDrawable(drawable)

	self._canvas:getRoot():addChild(geode)
	self._canvas:home()
	return geode	
end

function Class:createCircleAnimationPath(radius, duration )
	local path = osg.AnimationPath();
	path:setLoopMode(osg.AnimationPath.LOOP)
	    
    local numSamples = 32;
    local delta_yaw = 2.0 * math.pi/(numSamples - 1.0);
    local delta_time = duration / numSamples;
    for i=0,numSamples-1 do
        local yaw = delta_yaw * i;
        local pos = osg.Vec3d(math.sin(yaw)*radius, math.cos(yaw)*radius, 0.0);
        local rot = osg.Quat( -yaw, osg.ZAXIS );
        path:insert( delta_time * i, osg.AnimationPath_ControlPoint(pos, rot) );
    end
	
    return path;    
end

function Class:applyCircleAnimation(model, radius, dur)
	local apcb = osg.AnimationPathCallback();
	apcb:setAnimationPath( self:createCircleAnimationPath(radius, dur));
	model:setUpdateCallback( apcb );
end

function Class:createBase(options)
	local base = tools:createQuad()
	self._canvas:getRoot():addChild(base)
end

return Class 
