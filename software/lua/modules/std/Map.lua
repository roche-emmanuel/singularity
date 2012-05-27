
-- This module defines a simple vector class encapsulating a lua table.
local oo = require "loop.base"
local type = type
local rawget = rawget
local table = table
local pairs = pairs
local next = next

module("std.Map", oo.class)

--- the init function to build a vector:
function __init(class, object)
    local result = oo.rawnew(class,{})
    result.data = {}
    if object then
        result:fromTable(object)
    end
    return result
end

--- Set an item in the map:
function set(self,key,item)
    if key then
        self.data[key] = item
    end
end

--- Get an item from the map:
function get(self,key)
    if key then
        return self.data[key]
    end
end

--- Erase a value from the map by key
function erase(self,key)
    if key then
        self.data[key] = nil
    end
end

--- Get the size of the map.
-- @return map size
function size(self)
    local count = 0
    for _,_ in pairs(self.data) do
        count = count+1
    end
    return count
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
    --return next,self.data,nil
    return pairs(self.data)
end

--- Clear the content of the vector
function clear(self)
    self.data = {}
end

--- Return a copy of the vector.
function clone(self)
    return oo.classof(self)(self.data)
end

-- Metamethod to map the vector indices.
function __index(self,field)
    return (_M[field] or self.data[field])
end
--- Convert retrieve the data from the input table.
-- copy the data from the input table into the vector.
-- @param t The table to copy, may be nil.
function fromTable(self,t)
    local newdata = {}
    for k,v in pairs(t or {}) do
        newdata[k] = v;
    end
    self.data = newdata
end

--- Convert the vector object into a simple table.
function toTable(self)
    local newdata = {}
    for _,v in pairs(self.data) do
        table.insert(newdata,v)
    end
    
    return newdata;
end

remove = erase
