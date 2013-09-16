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
	
	local Map = require "std.Map"
	self._objectNameMap = Map()
	self._methodIDMap = Map()
	
	-- create the webview:
	self._webView = self:getManager():createWebView{width=options.width,height=options.height}
	self:check(self._webView,"Invalid web view object.")
	
	-- set as transparent if needed:
	self._webView:SetTransparent(options.transparent or false)
	
	-- setup the listeners:
	self:setupListeners()
	
	-- setu the JS handler:
	self:setupJSHandler()
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
	self:debug("Loading URL: ", url)
	self._webView:LoadURL(awe.WebURL(url))
end

--[[
Function: reload

Reload the last URL loaded.

Parameters:
	ignore_cache - (optional) If set to false, then the cache will not be reloaded. Default value is true.
]]
function Class:reload(ignore_cache)
	self:debug("Reloading...")
	self:Reload(ignore_cache==nil or ignore_cache)
end

--[[
Function: registerObject

Register a JSObject with a list of custom methods.

Parameters:
	objName - The name to give to the object.
	methods - (optional) A table mapping method names to functions to be executed.
Those methods should not return any values (results will be discarded anyway).
	withReturnMethods - (optional) A table mapping method names to functions to be executed.
Those methods must return a result and this result will be sent to the Javascript engine. This
kind of method has some specific limitations and should be used carefully( see Awesomium documentation).
  
Returns:
	The JSObject just created. An error can be triggered if the object cannot be created.
	
]]
function Class:registerObject(objName,methods,withReturnMethods)
	self:check(not self._objectNameMap:get(objName),"Object with name ", objName," was already registered.")
	methods = methods or {}
	
	-- Now create the object:
	local obj = self._webView:CreateGlobalJavascriptObject(self._name)
	self:check(obj:IsObject(),"Could not create JS global object, error code is: ", self._webView:last_error());
	
	-- convert to object:
	obj = obj:ToObject()
	
	-- keep reference on the object:
	self._objectNameMap:set(objName,obj)
	
	-- get the remove ID:
	local id = obj:remote_id()
	self:check(id~=0,"id==0 : Global object should not be local.")
	
	-- keep reference on the methods table:
	self._methodIDMap:set(id,methods)
	
	-- register the custom methods:
	for name,func in pairs(methods) do
		obj:SetCustomMethod(name,false)
	end
	
	-- now extend the methods table with the methods returning values
	-- and register them at the same time:
	for name,func in pairs(withReturnMethods or {}) do
		self:check(not methods[name],"A JS method named ", name," was already registered.")
		methods[name] = func
		obj:SetCustomMethod(name,true) -- this one returns a value.
	end
	
	return obj
end

function Class:getObject(name)
	return self._objectNameMap:get(name)
end

function Class:getMethods(id)
	return self._methodIDMap:get(id)
end

function Class:setupJSHandler()
	self._jsHandler = awe.JSMethodHandler{
		OnMethodCall = function(tt, obj, caller, objectId, method_name, args)
			self:onMethodCall(caller, objectId, method_name, args:asTable(), obj)
		end,
		
		OnMethodCallWithReturnValue = function(tt, obj, caller, objectId, method_name, args)
			local res = self:onMethodCall(caller, objectId, method_name, args:asTable(), obj)
			self:check(res,"Invalid return value for method call: ",method_name)
			return res -- awe.JSValue.Null()
		end,
	}
	
	self._webView:set_js_method_handler(self._jsHandler)
end

--[[
Function: setupListeners

Setup all the listeners for this webview.
This method is called internally.
]]
function Class:setupListeners()
	self:setupLoadListener()
	self:setupViewListener()
	self:setupProcessListener()
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
Function: setupProcessListener

Method called internally to setup the process listener.
]]
function Class:setupProcessListener()
	self._processListener = awe.Process{
		OnUnresponsive = function(tt, obj, caller)
			self:onUnresponsive(caller, obj)
		end,
		 
		OnResponsive = function(tt, obj, caller)
			self:onResponsive(caller, obj)
		end,
 
		OnCrashed = function(tt, obj, caller, status)
			self:onCrashed(caller, status, obj)
		end
	}
	
	self._webView:set_process_listener(self._processListener)
end

