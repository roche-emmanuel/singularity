local Class = createClass{name="OverlayViewExtension",bases={"core.Object"}};

local awe = require "Awesomium"

--[[
Class: aw.OverlayViewExtension

This class is meant to extend a <gui.web.View> to implement the support
for overlay control.

This class inherits from <base.Object>.
]]

--[=[
--[[
Constructor: OverlayViewExtension

Create a new instance of the class.
]]
function OverlayViewExtension(options)
]=]
function Class:initialize(options)	
	self:addSourcePrefix("web/app/scripts/")
end

function Class:registerTurretProxy()
	if not self:getObject("turretProxy") then
		self:info("Registering turret proxy...")
		self:registerObject("turretProxy",{
			onOverlayReady = function(controller)
				self:check(controller,"Invalid controller object")
				self._controller = awe.JSObject(controller); -- keep a reference properly!
				self:check(self._controller:remote_id()~=0,"Controller object is local!")
				self:debug2_v("Overlay model remote ID is:",self._controller:remote_id())
				if self._onOverlayReady then
					self._onOverlayReady()
				end
			end
		})
	end
end

function Class:releaseController()
	self:info("Releasing controller...")
	self._controller = nil
end

function Class:onOverlayReady(func)
	self._onOverlayReady = func
end

function Class:call(mname,...)
	if not self._view then 
		self:warn("Awesomium view is gone. Cannot call method.")
		return
	end

	if not self._controller then
		self:warn("Controller is not ready yet.")
		return
	end
	
	local args = awe.JSArray.fromTable{...}
	
	self._controller:InvokeAsync(mname,args)
	self:checkErrors(self._controller)
end

function Class:syncCall(mname,...)
	if not self._view then 
		self:warn("Awesomium view is gone. Cannot call method.")
		return
	end
	
	if not self._controller then
		self:warn("Controller is not ready yet.")
		return
	end
	
	local args = awe.JSArray.fromTable{...}
	
	self._controller:Invoke(mname,args)
	self:checkErrors(self._controller)
end

return Class
