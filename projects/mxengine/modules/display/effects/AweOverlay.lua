local Class = require("classBuilder"){name="AweOverlay",bases="display.Effect"};
local awe = require "Awesomium"

--[[
Class: display.effects.AweOverlay

Simple implementation of an Awesomium based overlay system.

This class inherits from <display.Effect>.
]]

--[=[
--[[
Constructor: AweOverlay

Create a new instance of the class.
]]
function AweOverlay(options)
]=]
function Class:initialize(options)
	-- self:warn("Loading AWE Overlay!")
	
	local fx = self:addFilter{"AddLayer"}	
	
	-- Add the overlay texture on slot 1:
	local size = self:getTurret():getRenderSize()
	
	local tobj = require "aw.WebView" {width = size:x(), height = size:y(), transparent=true}
	-- local tobj = require "aw.WebView" {width = 1280, height = 720}
	-- tobj:loadURL("http://www.google.fr")
	-- tobj:loadURL("W:/Cloud/Projects/singularity/projects/mxengine/assets/overlays.html")
	tobj:loadURL("W:/Cloud/Projects/singularity/projects/mxengine/web/app/index.html")
	-- tobj:loadURL("W:/Cloud/Projects/singularity/projects/mxengine/web/dist/index.html")
	tobj:getTextureObject():setLinearFiltering()
	
	fx:setTextureObject(tobj,1)
	
	self._webView = tobj
	
	-- Add a load listener on the Awesomium WebView object:
	local aweView = self._webView:getView()
	
	self._loadListener = awe.Load{
		OnBeginLoadingFrame = function(tt, obj, caller, frame_id,is_main_frame, url, is_error_page)
			self:info("Begin Loading frame...")
		end,
		
		OnFailLoadingFrame = function(tt, obj, caller, frame_id, is_main_frame, url, error_code, error_desc)
			self:error("Failed loading frame.")
		end,
 
		OnFinishLoadingFrame = function(tt, obj, caller, frame_id, is_main_frame, url)
			self:info("Finished loading frame.")
		end,
 
		OnDocumentReady = function(tt, obj, caller, url)
			self:info("DOM ready.")
			if not self._initialized then
				-- self._initialized = true
				
				-- perform the initialization here:
				self:info("Calling updateFunc...")
				aweView:ExecuteJavascript("updateFunc();","")
				self:info("updateFunc called.")
			end
		end
	}
	
	aweView:set_load_listener(self._loadListener)
	
	-- local TextureObject = require "dx.TextureObject"	
	-- fx:setTextureObject(TextureObject{file="test_logo"},1)
	local Turret = require "mx.Turret"
	
	self:getTurret():addListener{Turret.EVT_RELEASE,function()
		self:notice("Releasing WebView for discarded turret...")
		fx:setTextureObject(nil,1)
		self._webView = nil
		tobj:releaseWebView()
	end}	
	
	self:getTurret():addListener{Turret.EVT_POST_UPDATE,function()
		-- perform update here.
	end}	
end

function Class:reload()
	self:check(self._webView,"Invalid webView for reload.")
	self._webView:reloadURL()
end

return Class
