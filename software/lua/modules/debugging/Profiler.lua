local Class = require("classBuilder"){name="Profiler",bases="base.Object"};

local osg = require "osg"
local Section = require "debugging.ProfilerSection"

function Class:initialize()
	local Map = require "std.Map"
	self._sections = Map();
	self._timer = osg.Timer.instance()
	
	self._totalTime = 0.0;
	self._numCycles = 0;
end

function Class:getTick()
	return self._timer:tick()
end

function Class:getDelta(startTick,endTick)
	return self._timer:delta_s(self._cycleStartTick, endTick or self:getTick())
end

function Class:startCycle()
	self._numCycles = self._numCycles+1
	self._cycleStartTick = self:getTick()
end

function Class:stopCycle()
	self._totalTime = self._totalTime + self:getDelta(self._cycleStartTick)
	self._cycleStartTick = nil
end

return Class() -- return instance of the class.
