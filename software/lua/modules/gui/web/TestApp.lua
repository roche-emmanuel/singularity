local Class = require("classBuilder"){name="WebTestApp",bases="osg.OSGTestApp"};

function Class:initialize(options)
	local WebTile = require "gui.web.WebTile"
	local obj = WebTile()
	self:getRoot():addChild(obj:getWrapper())
	obj:loadURL("http://www.google.fr")
	-- obj:loadURL("http://www.smashcat.org/av/canvas_test/")
	-- obj:loadURL("http://oos.moxiecode.com/js_webgl/woods_xmas/")
	-- obj:loadURL("http://www.asterank.com/3d/")
	-- obj:loadURL("http://asmallgame.com/labsopen/webgl_impact/")
	-- obj:loadURL("http://www.doesmybrowsersupportwebgl.com/")
end

return Class 
