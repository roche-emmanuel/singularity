local Class = require("classBuilder"){name="Class",bases="base.Object"};
local utils = require "utils"
local im = require "bindings.IgnoreManager"
local corr = require "bindings.TextCorrector"
local tm = require "bindings.TypeManager"
local rm = require "bindings.ReflectionManager"

function Class:getLunaTraitsCode(className,absoluteBaseName,addition)
	local str = [[template<>
class LunaTraits< ${1} > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ${1}* _bind_ctor(lua_State *L);
	static void _bind_dtor(${1}* obj);
	typedef ${2} parent_t;
	typedef ${1} base_t;${3}
};
]]
	
	return utils.subLine(str,className,absoluteBaseName,addition);
end

function Class:getLunaTypeCode(hash,name)
	local str = [[template<>
class LunaType< ${1} > {
public:
	typedef ${2} type;
	
};
]]
	return utils.subLine(str,hash,name);
end

function Class:getConverterCode(class,bclass)
	local str = [[static int _cast_from_${3}(lua_State *L) {
		// all checked are already performed before reaching this point.
		//${2}* ptr= ${4}_cast< ${2}* >(Luna< ${1} >::check(L,1));
		${2}* ptr= luna_caster< ${1}, ${2} >::cast(Luna< ${1} >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ${2} >::push(L,ptr,false);
		return 1;
	};
]]
	local bname = bclass:getFullName()
	return utils.subLine(str,tm:getExternalBase(bname) or bname,class:getFullName(),bclass:getName(),im:ignoreConverter(bclass) and "static" or "dynamic")
end

function Class:getDynamicCasterCode(class)
	local str = [[inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		${1}* self=(Luna< ${1} >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("${1}");
		
		return luna_dynamicCast(L,converters,"${1}",name);
	}
]]
	local bname = class:getFullName()
	return utils.subLine(str,tm:getExternalBase(bname) or bname)
end

function Class:getBaseCasterCode(bname,dstBaseName)
	local str = [[inline static bool _lg_typecheck_baseCast_${3}(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	static int _bind_baseCast_${3}(lua_State *L) {
		if (!_lg_typecheck_baseCast_${3}(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in baseCast_${3} function, expected prototype:\nbaseCast()");
		}

		${1}* self=(Luna< ${1} >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call baseCast(...)");
		}
		
		${2}* res = dynamic_cast<${2}*>(self);
		if(!res)
			return 0;
			
		Luna< ${2} >::push(L,res,false);
		return 1;

	}
]]
	local wname = corr:correct("filename",dstBaseName)
	return utils.subLine(str,bname,dstBaseName,wname)
end

function Class:getEqualityCode(bname,hash)
	local str = [[inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,${2}) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(${1}*)");
		}

		${1}* rhs =(Luna< ${1} >::check(L,2));
		${1}* self=(Luna< ${1} >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}
]]

	return utils.subLine(str,tm:getExternalBase(bname) or bname,hash)
end

function Class:getTableAccessCode(bname,hash)
	local str = [[inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		${1}* self=(Luna< ${1} >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}
]]

	return utils.subLine(str,tm:getExternalBase(bname) or bname,hash)
end

function Class:getWrapperStartCode(class)
	local str = [[
#include "sgtCommon.h"
#include "lua/LuaObject.h"

${3}

class wrapper_${1} : public ${2}, public luna_wrapper_base {

public:
		
]]
	
	local wname = corr:correct("filename",class:getFullName())
	local header = class:getHeaderFile();
	
	return utils.subLine(str,wname,class:getFullName(),(not header or im:ignoreHeader(header)) and "" or "#include <"..header..">")
end

function Class:getWrapperEndCode(class)
	local str = [[
};

]]

	return str
end

function Class:getTypeCodeP1(tname)
	local str = [[
#include <plug_common.h>

class luna_wrapper_${2} {
public:
	typedef Luna< ${1} > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,${3}) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(${1}*)");
		}

		${1}* rhs =(Luna< ${1} >::check(L,2));
		${1}* self=(Luna< ${1} >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		${1}* self=(Luna< ${1} >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("${1}");
		
		return luna_dynamicCast(L,converters,"${1}",name);
	}
]]

	local wname = corr:correct("filename",tname)
	local hash = utils.getHash(tname);
	
	return utils.subLine(str,tname,wname,hash,rm:getDefaultModuleName(),declarations or "",binds or "")	
end

function Class:getTypeCodeP2(tname)
	local str = [[};

${1}* LunaTraits< ${1} >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< ${1} >::_bind_dtor(${1}* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< ${1} >::className[] = "${2}";
const char LunaTraits< ${1} >::fullName[] = "${1}";
const char LunaTraits< ${1} >::moduleName[] = "${4}";
const char* LunaTraits< ${1} >::parents[] = {0};
const int LunaTraits< ${1} >::hash = ${3};
const int LunaTraits< ${1} >::uniqueIDs[] = {${3},0};

luna_RegType LunaTraits< ${1} >::methods[] = {
	{"dynCast", &luna_wrapper_${2}::_bind_dynCast},
	{"__eq", &luna_wrapper_${2}::_bind___eq},
	]]
	
	local wname = corr:correct("filename",tname)
	local hash = utils.getHash(tname);
	
	return utils.subLine(str,tname,wname,hash,rm:getDefaultModuleName(),declarations or "",binds or "")	
end
	
function Class:getTypeCodeP3(tname)
	local str = [[
	{0,0}
};

luna_ConverterType LunaTraits< ${1} >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ${1} >::enumValues[] = {
	{0,0}
};
]]

	local wname = corr:correct("filename",tname)
	local hash = utils.getHash(tname);
	
	return utils.subLine(str,tname,wname,hash,rm:getDefaultModuleName(),declarations or "",binds or "")	
end

return Class()
