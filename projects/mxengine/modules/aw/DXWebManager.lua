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
		
		self._thread = Thread{name="webcore_thread",timeout=0.3,func=function(th,interval)

			local awe = require "Awesomium"
		
			-- first wait for input data to arrive:
			local core;
			while not (core) do
				local key,v= th:wait(interval)
			
				core = th:getObject("core",awe.WebCore)
			end
			
			-- now process continuously:
			while true do
				local key,v= th:wait(interval)
				
				log:info("Updating WebCore...")
				core:Update()
				log:info("WebCore updated.")
			end 
		end}

		log:info("Starting webcore thread...")
		self._thread(0.1)
		
		self:getEventManager():addListener{event=Event.APP_CLOSING,func=function()
			log:info("Cancelling webcore thread...")
			self._thread:cancel()
		end}	
	end
	
	self:getEventManager():addListener{event=Event.APP_CLOSING,object=self}
end

function Class:update()
	if self._core and not self._thread then
		self._core:Update()
	end
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
	
	if self._thread then
		self._thread:setObject("core",self._core)
	end
	
	-- self:info("Calling WebCore:Update()")
	-- self:backtrace()
	self:update()
	-- self:info("WebCore:Update() called.")
end

return Class() -- return instance of the class.
