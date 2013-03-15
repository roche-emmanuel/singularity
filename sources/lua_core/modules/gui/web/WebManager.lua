local Class = require("classBuilder"){name="WebManager",bases="base.Object"};

local Event = require "base.Event"
local awe = require "Awesomium"
local prof = require "debugging.Profiler"
local fs = require "base.FileSystem"

function Class:initialize(options)
	
	self:info("Initializing WebCore...")
	local  cfg = awe.WebConfig();
	cfg:set_remote_debugging_port(config.awesomium_debug_port or 0)
	
	--cfg:addAdditionalOption("--use-gl=desktop");
	
	self._prefs = awe.WebPreferences()
	
	self._prefs:set_enable_web_gl(false) -- disable webgl for now.
	self._prefs:set_enable_databases(false)
	self._prefs:set_allow_file_access_from_file_url(true)
	self._prefs:set_allow_universal_access_from_file_url(true)
	
	self._core = awe.WebCore.Initialize(cfg)

	local cachePath = config.cache_path or fs:getRootPath(true).."cache"
	
	self._session = self._core:CreateWebSession(cachePath .. "/awesomium",self._prefs)

	self:info("Creating OSG surface factory");
	self._surfaceFactory = awe.OSGSurfaceFactory()
	
	self._core:set_surface_factory(self._surfaceFactory);
	
	local Set = require "std.Set"
	self._webViewList = Set();
	
	local Map = require "std.Map"
	self._dataSources = Map();
	
	local DMap = require "std.DMap"
	self._objects = DMap();
	
	self:getEventManager():addListener{event=Event.FRAME,object=self}
	self:getEventManager():addListener{event=Event.APP_CLOSING,object=self}
end

-- register a global object by id:
function Class:setObject(view, id, obj)
	self:check(view,"Invalid view object")
	self:check(id,"Invalid id")
	view = PTR(view) -- We need to convert to void to ensure proper key comparaison in tables!!
	self:check(self._objects:get(view,id)==nil,"A global object with id=",id," was already registered for the web view ", tostring(view))
	--self:info("Registering object with id=",id, ", view=",view, " obj=",tostring(self))
	self._objects:set(view,id,obj)
	
	--self:check(self._objects:get(view,id)==obj,"Invalid result for getObject(), got:",self._objects:get(view,id))
end

-- retrieve a global object by view and id:
function Class:getObject(view,id)
	-- We need to convert to void to ensure proper key comparaison in tables!!
	return self._objects:get(PTR(view),id)
end

-- release all the globals for a given view:
function Class:releaseObjects(view)
	self:info("Releasing all globals for ", view)
	self._objects:erase(PTR(view))
end

function Class:addDataSource(name,source)
	self:check(self._dataSources:get(name)==nil,"A data source with name '", name,"' was already added.")
	
	self._dataSources:set(name,source)
	self._session:AddDataSource(name,source)
end

function Class:addDataPak(name,filename)
	self:debug2("Adding datasource with name '", name,"' from file: ",filename)
	local dataSource = awe.DataPakSource(filename);
	self:addDataSource(name,dataSource)
end

function Class:getSurfaceFactory()
	return self._surfaceFactory
end

function Class:registerWebView(view)
	self._webViewList:push_back(view)
end

function Class:unregisterWebView(view)
	self:info("Unregistering webview: ", view)
	self:releaseGlobals(view)
	self._webViewList:eraseItem(view)
end

function Class:createWebView(options)
	self:check(options and options.width,"Invalid webview width.")
	self:check(options and options.height,"Invalid webview height.")
	local view = self._core:CreateWebView(options.width, options.height, self._session);
	
	return view;
end

function Class:createWebImage(options)
	local WebImage = require "gui.web.WebImage"
	local res = WebImage(options)
	return res;
end

function Class:createWebTexture(options)
	local WebTexture = require "gui.web.WebTexture"
	local res = WebTexture(options)
	return res;
end

function Class:onFrame()
	--self:info("Updating webcore...");
	prof:start("WebCore update")
	self._core:Update()
	prof:stop()
end

function Class:onAppClosing()
	self:info("Closing Web manager...")
	self._core:Update()	
	
	-- destroy all the webviews:
	for _,view in self._webViewList:sequence() do
		view:Destroy();
	end
	self._webViewList:clear();
	self._objects:clear();
	
	-- Update one last time:
	self._core:Update()	
	
	self._session:Release();
		
	awe.WebCore.Shutdown()	

	self:info("Releasing OSG surface factory");
	self._surfaceFactory = nil;

	self:info("Web manager closed.")	
end

return Class() -- return instance of the class.
