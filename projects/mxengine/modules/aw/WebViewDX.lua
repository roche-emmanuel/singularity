local Class = require("classBuilder"){name="WebViewDX",bases={"gui.web.BasicView","aw.OverlayViewExtension"}};

local awe = require "Awesomium"

function Class:initialize()

	self._cache = {}
	self._texts = {}
	self._highlights = {}
	self._flashings = {}
	self._widgets = {}
	self._groups = {}
	self._reticlePos = {}
	self._reticleSize = {}
	self._avt_alt_targets = {}
	self._streamTexts = {}
	self._streamHighlights = {}

	self:onOverlayReady(function()
		self:debug("Overlay is now ready.")
		self:performFullRefresh()
	end)

end

function Class:registerTurretProxy()
	if not self:getObject("turretProxy") then
		self:info("Registering turret proxy...")
		local obj = self:registerObject("turretProxy",{
			onOverlayReady = function(controller)
				self:check(controller,"Invalid controller value")
				self._controller = awe.JSObject(controller); -- keep a reference properly!
				self:check(self._controller:remote_id()~=0,"Controller object is local!")
				self:debug2_v("Overlay model remote ID is:",self._controller:remote_id())
				if self._onOverlayReady then
					self._onOverlayReady()
				end
			end
		},{
		
		})
	end
end

function Class:setTargetSurface(surface)
	self._surface:setTargetSurface(surface)
	
	if not self._isReady and surface then
		self._isReady = true;
		-- only register the proxy when the target surface is available as this
		-- will trigger a paint operation.
		self:registerTurretProxy()
		
		-- self:showMessage("Loading web page...")
		-- self:loadURL("http://www.google.fr")
		-- tobj:loadURL("W:/Cloud/Projects/singularity/projects/mxengine/assets/overlays.html")
		-- self:loadURL("W:/Cloud/Projects/singularity/projects/mxengine/web/app/index.html")
		self:loadURL("W:/Cloud/Projects/mxjs/app/index.html")
		-- tobj:loadURL("W:/Cloud/Projects/singularity/projects/mxengine/web/dist/index.html")
	end
	
	if self._isReady and not surface then
		self._isReady = false
		self:warn("Releasing controller...")
		self:releaseController()
	end
end

function Class:getCache(key,val,defval)
	if val == nil then
		val = self._cache[key]
	else
		self._cache[key] = val
	end

	if val == nil then
		return defval
	end

	return val 
end

function Class:performFullRefresh()
	self:setMenuMap()
	self:setLayout()
	self:setNorthIndicatorAngle()
	self:setMXPODAzimuthAngle()
	self:setMXPODFOVAngle()
	self:setGimbalAzimuthAngle()
	self:setGimbalElevationAngle()
	self:setPictoFOVAngle()

	if self._overlayColor then
		local col = self._overlayColor
		self:call("setOverlayColor",col[1],col[2],col[3],col[4])
	end

	if self._currentStream then
		local sname = self._currentStream
		local list = self._streamTexts[sname] or {}
		for name, value in pairs(list) do
			self:call("setTextValue",name,value)
		end
		local list = self._streamHighlights[sname] or {}
		for name, value in pairs(list) do
			self:call("setTextHighlight",name,value)
		end		
	end

	if self._avt_target then
		local desc = self._avt_target
		self:call("setAVTTargetState",desc[1],desc[2],desc[3],desc[4],desc[5])
	end

	if self._sens_gate then
		local desc = self._sens_gate
		self:call("setSensitivityGateState",desc[1],desc[2],desc[3])
	end

	if self._next_fov then
		local desc = self._next_fov
		self:call("setNextFOVState",desc[1],desc[2],desc[3])
	end

	if self._fov_ratio then
		self:call("setFOVGraphicRatio",self._fov_ratio)
	end

	for index,desc in pairs(self._avt_alt_targets) do
		self:call("setAVTAltTargetState",desc[1],desc[2],desc[3],desc[4],desc[5])
	end

	if self._acqWinState then
		self:call("setAcquisitionWindowState",self._acqWinState[1],self._acqWinState[2],self._acqWinState[3])
	end

	for iname, value in pairs(self._texts) do
		self:call("setTextValue",iname,value)
	end

	for iname, value in pairs(self._reticlePos) do
		self:call("setReticlePosition",iname,value[1],value[2])
	end

	for iname, value in pairs(self._reticleSize) do
		self:call("setReticleSize",iname,value[1],value[2])
	end

	for iname, value in pairs(self._widgets) do
		self:call("enableWidget",iname,value)
	end

	for gname, value in pairs(self._groups) do
		self:call("showGroup",gname,value)
	end

	for iname, value in pairs(self._highlights) do
		self:call("setTextHighlight",iname,value,self._flashings[iname])
	end

	for iname, value in pairs(self._flashings) do
		if not self._highlights[iname] then
			self:call("setTextFlashing",iname,value)
		end
	end
end

