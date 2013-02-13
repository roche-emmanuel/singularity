local Class = require("classBuilder"){name="Thread",bases="base.Object"};

local loaders = {}
local apr = require "apr"

local lanes = require "lanes"
lanes.configure({with_timers=false})

loaders.high_level = function(data) 
	_G.flavor = data.flavor
	_G.root_path = data.root_path
	
	local sgt = require "core"
	local modName = "StartModule"
	local content = sgt.ModuleManager.instance().getModule(modName);
	
	local func, msg = loadstring(content,modName)
	if not func then
		sgt.doLog(sgt.LogManager.ERROR,"Cannot load content for module ", modName,": ",msg)
		return
	end
	
	-- the function is loaded properly, now call it:
	local res = func()
	package.loaded[modName] = package.loaded[modName] or res or true
	
	log:info("Starting thread ", data.threadName,"...")
	
	local res = #data.args >0 and data.threadFunc(unpack(data.args)) or data.threadFunc()
	
	log:info("Finishing thread ",data.threadName,".")
	return res~=nil and res or true; -- do not send nil result.
	
	--return true
	--return loaders.low_level(data)
end

loaders.low_level = function(data)
	log:info("Starting thread ", data.threadName,"...")
	
	local res = #data.args >0 and data.threadFunc(unpack(data.args)) or data.threadFunc()
	
	log:info("Finishing thread ",data.threadName,".")
	return res~=nil and res or true; -- do not send nil result.
end

-- options should contain at least a function to create the lane.
-- options.func = mandatory function.
-- options.name = thread name
-- options.loader [="high_level"] = loader implementation to use.
-- options.libraries  [="*"] = lua libs to load.
function Class:initialize(options)
	self:check(options,"Invalid options table.")
	self:check(options.func,"Invalid thread function.")
		
	local glb = {}
	glb.cancelstep = options.cancelstep
	glb.priority = options.priority
	
	local libs = options.libraries or "*"
	local loader = options.loader or "high_level"
	
	self._func = options.func;
	self._name = options.name or "[unnamed]"
	self._timeout = options.timeout or 1.0

	self._lane = lanes.gen( libs, glb, loaders[loader]);
end

function Class:__call(...)
	-- start the lane and return the handle:
	self:check(self._lane,"Invalid lane");
	self:check(not self._handle,"Thread already started.")
	
	local data = {}
	data.root_path = root_path
	data.flavor = flavor
	data.threadName = self._name
	data.threadFunc = self._func
	data.args = {...}
	
	local tman = require "base.ThreadManager"
	tman:registerThread(self)
	
	self._handle = self._lane(data)
	return self._handle
end

function Class:join(timeout)
	self:check(self._handle,"Invalid handle in Thread:join()")
	
	local res, err, stack = self._handle:join(timeout);
	if res==nil and err~=nil then
		-- there was an error:
		log:error("Error in thread ", self._name, ": ", tostring(err), "\nThread stack: ", table.concat(stack or {},"\n"))
	end
	
	return res
end

function Class:getStatus()
	if not self._handle then
		return "none"
	end
	
	return self._handle.status
end

function Class:getName()
	return self._name
end

function Class:cancel(timeout, kill)
	if not self._handle then
		return -- nothing to do.
	end
	
	-- self:check(self._handle,"No lane handle to cancel.")
	
	self:info("Cancelling thread ", self._name)
	
	-- if there is an error in the thread, try to join it:
	if self:getStatus() == "error" then
		self:join() -- this will display the errors.
	end
	
	timeout = timeout or self._timeout
	
	local res = self._handle:cancel(timeout, kill)
	-- res = self:join(timeout) -- try to join to retrieve errors.

	if not res then
		self:warn("Could not stop thread ", self._name," gracefully, now trying to kill it...")
		self._handle:cancel(0.0, true);
		self:check(self:getStatus()=="killed","Invalid thread status after kill: ", self:getStatus())
		--self:check(res,"Could not kill the thread ", self._name)
	end
	
	local tman = require "base.ThreadManager"
	tman:unregisterThread(self)
	
	-- remove the handle:
	self._handle = nil;
end

function Class.newLinda()
	return lanes.linda()
end

function Class.getTime()
	return lanes.now_secs()
end

return Class
