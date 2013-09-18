local Class = require("classBuilder"){name="WebView",bases={"gui.web.View","dx.TextureObjectProxy","aw.OverlayViewExtension"}};

local awe = require "Awesomium"
local wman = require "aw.DXWebManager"

function Class:initialize(options)
	self._textureObject = wman:getSurfaceFactory():getTable():getOrCreateTextureObject(self._webView)
	self:check(self._textureObject,"Invalid WebView texture object.")
	self._textureObject:setSize(options.width,options.height) -- ensure the textureObject gets invalidated here is needed.	
end

--[[
Function: releaseWebView

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

return Class
