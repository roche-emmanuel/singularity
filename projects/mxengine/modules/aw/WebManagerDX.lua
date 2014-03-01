local Class = require("classBuilder"){name="WebManagerDX",bases="gui.web.WebManager"};

local awe = require "Awesomium"

function Class:createSurfaceFactory()
	self:info("Creating DX surface factory");
	local DXSurfaceFactory = require "aw.SurfaceFactoryDX"
	return awe.SurfaceFactory(DXSurfaceFactory())
end

function Class:createWebView(options)
	local DXWebView = require "aw.WebViewDX"
	return DXWebView(options)
end

return Class()
