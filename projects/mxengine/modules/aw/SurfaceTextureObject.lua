local Class = require("classBuilder"){name="SurfaceTextureObject",bases="dx.TextureObject"};

local awDX = require "awDX"

function Class:initialize()
	-- create the internal DXSurface:
	self._aweSurface = awDX.DXSurface()
end

function Class:doInvalidate()
	self._aweSurface:setTargetSurface(nil)	
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
	-- update the texture content here:
	self._device:updateTexture(self._sysMemTexture,self._texture)
	
	return self.super.doApply(self,slot,cbi)
end

return Class