--[[
Function: setupViewListener

Method called internally to setup the view listener.
]]
function Class:setupViewListener()
	self._viewListener = awe.View{
		OnChangeTitle = function(tt, obj, caller, title) -- title: WebString
			self:onChangeTitle(caller,title,obj);
		end,
		
		OnChangeAddressBar = function (tt, obj, caller, url) -- url: WebURL
			self:onChangeAddressBar(caller,url:spec(),obj)
		end,
		
		OnChangeTooltip = function(tt, obj, caller, tooltip) -- tooltip: WebString
			self:onChangeTooltip(caller,tooltip,obj)
		end,
		
		OnChangeTargetURL = function(tt, obj, caller, url) -- url: WebURL
			self:onChangeTargetURL(caller,url:spec(),obj)
		end,
		
		OnChangeCursor = function(tt, obj, caller, cursor)
			self:onChangeCursor(caller,cursor,obj)
		end,
		
		OnChangeFocus = function(tt, obj, caller, focused_type)
			self:onChangeFocus(caller,focused_type,obj)
		end,
		
		OnAddConsoleMessage = function(tt, obj, caller, message, line_number, source)
			self:onAddConsoleMessage(caller, message, line_number, source, obj);
		end,
		
		OnShowCreatedWebView = function(tt, obj, caller, new_view, opener_url, target_url, initial_pos, is_popup)
			self:onShowCreatedWebView(caller,new_view,opener_url:spec(),target_url:spec(),initial_pos,is_popup,obj)
		end,
	}
	
	self._webView:set_view_listener(self._viewListener)
end

--[[
Function: onMethodCall

This event occurs whenever a custom JSObject method (with or wihout return value) is called from JavaScript.

Parameters:
	caller - The caller webview.
	objectID - The ID of the object where this method is called.
	method_name - The name of the method to call.
	args - The arguments passed to the method as a table.
	obj - the JS handler object.
]]
function Class:onMethodCall(caller, objectId, method_name, args, obj)
	-- We first retrieve the methods for this object:
	local methods = self:getMethods(objectId)
	self:check(methods,"No methods registered for object with ID=",objectId);
	
	-- retrieve the actual method that should be executed:
	local func = methods[method_name]
	self:check(func,"Could not retrieve custom method with name ", method_name," on object with ID=",objectId)
	
	-- call the callback:
	local status, res = pcall(func,unpack(args))
	
	if not status then
		self:error("Could not execute JS custom method ", method_name,": ",res)
		return awe.JSValue.Undefined()
	end
	
	-- Return the result if any:
	return res;
end

--[[
Function: onUnresponsive

This event occurs when the process hangs. 
]]
function Class:onUnresponsive(caller, obj)
	self:warn("The webview process became unresponsive...")
end

--[[
Function: onResponsive

This event occurs when the process becomes responsive after a hang.
]]
function Class:onResponsive(caller, obj)
	self:notice("The webview process is now responsive again.")
end

--[[
Function: onCrashed

This event occurs when the process crashes.
]]
function Class:onCrashed(caller, status, obj)
	self:error("The webview process has crashed with status: ",status)
end

--[[
Function: onChangeTitle

This event occurs when the page title has changed.
]]
function Class:onChangeTitle(caller,title,obj)
	self:debug("Calling onChangeTitle().")
end

--[[
Function: onChangeAddressBar

This event occurs when the page URL has changed.
]]
function Class:onChangeAddressBar(caller,url,obj)
	self:debug("Calling onChangeAddressBar().")
end

--[[
Function: onChangeTooltip

This event occurs when the tooltip text has changed. 
You should hide the tooltip when the text is empty.
]]
function Class:onChangeTooltip(caller,tooltip,obj)
	self:debug("Calling onChangeTooltip().")
end

--[[
Function: onChangeTargetURL

This event occurs when the target URL has changed. 
This is usually the result of hovering over a link on a page.
]]
function Class:onChangeTargetURL(caller,url,obj)
	self:debug("Calling onChangeTargetURL().")
end

--[[
Function: onChangeCursor

This event occurs when the cursor has changed. 
This is is usually the result of hovering over different content.
]]
function Class:onChangeCursor(caller,cursor,obj)
	self:debug("Calling onChangeCursor().")
end

--[[
Function: onChangeFocus

This event occurs when the focused element changes on the page. 
This is usually the result of textbox being focused or some other user-interaction event.
]]
function Class:onChangeFocus(caller,focused_type,obj)
	self:debug("Calling onChangeFocus().")
end

--[[
Function: onAddConsoleMessage

This event occurs when a message is added to the console on the page. 
This is usually the result of a JavaScript error being encountered on a page.
]]
function Class:onAddConsoleMessage(caller, message, line_number, source, obj)
	if message:find("[INFO]%s+") then
		message = message:gsub("[INFO]%s+","")
		self:info(message," (",source,":",line_number,")")
	elseif message:find("[DEBUG]") then
		message = message:gsub("[DEBUG]%s+","")
		self:debug(message," (",source,":",line_number,")")
	else
		self:warn(message," (",source,":",line_number,")")
	end
end

--[[
Function: onShowCreatedWebView

This event occurs when a WebView creates a new child WebView (usually the result of window.open or an external link). 
It is your responsibility to display this child WebView in your application. 
You should call Resize on the child WebView immediately after this event to make it match your container size.

If this is a child of a Windowed WebView, you should call WebView::set_parent_window on the new view immediately within this event.
]]
function Class:onShowCreatedWebView(caller,new_view,opener_url,target_url,initial_pos,is_popup,obj)
	self:warn("Calling onShowCreateWebView(): no concrete implementation.")
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

