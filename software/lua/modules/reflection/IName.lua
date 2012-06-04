
local oo = require "loop.base"

-- This interface assumes inheritance on the base.Object class.
local IName = oo.class{}

-- Define the class name
IName.CLASS_NAME = "reflection.IName"

function IName:__init(obj)
    obj = oo.rawnew(self,obj or {})
    obj._name = ""
    return obj
end

--- Retrieve the name of that object.
function IName:getName()
    return self._name
end

--- Set the name of that object.
function IName:setName(name)
    self:check(name,"'name' argument is nil.")
	
	if name:find("::") then
		-- this name contains a namespace, we should discard it:
		self._name = name:match("::([%a%d_]+)$")
		if not self._name then
			self._name = name:match("::([%a%d_<>%s:,]+)$")
			self:notice_v("Performed extended match on name '", name,"', result is: '", self._name,"'")
		end
		
		self:check(self._name,"Invalid name after regex matching. Original name is: ",name)		
		return
	end
	
    if name:find("^@") then
        self._name = "unnamed_".. name:sub(2)
        self:info_v("Changing object name ", name , " into ", self._name)
    else
        self._name = name
    end
    
    self:check(self._name,"Invalid name after setName")
end

return IName
