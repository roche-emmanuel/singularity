local Class = require("classBuilder"){name="WebViewDX",bases={"gui.web.BasicView","aw.OverlayViewExtension"}};

local awe = require "Awesomium"

function Class:initialize()

	self._cache = {}

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

function Class:performFullRefresh()
	self:setMenuMap()
	self:setLayout()
	self:setGimbalAzimuthAngle()
	self:setGimbalElevationAngle()
end

function Class:getCache(key,val)
	if val~=nil then
		self._cache[key] = val
	end

	return self._cache[key] 
end

function Class:setMenuMap(mmap)
	mmap = self:getCache('menu_map',mmap)

	if not mmap then return end
	self:debug("Assigning menu map with ",#mmap," elements")
	self:call("setMenuMap",mmap)
end

function Class:setLayout(otype,res,flavor)
	otype = self:getCache("layout_type",otype)
	res = self:getCache("layout_res",res)
	flavor = self:getCache("layout_flavor",flavor or "")

	if not otype then return end
	self:debug("Setting layout to type=",otype,", res=",res,", flavor=",flavor)
	self:call("setLayout",otype,res,flavor or "")	
end

function Class:setGimbalAzimuthAngle(angle)
	angle = self:getCache("gimbal_azimuth",angle)

	if not angle then return end
	self:call("setGimbalAzimuthAngle",angle)
end

function Class:setGimbalElevationAngle(angle)
	angle = self:getCache("gimbal_elevation",angle)

	if not angle then return end
	self:call("setGimbalElevationAngle",angle)
end

return Class
