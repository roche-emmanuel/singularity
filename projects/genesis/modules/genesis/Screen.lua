local Class = require("classBuilder"){name="GenesisBasicScreen",bases="base.Object"};

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

function Class:getFrame()
	return self._frame
end

function Class:show()
	self._frame:Show(true)
end

return Class 
