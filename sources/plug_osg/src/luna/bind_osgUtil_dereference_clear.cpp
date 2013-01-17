#include <plug_common.h>

class luna_wrapper_osgUtil_dereference_clear {
public:
	typedef Luna< osgUtil::dereference_clear > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,21815425) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::dereference_clear*)");
		}

		osgUtil::dereference_clear* rhs =(Luna< osgUtil::dereference_clear >::check(L,2));
		osgUtil::dereference_clear* self=(Luna< osgUtil::dereference_clear >::check(L,1));
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

		osgUtil::dereference_clear* self=(Luna< osgUtil::dereference_clear >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::dereference_clear");
		
		return luna_dynamicCast(L,converters,"osgUtil::dereference_clear",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::dereference_clear* LunaTraits< osgUtil::dereference_clear >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgUtil::dereference_clear >::_bind_dtor(osgUtil::dereference_clear* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::dereference_clear >::className[] = "dereference_clear";
const char LunaTraits< osgUtil::dereference_clear >::fullName[] = "osgUtil::dereference_clear";
const char LunaTraits< osgUtil::dereference_clear >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::dereference_clear >::parents[] = {0};
const int LunaTraits< osgUtil::dereference_clear >::hash = 21815425;
const int LunaTraits< osgUtil::dereference_clear >::uniqueIDs[] = {21815425,0};

luna_RegType LunaTraits< osgUtil::dereference_clear >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_dereference_clear::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_dereference_clear::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::dereference_clear >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::dereference_clear >::enumValues[] = {
	{0,0}
};


