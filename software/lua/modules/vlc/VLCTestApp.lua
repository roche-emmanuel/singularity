local Class = require("classBuilder"){name="TUIOTestApp",bases="osg.OSGTestApp"};

local vlc = require "vlc"
local tools = require "osg.Tools"
local fs = require "base.FileSystem"
local gl = require "luagl"

function Class:initialize(options)
	options = options or {}
	
	local file = fs:getRootPath(true) .. options.file;
	
	--self:info("Creating test object...")
	--local obj = vlc.Test();
	--self:info("Test object created.")
	
	self:info("Trying to create image...")
	local img = vlc.VLCImageStream();
	self:info("Trying to load movie...")
	img:open(file);

	--local geode = tools:createScreenQuad{image=img}
	
	self:info("Adding geode to scenegraph...")
	self:getRoot():addChild(geode);
	
	--local mt = self:loadModel("tests/data/glider.osgt")
	--self:createCube(1)
	--self:createBase()
	--self:applyCircleAnimation(mt, 4.0, 6.0)

	
	--self:getViewer():addEventHandler( tuio.TUIOClientHandler(3333) );
    --self:getViewer():setCameraManipulator( osgGA.MultiTouchTrackballManipulator() );
	
	--self:home()
end

return Class -- return class instance.
