#include <plug_common.h>

class luna_wrapper_NUI_SKELETON_DATA {
public:
	typedef Luna< NUI_SKELETON_DATA > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47569100) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(NUI_SKELETON_DATA*)");
		}

		NUI_SKELETON_DATA* rhs =(Luna< NUI_SKELETON_DATA >::check(L,2));
		NUI_SKELETON_DATA* self=(Luna< NUI_SKELETON_DATA >::check(L,1));
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

		NUI_SKELETON_DATA* self=(Luna< NUI_SKELETON_DATA >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("NUI_SKELETON_DATA");
		
		return luna_dynamicCast(L,converters,"NUI_SKELETON_DATA",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

NUI_SKELETON_DATA* LunaTraits< NUI_SKELETON_DATA >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< NUI_SKELETON_DATA >::_bind_dtor(NUI_SKELETON_DATA* obj) {
	delete obj;
}

const char LunaTraits< NUI_SKELETON_DATA >::className[] = "NUI_SKELETON_DATA";
const char LunaTraits< NUI_SKELETON_DATA >::fullName[] = "NUI_SKELETON_DATA";
const char LunaTraits< NUI_SKELETON_DATA >::moduleName[] = "kinect";
const char* LunaTraits< NUI_SKELETON_DATA >::parents[] = {0};
const int LunaTraits< NUI_SKELETON_DATA >::hash = 47569100;
const int LunaTraits< NUI_SKELETON_DATA >::uniqueIDs[] = {47569100,0};

luna_RegType LunaTraits< NUI_SKELETON_DATA >::methods[] = {
	{"dynCast", &luna_wrapper_NUI_SKELETON_DATA::_bind_dynCast},
	{"__eq", &luna_wrapper_NUI_SKELETON_DATA::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< NUI_SKELETON_DATA >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< NUI_SKELETON_DATA >::enumValues[] = {
	{0,0}
};


