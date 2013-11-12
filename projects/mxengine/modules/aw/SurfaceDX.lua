local Class = createClass{name="SurfaceDX",bases="core.Object"};

local awDX = require "awDX"
local Event = require "base.Event"


function Class:initialize()
	-- create the internal DXSurface:
	-- self:showMessage("Creating awDX.DXSurface")
	self._aweSurface = awDX.DXSurface()
	-- self:showMessage("awDX.DXSurface created.")
end

function Class:setTargetSurface(sysMemSurface)	
	self._sysMemSurface = sysMemSurface
	self._aweSurface:setTargetSurface(self._sysMemSurface)
end

function Class:isValid()
	return  self._sysMemSurface~=nil
end

function Class:getAweSurface()
	return self._aweSurface
end

return Class
