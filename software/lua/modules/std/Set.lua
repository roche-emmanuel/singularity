
-- This module defines a simple vector class encapsulating a lua table.
local oo = require "loop.simple"
local type = type
local rawget = rawget
local table = table
local ipairs = ipairs
local next = next
local Vector = require "std.Vector"
local print = print

module "std.Set"

oo.class(_M , Vector)

--- the init function to build a vector:
function __init(class, object)
    local result = oo.rawnew(class,{})
    result.data = {}
    if object then
        result:fromTable(object)
    end
    return result
end

--- Check if item is already contained in set.
-- @return True if the item was found in the set, false otherwise.
-- @return The index of the item in the Set if found.
function contains(self,item)
    if item==nil then
        return true; -- nil is contained!
    end
    
    for k,v in ipairs(self.data) do
        if v == item then
            return true, k;
        end
    end
    return false;
end

--- Erase an object from the Set by value.
function eraseValue(self,item)
   	for k,v in ipairs(self.data) do
        if v == item then
            table.remove(self.data,k)
            return true;
        end
    end
    return false;
end

--- Append item at set back.
-- Push an item at the end of the set but only it the set doesn't contain the item yet.
-- @param item The item to add 
-- @return True if the item was added, false otherwise.
function push_back(self,item)
    if self:contains(item) then
        return false;
    end
    
    table.insert(self.data,item);
    return true;
end

--- Append item at set front.
-- Push an item at the front of the set but only if the set doesn't contain the item yet.
-- @param item The item to add
-- @return True if the item was added, false otherwise.
function push_front(self,item)
    if self:contains(item) then
        return false;
    end
    
    table.insert(self.data,1,item);
    return true
end

--- Insert item at given position.
-- Insert an item at the provided position.
-- @param index 1-based index of insertion
-- @param item The item to insert
function insert(self,index,item)
    if self:contains(item) then
        return false;
    end
    
    table.insert(self.data,index,item)
    return true;
end

-- Metamethod to map the vector indices.
function __index(self,field)
    return ( type(field)=="number" and self.data[field] or _M[field] or Vector[field])
end

--- Convert retrieve the data from the input table.
-- copy the data from the input table into the set, keeping only one copy of each item.
-- @param t The table to copy, may be nil.
function fromTable(self,t)
    self:clear()
    for _,v in ipairs(t or {}) do
        self:push_back(v)
    end
end

