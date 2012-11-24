local Class = require("classBuilder"){name="Entity",bases={"base.Object"}};

function Class:initialize(options)
	self._name = (options and options.name) or ""
end

function Class:getName()
	self:check(self._name,"Invalid name")
	return self._name
end

function Class:setName(name)
	self:check(name,"Invalid name argument.")
	
	if name:find("::") then
		-- this name contains a namespace, we should discard it:
		self._name = name:match("::([%a%d_]+)$")
		if not self._name then
			self._name = name:match("::([%a%d_<>%s:,]+)$")
			self:debug2("Performed extended match on name '", name,"', result is: '", self._name,"'")
		end
		
		self:check(self._name,"Invalid name after regex matching. Original name is: ",name)		
		return
	end
	
    if name:find("^@") then
        self._name = "unnamed_".. name:sub(2)
        self:debug2("Changing object name ", name , " into ", self._name)
    else
        self._name = name
    end
    
    self:check(self._name,"Invalid name after setName")
end

function Class:getParent()
    return self._parent
end

--- Set the parent of that object.
--function Class:setParent(parent)
--	self:checkType(parent,require("reflection.Scope"))
--    self._parent = parent  -- the parent may be nil.
--end
function Class:setParent(parent,force)
	self:check(parent,"Invalid parent argument")
	self:checkType(parent,require("reflection.Scope"))
	
	if (self._parent == parent) then
		return -- nothing to do.
	end
	
	if force and self._parent then
		local prev_parent = self._parent;
		self:warn("Forcing parent change for object '",self:getFullName(),"' to parent '",parent:getFullName(),"'");

		-- remove the child from the previous parent:
		local res = prev_parent:removeChild(self);
		self:check(res,"Child scope was not found in previous parent scope.");
		
		self._parent = parent
		return prev_parent
	end
	
	-- The child should not already be parented to another parent:
	self:check(self._parent==nil,"Trying to reparent object '",self:getFullName(),"' to parent '",parent:getFullName(),"' previous parent is: '",self._parent and self._parent:getFullName(),"' and change is not enforced.")
	self._parent = parent
end

--- Retrieve the full name of that entity.
-- The full name will take into account the parent scopes if any.
function Class:getFullName()
    if self:getParent() then
        -- Assume the parent as a getFullName() function:
        local pname = self:getParent():getFullName()
        return (pname=="" and "" or (pname .. "::")) .. self:getName()
    else
        return self:getName()
    end
end

return Class

