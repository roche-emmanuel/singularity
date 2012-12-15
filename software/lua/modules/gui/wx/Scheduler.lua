local Class = require("classBuilder"){name="Scheduler",bases="base.Object"};

local wx = require "wx"

local i18n = require "i18n"
local cfg = require "config"
local evtman = require "base.EventManager"
local Event = require "base.Event"
local Set = require "std.Set"
local Timer = require "gui.wx.Timer"

--- The Scheduler is used to register timers.
function Class:initialize(options)
	self:debug4("Initializing scheduler.")

	self._timers = Set();
	
	evtman:addListener(Event.APP_CLOSING,self)
	
	self:addTimer{frequency=cfg.master_framerate,callback=function(event) 
		--self:info("Handing frame timer event...");
		evtman:fireEvent(Event.FRAME) 
	end}
end

-- Should disable all the timers here.
function Class:onAppClosing()
	-- release all the images:
	self:info("Stopping registered timers.")
	for _,timer in self._timers:sequence() do
		timer:Stop();
		timer:release(); -- release the wrapper.
	end
end

-- Add a new timer using the provided options.
-- options.frequency (optional) should in in Hz.
-- options.delay (optional) should be in seconds.
function Class:addTimer(options)
	-- add a new timer to the list:
	local timer = Timer(options);
	self._timers:push_back(timer);
	
	timer:Start()
	return timer;
end

return Class() -- return class instance.
