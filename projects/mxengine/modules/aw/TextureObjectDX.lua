local Class = require("classBuilder"){name="TextureObjectDX",bases="dx.TextureObject"};

local Event = require "base.Event"
local web = require "gui.web.WebThread"
local vbsDX = require "vbsDX"
require "dx9"

function Class:initialize(options)
	self:check(options and options.viewId,"Invalid web view ID")
	
	self._format=dx9.D3DFMT_A8R8G8B8
	
	self._viewId = options.viewId
	
	-- we can create the system memory texture here since it doesn't have be invalidated
	-- when the device is lost.
	
	local device = vbsDX.getDevice()
	self._device = device
	
	self:check(self._width and self._height,"Invalid texture size parameters.")
	self._sysMemTexture = device:createTexture(self._width,self._height,self._format,0,dx9.D3DPOOL_SYSTEMMEM)
	self:check(self._sysMemTexture,"Invalid dx texture")
	
	self._sysMemSurface = self._sysMemTexture:getSurface()
	self:check(self._sysMemSurface,"Invalid dx surface")

	-- Now assign this surface to the web core rendering system:
	web:setTargetSurface(self._viewId,self._sysMemSurface)
	
	local mm = self:getMissionManager()
	mm:addListener{mm.EVT_ENDED_MISSION,function()
		-- we still need to release the texture data when the mission is done to avoid memory leak.
		-- web:setTargetSurface(self._viewId,nil)
		if self._thread then
			self._thread:cancel() -- ensure the thread is stopped here;
		end
		self:release{"_sysMemTexture","_sysMemSurface"}
	end}	
	
	-- setup the threading system to copy from sys mem surface to GPU surface:
	local Thread = require "base.Thread"
	
	self._thread = Thread{name="update_texture_thread",timeout=0.3,func=function(th,interval)
		
		local dx9 = require "dx9"
		
		-- first wait for input data to arrive:
		local device,sysMemTexture,gpuTexture;
		while not (device and sysMemTexture and gpuTexture) do
			local key,v= th:wait(interval)
		
			-- log:info("Waiting for update texture thread data...")
	
			device = th:getObject("device",dx9.IDirect3DDevice9)
			sysMemTexture = th:getObject("sysMemTexture",dx9.IDirect3DTexture9)
			gpuTexture = th:getObject("gpuTexture",dx9.IDirect3DTexture9)			
		end
		
		-- now process continuously:
		while true do
			local key,v= th:wait(interval)
			
			-- log:info("Update texture thread running...")
			device:updateTexture(sysMemTexture,gpuTexture)
		end 
	end}
	
	-- thread will be cancelled anyway from the thread manager when the application is closing.
	-- self:getEventManager():addListener{event=Event.APP_CLOSING,func=function()
		-- if self._thread then
			-- self._thread:cancel()
			-- self._thread = nil; -- ensure that the thread will not be started again by a post call to doCreate.
		-- end
	-- end}	
		
end

function Class:doInvalidate()
	if useThread and self._thread then
		self._thread:cancel()
	end
	
	self.super.doInvalidate(self)	
end

function Class:doCreate(device)
	local res = self.super.doCreate(self,device)
	if not res then
		return false
	end
	
	-- start the texture update thread:
	if self._thread then
		-- we may now start the updater thread:
		-- self:showMessage("Now starting update_texture_thread")
		self._thread(0.05)
			
		self._thread:setObject("device",self._device)	
		self._thread:setObject("sysMemTexture",self._sysMemTexture)
		self._thread:setObject("gpuTexture",self._texture)
	end
	
	return true
end

return Class
