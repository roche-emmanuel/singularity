local Class = require("classBuilder"){name="MTWebView",bases={"dx.TextureObjectProxy","aw.OverlayViewExtension"}};
-- "gui.web.View", -- This class should not inherit from gui.web.View : we need the handler callbacks to be in the
-- calling thread.

local wintf = require "aw.WebInterface"

function Class:initialize(options)
	self._textureObject, self._webView = wintf:createWebView(options)
	self:check(self._textureObject,"Invalid WebView texture object.")
	self._textureObject:setSize(options.width,options.height)	
end

--[[
Function: releaseWebView

Method called to release the resources created for this WebView
]]
function Class:releaseWebView()
	if self._webView then
		self:releaseController()
		wintf:destroyWebView(self._webView)
		self._webView = nil
	end
end

function Class:getTextureObject()
	return self._textureObject
end

function Class:validate()
	if not self._isReady and self._textureObject:isValid() then
		self._isReady = true;
		-- only register the proxy when the target surface is available as this
		-- will trigger a paint operation.
		self:registerTurretProxy()
		
		-- tobj:loadURL("http://www.google.fr")
		-- tobj:loadURL("W:/Cloud/Projects/singularity/projects/mxengine/assets/overlays.html")
		self:loadURL("W:/Cloud/Projects/singularity/projects/mxengine/web/app/index.html")
		-- tobj:loadURL("W:/Cloud/Projects/singularity/projects/mxengine/web/dist/index.html")
	end
	
	if self._isReady and not self._textureObject:isValid() then
		self._isReady = false
		self:warn("Releasing controller...")
		self:releaseController()
		return false;
	end
	
	return true;
end

return Class
