local Class = require("classBuilder"){name="WebView",bases={"gui.web.View","dx.TextureObjectProxy"}};

local awe = require "Awesomium"
local wman = require "aw.DXWebManager"

function Class:initialize(options)
	self:check(options and options.turret,"Invalid turret object.")
	self._turret = options.turret
	-- self:addSourcePrefix("web/app/scripts/")
	-- self:onFinishLoadingFrame(function()
	-- 	self:showMessage("Finished loading frame!")
	-- 	-- when the frame loading is completed, the controller should be available.

	-- end)

end

function Class:createSurface(options)
	-- self:info("Creating surface for webview...")
	self._textureObject = wman:getSurfaceFactory():getTable():getOrCreateTextureObject(self._webView)
	self:check(self._textureObject,"Invalid WebView texture object.")
	-- self:info("Updating texture object size...")		
	self._textureObject:setSize(options.width,options.height) -- ensure the textureObject gets invalidated here is needed.
	-- self:info("Done creating surface for webview.")
end

function Class:getTurret()
	return self._turret
end

--[[
Function: releaseWebView

Method called to release the resources created for this WebView
]]
function Class:releaseWebView()
	if self._webView then
		self:releaseController()
		wman:destroyWebView(self._webView)
		self._webView = nil
	end
end

function Class:getTextureObject()
	return self._textureObject
end

function Class:getView()
	return self._webView
end

function Class:getManager()
	return require "aw.DXWebManager"
end

function Class:validate()
	if not self._isReady and self._textureObject:isValid() then
		self._isReady = true;
		-- only register the proxy when the target surface is available as this
		-- will trigger a paint operation.
		self:registerTurretProxy()
		
		-- tobj:loadURL("http://www.google.fr")
		-- tobj:loadURL("W:/Cloud/Projects/singularity/projects/mxengine/assets/overlays.html")
		-- self:loadURL("W:/Cloud/Projects/singularity/projects/mxengine/web/app/index.html")
		-- tobj:loadURL("W:/Cloud/Projects/singularity/projects/mxengine/web/dist/index.html")

		self:loadURL("W:/Cloud/Projects/mxjs/app/index.html")

	end
	
	if self._isReady and not self._textureObject:isValid() then
		self._isReady = false
		self:warn("Releasing controller...")
		self:releaseController()
		return false;
	end
	
	return true;
end

function Class:registerTurretProxy()
	if not self:getObject("turretProxy") then
		self:info("Registering turret proxy...")
		local obj = self:registerObject("turretProxy",{
			onOverlayReady = function(controller)
				self:check(controller,"Invalid controller value")
				self._controller = awe.JSObject(controller); -- keep a reference properly!
				self:check(self._controller:remote_id()~=0,"Controller object is local!")
				self:info("Overlay model remote ID is:",self._controller:remote_id())
				if self._onOverlayReady then
					self._onOverlayReady()
				end
			end
		},{
			-- methods returning values:
			-- hasItem = function(mname)
				-- check if the menu given by its name is available or not:
				-- if not self.getTurret then
					-- self:notice("No turret in OverlayViewExtension:hasItem(), just returning true by default.")
					-- return true; -- No turret so for now just return true:
				-- end
				
				-- local mm = self:getTurret():getMenuManager():getMainMenu()
				-- local res = (mm:findChildByName(mname)~=nil) 
				-- self:debug("Looking for menu item: ",mname," returning ",res)
				-- return res
			-- end,
			
			-- getMenuMap = function()
			-- 	if self._turret then					
			-- 		-- Now fill the array:
			-- 		-- if we have a valid turret at this point, then we should retrieve the menu map from it:				
			-- 		local mm = self._turret:getMenuManager():getMainMenu()
			-- 		local map = mm:getChildrenMap()
			-- 		-- self:debug("Got the children map: ",map)			
			-- 		return map;
			-- 	end
				
			-- 	return awe.JSValue.Undefined()
			-- end,

			-- getOverlayType = function()
			-- 	if self._turret then					
			-- 		return self._turret:getOverlayType()
			-- 	end
			-- 	return awe.JSValue.Undefined()
			-- end		
		})
		

	end
end

function Class:releaseController()
	self:info("Releasing controller...")
	self._controller = nil
end

function Class:onOverlayReady(func)
	self._onOverlayReady = func
end

function Class:call(mname,...)
	if not self._controller then
		self:warn("Controller is not ready yet.")
		return
	end
	
	local args = awe.JSArray.fromTable{...}
	
	self._controller:InvokeAsync(mname,args)
	self:checkErrors(self._controller)
end

function Class:syncCall(mname,...)
	if not self._controller then
		self:warn("Controller is not ready yet.")
		return
	end
	
	local args = awe.JSArray.fromTable{...}
	
	self._controller:Invoke(mname,args)
	self:checkErrors(self._controller)
end

return Class
