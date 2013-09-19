local Class = require("classBuilder"){name="DXWebManager",bases="gui.web.BasicWebManager"};

local awe = require "Awesomium"
local Event = require "base.Event"

function Class:new(options)
	self._debug_port = 8081
end

function Class:initialize(options)

end

function Class:destroyWebView(view)
	self._surfaceFactory:getTable():releaseWebView(view)
	Class.super.destroyWebView(self,view)
end

function Class:createSurfaceFactory()
	self:info("Creating DX surface factory");
	local DXSurfaceFactory = require "aw.DXSurfaceFactory"
	return awe.SurfaceFactory(DXSurfaceFactory())
end

function Class:releaseAllSurfaces()
	self:info("Releasing DX surfaces");
	self._surfaceFactory:getTable():releaseAllSurfaces();
	self._surfaceFactory = nil;
end

function Class:registerListeners()
	-- self:getEventManager():addListener{event=Event.FRAME,object=self}
	self:getEventManager():addListener{event=Event.APP_CLOSING,object=self}
	self:getMissionManager():addListener{self:getMissionManager().EVT_POST_SIMULATIONSTEP,function()
		self:onFrame()
	end}	
end

function Class:onFrame()
	if not self:isMissionRunning() or not self._surfaceFactory then
		return -- do nothing.
	end
	
	if self._surfaceFactory:getTable():isEmpty() then
		return
	end
	
	-- self:info("Calling DXWebManager:onFrame()")
	
	-- first ensure all the surfaces are ready to be rendered:
	if not self._surfaceFactory:getTable():isReady() then
		self:notice_v("Not rendering Web content as some target surfaces are still invalid.")
		return	
	end
	
	-- self:info("Calling WebCore:Update()")
	-- self:backtrace()
	self._core:Update()
	-- self:info("WebCore:Update() called.")
end

return Class() -- return instance of the class.
