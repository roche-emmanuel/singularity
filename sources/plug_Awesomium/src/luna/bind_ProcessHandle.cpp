#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ProcessHandle {
public:
	typedef Luna< ProcessHandle > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,12345295) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ProcessHandle*)");
		}

		ProcessHandle* rhs =(Luna< ProcessHandle >::check(L,2));
		ProcessHandle* self=(Luna< ProcessHandle >::check(L,1));
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

		ProcessHandle* self=(Luna< ProcessHandle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ProcessHandle");
		
		return luna_dynamicCast(L,converters,"ProcessHandle",name);
	}

};

ProcessHandle* LunaTraits< ProcessHandle >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< ProcessHandle >::_bind_dtor(ProcessHandle* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< ProcessHandle >::className[] = "ProcessHandle";
const char LunaTraits< ProcessHandle >::fullName[] = "ProcessHandle";
const char LunaTraits< ProcessHandle >::moduleName[] = "Awesomium";
const char* LunaTraits< ProcessHandle >::parents[] = {0};
const int LunaTraits< ProcessHandle >::hash = 12345295;
const int LunaTraits< ProcessHandle >::uniqueIDs[] = {12345295,0};

luna_RegType LunaTraits< ProcessHandle >::methods[] = {
	{"dynCast", &luna_wrapper_ProcessHandle::_bind_dynCast},
	{"__eq", &luna_wrapper_ProcessHandle::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ProcessHandle >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ProcessHandle >::enumValues[] = {
	{0,0}
};


