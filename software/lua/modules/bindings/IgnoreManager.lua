
local oo = require "loop.base"
local dbg = require "debugger"

local Set = require "std.Set"
local Map = require "std.Map"
local log = require "logger"

--- Class used to configure the piece of codes that should be
-- ignored.
local IgnoreManager = oo.class{}

IgnoreManager.CLASS_NAME = "bindings.IgnoreManager"

function IgnoreManager:__init()
    local obj = oo.rawnew(self,{})
    obj.ignoreClassPatterns = Set();
    obj.ignoreConvertersPatterns = Set() 
    obj.ignoreFunctionPatterns = Set() 
    obj.ignoreDefinePatterns = Set() 
    return obj
end

--- Retrieve the ignore converters pattern set.
function IgnoreManager:getIgnoreClassesPatterns()
    return self.ignoreClassPatterns
end

function IgnoreManager:getIgnoreDefinesPatterns()
    return self.ignoreDefinePatterns
end

function IgnoreManager:getIgnoreFunctionsPatterns()
    return self.ignoreFunctionPatterns
end

--- Retrieve the ignore converters pattern set.
function IgnoreManager:getIgnoreConvertersPatterns()
    return self.ignoreConvertersPatterns
end

function IgnoreManager:ignoreFunction(func)
	local proto = func:getPrototype(false,true);
    for _,v in self.ignoreFunctionPatterns:sequence() do
        if proto:find(v) then
        	if proto:find("wxFrame") then
	        	log:notice("Ignoring function ",func:getFullName()," as matching pattern ",v)
	        end
            return true;
        end
    end
    return false;
end

function IgnoreManager:ignoreDefine(def)
    local cname = def:getName()
    for _,v in self.ignoreDefinePatterns:sequence() do
    	--error("Checking class ignore pattern ".. v .. " with class ".. class:getName())
        if cname:find(v) then
        	--dbg:assert(false,"Ignoring class ",class:getName())
            return true;
        end
    end
    return false;
end

function IgnoreManager:ignoreClass(class)
    local cname = class:getName()
    for _,v in self.ignoreClassPatterns:sequence() do
    	--error("Checking class ignore pattern ".. v .. " with class ".. class:getName())
        if cname:find(v) then
        	--dbg:assert(false,"Ignoring class ",class:getName())
            return true;
        end
    end
    return false;
end

function IgnoreManager:ignoreConverter(class)
	if self:ignoreClass(class) then
		return true;
	end

	local cname = class:getName()
    for k,v in self.ignoreConvertersPatterns:sequence() do
        if cname:find(v) then
            return true;
        end
    end
    
    return false;
end

local instance = IgnoreManager()

return instance

