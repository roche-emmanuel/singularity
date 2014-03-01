local Class = createClass{name="WebInterface",bases={"core.Linda","gui.web.Enums"}};

function Class:initialize(options)
	self._manager = require "aw.WebManagerDX"
	
	set_finalizer( function()
		self:info("Calling webcore thread finalizer...")
		self._manager:destroy()
		self:info("Finalizer called.")
	end)
end

function Class:__call(interval)
	local osg = require "osg"
	
	require "dx9" -- this is needed to get setTargetSurface() working.
	
	local timer = osg.Timer.instance()
	local key, data, num, stick, elapsed, delay
	self:info("Entering WebInterface loop...")
	
	while true do 
		stick = timer:tick()
		-- for each cycle we check if we have any request pending:
		num = self:count("request")
		if num and num>0 then
			self:info("Now handling ",num," requests.")
			for i=1,num do
				key, data = self:receive(0.001,"request")
				self:check(key=="request","Invalid key: didn't expect timeout to occur here, key=",key)
				self:check(data,"Invalid data: didn't expect timeout to occur here.")
				self:handleRequest(data)
			end
		end
		
		-- done handling the request, so now we should perform an update cyle:
		if self._manager:isValid() then
			-- self:info("Webcore manager is valid, now updating...")
			self._manager:update()
		end
		
		elapsed = timer:delta_s(stick,timer:tick())
		
		delay = interval - elapsed;
		if delay <= 0.001 then
			delay = 0.001
			self:warn("Webcore thread interval is too short: interval=",interval," secs, elapsed=",elapsed," secs")
		end
		
		self:wait(interval)
	end
end

function Class:createWebView(options)
	-- This handler is used to create a new webview and return its ID to the main thread caller.
	-- self:showMessage("Should create Webview from options: ",options)
	local webview = self._manager:newWebView(options)
	return webview:getID()
	-- return 5; -- test output.
end

function Class:destroyWebView(id)
	-- self:showMessage("Should delete web view: ",id)
	local webview = self._manager:getWebView(id)
	if not webview then
		self:showMessage("Could not find webview with ID: ",id)
		return "Could not find webview with ID: "..id
	end
	
	-- The webview is found, so now we destroy it:
	-- self:showMessage("Deleting web view: ",id)
	self._manager:deleteWebView(webview)
	-- self:showMessage("Web view: ",id," deleted.")
	return true -- in case of success, we return true.
end

function Class:setTargetSurface(options)
	local id = options.id
	
	-- self:showMessage("Received options for set Target Surface: ",options)
	-- self:showMessage("Setting target surface for webview: ",id)
	local webview = self._manager:getWebView(id)
	if not webview then
		self:showMessage("Could not find webview with ID: ",id)
		return "Could not find webview with ID: "..id
	end
	
	-- The webview is found, so now we should retrieve the DX surface and assign it to the internal
	-- surfaceDX object:
	local surface = self:fromPtr(options.surface,dx9.IDirect3DSurface9)

	-- self:showMessage("Assigning target surface to webview ",id)
	webview:setTargetSurface(surface)
	-- self:showMessage("Done assigning target surface to webview ",id)	
	return true -- in case of success, we return true.
end

function Class:handleWebViewCommand(options)
	local id = options.id
	local cmd = options.command
	local args = options.args

	-- self:showMessage("Received options for web view command: ",options)
	local webview = self._manager:getWebView(id)
	if not webview then
		self:showMessage("Could not find webview with ID: ",id)
		return "Could not find webview with ID: "..id
	end
	
	-- The webview is found, now call the desired method with the provided args:
	webview[cmd](webview,unpack(args))
	return true;
end

local request_map = {
	[Class.REQUEST_CREATE_WEB_VIEW] = Class.createWebView,
	[Class.REQUEST_DESTROY_WEB_VIEW] = Class.destroyWebView,
	[Class.REQUEST_SET_TARGET_SURFACE] = Class.setTargetSurface,
	[Class.REQUEST_VIEW_COMMAND] = Class.handleWebViewCommand,
}

function Class:handleRequest(data)
	local rid = data[1]
	local options = data[2]
	
	-- check if we have an handler for this request, if not, this is an error:
	local handler = request_map[rid]
	self:check(handler,"No handler found for request id: ",rid)
	
	-- self:showMessage("Now calling handler for request ",rid)
	
	self:info("Now calling handler for request ",rid)
	-- The handler is valid, we now just call it:
	local res = handler(self,options)
	
	if data.sync then
		-- This request was synchronized, so we should return its result:
		self:send("report",{rid,res})
	end
end


return Class
