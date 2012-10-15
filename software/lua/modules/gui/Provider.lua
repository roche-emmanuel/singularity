local Class = require("classBuilder"){name="Provider",bases="base.Object"};

local cfg = require "config";

--- Initialize the mainframe display:
function Class:initialize(options)
	self._container = nil;
	self._separator = cfg.default_separator or "."
end

function Class:setSeparator(sep)
	self._separator = sep
end

function Class:getSeparator()
	return self._separator;
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

function Class:getValue(entry)
	-- convert the entry name in a string and parse it with the proper separator
	
end

function Class:setValue(entry,val)

end

function Class:get(entry)
    -- here we retrieve the value depending on the entry type:
    return self:getValue(entry:getName(),entry:getDefaultValue());
end

function Class:set(entry,val)
   	return self:setValue(entry:getName(),val)
end
        
return Class
