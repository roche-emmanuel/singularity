local Class = require("classBuilder"){name="SurfaceTextureObject",bases="dx.TextureObject"};

local awDX = require "awDX"

function Class:initialize()
	-- create the internal DXSurface:
	self._aweSurface = awDX.DXSurface()
	self._dynamicUsage = true
end

function Class:doInvalidate()
	self._aweSurface:setTargetSurface(nil)
	-- self._aweSurface:setTargetSurfaces(nil,nil)
	-- self:release{"_sysMemTexture","_sysMemSurface"}
	self.super.doInvalidate(self)	
end

function Class:doCreate(device)
	local res = self.super.doCreate(self,device)
	if not res then
		return false
	end
	
	-- Also create the sysMem texture:
	-- self:check(self._width and self._height,"Invalid texture size parameters.")
	-- self._sysMemTexture = device:createTexture(self._width,self._height,self._format,true)
	-- self:check(self._sysMemTexture,"Invalid dx texture")
	
	-- self._sysMemSurface = self._sysMemTexture:getSurface()
	-- self:check(self._sysMemSurface,"Invalid dx surface")
	
	-- assign the surface to the DXSurface:
	-- self._aweSurface:setTargetSurfaces(self._sysMemSurface, self._surface)
	self._aweSurface:setTargetSurface(self._surface)
	
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

return Class
