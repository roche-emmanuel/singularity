#include <plug_common.h>

class luna_wrapper_sgt_LogSink_StringSet {
public:
	typedef Luna< sgt::LogSink::StringSet > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,59964048) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(sgt::LogSink::StringSet*)");
		}

		sgt::LogSink::StringSet* rhs =(Luna< sgt::LogSink::StringSet >::check(L,2));
		sgt::LogSink::StringSet* self=(Luna< sgt::LogSink::StringSet >::check(L,1));
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

		sgt::LogSink::StringSet* self=(Luna< sgt::LogSink::StringSet >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::LogSink::StringSet");
		
		return luna_dynamicCast(L,converters,"sgt::LogSink::StringSet",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

sgt::LogSink::StringSet* LunaTraits< sgt::LogSink::StringSet >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< sgt::LogSink::StringSet >::_bind_dtor(sgt::LogSink::StringSet* obj) {
	delete obj;
}

const char LunaTraits< sgt::LogSink::StringSet >::className[] = "StringSet";
const char LunaTraits< sgt::LogSink::StringSet >::fullName[] = "sgt::LogSink::StringSet";
const char LunaTraits< sgt::LogSink::StringSet >::moduleName[] = "sgt";
const char* LunaTraits< sgt::LogSink::StringSet >::parents[] = {0};
const int LunaTraits< sgt::LogSink::StringSet >::hash = 59964048;
const int LunaTraits< sgt::LogSink::StringSet >::uniqueIDs[] = {59964048,0};

luna_RegType LunaTraits< sgt::LogSink::StringSet >::methods[] = {
	{"dynCast", &luna_wrapper_sgt_LogSink_StringSet::_bind_dynCast},
	{"__eq", &luna_wrapper_sgt_LogSink_StringSet::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::LogSink::StringSet >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::LogSink::StringSet >::enumValues[] = {
	{0,0}
};


