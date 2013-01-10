local Class = require("classBuilder"){name="WebBookApp",bases="gui.wx.NotebookApp"};

function Class:new(options)
	-- self:info("Calling new for WebBookApp.")
	--local WebTile = require "gui.web.WebTile"
	--self._obj = WebTile()
end

function Class:initialize(options)
	self:addWebPage("http://www.google.fr")
	
	-- obj:loadURL("http://www.smashcat.org/av/canvas_test/")
	-- obj:loadURL("http://oos.moxiecode.com/js_webgl/woods_xmas/")
	-- obj:loadURL("http://www.asterank.com/3d/")
	-- obj:loadURL("http://asmallgame.com/labsopen/webgl_impact/")
	-- obj:loadURL("http://www.doesmybrowsersupportwebgl.com/")
end

function Class:addWebPage(url)
	local WebPage = require "gui.web.WebPage"
	local page = WebPage()
	self:addPage{window=page:getWindow(),caption="My page"}
	page:loadURL(url)
end

return Class 
