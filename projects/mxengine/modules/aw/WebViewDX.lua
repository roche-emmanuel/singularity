local Class = require("classBuilder"){name="WebViewDX",bases={"gui.web.BasicView","aw.OverlayViewExtension"}};

function Class:initialize(options)

end

function Class:setTargetSurface(surface)
	self._surface:setTargetSurface(surface)
	
	if not self._isReady and surface then
		self._isReady = true;
		-- only register the proxy when the target surface is available as this
		-- will trigger a paint operation.
		-- self:registerTurretProxy()
		
		-- self:showMessage("Loading web page...")
		-- self:loadURL("http://www.google.fr")
		-- tobj:loadURL("W:/Cloud/Projects/singularity/projects/mxengine/assets/overlays.html")
		self:loadURL("W:/Cloud/Projects/singularity/projects/mxengine/web/app/index.html")
		-- tobj:loadURL("W:/Cloud/Projects/singularity/projects/mxengine/web/dist/index.html")
	end
	
	if self._isReady and not surface then
		self._isReady = false
		self:warn("Releasing controller...")
		self:releaseController()
	end
end

return Class
