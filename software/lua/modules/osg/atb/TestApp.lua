local Class = require("classBuilder"){name="ATBTestApp",bases="osg.OSGTestApp"};

local tools = require "osg.Tools"
local fs = require "base.FileSystem"

function Class:initialize(options)
	options = options or {}
		
	local mt = self:loadModel("tests/data/glider.osgt")
	self:createCube(1)
	self:createBase()
	self:applyCircleAnimation(mt, 4.0, 6.0)
	
	local manager = require "osg.atb.Manager"
	local context = manager:getContext()
	
	local win = context:createWindow("HelloWindow")
	win:addSeparator()
	
	self:getViewer():addEventHandler( context:getEventHandler() );
	self:getViewer():getCamera():setFinalDrawCallback( context:getDrawCallback() );
	
	self:home()
end

return Class 
