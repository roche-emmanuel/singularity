local Class = require("classBuilder"){name="Timer",bases="base.Object"};

local wx = require "wx"

--- The Scheduler is used to register timers.
function Class:initialize(options)
	self:check(options and (options.frequency or options.delay), "Invalid inputs for Timer.")
	self:check(options.callback, "Invalid callback.")
	
	self:debug4("Creating extended timer.")
	self.wrapper = wx.wxTimer(self)
	self:debug4("Extended timer created.")
	
	-- Retrieve all the functions from the wrapped class:
	for name,func in pairs(wx.wxTimer) do
		if(type(func)=="function" and not self[name]) and name~="new" and name~="__eq" and name~="__gc" then
			--self:info("Adding auto wrapped function: ",name)
			local wname = (name:sub(1,5)=="base_" and name) or (self.wrapper["base_"..name] and "base_"..name) or name -- force rediction to the base function call to avoid infinite looping.
			self[name] = function(arg1, ...) self.wrapper[wname](self.wrapper, ...) end
		end
	end
	
	self._interval = math.floor((options.delay or 1.0/options.frequency)*1000.0 + 0.5);
	self._callback = options.callback
	self._arg = options.arg
	self._oneShot = options.oneShot or false
end

function Class:Notify()
	--self:info("Calling notify on extended timer.")
	self._callback(self._arg)
end

function Class:Start(interval)
	interval = interval or self._interval
	--self:info("Calling base Start on derived timer.")
	self:base_Start(interval, self._oneShot)
end

return Class
