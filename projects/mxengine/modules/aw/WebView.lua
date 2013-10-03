local Class = require("classBuilder"){name="WebView",bases={"gui.web.View","dx.TextureObjectProxy","aw.OverlayViewExtension"}};

local awe = require "Awesomium"
local wman = require "aw.DXWebManager"

function Class:initialize(options)
	
end

function Class:createSurface(options)
	-- self:info("Creating surface for webview...")
	self._textureObject = wman:getSurfaceFactory():getTable():getOrCreateTextureObject(self._webView)
	self:check(self._textureObject,"Invalid WebView texture object.")
	-- self:info("Updating texture object size...")		
	self._textureObject:setSize(options.width,options.height) -- ensure the textureObject gets invalidated here is needed.
	-- self:info("Done creating surface for webview.")	
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
