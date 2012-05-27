
-- This module defines a simple vector class encapsulating a lua table.
local oo = require "loop.base"
local type = type
local rawget = rawget
local table = table
local ipairs = ipairs
local next = next
local print = print

module("std.Vector", oo.class)

--- the init function to build a vector:
function __init(class, object)
    local result = oo.rawnew(class,{})
    result.data = {}
    if object then
        result:fromTable(object)
    end
    return result
end

--- Append item at vector back.
-- Push an item at the end of the vector.
-- @param item The item to add 
function push_back(self,item)
    table.insert(self.data,item);
end

--- Append item at vector front.
-- Push an item at the front of the vector.
-- @param item The item to add
function push_front(self,item)
    table.insert(self.data,1,item);
end

--- Insert item at given position.
-- Insert an item at the provided position.
-- @param index 1-based index of insertion
-- @param item The item to insert
function insert(self,index,item)
    table.insert(self.data,index,item)
end

--- Pop the latest item from the vector.
-- This function will remove the lastest item from the vector and return it.
-- @return the popped item
function pop_back(self)
    return table.remove(self.data)
end

--- Pop the first item from the vector.
-- This function will remove the first item from the vector and return it.
-- @return the popped item
function pop_front(self)
    return table.remove(self.data,1)
end

--- Pop the item from the vector.
-- This function will remove the item at the given index from the vector and return it.
-- @param index 1-based index
-- @return the popped item
function erase(self,index)
    return table.remove(self.data,index)
end

--- Get the size of the vector.
-- @return vector size
function size(self)
    return #self.data
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
    --return next, self.data, 0
    return ipairs(self.data)
end

--- Retrieve the back value
-- @return the value at the back of the vector or nil if there is no data
function back(self)
    return self.data[#self.data]
end

--- Retrieve the front value
-- @return the value at the front of the vector or nil if there is no data
function front(self)
    return self.data[1]
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
    return ( type(field)=="number" and self.data[field] or _M[field] )
end

--- Return value at position.
function at(self,index)
    return self.data[index]
end

--- Convert retrieve the data from the input table.
-- copy the data from the input table into the vector.
-- @param t The table to copy, may be nil.
function fromTable(self,t)
    local newdata = {}
    for _,v in ipairs(t or {}) do
        table.insert(newdata,v)
    end
    self.data = newdata
end

--- Convert the vector object into a simple table.
function toTable(self)
    local newdata = {}
    for _,v in ipairs(self.data) do
        table.insert(newdata,v)
    end
    
    return newdata;
end

last = back
first = front
remove = erase


