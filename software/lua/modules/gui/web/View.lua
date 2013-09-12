local Class = require("classBuilder"){name="View",bases="base.Object"};

local awe = require "Awesomium"

--[[
Class: gui.web.View

Encapsulation of the awesomium WebView object.

This class inherits from <base.Object>.
]]

--[=[
--[[
Constructor: View

Create a new instance of the class.

Parameters:
	options.width - Width of the web view to create.
	options.height - height of the web view to create.
]]
function View(options)
]=]
function Class:initialize(options)
	self:check(options and options.width and options.height,"Invalid dimensions for web View creation")
	
	-- create the webview:
	self._webView = self:getManager():createWebView{width=options.width,height=options.height}
	self:check(self._webView,"Invalid web view object.")
	
	-- set as transparent if needed:
	self._webView:SetTransparent(options.transparent or false)
	
	-- setup the listeners:
	self:setupListeners()
end

--[[
Function: getManager

Retrieve the WebView manager for this kind of web view.
The manager class should inherit from <gui.web.WebManager>.

This method must be re-implemented by a derived class.

Returns:
	The <gui.web.Manager> object to use for this class.
]]
function Class:getManager()
	self:no_impl()
	-- return require "gui.web.Manager"
end

--[[
Function: loadURL

Load a new URL.

Parameters:
	url - The URL to load.
]]
function Class:loadURL(url)
	self._url = url
	self:debug("Loading URL: ", url)
	self._webView:LoadURL(awe.WebURL(url))
end

--[[
Function: reloadURL

Reload the last URL loaded.
This method will trigger an error if no URL was loaded before.
]]
function Class:reloadURL()
	self:check(self._url,"Invalid url for Reload")
	self:debug("Reloading...")
	self:loadURL(self._url)
end

--[[
Function: setupListeners

Setup all the listeners for this webview.
This method is called internally.
]]
function Class:setupListeners()
	self:setupLoadListener()
end

--[[
Function: setupLoadListener

Method called internally to setup the load listener.
]]
function Class:setupLoadListener()
	self._loadListener = awe.Load{
		OnBeginLoadingFrame = function(tt, obj, caller, frame_id,is_main_frame, url, is_error_page)
			self:onBeginLoadingFrame(caller,frame_id,is_main_frame,url:spec(),is_error_page,obj)
		end,
		
		OnFailLoadingFrame = function(tt, obj, caller, frame_id, is_main_frame, url, error_code, error_desc)
			self:onFailLoadingFrame(caller,frame_id,is_main_frame,url:spec(),error_code,error_desc,obj)
		end,
 
		OnFinishLoadingFrame = function(tt, obj, caller, frame_id, is_main_frame, url)
			self:onFinishLoadingFrame(caller,frame_id,is_main_frame,url:spec(),obj)
		end,
 
		OnDocumentReady = function(tt, obj, caller, url)
			self:onDocumentReady(caller,url:spec(),obj)
		end
	}
	
	self._webView:set_load_listener(self._loadListener)
end

--[[
Function: onBeginLoadingFrame

Load listener event for begin loading frame.

Parameters:
	caller - The awesomium WebView caller.
	frame_id - The frame_id.
	is_main_frame - {boolean} True if this is the main frame.
	url - {string} The URL being loaded.
	is_error_page - {boolean} True if this is an error page
	obj - the load listener object.  
]]
function Class:onBeginLoadingFrame(caller,frame_id,is_main_frame,url,is_error_page,obj)
	self:debug("Calling onBeginLoadingFrame().")
end

--[[
Function: onFailLoadingFrame

Load listener event for failed loading frame.
This event occurs when a frame fails to load. See error_desc for additional information.

Parameters:
	caller - The awesomium WebView caller.
	frame_id - The frame_id.
	is_main_frame - {boolean} True if this is the main frame.
	url - {string} The URL being loaded.
	error_code - {int} The actual error code.
	error_desc - {string} The error description.
	obj - the load listener object.  
]]
function Class:onFailLoadingFrame(caller,frame_id,is_main_frame,url,error_code,error_desc,obj)
	self:error("Failed loading frame from url='", url,"', error_code=",error_code,", desc=",error_desc);
end

--[[
Function: onFinishLoadingFrame

Load listener event for finished frame loading.
This event occurs when the page finishes loading a frame. 
The main frame always finishes loading last for a given page load.

Parameters:
	caller - The awesomium WebView caller.
	frame_id - The frame_id.
	is_main_frame - {boolean} True if this is the main frame.
	url - {string} The URL being loaded.
	obj - the load listener object.  
]]
function Class:onFinishLoadingFrame(caller,frame_id,is_main_frame,url,obj)
	self:debug("Calling onFinishLoadingFrame().")
end

--[[
Function: onDocumentReady

Load listener event for DOM ready.
This event occurs when the DOM has finished parsing and the window object is available for JavaScript execution.

Parameters:
	caller - The awesomium WebView caller.
	url - {string} The URL being loaded.
	obj - the load listener object.  
]]
function Class:onDocumentReady(caller,url,obj)
	self:debug("Calling onDocumentReady().")
end


return Class

