local Class = createClass{name="WebThread",bases={"base.Thread","gui.web.Enums"}};

local Event = require "base.Event"

function Class:initialize(options)
	self._name = "webcore_thread"
	self._timeout = 0.3
	self:warn("Creating webthread")

	-- this is he core function used to start the Web thread.
	self._func = function(th,interval)
		-- here we should initialize the web manager:
		local Interface = require "gui.web.WebInterface"
		
		-- assign the linda object to the interface to be used:
		local intf = Interface{linda=th:getLinda()}
		
		-- Start the loop with this interface:
		intf(interval)		
		-- when the loop exits, we are done.
	end;	
	
	-- we register a close callback when the application is closed:
	local eman = require "base.EventManager"
	eman:addListener{event=Event.APP_CLOSING,func=function()
		log:info("Cancelling webcore thread...")
		self:cancel()
	end}

	-- hack to get the "request" slot ready for count:
	-- otherwise linda:count("request") will crash.
	self:send("request","nothing")
	self:receive("request")
	
	-- We start the thread right now:
	self(0.01)

end

function Class:sendRequest(data)
	-- Send the request data to the worker thread:
	self:checkStatus()
	self:send("request",data)
	
	if data.sync then
		-- now we wait the answer to arrive:
		self:checkStatus()
		self:info("Waiting for report of ",data[1]," request...") 
		local key, report = self:receive(5.0,"report")
		self:checkStatus()
		self:check(report[1]==data[1],"Mismatch between report and request ID, report_id=",report[1])
		self:info("Report received.")
		return report[2]
	end
end

function Class:sendWebViewCommand(id,cname,...)
	self:sendRequest{Class.REQUEST_VIEW_COMMAND,{id=id,command=cname,args={...}}}
end

function Class:createWebView(options)
	-- In this method we ask for the creation of a WebView on the Webcore thread interface.	
	-- This one is supposed to create the webview, and reply with its unique ID.
	local id = self:sendRequest{Class.REQUEST_CREATE_WEB_VIEW,options, sync=true}
	-- self:showMessage("Received webview ID: ",id)
	return id;
end

--[[
Function: destroyWebView

Method called to notify the webcore thread that a given webview should be destroyed.

Parameters:
	id - The ID of the webview to destroy.
]]
function Class:destroyWebView(id)
	local res = self:sendRequest{Class.REQUEST_DESTROY_WEB_VIEW, id, sync=true}
	self:check(res==true,"Could not destroy webview with ID=",id," msg: ",res)
end

function Class:setTargetSurface(id,surface)
	local options = {id=id,surface=self:toPtr(surface)}
	-- self:showMessage("Sending options for set Target Surface: ",options)
	local res = self:sendRequest{Class.REQUEST_SET_TARGET_SURFACE,options,sync=true}	
	self:check(res,"Could not set target DX surface for webview with ID=",id," msg: ",res)
end

return Class{func=function() end} -- providing dummy function.
