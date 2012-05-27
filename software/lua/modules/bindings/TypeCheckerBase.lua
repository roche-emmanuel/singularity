
local oo = require "loop.base"

local log = require "logger"
 
local TypeCheckerBase = oo.class{}

local tc = require "bindings.TypeConverter"
local utils = require "utils"

TypeCheckerBase.CLASS_NAME = "bindings.TypeCheckerBase"

function TypeCheckerBase:__init()
    local object = oo.rawnew(self,{})  
	object._TRACE_ = "TypeCheckerBase"
    return object
end

function TypeCheckerBase:handle(writer,func,name)
	local offset = (func:isGlobal() or func:isConstructor() or func:isStatic() or func:isExtension()) and 0 or 1
	
	local defaultOffset = func:getDefaultOffset()
	writer:writeSubLine("inline static bool _lg_typecheck_${1}(lua_State *L) {",name)
	writer:pushIndent()
		-- check all the function arguments here:
		local num = func:getNumParameters()
		
		if func:hasLuaState() then
			num = num - 1; -- do not count the lua_state as argument. 
		end
		
		if(defaultOffset) then
			writer:writeLine("int luatop = lua_gettop(L);")
			writer:writeSubLine("if( luatop<${1} || luatop>${2} ) return false;",defaultOffset+offset,num+offset);
		else
			writer:writeSubLine("if( lua_gettop(L)!=${1} ) return false;",num+offset);
		end

		writer:newLine()		
					
		local pcount = 0;
		
		for k,v in func:getParameters():sequence() do
			-- if the parameter is the lua_State just bypass the check 
			if not v:isLuaState() then			
				-- different behavior depending on the type of the parameter:
				local pt = v:getType()
				
				pcount = pcount+1
				local index = pcount+offset
				local defStr = defaultOffset and ((k-1)<defaultOffset and "" or "luatop>"..(index-1).." && ") or ""
				
				pt:parse() -- ensure the type fields are value.
				
				local checker = tc:getTypeChecker(pt:getName()) or tc:getTypeChecker(bname)
				
				if checker then
					isPointer = checker(writer,index,pt,defStr)	
				elseif pt:isInteger() then
					writer:writeSubLine("if( ${2}(lua_isnumber(L,${1})==0 || lua_tointeger(L,${1}) != lua_tonumber(L,${1})) ) return false;",index,defStr)
				elseif pt:isNumber() then
					-- check if we have a number:
					writer:writeSubLine("if( ${2}lua_isnumber(L,${1})==0 ) return false;",index,defStr)
				elseif pt:isLuaFunction() then
					-- check if we have a function:
					writer:writeSubLine("if( ${2}lua_isfunction(L,${1})==0 ) return false;",index,defStr)
				elseif pt:isLuaAny() then
					-- do not do anything!
				elseif pt:isLuaTable() then
					-- check if we have a table:
					writer:writeSubLine("if( ${2}lua_istable(L,${1})==0 ) return false;",index,defStr)
				elseif pt:isBoolean() then
					writer:writeSubLine("if( ${2}lua_isboolean(L,${1})==0 ) return false;",index,defStr)
				elseif pt:isString() then
					writer:writeSubLine("if( ${2}lua_isstring(L,${1})==0 ) return false;",index,defStr)
				elseif pt:isVoid() and pt:isPointer() then
					-- We may consider void as a base class:
					local bhash = utils.getHash("void")
					writer:writeSubLine("if( ${3}(lua_isnil(L,${1})==0 && !Luna<void>::has_uniqueid(L,${1},${2})) ) return false;",index,bhash,defStr)
				elseif pt:isClass() then
					-- get the class absolute parent hash:
					local bhash = pt:getBase():getAbsoluteBaseHash()
					log:info("Using hash ".. bhash .. " for type ".. pt:getBaseName())
					if pt:isPointer() then
						-- we can accept a pointer to be nil, but not a reference.
						writer:writeSubLine("if( ${3}(lua_isnil(L,${1})==0 && !Luna<void>::has_uniqueid(L,${1},${2})) ) return false;",index,bhash,defStr)
					else
						writer:writeSubLine("if( ${3}!Luna<void>::has_uniqueid(L,${1},${2}) ) return false;",index,bhash,defStr)				
					end
				else
					writer:writeLine("////////////////////////////////////////////////////////////////////")
					writer:writeLine("// ERROR: Cannot decide the argument type for '".. pt:getName() .. "'")
					writer:writeLine("////////////////////////////////////////////////////////////////////")
					log:error("Unsupported type : ".. pt:getName().. " in type checker for function ".. func:getFullName()) --..". Type object:",pt)
				end
			end
			
		end
		writer:writeLine("return true;")
	writer:popIndent()
	writer:writeLine("}")
	writer:newLine()
end

return TypeCheckerBase
