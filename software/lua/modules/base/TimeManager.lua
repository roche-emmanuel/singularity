local Class = require("classBuilder"){name="TimeManager",bases="base.Object"};

local osg = require "osg"
	
function Class:initialize(options)
	self._epoch = boost.ptime(boost.date(1970,1,1));
	self._timer = osg.Timer.instance();
end
	
function Class:getSeconds(since)
	local curtime = boost.second_universal_time();
	
	local diff = curtime - (since or self._epoch)
	return diff:total_seconds();
end

function Class:tick()
	return self._timer:tick()
end

function Class:delta_s(startTick, endTick)
	return self._timer:delta_s(startTick, endTick or self._timer:tick());
end

return Class()
