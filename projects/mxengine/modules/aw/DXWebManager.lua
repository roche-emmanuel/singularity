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
	
	if false then
		-- threading test section. Not working for now : core:Update() is not thread safe.
		local Thread = require "base.Thread"
		
		local linda = Thread.newLinda()
		self._linda = linda;
		
		self._thread = Thread{name="webcore_thread",timeout=0.1,func=function(interval)
			log:info("Entering WebCore thread...")
			
			local awe = require "Awesomium"
			local core = awe.WebCore.instance()
			
			-- log:info("Starting timer loop with interval=",interval)
			local do_update = 0;
			
			while true do
				local key,v= linda:receive( interval, "test_key")
				
				do_update = linda:get("do_update")
				-- apr.sleep(interval);
				
				if do_update==1 then
					log:info("Updating core...")
					core:Update()
					log:info("core updated.")
				else
					log:info("Not doing core update.")
				end
			end 
			
			log:info("Exiting webcore thread.")
		end}

		log:info("Starting webcore thread...")
		-- self._thread(0.1)
			
		self:getEventManager():addListener{event=Event.APP_CLOSING,func=function()
			log:info("Cancelling webcore thread...")
			-- self._thread:cancel()
		end}	
	end
	
	self:getEventManager():addListener{event=Event.APP_CLOSING,object=self}
end

function Class:update()
	self._core:Update()
end

function Class:onFrame()
	if not self:isMissionRunning() or not self._surfaceFactory then
		-- self._linda:set("do_update",0)
		return -- do nothing.
	end
	
	if self._surfaceFactory:getTable():isEmpty() then
		-- self._linda:set("do_update",0)
		return
	end
	
	-- self:info("Calling DXWebManager:onFrame()")
	
	-- first ensure all the surfaces are ready to be rendered:
	if not self._surfaceFactory:getTable():isReady() then
		self:notice_v("Not rendering Web content as some target surfaces are still invalid.")
		-- self._linda:set("do_update",0)
		return	
	end
	
	-- self._linda:set("do_update",1)
	
	-- self:info("Calling WebCore:Update()")
	-- self:backtrace()
	self:update()
	-- self:info("WebCore:Update() called.")
end

return Class() -- return instance of the class.
