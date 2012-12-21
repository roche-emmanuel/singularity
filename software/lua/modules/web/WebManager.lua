local Class = require("classBuilder"){name="WebManager",bases="base.Object"};

local Event = require "base.Event"
local awe = require "Awesomium"

function Class:initialize(options)
	
	self:info("Initializing WebCore...")
	self._core = awe.WebCore.Initialize(awe.WebConfig())

	local Set = require "std.Set"
	self._webViewList = Set();
	
	self:getEventManager():addListener{event=Event.FRAME,object=self}
	self:getEventManager():addListener{event=Event.APP_CLOSING,object=self}
end

function Class:createWebView(options)
	self:check(options and options.width,"Invalid webview width.")
	self:check(options and options.height,"Invalid webview height.")
	local view = self._core:CreateWebView(options.width,options.height);
	self._webViewList:push_back(view)
	
	return view;
end

function Class:createWebImage(options)
	local WebImage = require "web.WebImage"
	local res = WebImage(options)
	return res;
end

function Class:onFrame()
	self:info("Updating webcore...");
	self._core:Update()
end

function Class:onAppClosing()
	self:info("Closing Web manager...")
	self._core:Update()	
	
	-- destroy all the webviews:
	for _,view in self._webViewList:sequence() do
		view:Destroy();
	end
	self._webViewList:clear();
	
	-- Update one last time:
	self._core:Update()	
	
	awe.WebCore.Shutdown()	
	self:info("Web manager closed.")	
end

return Class() -- return instance of the class.
