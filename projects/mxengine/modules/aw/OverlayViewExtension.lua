local Class = require("classBuilder"){name="OverlayViewExtension",bases={"base.Object"}};

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
				self:onOverlayReady()
			end
		})
	end
end

function Class:releaseController()
	self:info("Releasing controller...")
	self._controller = nil
end

function Class:onOverlayReady()
	-- do nothing here by default.
end

function Class:setFields(mapping)
	if not self._controller then
		-- controller is not reading, we should save the data to send here:
		self._postponed = self._postponed or {}
		for prop,val in pairs(mapping) do
			self._postponed[prop] = val
		end
		return
	end
	
	-- self:warn("Handling field data!")
	
	if self._postponed then
		-- add the postponed data to the mapping to send, if applicable:
		for prop,val in pairs(self._postponed) do
			if mapping[prop]==nil then
				mapping[prop] = val
			end
		end
		
		self._postponed = nil
	end
	
	-- self:check(self._controller,"Invalid controller object")
	
	-- self:info("Using remote ID is:",self._controller:remote_id(), ", ref_count=",self._controller:ref_count())
	
	local args = awe.JSArray()

	local obj = awe.JSObject()
	for prop,val in pairs(mapping) do
		obj:SetProperty(prop,awe.JSValue(val));
	end

	args:Push(awe.JSValue(obj))
	
	self._controller:InvokeAsync("set",args)
	-- controller:InvokeAsync("setFields",args)
	self:checkErrors(self._controller)
end

return Class