function Class:setMenuMap(mmap)
	mmap = self:getCache('menu_map',mmap)

	if not mmap then return end
	self:debug("Assigning menu map with ",#mmap," elements")
	self:call("setMenuMap",mmap)
end

function Class:setLayout(otype,res,flavor)
	otype = self:getCache("layout_type",otype,"Type6")
	res = self:getCache("layout_res",res,"HD")
	flavor = self:getCache("layout_flavor",flavor,"")

	if not otype then return end
	self:debug("Setting layout to type=",otype,", res=",res,", flavor=",flavor)
	self:call("setLayout",otype,res,flavor or "")	
end

function Class:setReticlePosition(rid,xx,yy)
	self._reticlePos[rid] = { xx, yy }
	self:call("setReticlePosition",rid,xx,yy)
end

function Class:setReticleSize(rid,ww, hh)
	self._reticleSize[rid] = { ww, hh }
	self:call("setReticleSize",rid,ww,hh)
end

function Class:setMenuVisibility(visible)
	visible = self:getCache("menu_visible",visible,false)
	if visible then
		self:call("showPage","menu","done")
	else
		self:call("showPage","main_overlays")
	end
end

function Class:setCurrentStream(sname)
	if self._currentStream ~= sname then
		self._currentStream = sname
		local list = self._streamTexts[sname] or {}
		for name, value in pairs(list) do
			self:call("setTextValue",name,value)
		end
		local list = self._streamHighlights[sname] or {}
		for name, value in pairs(list) do
			self:call("setTextHighlight",name,value)
		end
	end
end

function Class:setStreamField(sname, item_name, value)
	self._streamTexts[sname] = self._streamTexts[sname] or {}
	local list = self._streamTexts[sname]
	list[item_name] = value
	-- self:info("received stream field value : ",item_name," = ", value, " on stream ", sname)

	if sname == self._currentStream then
		-- self:info("setting stream field value : ",item_name," = ", value, " on stream ", sname)
		self:call("setTextValue",item_name, value)
	end
end

function Class:setStreamHighlight(sname, item_name, value)
	self._streamHighlights[sname] = self._streamHighlights[sname] or {}
	local list = self._streamHighlights[sname]
	list[item_name] = value

	if sname == self._currentStream then
		self:call("setTextHighlight",item_name, value)
	end
end

function Class:setOverlayVisibility(visible)
	visible = self:getCache("overlay_visible",visible,false)
	if visible then
		self:call("showPage","main_overlays")
	end
end

function Class:setMenuSelection(menu_name,item_name,sub_index)
	menu_name = self:getCache("selection_menu_name",menu_name)
	item_name = self:getCache("selection_item_name",item_name)
	sub_index = self:getCache("selection_sub_index",sub_index or false)

	if sub_index == false then
		sub_index = nil
	end

	if menu_name and item_name and self:getCache("menu_visible",nil,false) then
		self:call("showPage",menu_name,item_name,sub_index)
	end
end

function Class:showGroup(gname,value)
	self._groups[gname] = value
	self:call("showGroup",gname,value)
end

function Class:enableWidget(widget_name,value)
	self._widgets[widget_name] = value
	self:call("enableWidget",widget_name,value)
end

function Class:setTextValue(item_name,value)
	self._texts[item_name] = value
	self:call("setTextValue",item_name,value)
end

function Class:setTextFlashing(item_name,value)
	self._flashings[item_name] = value
	self:call("setTextFlashing",item_name,value)
end

function Class:setTextHighlight(item_name,value,flashing)
	self._highlights[item_name] = value
	self:call("setTextHighlight",item_name, value, flashing)
end 

function Class:setNorthIndicatorAngle(angle)
	angle = self:getCache("north_indicator_angle",angle,0.0)
	self:call("setNorthIndicatorAngle",angle)
end

function Class:setMXPODAzimuthAngle(angle)

	angle = self:getCache("antenna_bearing_angle",angle,0.0)
	self:call("setMXPODAzimuthAngle",value)
end

function Class:setMXPODFOVAngle(angle)
	angle = self:getCache("antenna_fov_angle",angle,0.0)
	self:call("setMXPODFOVAngle",angle)
end

function Class:setGimbalAzimuthAngle(angle)
	angle = self:getCache("gimbal_azimuth",angle,0.0)
	self:call("setGimbalAzimuthAngle",angle)
end

function Class:setGimbalElevationAngle(angle)
	angle = self:getCache("gimbal_elevation",angle,0.0)
	self:call("setGimbalElevationAngle",angle)
end

function Class:setPictoFOVAngle(angle)
	angle = self:getCache("picto_fov_angle",angle,0.0)
	self:call("setPictoFOVAngle",angle)
end

function Class:setOverlayColor(r,g,b,a)
	self._overlayColor = { r,g,b,a }
	self:call("setOverlayColor",r,g,b,a)
end

function Class:setAcquisitionWindowState(visible, ww, hh)
	self._acqWinState = { visible, ww, hh }
	self:call("setAcquisitionWindowState",visible,ww,hh)
end

function Class:setAVTTargetState(visible,xx,yy,ww,hh)
	self._avt_target = { visible, xx, yy, ww, hh}
	self:call("setAVTTargetState",visible,xx,yy,ww,hh)
end

function Class:setAVTAltTargetState(index,visible,xx,yy,ww,hh)
	self._avt_alt_targets[index] = { visible, xx, yy, ww, hh}
	self:call("setAVTAltTargetState",index,visible,xx,yy,ww,hh)
end

function Class:setSensitivityGateState(visible, ww,hh)
	self._sens_gate = { visible, ww, hh}
	self:call("setSensitivityGateState",visible,ww,hh)
end

function Class:setNextFOVState(visible, ww,hh)
	self._next_fov = { visible, ww, hh}
	self:call("setNextFOVState",visible,ww,hh)
end

function Class:setFOVGraphicRatio(ratio)
	self._fov_ratio = ratio
	self:call("setFOVGraphicRatio",ratio)
end


return Class
