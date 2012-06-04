
local oo = require "loop.base"
local Set = require "std.Set"
local dbg = require "debugger"
local Enum = require "reflection.Enum"

local IEnumHolder = oo.class{}

-- Define the class name
IEnumHolder.CLASS_NAME = "reflection.IEnumHolder"

function IEnumHolder:__init(obj)
    obj = oo.rawnew(self,obj or {})
    dbg:assert(obj.enums==nil,"Object already contains a 'enums' field")
    obj.enums = Set()
    return obj
end

--- Retrieve the variable Set in that object.
function IEnumHolder:getEnums()
    return self.enums
end

--- Add a variable to the variable Set.
function IEnumHolder:addEnum(var)
	dbg:assert(var,"'var' argument is nil")
	dbg:assertType(var,Enum)
	self.enums:push_back(var)
	
	if var:getParent() == self then
		return -- nothing to do.
	end
	
	-- also add the enum as a regular scope:
	--self:addChild(var)
	
	dbg:assertNil(var:getParent(),
		"Changing enum parent.",
		"\nEnum=",var,
		"\nPrevious parent=",var:getParent(),
		"\nNew parent=",self)
	var:setParent(self)	
end

return IEnumHolder
