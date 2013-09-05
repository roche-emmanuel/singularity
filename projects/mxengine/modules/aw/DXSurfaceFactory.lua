local Class = require("classBuilder"){name="DXSurfaceFactory",bases="base.Object"};

local SurfaceTextureObject = require "aw.SurfaceTextureObject"

function Class:initialize()
	self._surfaces = require "std.Map" ()
end

function Class:getOrCreateTextureObject(view)
	self:check(view,"Invalid view")

	-- get the raw view pointer to use it as key:
	view = PTR(view)
	
	local tobj = self._surfaces:get(view)
	
	if not tobj then
		self:info("Creating SurfaceTextureObject...")
		tobj = SurfaceTextureObject{width=800,height=600,format=dx9.D3DFMT_A8R8G8B8}
		self._surfaces:set(view,tobj)
	end

	return tobj
end

function Class:CreateSurface(obj, view, width, height)
	self:info("Calling CreateSurface()")
	
	-- check if we already have a surface for this view:
	local tobj = self:getOrCreateTextureObject(view)
	
	-- Resizing here will lead to an invalid textureObject
	-- and thus an error when awesomium first try to paint on the surface
	-- to it really needs to have the proper size at that point.
	tobj:setSize(width,height)
	
	-- return the Awe surface from this texture object:
	return tobj:getDXSurface()
end

function Class:DestroySurface(obj, surface)	
	self:info("Calling DestroySurface()")
end

function Class:releaseWebView(view)
	view = PTR(view)
	
	local tobj = self._surfaces:get(view)
	
	if tobj then
		self:notice("Releasing Texture object WebView")
		
		-- we need to release this texture object:
		self._surfaces:erase(view)
		tobj:invalidate()
		-- We should not unregister the texture object here...
		--tobj:getResourceManager():unregisterResource(tobj)
	end
end

function Class:releaseAllSurfaces()
	self:info("Calling releaseAllSurfaces()")
	for view,tobj in self._surfaces:sequence() do
		tobj:invalidate()
		--tobj:getResourceManager():unregisterResource(tobj)
	end
	
	self._surfaces:clear()
end

--[[
Function: isEmpty

Check if there are some surfaces available or not.
]]
function Class:isEmpty()
	return self._surfaces:empty()
end

--[[
Function: isReady

Check if all the target texture object are ready to be rendered.
]]
function Class:isReady()
	for view,tobj in self._surfaces:sequence() do
		if not tobj:isValid() then
			return false
		end		
	end
	
	return true
end

return Class
