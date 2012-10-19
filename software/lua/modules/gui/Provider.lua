local Class = require("classBuilder"){name="Provider",bases="base.Object"};

local cfg = require "config"
local utils = require "utils"
local Set = require "std.Set"
local Container = require "gui.Container"

-- AppConfigProvider can be created using a simple provider 
-- on a table container.


--- Initialize the mainframe display:
function Class:initialize(options)
	self._container = Container();
	self._children = Set(); -- list of sub providers.
	self._parent = options.parent
	if self._parent then
		self._parent:addChild(self)
	end
end

function Class:addChild(provider)
	self:check(provider,"Invalid provider object.")
	self._children:push_back(provider)
end

function Class:updateChildren()
    for _,child in self._children:sequence() do
        child:update();
    end
end

function Class:setInterface(intf)
	self._interface = intf;
end

function Class:getInterface()
	return self._interface;
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
    --return "dummy";
    return self:getContainer()
end

function Class:get(entry)
    local item = self:getCurrentItem()
    if not item then
        return nil;
    end
    
	return item:get(entry)
end

function Class:set(entry,val)
    local item = self:getCurrentItem()
    if not item then
        return false;
    end
    
	return item:set(entry,val)
end

function Class:update(name)
 	-- doing nothing if there is no selector.
end
        
return Class
