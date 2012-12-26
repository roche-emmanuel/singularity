local Class = require("classBuilder"){name="Timer",bases="base.Object"}; 

local wx = require "wx"

Class:generateWrapping(wx.wxTimer)

--- The Scheduler is used to register timers.
function Class:initialize(options)
	self:check(options and (options.frequency or options.delay), "Invalid inputs for Timer.")
	self:check(options.callback, "Invalid callback.")
	
	self:createWrapper(wx.wxTimer)
	
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
