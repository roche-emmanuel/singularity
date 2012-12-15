local Class = require("classBuilder"){name="OSGCanvas",bases="gui.wx.BasicWindow"};

local wx = require "wx"

local osg = require "osg"
local osgwx = require "osgWX"
local i18n = require "i18n"
local cfg = require "config"
local gl = require "luagl"
local Event = require "base.Event"

--- Create an OSG Canvas:
function Class:initialize(options)
	self:debug4("Initializing OSG Canvas.")
	self:check(options.intf,"Invalid interface in OSGCanvas constructor.")

	local intf = options.intf
	
	self._root = options.root or osg.Group()
	 
	-- create the canvas:
	self:check(wx.WX_GL_RGBA,"Invalid value WX_GL_RGBA")
	self:check(wx.WX_GL_DOUBLEBUFFER,"Invalid value WX_GL_DOUBLEBUFFER")
	self:check(gl.COLOR_BUFFER_BIT,"Invalid value COLOR_BUFFER_BIT")
	self:check(gl.DEPTH_BUFFER_BIT,"Invalid value DEPTH_BUFFER_BIT")
	
	self._attribs = options.attribs or {wx.WX_GL_RGBA,wx.WX_GL_DOUBLEBUFFER}
	
	--self._intf:addListener("InterfaceClosing",self)
	
	self:create()
	
	self:debug4("OSG Canvas initialization done.")
end

--function Class:onInterfaceClosing()
	--self:info("Deleting viewer...")
	--self._viewer = nil
--end

function Class:create()
	
	self._window = osgWX.createGLCanvas(self._parent,wx.wxID_ANY,self._attribs)
	self:check(self._window,"Invalid wxGLCanvas")
	
	-- Create the glcontext:
	self._context = wx.wxGLContext:new(self._window)
	self:check(self._context,"Invalid wxGLContext")

	-- create graphicswindow:
	self._gw = osgWX.GraphicsWindowWX(self._window,self._context) -- instance owned by lua
	
	-- create a viewer:
	self._viewer = osgViewer.Viewer()
	
	
	self._viewer:setSceneData(self._root);
	self._viewer:getCamera():setGraphicsContext(self._gw)
	self._viewer:getCamera():setClearMask(bit.bor(gl.COLOR_BUFFER_BIT,gl.DEPTH_BUFFER_BIT))
	self._viewer:getCamera():setClearColor(osg.Vec4f(1.0,0.0,0.0,1.0))
		
		
	--self._viewer:frame()
	
	-- connect the event handlers for the canvas:
	self._intf:connectHandler(self._window,wx.wxEVT_SIZE,function(intf,event)
    	--local evt = event:dynCast("wxSizeEvent")
    	--self:check(event,"Invalid wxSizeEvent")
    	local size = event:GetSize()
    	local ww = size:GetWidth()
    	local hh = size:GetHeight()
		self:debug4("Resizing OSGCanvas to ",ww,"x",hh);
		 
		self._gw:getEventQueue():windowResize(0, 0, ww, hh);
        self._gw:resized(0,0,ww,hh);
		self._viewer:getCamera():setViewport(0,0,ww,hh);
		
		self._viewer:frame();
	end)

	self:getEventManager():addListener(Event.FRAME,self)
end

function Class:onFrame()
	--self:info("Rendering frame...")
	self._viewer:frame();
end

-- Function used to load a model from a file.
function Class:loadModel(filename)
	self:checkString(filename,"Invalid model filename")
	local node = osg.readNodeFile(filename)
	if not node then
		self:warn("Cannot load model from file: ",filename)
		return;
	end
	
	-- The node was loaded properly,
	-- now add it to the scenegraph:
	self._viewer:getSceneData():addChild(node)
	self:debug2_v("Successfully loaded model from file ", filename)
end

function Class:createScreenQuad()
	self:debug3("Creating screen quad.");
	
	local geode = osg.Geode()
	self._root:addChild(geode)
	geode:setCullingActive(false);
	
	local geom = osg.Geometry()
	geode:addDrawable(geom);

	local vertices = osg.Vec2Array();
	geom:setVertexArray(vertices);

    vertices:push_back(osg.Vec2f(-1.0,-1.0));
    vertices:push_back(osg.Vec2f(1.0,-1.0));
    vertices:push_back(osg.Vec2f(-1.0,1.0));
    vertices:push_back(osg.Vec2f(1.0,1.0));
	
    local colors = osg.Vec4Array()
    colors:push_back(osg.Vec4f(0.0,0.0,1.0,1.0));
    geom:setColorArray(colors)
    geom:setColorBinding(osg.Geometry.BIND_OVERALL)
	
	geom:addPrimitiveSet(osg.DrawArrays(osg.PrimitiveSet.TRIANGLE_STRIP,0,4));
	
	local prog = osg.Program();
	
	local vs = osg.Shader(osg.Shader.VERTEX);
	vs:setShaderSource([[
varying vec2 coords;

void main() {
    gl_Position = gl_Vertex;
    coords = (gl_Vertex.xy+vec2(1.0,1.0))/2.0;
}	
	]]);
	
	local fs = osg.Shader(osg.Shader.FRAGMENT);	
	fs:setShaderSource([[
void main() {
    gl_FragColor = vec4(0.0,1.0,0.0,1.0);
}
	]]);
	
	prog:addShader(vs)
	prog:addShader(fs)
	
	local ss = geode:getOrCreateStateSet()	
	ss:setAttributeAndModes(prog)	
end

return Class
