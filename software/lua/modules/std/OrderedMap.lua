
-- This module defines a simple vector class encapsulating a lua table.
local oo = require "loop.simple"
local type = type
local rawget = rawget
local table = table
local pairs = pairs
local next = next
local Map = require "std.Map"
local Set = require "std.Set"

local LOG = LOG

module "std.OrderedMap"

oo.class(_M, Map)

--- the init function to build a vector:
function __init(class, object)

    local result = Map:__init()
    result = oo.rawnew(class,result)
    result.keys = Set()
    if object then
        result:fromTable(object)
    end
    return result
end

--- Set an item in the map:
function set(self,key,item)
    if key then
        self.keys:push_back(key)
        self.data[key] = item
    end
end

--- Erase a value from the map by key
function erase(self,key)
    if key then
        local cont, index = self.keys:contains(key)
        if cont then
            self.keys:erase(index)
        end
        self.data[key] = nil
    end
end

--- Get the size of the map.
-- @return map size
function size(self)
    return self.keys:size()
end

--- Check vector emptyness.
-- @return true if the vector is empty, false otherwise.
function empty(self)
    return next(self.data)==nil;
end

--- Iterate on the vector items
-- This function will return the iteration items compatible with the
-- for k,v in obj:sequence() do ... end
-- @return The iteration function
-- @return The data table to iterate on.
-- @return The initial index to start iterating
function sequence(self)
    
    local index = 0
    function iterator (t, id)
        --LOG:info("Iterating with index " .. index)
        index = index + 1
        local key = self.keys[index]
        return key, key and self.data[key]
    end
    
    --LOG:info "Returning local iterator..."
    
    --return next,self.data,nil
    return iterator, self.data, 0
end

--- Clear the content of the vector
function clear(self)
    self.data = {}
    self.keys:clear()
end

-- Metamethod to map the vector indices.
function __index(self,field)
    return (_M[field] or Map[field] or self.data[field])
end

--- Convert retrieve the data from the input table.
-- copy the data from the input table into the vector.
-- @param t The table to copy, may be nil.
function fromTable(self,t)
    self:clear()
    for k,v in pairs(t or {}) do
        self:set(k,v);
    end
end

--- Convert the vector object into a simple table.
function toTable(self)
    local newdata = {}
    for k,v in self:sequence() do
        newdata[k] = v
    end
    
    return newdata;
end

remove = erase
