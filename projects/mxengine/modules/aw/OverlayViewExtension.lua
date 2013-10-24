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

function Class:setFields(mapping)
	
	-- create a copy of the map first:
	local tt = {}
	local asProp = false

	for k,v in pairs(mapping) do
		-- tt[k] = type(v)=="string" and v:gsub("°","&deg;"):gsub(" ","&nbsp;") or v; -- make the degree symbol compatible with html display.
		tt[k] = v; 
		asProp = true;
	end
	mapping = tt;
	
	if not self._controller then
		-- controller is not reading, we should save the data to send here:
		self._postponed = self._postponed or {}
		for prop,val in pairs(mapping) do
			if self._postponed[prop]~=nil and self._postponed[prop]~=val then
				self:warn("Overriding postponed value prop=",prop,", val=",self._postponed[prop]," with newval=", val)
			end
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
			elseif mapping[prop] ~= val then
				self:warn("Discarding postponed value prop=",prop,", val=",val," with newval=",mapping[prop] )
			end
			asProp = true;
		end
		
		self._postponed = nil
	end
	
	if not asProp then
		return -- nothing to do here.
	end
	
	-- self:check(self._controller,"Invalid controller object")
	
	-- self:info("Using remote ID is:",self._controller:remote_id(), ", ref_count=",self._controller:ref_count())
	
	local args = awe.JSArray()

	local obj = awe.JSObject()
	for prop,val in pairs(mapping) do
		obj:SetProperty(prop,awe.JSValue.box(val));
	end
	
	-- self:info("Sending updates for: ",mapping)		


	args:Push(awe.JSValue(obj))
	
	self._controller:InvokeAsync("setFields",args)
	-- controller:InvokeAsync("setFields",args)
	self:checkErrors(self._controller)
end

function Class:call(mname,...)
	if not self._controller then
		self:warn("Controller is not ready yet.")
		return
	end
	
	local args = awe.JSArray.fromTable{...}
	
	self._controller:InvokeAsync(mname,args)
	self:checkErrors(self._controller)
end

return Class
