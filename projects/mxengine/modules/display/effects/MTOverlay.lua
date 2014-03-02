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

	self:getTurret():addListener{Class.EVT_POST_UPDATE,function()		
		self:updateSourceStream()
		--self:updateOverlayContent()
	end}	

	-- On turret init we assign the menu map:
	self:onTurretInit(function()
		-- Now fill the array:
		self:assignMenuMap()
		self:assignLayout()
	end)
end

function Class:getOutputChannel()
	return self._processor
end

function Class:updateSourceStream()
	local src = self:getOutputChannel():getSource()
	
	local sname = src:getName()	
	
	if self._currentStreamName~=sname then
		self._currentStreamName = sname
		self:onCurrentStreamUpdated(sname)
	end 
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

function Class:onMenuVisibilityUpdated(visible)
	self:sendCommand("setMenuVisibility",visible)
end

function Class:onMenuSelectionUpdated(menu_name,item_name,sub_index)
	self:sendCommand("setMenuSelection",menu_name,item_name,sub_index)
end

function Class:onMenuFieldUpdated(menu_name,item_name,value)
	self:sendCommand("setTextValue",menu_name ..".".. item_name,value)
end

function Class:onCurrentStreamUpdated(sname)
	-- self:showMessage("Updating current stream to ", sname)
	self:sendCommand("setCurrentStream",sname)
end

local unit_map = {
	[Enums.ANGLE_DEGREES] = "DD",
	[Enums.ANGLE_DMS] = "DMS",
	[Enums.ANGLE_DMF] = "DMF",
	[Enums.ANGLE_MGRS] = "MGRS",
}

function Class:onPOILocationUnitUpdated(unit)
	local val = unit_map[unit]
	self:check(val,"Invalid mapping for POI location unit: ",unit)
	-- TO RESTORE self._webView:call("setPOILocationMode",val)
end

function Class:onOverlayVisibilityUpdated(visible)
	self:sendCommand("setOverlayVisibility",visible)
end

function Class:onFieldUpdated(item_name, value)
	self:sendCommand("setTextValue",item_name, value)
end

function Class:onHighlightUpdated(item_name, value, flashValue)
	-- flashValue = flashValue or false;
	self:check(flashValue~=nil,"Invalid flash value !")
	
	if type(flashValue)=="table" and type(value)=="table" then
		self:check(value[1]==flashValue[1] and value[2]==flashValue[2],"mismatch in highlight and flashing details.")
	end
	
	self:sendCommand("setTextHighlight", item_name, value, flashValue and true or false)
end

function Class:onFlashingUpdated(item_name, value)
	self:sendCommand("setTextFlashing", item_name, value)
end

function Class:onStreamFieldUpdated(sname, item_name, value)
	self:sendCommand("setStreamField",sname,item_name, value)
end

function Class:onStreamHighlightUpdated(sname, item_name, value)
	self:sendCommand("setStreamHighlight",sname,item_name, value)
end

function Class:onNorthIndicatorUpdated(value)
	if(self._prevNorth and math.abs(self._prevNorth - value) < 0.01) then return end
	self._prevNorth = value
	self:sendCommand("setNorthIndicatorAngle",value)
end

function Class:onMXPODBearingUpdated(value)
	self:sendCommand("setMXPODAzimuthAngle",value)
end

local antenna_fov = {
	[Class.MX_POD_ANTENNA_AUTO] = 0.0,
	[Class.MX_POD_ANTENNA_HIGH] = 60.0,
	[Class.MX_POD_ANTENNA_OMNI] = 0.0,
	[Class.MX_POD_ANTENNA_COUPLED] = 0.0,
}

function Class:onMXPODAntennaModeUpdated(value)
	self:sendCommand("setMXPODFOVAngle",antenna_fov[value])
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

function Class:onPictoFOVUpdated(value)
	self:sendCommand("setPictoFOVAngle",value)
end


function Class:onDestabilizationStateUpdated(value)
	self:sendCommand("enableWidget","destabilization",value)
end

function Class:onTXEncryptionStateUpdated(value)
	self:sendCommand("enableWidget","transmitter_key",value)
end

function Class:doSetOverlayGroupStatus(gid,status)
	gid = gid:gsub("_group$","")
	self:info("Setting group ",gid," to ",status)
	self:sendCommand("showGroup",gid,status)
end

function Class:doSetReticleStatus(rid,enabled)
	self:sendCommand("enableWidget",rid,enabled)
end

function Class:doSetReticlePosition(rid,pos)
	self:sendCommand("setReticlePosition",rid,pos:x(),pos:y())
end

function Class:doSetReticleSize(rid,size)
	self:sendCommand("setReticleSize",rid,size:x(),size:y())
end

function Class:doSetAcquisitionWindowState(visible, size)
	self:sendCommand("setAcquisitionWindowState",visible,size:x(),size:y())
end

function Class:doSetAVTTargetState(visible,rect)
	self:sendCommand("setAVTTargetState",visible,rect:x(),rect:y(),rect:z(),rect:w())
end

function Class:doSetAVTAltTargetState(visible,index,rect)
	self:sendCommand("setAVTAltTargetState",index,visible,rect:x(),rect:y(),rect:z(),rect:w())
end

function Class:doSetGateState(visible, size)
	self:sendCommand("setSensitivityGateState",visible,size:x(),size:y())
end

function Class:doSetOutlineState(enabled)
	-- We do nothing here.
end

function Class:doSetOverlayColor(cid)
	local col = self.overlayColorMap[cid]
	self:check(col,"Invalid color for index ", cid)
	local int = (self:getOverlayIntensity() or 100.0)/100.0

	self:sendCommand("setOverlayColor",col:x()*int, col:y()*int, col:z()*int, 1.0)
end

function Class:doSetOverlayIntensity(intensity)
	if self:useOverlayColor() then
		local cid = self:getOverlayColor() or Enums.OVERLAY_COLOR_WHITE
		local col = self.overlayColorMap[cid]
		self:check(col,"Invalid color for index ", cid)
		local int = intensity

		self:sendCommand("setOverlayColor",col:x()*int, col:y()*int, col:z()*int, 1.0)
	else
		self:warn("old overlay intensity control not implemented")
	end
end

function Class:doSetOverlayReverseIntensity(intensity)
	self:warn("old overlay intensity control not implemented")
end

return Class
