#include <plug_common.h>

class luna_wrapper_osg_BoundingBoxd {
public:
	typedef Luna< osg::BoundingBoxd > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,82744897) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::BoundingBoxd*)");
		}

		osg::BoundingBoxd* rhs =(Luna< osg::BoundingBoxd >::check(L,2));
		osg::BoundingBoxd* self=(Luna< osg::BoundingBoxd >::check(L,1));
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

		osg::BoundingBoxd* self=(Luna< osg::BoundingBoxd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::BoundingBoxd");
		
		return luna_dynamicCast(L,converters,"osg::BoundingBoxd",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::BoundingBoxd* LunaTraits< osg::BoundingBoxd >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::BoundingBoxd >::_bind_dtor(osg::BoundingBoxd* obj) {
	delete obj;
}

const char LunaTraits< osg::BoundingBoxd >::className[] = "BoundingBoxd";
const char LunaTraits< osg::BoundingBoxd >::fullName[] = "osg::BoundingBoxd";
const char LunaTraits< osg::BoundingBoxd >::moduleName[] = "osg";
const char* LunaTraits< osg::BoundingBoxd >::parents[] = {0};
const int LunaTraits< osg::BoundingBoxd >::hash = 82744897;
const int LunaTraits< osg::BoundingBoxd >::uniqueIDs[] = {82744897,0};

luna_RegType LunaTraits< osg::BoundingBoxd >::methods[] = {
	{"dynCast", &luna_wrapper_osg_BoundingBoxd::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_BoundingBoxd::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::BoundingBoxd >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::BoundingBoxd >::enumValues[] = {
	{0,0}
};


