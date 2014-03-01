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

	-- On turret init we assign the menu map:
	self:onTurretInit(function()
		-- Now fill the array:
		self:assignMenuMap()
		self:assignLayout()
	end)
end

function Class:assignMenuMap()
	-- if we have a valid turret at this point, then we should retrieve the menu map from it:				
	local mm = self._turret:getMenuManager():getMainMenu()
	local map = mm:getChildrenMap()

	self:sendCommand("setMenuMap",map)
end

res_map = {
	[Class.RESOLUTION_1080P] = "HD",
	[Class.RESOLUTION_720P] = "HD",
	[Class.RESOLUTION_576I] = "SD",
	[Class.RESOLUTION_480I] = "SD",
	[Class.RESOLUTION_NTSC] = "NTSC",
	[Class.RESOLUTION_PAL] = "PAL",
}

function Class:assignLayout()
	-- Now fill the array:
	local otype = self:getOverlayType()
	local res = self:getProcessor():getResolution()
	local rname = res_map[res]
	self:check(rname,"Invalid resolution name for index: ",res)

	local flavor = self:getConfig():get("Overlay.flavor")

	self:debug("Assigning layout to type=",otype,", res=",rname,", flavor=",flavor)
	self:sendCommand("setLayout",otype,rname,flavor or "")
end

function Class:sendCommand(...)
	web:sendWebViewCommand(self._viewId,...)
end

function Class:reload()
	self:sendCommand("reload")
end

function Class:onGimbalAzimuthUpdated(value)	
	if(self._prevAz and math.abs(self._prevAz - value) < 0.01) then return end
	self._prevAz = value
	self:sendCommand("setGimbalAzimuthAngle",value)
end

function Class:onGimbalElevationUpdated(value)
	if(self._prevElev and math.abs(self._prevElev - value) < 0.01) then return end
	self._prevElev = value
	self:sendCommand("setGimbalElevationAngle",value)
end

return Class
