
local oo = require "loop.base"
local dbg = require "debugger"
local log = require "logger"

local IName = oo.class{}

-- Define the class name
IName.CLASS_NAME = "reflection.IName"

function IName:__init(obj)
    obj = oo.rawnew(self,obj or {})
    dbg:assert(obj.name==nil,"Object already contains a 'name' field")
    obj.name = ""
    return obj
end

--- Retrieve the name of that object.
function IName:getName()
    return self.name
end

--- Set the name of that object.
function IName:setName(name)
    dbg:assert(name,"'name' argument is nil.")
	
	if name:find("::") then
		-- this name contains a namespace, we should discard it:
		self.name = name:match("::([%a%d_]+)$")
		--log:warn("Extracting object name " .. self.name .. " from ".. name)
		--dbg:backtrace(1,true)
		return
	end
	
    if name:find("^@") then
        self.name = "unnamed_".. name:sub(2)
        log:info_v("Changing object name " .. name .. " into ".. self.name)
    else
        self.name = name
    end
end

return IName
