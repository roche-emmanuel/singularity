local Class = require("classBuilder"){name="MTOverlay",bases={"mx.overlays.BasicOverlay","mx.overlays.OverlayListener","mx.menus.MenuListener"}};

local Enums = require "mx.Enums"
local Event = require "base.Event"

local web = require "gui.web.WebThread"

function Class:initialize(options)	
	-- local fx = self:addFilter{"CopyImage"}
	local fx = self:addFilter{"AddLayer"}
	
	local size = self:getTurret():getRenderSize()
	self._viewId = web:createWebView{width = size:x(), height = size:y(), transparent=true}
	
	-- we should also create a dedicated texture object here:
	-- this one will take the new web view ID as argument and will assign the surfaces to it when validated.
	-- self:showMessage("Creating TextureObject DX")
	self._tobj = require "aw.TextureObjectDX" {viewId = self._viewId, width = size:x(), height = size:y()}
	-- self:showMessage("TextureObject DX created.")
	
	-- assign this texture object as layer for the filter:
	self._tobj:setLinearFiltering()	
	fx:setTextureObject(self._tobj,1)

	-- destroy the web view when finishing the mission:
	local mm = self:getMissionManager()
	mm:addListener{mm.EVT_ENDING_MISSION,function()
		-- self:showMessage("Destroying web view: "..self._viewId)
		web:destroyWebView(self._viewId)		
		-- self:showMessage("Done destroying web view: "..self._viewId)
	end}
end

function Class:sendCommand(...)
	web:sendWebViewCommand(self._viewId,...)
end

function Class:reload()
	self:sendCommand("reload")
end

return Class
