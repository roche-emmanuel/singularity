local Class = require("classBuilder"){name="WebViewDX",bases={"gui.web.BasicView","aw.OverlayViewExtension"}};

local awe = require "Awesomium"

function Class:initialize()

	self:onOverlayReady(function()
		self:debug("Overlay is now ready.")
		self:assignMenuMap()
		-- self:assignLayout()
		-- self:performFullRefresh()
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

function Class:assignMenuMap(mmap)
	mmap = mmap or self._menu_map
	self._menu_map = mmap

	if mmap then
		self:debug("Assigning menu map with ",#mmap," elements")
		self:call("setMenuMap",mmap)
	end
end

return Class
