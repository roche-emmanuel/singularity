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
	
	self:info("Creating webview...")
	local tobj = require "aw.WebView" {width = size:x(), height = size:y(), transparent=true}
	self:info("Setting up texture Object")
	
	tobj:getTextureObject():setLinearFiltering()	
	fx:setTextureObject(tobj,1)
	self:info("Webview created.")
		
	self._webView = tobj
	
	-- assign a callback for overlay ready state:
	self._webView:onOverlayReady(function()
		self:updateOverlayContent(true) -- force complete update.
	end)
	
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
		if not self._webView:validate() then
			return
		end
		
		self:updateOverlayContent()
	end}	
end

function Class:getOutputChannel()
	return self._processor
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
function Class:updateOverlayContent(all)
	local src = self:getOutputChannel():getSource()
	
	local sname = src:getName()	
	
	if self._currentStreamName~=sname or all then
		self._currentStreamName = sname
		self._webView:setFields{current_stream=sname}
	end 
	
	local changes = all and self:getTurret():getOverlayFields() or self:getTurret():getUpdatedOverlayFields()
	
	-- if sname=="IR" then
		-- self:warn("Setting overlay updates:",changes:getTable())
	-- end
	
	--changes:set("overlay_source","EOW")
	self._webView:setFields(changes:getTable());
end

return Class
