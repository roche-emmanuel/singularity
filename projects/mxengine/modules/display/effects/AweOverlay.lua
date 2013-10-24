local Class = require("classBuilder"){name="AweOverlay",bases={"display.Effect","mx.overlays.OverlayListener","mx.menus.MenuListener"}};
local awe = require "Awesomium"

local Enums = require "mx.Enums"

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
		--self:updateOverlayContent(true) -- force complete update.
		self:performFullRefresh()
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
		
		self:updateSourceStream()
		--self:updateOverlayContent()
	end}	
end

function Class:getOutputChannel()
	return self._processor
end

function Class:reload()
	self:check(self._webView,"Invalid webView for reload.")
	self._webView:reload()
end

function Class:updateSourceStream()
	local src = self:getOutputChannel():getSource()
	
	local sname = src:getName()	
	
	if self._currentStreamName~=sname then
		self._currentStreamName = sname
		self:onCurrentStreamUpdated(sname)
	end 
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
	
	-- if sname=="VIC" then
		-- self:warn("Setting overlay updates:",changes:getTable())
	-- end
	
	--changes:set("overlay_source","EOW")
	self._webView:setFields(changes:getTable());
end

function Class:performFullRefresh() 
	-- update current stream:
	self:onCurrentStreamUpdated(self._currentStreamName or "EOW")
	
	local mm = self:getTurret():getMenuManager()
	local om = self:getTurret():getMainOverlayManager()
	
	-- update visibility:
	self:onMenuVisibilityUpdated(mm:isEnabled())
	self:onOverlayVisibilityUpdated(om:isEnabled())
	
	-- update menu selection:
	local sel = mm:getMenuSelection()
	self:onMenuSelectionUpdated(sel[1],sel[2],sel[3])
	
	-- update menu fields:
	local fields = mm:getMenuFieldValues()
	for mname, items in pairs(fields) do
		for iname, value in pairs(items) do
			self:onMenuFieldUpdated(mname,iname,value)
		end
	end
	
	fields = om:getFields()
	for iname, value in pairs(fields) do
		self:onFieldUpdated(iname,value)
	end	

	fields = om:getHighlights()
	for iname, value in pairs(fields) do
		self:onHighlightUpdated(iname,value)
	end	

	fields = om:getStreamFields()
	-- self:warn("Updating stream fields:",fields)
	
	for sname, items in pairs(fields) do
		for iname, value in pairs(items) do
			self:onStreamFieldUpdated(sname,iname,value)
		end
	end
	
	fields = om:getStreamHighlights()
	for sname, items in pairs(fields) do
		for iname, value in pairs(items) do
			self:onStreamHighlightUpdated(sname,iname,value)
		end
	end
	
	self:onPOILocationUnitUpdated(mm:getPOILocationUnit())
end


function Class:onMenuVisibilityUpdated(visible)
	-- self:info("Updating Menus visibility to: ",visible)
	self._webView:call("enableMenus",visible)
end

function Class:onMenuSelectionUpdated(menu_name,item_name,sub_index)
	-- self:info("Updating Menu selection to: ",menu_name,".",item_name," (sub=",sub_index,")")
	self._webView:call("setMenuSelection",menu_name,item_name,sub_index)
end

function Class:onMenuFieldUpdated(menu_name,item_name,value)
	-- self:info("Updating Menu field: ",menu_name,".",item_name," to ", value)
	self._webView:call("setMenuField",menu_name,item_name,value)
end

local unit_map = {
	[Enums.ANGLE_DEGREES] = "DD",
	[Enums.ANGLE_DMS] = "DMS",
	[Enums.ANGLE_DMF] = "DMF",
	[Enums.ANGLE_MGRS] = "MGRS",
}

function Class:onCurrentStreamUpdated(sname)
	self._webView:call("setCurrentStream",sname)
end

function Class:onPOILocationUnitUpdated(unit)
	local val = unit_map[unit]
	self:check(val,"Invalid mapping for POI location unit: ",unit)
	self._webView:call("setPOILocationMode",val)
end

function Class:onOverlayVisibilityUpdated(visible)
	-- self:info("Updating Overlay visibility to: ",visible)
	self._webView:call("enableOverlays",visible)
end

function Class:onFieldUpdated(item_name, value)
	self._webView:call("setField",item_name, value)
end

function Class:onHighlightUpdated(item_name, value)
	self._webView:call("setHighlight", item_name, value)
end

function Class:onStreamFieldUpdated(sname, item_name, value)
	self._webView:call("setStreamField",sname,item_name, value)
end

function Class:onStreamHighlightUpdated(sname, item_name, value)
	self._webView:call("setStreamHighlight",sname,item_name, value)
end

return Class
