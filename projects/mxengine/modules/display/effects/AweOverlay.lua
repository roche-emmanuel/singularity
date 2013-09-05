local Class = require("classBuilder"){name="AweOverlay",bases="display.Effect"};

--[[
Class: display.effects.AweOverlay

Simple implementation of an Awesomium based overlay system.

This class inherits from <display.Effect>.
]]

--[=[
--[[
Constructor: AweOverlay

Create a new instance of the class.
]]
function AweOverlay(options)
]=]
function Class:initialize(options)
	-- self:warn("Loading AWE Overlay!")
	
	local fx = self:addFilter{"AddLayer"}	
	
	-- Add the overlay texture on slot 1:
	local size = self:getTurret():getRenderSize()
	
	local tobj = require "aw.WebView" {width = size:x(), height = size:y(), transparent=true}
	-- local tobj = require "aw.WebView" {width = 1280, height = 720}
	-- tobj:loadURL("http://www.google.fr")
	tobj:loadURL("W:/Cloud/Projects/singularity/projects/mxengine/assets/overlays.html")
	tobj:getTextureObject():setLinearFiltering()
	
	fx:setTextureObject(tobj,1)
	
	self._webView = tobj
	
	-- local TextureObject = require "dx.TextureObject"	
	-- fx:setTextureObject(TextureObject{file="test_logo"},1)
	local Turret = require "mx.Turret"
	
	self:getTurret():addListener{Turret.EVT_RELEASE,function()
		self:notice("Releasing WebView for discarded turret...")
		fx:setTextureObject(nil,1)
		self._webView = nil
		tobj:releaseWebView()
	end}	
end

function Class:reload()
	self:check(self._webView,"Invalid webView for reload.")
	self._webView:reloadURL()
end

return Class
