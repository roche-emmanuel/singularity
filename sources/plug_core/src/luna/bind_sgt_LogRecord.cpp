#include <plug_common.h>

class luna_wrapper_sgt_LogRecord {
public:
	typedef Luna< sgt::LogRecord > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,34788330) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(sgt::LogRecord*)");
		}

		sgt::LogRecord* rhs =(Luna< sgt::LogRecord >::check(L,2));
		sgt::LogRecord* self=(Luna< sgt::LogRecord >::check(L,1));
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

		sgt::LogRecord* self=(Luna< sgt::LogRecord >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::LogRecord");
		
		return luna_dynamicCast(L,converters,"sgt::LogRecord",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// sgt::LogRecord::LogRecord()
	static sgt::LogRecord* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::LogRecord::LogRecord() function, expected prototype:\nsgt::LogRecord::LogRecord()\nClass arguments details:\n");
		}


		return new sgt::LogRecord();
	}


	// Function binds:

	// Operator binds:

};

sgt::LogRecord* LunaTraits< sgt::LogRecord >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_LogRecord::_bind_ctor(L);
}

void LunaTraits< sgt::LogRecord >::_bind_dtor(sgt::LogRecord* obj) {
	delete obj;
}

const char LunaTraits< sgt::LogRecord >::className[] = "LogRecord";
const char LunaTraits< sgt::LogRecord >::fullName[] = "sgt::LogRecord";
const char LunaTraits< sgt::LogRecord >::moduleName[] = "sgt";
const char* LunaTraits< sgt::LogRecord >::parents[] = {0};
const int LunaTraits< sgt::LogRecord >::hash = 34788330;
const int LunaTraits< sgt::LogRecord >::uniqueIDs[] = {34788330,0};

luna_RegType LunaTraits< sgt::LogRecord >::methods[] = {
	{"dynCast", &luna_wrapper_sgt_LogRecord::_bind_dynCast},
	{"__eq", &luna_wrapper_sgt_LogRecord::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::LogRecord >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::LogRecord >::enumValues[] = {
	{0,0}
};


