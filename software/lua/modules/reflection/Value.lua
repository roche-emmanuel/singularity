
local oo = require "loop.cached"
local Object = require "reflection.Object"
local dbg = require "debugger"
local log = require "logger"

-- The object class implements the IName and IParent interfaces
local Value = oo.class({},Object)

-- Define the class name
Value.CLASS_NAME = "reflection.Value"

function Value:__init(linkvec)
    local obj = Object:__init({})
    obj = oo.rawnew(self,obj)
	obj:setItemLinks(linkvec)
    return obj
end

-- check if a given string is a keyword
function Value:isKeyWord(str)
	return (str:find("%*") 
		or str:find("&")
		or str:find("const"))
end

function Value:setItemLinks(vec)
	self._itemLinks = vec; 
end

function Value:getItemLinks()
	return self._itemLinks;
end

--- Parse the input linkedtext vector.
-- parsing the input linked text will generate the type definition.
function Value:getName()
	local linkvec = self:getItemLinks()
	 
	dbg:assert(linkvec,"linkvec argument is nil")
	dbg:assertType(linkvec,require("std.Vector"),true)
	
	local ItemLink = require "reflection.ItemLink"
	local Scope = require "reflection.Scope"
	
	-- retrieve the base type from the item links:
	-- and generate the type string at the same time:
	local str = {}
	local base = nil
	for _,v in linkvec:sequence() do
		dbg:assertType(v,ItemLink)
		if v:getType() == ItemLink.OBJECT then
			-- retrieve the object as base
			if (base~=nil) then
				log:warn("Type base class was already found, previous base=", base, ", new base=",v:getContent())
			end
			
			base = v:getContent()
			--dbg:assertType(base,Scope)  -- could also be an EnumValue here.
			
			--log:warn("Retrieving BASE name in value: ".. base:getFullName())
			dbg:assert(base.getFullName,"No getFullName implementation found in class: ", oo.classof(base).CLASS_NAME)
						
			table.insert(str,base:getFullName())
		else
			--log:warn("Retrieving STRING name in value: ".. v:getContent())
		
			table.insert(str,v:getContent()) -- concat simple string.
			if not self:isKeyWord(v:getContent()) then
				base = v:getContent()
			end
		end
	end
	
	str = table.concat(str," ")
	if not base then
		log:warn("Could not parse base type in value: ".. str)
	end
	
	-- assign the base if any;
	self._base = base or str;
	
	return str;
end

return Value


