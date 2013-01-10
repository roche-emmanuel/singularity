local Class = require("classBuilder"){name="WebPage",bases="gui.wx.BasicWindow"};

function Class:new(options)
	self:info("Calling new for WebTestApp.")
	local WebTile = require "gui.web.WebTile"
	self._tile = WebTile()
end

function Class:initialize(options)
	-- we may use self._intf and self._parent when building our content.
	local Interface = require "gui.wx.ControlInterface"
	
	self._window = self:createPanel(self._parent) -- we assume that the parent is valid.
	
	local intf = Interface{root=self._window}
	
	self:buildInterface(intf,options)
	
	self:getRoot():addChild(self._tile:getWrapper())
end

function Class:buildInterface(intf, options)
	intf:pushPanel{prop=1,flags=wx.wxALL+wx.wxEXPAND}
	local ctrl, canvas = intf:addOSGCtrl{prop=1,handlers=options.handlers}
	intf:popParent(true)
	self._canvas = canvas;	
	
	self:setupEventHandlers()
end

function Class:setupEventHandlers()
	self:info("Setting up event handlers from Web app.")
	
	self:getViewer():addEventHandler( self._tile:getEventHandler() )	
	self:getViewer():addEventHandler( osgViewer.StatsHandler() )	
	self:getViewer():addEventHandler( osgViewer.WindowSizeHandler() )
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

return Class
