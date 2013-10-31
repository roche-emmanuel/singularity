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
	self:getMissionManager():addListener{self:getMissionManager().EVT_POST_SIMULATIONSTEP,function()
		self:onFrame()
	end}	
	
	local Thread = require "base.Thread"
	
	local linda = Thread.newLinda()
	self._linda = linda;
	
	self._thread = Thread{name="webcore_thread",timeout=0.1,func=function(interval)
		log:info("Entering WebCore thread...")
		
		-- local awe = require "Awesomium"
		-- local core = awe.WebCore.instance()
		
		-- log:info("Starting timer loop with interval=",interval)
		-- local do_update = false;
		
		while true do
			-- sgt.doLog(sgt.LogManager.INFO,"Performing timer cycle "..count)
			-- log:info("Performing timer cycle "..count)
			local key,v= linda:receive( interval, "test_key")
			
			-- local do_update = linda:get(0.0,"do_update")
			-- apr.sleep(interval);
			
			-- if do_update then
				-- log:info("Updating core...")
				-- core:Update()
				-- log:info("core updated.")
			-- else
				-- log:info("Not doing core update.")
			-- end
		end 
		
		log:info("Exiting webcore thread.")
	end}

	log:info("Starting webcore thread...")
	-- self._thread(1.0)

	-- WARNING: we need to call this listener in "front" mode to ensure the thread is closed
	-- before the threadManager is called... otherwise we get a crash! (to be investigated).
	self:getEventManager():addListener{event=Event.APP_CLOSING,front=true,func=function()
		-- log:info("Cancelling webcore thread...")
		-- self._thread:cancel()
		-- log:info("Webcore thread cancelled.")
		-- self._thread = nil
		-- self._linda = nil
	end}	
	
	self:getEventManager():addListener{event=Event.APP_CLOSING,object=self}
	
end

function Class:update()
	self._core:Update()
end

function Class:onFrame()
	if not self:isMissionRunning() or not self._surfaceFactory then
		-- self._linda:set("do_update",false)
		return -- do nothing.
	end
	
	if self._surfaceFactory:getTable():isEmpty() then
		-- self._linda:set("do_update",false)
		return
	end
	
	-- self:info("Calling DXWebManager:onFrame()")
	
	-- first ensure all the surfaces are ready to be rendered:
	if not self._surfaceFactory:getTable():isReady() then
		self:notice_v("Not rendering Web content as some target surfaces are still invalid.")
		-- self._linda:set("do_update",false)
		return	
	end
	
	-- self._linda:set("do_update",true)
	
	-- self:info("Calling WebCore:Update()")
	-- self:backtrace()
	self:update()
	-- self:info("WebCore:Update() called.")
end

return Class() -- return instance of the class.
