local Class = require("classBuilder"){name="Provider",bases="base.Object"};

local cfg = require "config"
local utils = require "utils"

--- Initialize the mainframe display:
function Class:initialize(options)
	self._container = nil;
end

function Class:setContainer(cont)
	self._container = cont
end

function Class:getContainer()
	return self._container;
end

function Class:getCurrentItem()
	-- return a dummy item as this may be used for some entries 
	-- to change the enable status (for instance ActionButton entries)            
    return "dummy"; 
end

function Class:get(entry)
	self:check(self._container,"Invalid container.")
	return self._container:get(entry:getName(),entry:getDefaultValue())
end

function Class:set(entry,val)
	self:check(self._container,"Invalid container.")
	return self._container:set(entry,val)
end
        
return Class
