local Class = require("classBuilder"){name="WebBookApp",bases="gui.wx.NotebookApp"};

function Class:initialize(options)
	self:addWebPage("http://www.google.fr")
	self:addWebPage("http://www.youtube.fr")
	
	-- obj:loadURL("http://www.smashcat.org/av/canvas_test/")
	-- obj:loadURL("http://oos.moxiecode.com/js_webgl/woods_xmas/")
	-- obj:loadURL("http://www.asterank.com/3d/")
	-- obj:loadURL("http://asmallgame.com/labsopen/webgl_impact/")
	-- obj:loadURL("http://www.doesmybrowsersupportwebgl.com/")
end

function Class:addWebPage(url,webview)
	local WebPage = require "gui.web.WebPage"
	local page = WebPage{parent=self:getMainBook(),webView=webview}
	self:addPage{window=page:getWindow(),caption="My page"}
	
	-- attach the event handlers:
	local tile = page:getWebTile()
	
	tile:addListener{event="onChangeTitle",func=function(handler,event,caller,title)
		self:setPageCaption(page:getWindow(),title)
	end}

	tile:addListener{event="onChangeTargetURL",func=function(handler,event,caller,url)
		self:getFrame():GetStatusBar():SetStatusText(url:spec(),0)
	end}

	tile:addListener{event="onShowCreatedWebView",func=function(handler,event,caller,new_view,opener_url,target_url,initial_pos,is_popup)
		-- we should add a new webpage to the book:
		self:addWebPage(target_url,new_view)
	end}
	
	page:loadURL(url)
	--self._page = page
end

return Class 
