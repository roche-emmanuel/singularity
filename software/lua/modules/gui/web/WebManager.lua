local Class = createClass{name="WebManager",bases="core.Object"};

local awe = require "Awesomium"
local prof = require "debugging.Profiler"
local fs = require "base.FileSystem"

function Class:initialize(options)
	
	self:info("Initializing WebCore...")
	local  cfg = awe.WebConfig();
	cfg:set_remote_debugging_port(self._debug_port or config.awesomium_debug_port or 0)
	
	--cfg:addAdditionalOption("--use-gl=desktop");
	
	self._prefs = awe.WebPreferences()
	
	self._prefs:set_enable_web_gl(false) -- disable webgl for now.
	self._prefs:set_enable_databases(false)
	self._prefs:set_allow_file_access_from_file_url(true)
	self._prefs:set_allow_universal_access_from_file_url(true)
	
	self._core = awe.WebCore.Initialize(cfg)

	local cachePath = config.cache_path or fs:getRootPath(true).."cache"
	
	self._session = self._core:CreateWebSession(cachePath .. "/awesomium",self._prefs)

	local sf = self:createSurfaceFactory()
	self:setSurfaceFactory(sf)

	-- first call to core update:
	-- self:warn("Calling Core:Update()")
	self._core:Update()
	-- self:warn("Core:Update() called.")
	
	local Set = require "std.Set"
	self._webViewList = Set();
	
	local Map = require "std.Map"
	self._dataSources = Map();
end

function Class:setSurfaceFactory(sf)
	self:check(sf,"Invalid surface factory.")
	self._surfaceFactory = sf
	self._core:set_surface_factory(self._surfaceFactory);
end

function Class:update()
	if self._core then
		self._core:Update()
	end
end

function Class:isValid()
	if self._webViewList:empty() then
		return false;
	end
	
	for _,view in self._webViewList:sequence() do
		if not view:isValid() then
			return false;
		end
	end
	
	return true
end

function Class:createSurfaceFactory()
	self:no_impl()
end

function Class:createWebView(options)
	self:no_impl()
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

function Class:newWebView(options)
	self:check(options and options.width,"Invalid webview width.")
	self:check(options and options.height,"Invalid webview height.")
	-- self:showMessage("Creating awesomium web view with options: ", options)
	local view = self._core:CreateWebView(options.width, options.height, self._session,
										  options.window and awe.kWebViewType_Window or awe.kWebViewType_Offscreen);
	-- self:showMessage("Awesomium web view created.")

	if options.window then
		self:debug("Assigning parent window to webview.")
		view:set_parent_window(options.window)
	end
	
	-- Create a webview wrapper from this awesomium webview:
	-- self:showMessage("Preparing for Webview wrapper creation.")
	options.view = view
	options.surfaceFactory = self._surfaceFactory:getTable()
	options.manager = self
	
	-- self:showMessage("Creating Webview wrapper...")
	local webview = self:createWebView(options)
	-- self:showMessage("Webview wrapper created.")
	self._webViewList:push_back(webview)
	
	return webview;
end

function Class:deleteWebView(view)
	self:debug("Deleting webview with ID=", view:getID())
	self._webViewList:eraseValue(view)
	view:destroy()
	self:debug("Webview with ID=", view:getID()," deleted.")
end

function Class:getWebView(id)
	return self._webViewList:find(function(view) return view:getID()==id end)
end

function Class:destroy()
	self:info("Closing Web manager...")
	
	if not self._core then
		self:info("Web manager already closed.")
		return
	end
	
	self._core:Update()	
	
	-- destroy all the webviews:
	for _,view in self._webViewList:sequence() do
		view:destroy();
	end
	self._webViewList:clear();
	
	-- Update one last time:
	self._core:Update()	
	
	local num = self._surfaceFactory:getTable():getNumSurfaces()
	self:check(num==0,"Invalid count of surfaces: ",num)

	self._session:Release();
		
	awe.WebCore.Shutdown()	
	
	self._core = nil

	self:info("Web manager closed.")	
end

return Class
