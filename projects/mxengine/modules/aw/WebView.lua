local Class = require("classBuilder"){name="WebView",bases={"gui.web.View","dx.TextureObjectProxy"}};

local awe = require "Awesomium"
local wman = require "aw.DXWebManager"

function Class:initialize(options)
	--self:check(options and options.width and options.height,"Invalid dimensions for WebView")
	
	--self:debug2_v("Creating WebView...")
	--self._webView = wman:createWebView{width=options.width,height=options.height}
	self._textureObject = wman:getSurfaceFactory():getTable():getOrCreateTextureObject(self._webView)
	self:check(self._textureObject,"Invalid WebView texture object.")
	self._textureObject:setSize(options.width,options.height) -- ensure the textureObject gets invalidated here is needed.
	
	-- self._webView:SetTransparent(options and options.transparent or false)
end

--[[
Function: release

Method called to release the resources created for this WebView
]]
function Class:releaseWebView()
	if self._webView then
		wman:destroyWebView(self._webView)
	end
end

function Class:getTextureObject()
	return self._textureObject
end

function Class:getView()
	return self._webView
end

function Class:getManager()
	return require "aw.DXWebManager"
end

function Class:onDocumentReady(view)
	self:info("DOM ready.")
	if not self._initialized then
		-- self._initialized = true
		
		-- perform the initialization here:
		self:info("Calling updateFunc...")
		view:ExecuteJavascript("updateFunc();","")
		self:info("updateFunc called.")
	end
end

return Class
