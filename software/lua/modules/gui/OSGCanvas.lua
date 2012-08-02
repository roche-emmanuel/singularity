local Class = require("classBuilder"){name="OSGCanvas",bases="base.Object"};

local wx = require "wx"

local osg = require "osg"
local osgUtil = require "osgUtil"
local osgGA = require "osgGA"
local osgText = require "osgText"
local osgViewer = require "osgViewer"
local osgwx = require "osgWX"
local i18n = require "i18n"
local cfg = require "config"
local gl = require "luagl"

--- Create an OSG Canvas:
function Class:initialize(options)
	self:debug4("Initializing OSG Canvas.")
	
	-- create the canvas:
	self:check(wx.WX_GL_RGBA,"Invalid value WX_GL_RGBA")
	self:check(wx.WX_GL_DOUBLEBUFFER,"Invalid value WX_GL_DOUBLEBUFFER")
	self:check(gl.COLOR_BUFFER_BIT,"Invalid value COLOR_BUFFER_BIT")
	self:check(gl.DEPTH_BUFFER_BIT,"Invalid value DEPTH_BUFFER_BIT")
	
	local attribs = {wx.WX_GL_RGBA,wx.WX_GL_DOUBLEBUFFER}
	self._canvas = osgWX.createGLCanvas(options.parent,wx.wxID_ANY,attribs)
	self:check(self._canvas,"Invalid wxGLCanvas")
	
	-- Create the glcontext:
	self._context = wx.wxGLContext:new(self._canvas)
	self:check(self._context,"Invalid wxGLContext")

	-- create graphicswindow:
	self._gw = osgWX.GraphicsWindowWX(self._canvas,self._context) -- instance owned by lua

	-- create a viewer:
	self._viewer = osgViewer.Viewer()
	self._viewer:setSceneData(osg.Group());
	self._viewer:getCamera():setGraphicsContext(self._gw)
	self._viewer:getCamera():setClearMask(bit.bor(gl.COLOR_BUFFER_BIT,gl.DEPTH_BUFFER_BIT))
	self._viewer:getCamera():setClearColor(osg.Vec4f(1.0,0.0,0.0,1.0))
	
	self._viewer:frame()
	
	-- connect the event handlers for the canvas:
    self._canvas:connect(wx.wxID_ANY,wx.wxEVT_SIZE,function(event)
    	local evt = event:dynCast("wxSizeEvent")
    	self:check(evt,"Invalid wxSizeEvent")
    	local size = evt:GetSize()
    	local ww = size:GetWidth()
    	local hh = size:GetHeight()
		self:debug4("Resizing OSGCanvas to ",ww,"x",hh);
		 
		self._gw:getEventQueue():windowResize(0, 0, ww, hh);
        self._gw:resized(0,0,ww,hh);
		self._viewer:getCamera():setViewport(0,0,ww,hh);
		
		self._viewer:frame();
	end)
	
	self:debug4("OSG Canvas initialization done.")
end

return Class
