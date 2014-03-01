local Class = createClass{name="SurfaceFactoryDX",bases="core.Object"};

local SurfaceDX = require "aw.SurfaceDX"

function Class:initialize()
	self._surfaces = require "std.Map" ()
end

function Class:getOrCreateSurface(view,options)
	self:check(view,"Invalid view")

	-- get the raw view pointer to use it as key:
	view = PTR(view)
	
	local surface = self._surfaces:get(view)
	
	if not surface then
		self:check(options and options.width and options.height,"Invalid surface dimensions.")
		self:info("Creating SurfaceDX...")
		surface = SurfaceDX()
		self._surfaces:set(view,surface)
		self:info("SurfaceDX created.")
	end

	return surface
end

function Class:CreateSurface(obj, view, width, height)
	self:info("Calling CreateSurface()")
	
	-- check if we already have a surface for this view:
	local surface = self:getOrCreateSurface(view)
	
	-- Resizing here will lead to an invalid textureObject
	-- and thus an error when awesomium first try to paint on the surface
	-- to it really needs to have the proper size at that point.
	
	-- Note that surface objects do not have any support for resizing at all
	-- any more: this control should be part of the texture object now somehow ?
	-- surface:setSize(width,height)
	
	-- return the Awe surface from this texture object:
	return surface:getAweSurface()
end

function Class:DestroySurface(obj, surface)	
	self:debug("Calling DestroySurface()")
end

function Class:getNumSurfaces()
	return self._surfaces:size()
end

function Class:destroySurface(surface)
	
	for view,surf in self._surfaces:sequence() do
		if surf == surface then
			self._surfaces:erase(view)
			return true;
		end
	end
	
	return false;
end

--[[
Function: isEmpty

Check if there are some surfaces available or not.
]]
-- function Class:isEmpty()
	-- return self._surfaces:empty()
-- end

--[[
Function: isReady

Check if all the target texture object are ready to be rendered.
]]
-- function Class:isReady()
	-- for view,surface in self._surfaces:sequence() do
		-- if not surface:isReady() then
			-- return false
		-- end		
	-- end
	
	-- return true
-- end

return Class
