local Class = require("classBuilder"){name="OSGCanvas",bases="base.Object"};

local wx = require "wx"

local osg = require "osg"
local osgwx = require "osgWX"
local osgUtil = require "osgUtil"
local osgGA = require "osgGA"
local osgText = require "osgText"
local osgViewer = require "osgViewer"
local i18n = require "i18n"
local cfg = require "config"

--- Create an OSG Canvas:
function Class:initialize(options)
	self:debug4("Initializing OSG Canvas.")
	
	-- create the canvas:
	self:check(wx.WX_GL_RGBA,"Invalid value WX_GL_RGBA")
	self:check(wx.WX_GL_DOUBLEBUFFER,"Invalid value WX_GL_DOUBLEBUFFER")
	

	local attribs = {wx.WX_GL_RGBA,wx.WX_GL_DOUBLEBUFFER}
	self._canvas = osgWX.createGLCanvas(nil,wx.wxID_ANY,attribs)
	self:check(self._canvas,"Invalid wxGLCanvas")
	
	-- Create the glcontext:
	self._context = wx.wxGLContext:new(self._canvas)
	self:check(self._context,"Invalid wxGLContext")
	

	-- create graphicswindow:
	self._gw = osgWX.GraphicsWindowWX(self._canvas,self._context) -- instance owned by lua

	-- create a viewer:
	local grp = osg.Group:new()
	grp:setName("Hello manu")
	local node = osg.Node:new()
	grp:addChild(node)
	
	local geode = osg.Geode:new()
	grp:addChild(geode)
	
	local txt = osgText.Text()
	txt:setName("my text")
	geode:addDrawable(txt)
	
	local view = osgViewer.View()
	view:setName("my view")
	
	local viewer = osgViewer.Viewer()
	viewer:setName("Hello")
	
	--viewer:setSceneData(grp);
	viewer:setSceneData(osg.Group:new());
	
	self:debug4("OSG Canvas initialization done.")
end

return Class
