local Class = require("classBuilder"){name="AweOverlay",bases="display.Effect"};
local awe = require "Awesomium"

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
	-- tobj:loadURL("http://www.google.fr")
	-- tobj:loadURL("W:/Cloud/Projects/singularity/projects/mxengine/assets/overlays.html")
	tobj:loadURL("W:/Cloud/Projects/singularity/projects/mxengine/web/app/index.html")
	-- tobj:loadURL("W:/Cloud/Projects/singularity/projects/mxengine/web/dist/index.html")
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
	
	self:getTurret():addListener{Turret.EVT_POST_UPDATE,function()
		self:updateOverlayContent()
	end}	
end

function Class:reload()
	self:check(self._webView,"Invalid webView for reload.")
	self._webView:reload()
end

--[[
Function: updateOverlayContent

Thie method is called in the turret post update to.
retrieve all the updated overlay values from the turret
for this cycle.
]]
function Class:updateOverlayContent()
	local changes = self:getTurret():getUpdatedOverlayFields()
	--changes:set("overlay_source","EOW")
	self._webView:setFields(changes:getTable());
end

return Class
