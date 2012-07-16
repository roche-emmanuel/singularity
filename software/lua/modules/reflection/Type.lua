
local oo = require "loop.cached"
local Object = require "reflection.Object"

local Scope = require "reflection.Scope"
local Class = require "reflection.Class"

local Enum = require "reflection.Enum"

local tm = require "bindings.TypeManager"
local corr = require "bindings.TextCorrector"

local utils = require "utils"

-- The object class implements the IName and IParent interfaces
local Type = oo.class({},Object)

-- Define the class name
Type.CLASS_NAME = "reflection.Type"

function Type:__init(linkvec)
    local obj = Object:__init({})
    obj = oo.rawnew(self,obj)
	obj:setItemLinks(linkvec)
	
	obj._TRACE_ = "reflection.Type"
	
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
	str = str:gsub("^%s*(.-)%s*$", "%1")
	--str = str:gsub("^%s*([^%s]%.*)$","%1")
	--str = str:gsub("^(%.*)%s*$","%1")
	--str = str:gsub("^[%s]*([^%s]+)[%s]*.*","%1")
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
	
	self:check(linkvec,"linkvec argument is nil")
	self:checkType(linkvec,require("std.Vector"),true)
	
	local ItemLink = require "reflection.ItemLink"
	local Scope = require "reflection.Scope"
	
	-- retrieve the base type from the item links:
	-- and generate the type string at the same time:
	local str = {}
	local base = nil
	for _,v in linkvec:sequence() do
		self:checkType(v,ItemLink)
		if v:getType() == ItemLink.OBJECT then
			-- retrieve the object as base
			--self:check(base==nil,"Type base class was already found: currentBase=",(type(base)=="table" and base:getFullName() or base),
			--	" newBase=",v:getContent():getFullName())
			
			if base == nil then	
				base = v:getContent()
			end
			
			if self._firstBase == nil and self:isInstanceOf(Class,v:getContent()) then
				self._firstBase = v:getContent()
			end
			
			--self:checkType(base,Scope)
			
			table.insert(str,v:getContent():getFullName())
		else
			local data = v:getContent()
			self:check(type(data)=="string","Invalid data type")
			
			table.insert(str,data) -- concat simple string.
			if not base and not self:isKeyWord(data) and not data:match("[<>]") then
				base = v:getContent()
			end
		end
	end
	
	str = table.concat(str)
	
	if not base or str:find("<") then
		base = self:extractBaseType(str)
		self:check(base~="","Invalid extracted base name from ", str) 
		self:info("Extracted base type ",base," from type ", str)
	end
	
	
	
	--self:notice("Parsing type : '".. str.."'")
	self:check(base,"Could not parse base type in type: ".. str)
	
	-- assign the base if any;
	self._base = base;
	
	str = corr:correct("type_name",str);
	self._fullName = str;
	
	-- parse the type string:
	self._isConst = (str:find("^[%s]*const[%s]+")~=nil)
	self._isReference = (str:find("&")~=nil)
	self._isConstReference = (str:find("&[%s]+const")~=nil)
	self._isPointer = (str:find("%*")~=nil)
	self._isConstPointer = (str:find("%*[%s]+const")~=nil)
	self._isPointerOnPointer = (str:find("%*%*")~=nil)
end

function Type:getFirstBase()
	return self._firstBase -- return the first base if any.
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
	if type(self._base) ~= "table" then return false; end
	
	local obj_class = oo.classof(self._base)
	return obj_class==Enum or oo.subclassof(obj_class,Enum)	
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
		or str:find("^%s*char%s*[%*&]?$")
		or str:find("^%s*signed char%s*[%*&]?$")
		or str:find("^%s*const%s*signed char%s*[%*&]?$")
		or str:find("^%s*short%s*[%*&]?$")
		or str:find("^%s*const%s*short%s*[%*&]?$")
		or str == "unsigned" 
		or str == "wxChar") 
end

function Type:isNumber()
	local str = self:getName()
	return self:isInteger() 
		or str:find("^%s*double%s*[%*&]?$") 
		or str:find("^%s*float%s*[%*&]?$") 
		or str:find("^%s*const%s*double%s*[%*&]?$") 
		or str:find("^%s*const%s*float%s*[%*&]?$")  
end

function Type:isString()
	local str = self:getName()
	if str:find("<") then
		return false;
	end
	
	return str:find("const%s+char%s*%*") 
		or str:find("wxChar%s*%*") 
		or str:find("wchar_t%s*%*") 
		or str:find("string") 
		or str:find("^%s*wxString%s*[%*&]?$")
		or str:find("^%s*const%s+wxString%s*[%*&]?$")
		or str=="char *"	
end

function Type:isBoolean()
	-- check if we can find a boolean pattern:
	return type(self._base)=="string" and self._base:find("bool")
end

function Type:getAbsoluteBaseFullName()
	if type(self._base) == "table" then
		return self._base:getFirstAbsoluteBase():getFullName()
	else
		return self._base;
	end
end

function Type:isClass()
	if type(self._base)=="string" and self._base:find("<") then
		-- this is a template!
		return true;
	end
	
	if type(self._base) ~= "table" then return false; end
	
	local obj_class = oo.classof(self._base)
	return obj_class==Class or oo.subclassof(obj_class,Class)
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
		self:check(self._fullName,"Type not parsed yet cannot retrieve its name.")
		
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

function Type:getAbsoluteBaseHash()
	if type(self._base)=="table" then
		return self._base:getAbsoluteBaseHash()
	elseif type(self._base)=="string" then
		return utils.getHash(self._base)
	else
		error("Could not retrieve AbsoluteBaseHash for type ",self:getName())
	end
end

function Type:isNothing()
	local linkvec = self:getItemLinks()
	
	if linkvec:size()~=1 then
		return false;
	end
	 
	local item = linkvec:front()
	
	local ItemLink = require "reflection.ItemLink"
	
	if (item:getType() == ItemLink.OBJECT and  item:getContent():getFullName()=="void") 
		or (item:getType() == ItemLink.STRING and  item:getContent()=="void") then
		self:notice("Found void type!")
		return true;	
	end
	
	return false;
end

return Type


