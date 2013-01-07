local Class = require("classBuilder"){name="OSGCanvas",bases="gui.wx.BasicWindow"};

local wx = require "wx"

local osg = require "osg"
local osgwx = require "osgWX"
local i18n = require "i18n"
local cfg = require "config"
local gl = require "luagl"
local Event = require "base.Event"
local prof = require "debugging.Profiler"
local tools = require "osg.Tools"
local fs = require "base.FileSystem"

--- Create an OSG Canvas:
function Class:initialize(options)
	self:debug4("Initializing OSG Canvas.")
	
	self._root = options.root or osg.Group()
	 
	-- create the canvas:
	self:check(wx.WX_GL_RGBA,"Invalid value WX_GL_RGBA")
	self:check(wx.WX_GL_DOUBLEBUFFER,"Invalid value WX_GL_DOUBLEBUFFER")
	self:check(gl.COLOR_BUFFER_BIT,"Invalid value COLOR_BUFFER_BIT")
	self:check(gl.DEPTH_BUFFER_BIT,"Invalid value DEPTH_BUFFER_BIT")
	
	self._attribs = options.attribs or {wx.WX_GL_RGBA,wx.WX_GL_DOUBLEBUFFER}
		
	self:create()
	
	self:debug4("OSG Canvas initialization done.")
end

function Class:create()
	
	self._window = osgWX.createGLCanvas(self._parent,wx.wxID_ANY,self._attribs)
	self:check(self._window,"Invalid wxGLCanvas")
	
	-- Create the glcontext:
	self._context = wx.wxGLContext:new(self._window)
	self:check(self._context,"Invalid wxGLContext")

	-- create a viewer:
	self._viewer = osgViewer.Viewer()
	self._viewer:setCameraManipulator(osgGA.TrackballManipulator())

	-- create graphicswindow:
	self._gw = osgWX.GraphicsWindowWX(self._window,self._context) -- instance owned by lua	

	self._viewer:setSceneData(self._root);
	self._viewer:getCamera():setGraphicsContext(self._gw)
	self._viewer:getCamera():setClearMask(bit.bor(gl.COLOR_BUFFER_BIT,gl.DEPTH_BUFFER_BIT))
	self._viewer:getCamera():setClearColor(osg.Vec4f(1.0,0.0,0.0,1.0))
	--self._viewer:setThreadingModel(osgViewer.ViewerBase.SingleThreaded);
	
	self._viewer:addEventHandler( osgViewer.StatsHandler() )	
	self._viewer:addEventHandler( osgViewer.WindowSizeHandler() )
	
	-- connect the event handlers for the canvas:
	self._intf:connectHandler(self._window,wx.wxEVT_SIZE,function(intf,event)
    	local size = event:GetSize()
    	local ww = size:GetWidth()
    	local hh = size:GetHeight()
		self:debug4("Resizing OSGCanvas to ",ww,"x",hh);
		 
		self._gw:getEventQueue():windowResize(0, 0, ww, hh);
        self._gw:resized(0,0,ww,hh);
		self._viewer:getCamera():setViewport(0,0,ww,hh);
	end)
	
	self:getEventManager():addListener{event=Event.FRAME,object=self}
	
	self:getEventManager():addListener{event=Event.APP_CLOSING,func=function()
		self:info("Removing graphics context from osg canvas.");
		self._viewer:getCamera():setGraphicsContext(nil);
	end}
end

function Class:connectHandlers()
	if self._initialized then
		return
	end
	
	local mouseDownHandler = function(intf,event)
    	--self:info("Sending mouse down event: X=",event:GetX(),", Y=",event:GetY(),", button=",event:GetButton())
		self._gw:getEventQueue():mouseButtonPress(event:GetX(), event:GetY(), event:GetButton())
		--self._viewer:getCamera():setClearColor(osg.Vec4f(0.0,1.0,0.0,1.0))
		--self._viewer:eventTraversal()
		event:Skip();
	end
	
	local mouseUpHandler = function(intf,event)
    	--self:info("Sending mouse up event: X=",event:GetX(),", Y=",event:GetY(),", button=",event:GetButton())
		self._gw:getEventQueue():mouseButtonRelease(event:GetX(), event:GetY(), event:GetButton())
		--self._viewer:getCamera():setClearColor(osg.Vec4f(1.0,0.0,0.0,1.0))
		--self._viewer:eventTraversal()
		event:Skip();
	end
	
	local mouseWheelHandler = function(intf,event)
    	--self:info("Sending mouse wheel event: ",event:GetWheelRotation()>0.0 and "DOWN" or "UP")
		self._gw:getEventQueue():mouseScroll(event:GetWheelRotation()>0.0 and osgGA.GUIEventAdapter.SCROLL_DOWN or osgGA.GUIEventAdapter.SCROLL_UP);
		--self._viewer:eventTraversal()
		event:Skip();
	end

	local mouseMotionHandler = function(intf,event)
    	--self:info("Sending mouse motion event: X=",event:GetX(),", Y=",event:GetY())
		self._gw:getEventQueue():mouseMotion(event:GetX(), event:GetY());
		--self._viewer:eventTraversal()
		event:Skip();
	end

	
	local win = self._window
	-- local win = self._parent
	self._intf:connectHandler(win,wx.wxEVT_LEFT_DOWN,mouseDownHandler)
	self._intf:connectHandler(win,wx.wxEVT_MIDDLE_DOWN,mouseDownHandler)
	self._intf:connectHandler(win,wx.wxEVT_RIGHT_DOWN,mouseDownHandler)
	self._intf:connectHandler(win,wx.wxEVT_LEFT_UP,mouseUpHandler)
	self._intf:connectHandler(win,wx.wxEVT_MIDDLE_UP,mouseUpHandler)
	self._intf:connectHandler(win,wx.wxEVT_RIGHT_UP,mouseUpHandler)
	self._intf:connectHandler(win,wx.wxEVT_MOUSEWHEEL,mouseWheelHandler)
	self._intf:connectHandler(win,wx.wxEVT_MOTION,mouseMotionHandler)
end

function Class:onFrame()
	--self:info("Rendering frame...")
	prof:start("OSG frame")
	if not self._initialized then
		-- Need to change the start tick for the event queue here:
		self._gw:getEventQueue():setStartTick(osg.Timer.instance():tick());
		self:connectHandlers()
		self._initialized = true
	end
	
	self._viewer:frame();
	prof:stop()
	--self:info("Done rendering frame.")
end

function Class:home()
	self._viewer:getCameraManipulator():home(0.0)
end

function Class:getRoot()
	return self._root
end

function Class:getViewer()
	return self._viewer
end

return Class
