#include <plug_common.h>

class luna_wrapper_sgt_RefPtr {
public:
	typedef Luna< sgt::RefPtr > luna_t;

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

		sgt::RefPtr* self=(Luna< sgt::RefPtr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::RefPtr");
		
		return luna_dynamicCast(L,converters,"sgt::RefPtr",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

sgt::RefPtr* LunaTraits< sgt::RefPtr >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< sgt::RefPtr >::_bind_dtor(sgt::RefPtr* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< sgt::RefPtr >::className[] = "RefPtr";
const char LunaTraits< sgt::RefPtr >::fullName[] = "sgt::RefPtr";
const char LunaTraits< sgt::RefPtr >::moduleName[] = "core";
const char* LunaTraits< sgt::RefPtr >::parents[] = {0};
const int LunaTraits< sgt::RefPtr >::hash = 32886573;
const int LunaTraits< sgt::RefPtr >::uniqueIDs[] = {32886573,0};

luna_RegType LunaTraits< sgt::RefPtr >::methods[] = {
	{"dynCast", &luna_wrapper_sgt_RefPtr::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::RefPtr >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::RefPtr >::enumValues[] = {
	{0,0}
};


