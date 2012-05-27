
local oo = require "loop.cached"
local Object = require "reflection.Object"
local dbg = require "debugger"
local log = require "logger"

local Scope = require "reflection.Scope"
local Enum = require "reflection.Enum"

local tm = require "bindings.TypeManager"

-- The object class implements the IName and IParent interfaces
local Type = oo.class({},Object)

-- Define the class name
Type.CLASS_NAME = "reflection.Type"

function Type:__init(linkvec)
    local obj = Object:__init({})
    obj = oo.rawnew(self,obj)
	obj:setItemLinks(linkvec)
	
	-- register this new type:
	tm:registerType(obj)
    return obj
end

-- check if a given string is a keyword
function Type:isKeyWord(str)
	return (str:find("%*") 
		or str:find("&")
		or str:find("const") or str:find("class[%s]+"))
end

function Type:setItemLinks(vec)
	self._itemLinks = vec; 
end

function Type:getItemLinks()
	return self._itemLinks;
end

function Type:extractBaseType(str)
	str = str:gsub("^[%s]*const[%s]+","")
	str = str:gsub("^([^%*]+)%*.*","%1")
	str = str:gsub("^([^&]+)&.*","%1")
	str = str:gsub("^[%s]*([^%s]+)[%s]*.*","%1")
	return str	
end

function Type:expandTypedefs(linkvec)
	local result = Vector()
	
	local typedefFound = false;
	
	for _,v in linkvec:sequence() do
		if v:getType() == ItemLink.TYPEDEF then
			-- push the typedef definition elements:
			for _,v2 in v:getContent():getItemLinks():sequence() do
				result:push_back(v2)
			end
			typedefFound = true
		else
			-- just push the type:
			result:push_back(v);
		end
	end
	
	if typedefFound then
		return self:expandTypedefs(result)
	else
		return result
	end
end

--- Parse the input linkedtext vector.
-- parsing the input linked text will generate the type definition.
function Type:parse()
	local linkvec = self:getItemLinks()
	 
	-- we need to expand the typedefs if any:
	-- Actually no because the types are expanded during the doxygen reflection parsing.
	--linkvec = self:expandTypedefs(linkvec)
	
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
			dbg:assert(base==nil,"Type base class was already found: currentBase=",(type(base)=="table" and base:getFullName() or base),
				"newBase=",v:getContent():getFullName())
				
			base = v:getContent()
			dbg:assertType(base,Scope)
			
			table.insert(str,base:getFullName())
		else
			local data = v:getContent()
			dbg:assert(type(data)=="string","Invalid data type")
			
			table.insert(str,data) -- concat simple string.
			if not base and not self:isKeyWord(data) and not data:match("[<>]") then
				base = v:getContent()
			end
		end
	end
	
	str = table.concat(str)
	
	if not base then
		base = self:extractBaseType(str)
	end
	
	
	
	--log:notice("Parsing type : '".. str.."'")
	dbg:assert(base,"Could not parse base type in type: ".. str)
	
	-- assign the base if any;
	self._base = base;
	
	self._fullName = str;
	
	-- parse the type string:
	self._isConst = (str:find("^[%s]*const[%s]+")~=nil)
	self._isReference = (str:find("&")~=nil)
	self._isConstReference = (str:find("&[%s]+const")~=nil)
	self._isPointer = (str:find("%*")~=nil)
	self._isConstPointer = (str:find("%*[%s]+const")~=nil)
	self._isPointerOnPointer = (str:find("%*%*")~=nil)
	
	--log:warn("parsed type '".. self._fullName .. "'")
end

--- Retrieve the base of that type if any
function Type:getBase(parseIfNeeded)
	if not self._base and parseIfNeeded then
		self:parse()
	end
	return self._base
end

function Type:getBaseName(parseIfNeeded)
	if not self._base and parseIfNeeded then
		self:parse()
	end
	return type(self._base)=="string" and self._base or self._base:getFullName()
end

function Type:isConst()
	return self._isConst
end

function Type:isReference()
	return self._isReference
end

function Type:isConstReference()
	return self._isConstReference
end

function Type:isVoid()
	local str = self:getName()
	return str:find("void")
end

function Type:isEnum()
	return self._base~=nil and type(self._base)=="table" and self._base:getScopeType() == Scope.ENUM
end

function Type:isInteger()
	local str = self:getName()
	return not self:isClass() and 
		( self:isEnum() 
		or str:find("int") 
		or str:find("long") 
		or str:find("size_t") 
		or str:find("unsigned char") 
		or str:find("unsigned short")
		or str == "char" 
		or str == "unsigned" 
		or str == "wxChar") 
end

function Type:isNumber()
	local str = self:getName()
	return self:isInteger() or str:find("float") or str:find("double") 
end

function Type:isString()
	local str = self:getName()
	return str:find("const%s+char%s*%*") or str:find("wxChar%s*%*") 
		or str:find("wchar_t%s*%*") or str:find("string") or str:find("wxString")
		or str=="char *"	
end

function Type:isBoolean()
	-- check if we can find a boolean pattern:
	return type(self._base)=="string" and self._base:find("bool")
end

function Type:isClass()
	return self._base~=nil and type(self._base)=="table" and self._base:getScopeType() == Scope.CLASS
end

function Type:isPointer()
	return self._isPointer
end

function Type:isConstPointer()
	return self._isConstPointer
end

function Type:isPointerOnPointer()
	return self._isPointerOnPointer
end

--- Reimplemented getName function.
-- return the complete name of that type
function Type:getName()
	if true then
		dbg:assert(self._fullName,"Type not parsed yet cannot retrieve its name.")
		
		--if not self._fullName then
			--self:parse()
		--end
		
		return self._fullName;
	else
		self:parse()
		
		local name = self:getBaseName()
		
		if self:isConst() then
			name = "const "..name
		end
		if self:isPointerOnPointer() then
			name = name.."**"
		elseif self:isConstReference() then
			name = name.."& const"
		elseif self:isReference() then
			name = name.."&"
		elseif self:isConstPointer() then
			name = name.."* const"
		elseif self:isPointer() then
			name = name.."*"
		end
		
		return name;
	end
end

function Type:isLuaState()
	if self:getBaseName(true) == "lua_State" then
		return true
	end
	return false;
end

function Type:isLuaFunction()
	if self:getName() == "lua_Function *" then
		return true
	end
	return false;
end

function Type:isLuaTable()
	if self:getName() == "lua_Table *" then
		return true
	end
	return false;
end

function Type:isLuaAny()
	if self:getName() == "lua_Any *" then
		return true
	end
	return false;
end

return Type


