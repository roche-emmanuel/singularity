local Class = require("classBuilder"){name="SurfaceTextureObject",bases="dx.TextureObject"};

local awDX = require "awDX"
local Event = require "base.Event"

local useThread = true

function Class:initialize()
	-- create the internal DXSurface:
	self._aweSurface = awDX.DXSurface()
	
	if useThread then
		-- setup the threading system
		local Thread = require "base.Thread"
		
		self._thread = Thread{name="update_texture_thread",timeout=0.3,func=function(th,interval)
			
			require "dx9"

			-- first wait for input data to arrive:
			local device,sysMemTexture,gpuTexture;
			while not (device and sysMemTexture and gpuTexture) do
				local key,v= th:wait(interval)
			
				device = th:getObject("device",dx9.IDirect3DDevice9)
				sysMemTexture = th:getObject("sysMemTexture",dx9.IDirect3DTexture9)
				gpuTexture = th:getObject("gpuTexture",dx9.IDirect3DTexture9)			
			end
			
			-- now process continuously:
			while true do
				local key,v= th:wait(interval)
				
				device:updateTexture(sysMemTexture,gpuTexture)
			end 
		end}
		
		self:getEventManager():addListener{event=Event.APP_CLOSING,func=function()
			if self._thread then
				self._thread:cancel()
				self._thread = nil; -- ensure that the thread will not be started again by a post call to doCreate.
			end
		end}		
	end
end

function Class:doInvalidate()
	self._aweSurface:setTargetSurface(nil)
	if useThread and self._thread then
		self._thread:cancel()
	end
	
	self:release{"_sysMemTexture","_sysMemSurface"}
	
	self.super.doInvalidate(self)	
end

function Class:doCreate(device)
	local res = self.super.doCreate(self,device)
	if not res then
		return false
	end
	
	-- Also create the sysMem texture:
	self:check(self._width and self._height,"Invalid texture size parameters.")
	self._sysMemTexture = device:createTexture(self._width,self._height,self._format,0,dx9.D3DPOOL_SYSTEMMEM)
	self:check(self._sysMemTexture,"Invalid dx texture")
	
	self._sysMemSurface = self._sysMemTexture:getSurface()
	self:check(self._sysMemSurface,"Invalid dx surface")
	
	-- assign the surface to the DXSurface:
	self._aweSurface:setTargetSurface(self._sysMemSurface)
	
	-- We need to keep a reference on the device, because we want to call UpdateTexture because
	-- actually applying this surface. And this method is not part of the cbi interface.
	-- we will see if this crashes...
	self._device = device
	
	if useThread and self._thread then
		-- we may now start the updater thread:
		-- self:showMessage("Now starting update_texture_thread")
		self._thread(0.05)
			
		self._thread:setObject("device",self._device)
		self._thread:setObject("sysMemTexture",self._sysMemTexture)
		self._thread:setObject("gpuTexture",self._texture)
	end
	
	return true
end

function Class:getDXSurface()
	return self._aweSurface
end

function Class:setSize(width,height)
	if self._width==width and self._height==height then
		-- nothing to change in that case:
		return
	end
	
	self._width = width
	self._height = height
	
	-- Invalidate this texture object:
	self:invalidate()
end

function Class:doApply(slot,cbi)
	if not useThread then
		-- update the texture content here:
		self._device:updateTexture(self._sysMemTexture,self._texture)
	end
	
	return self.super.doApply(self,slot,cbi)
end

return Class
