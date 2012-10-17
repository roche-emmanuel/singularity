#include <plug_common.h>

class luna_wrapper_osg_BoundingBoxf {
public:
	typedef Luna< osg::BoundingBoxf > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,82744899) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::BoundingBoxf*)");
		}

		osg::BoundingBoxf* rhs =(Luna< osg::BoundingBoxf >::check(L,2));
		osg::BoundingBoxf* self=(Luna< osg::BoundingBoxf >::check(L,1));
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

		osg::BoundingBoxf* self=(Luna< osg::BoundingBoxf >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::BoundingBoxf");
		
		return luna_dynamicCast(L,converters,"osg::BoundingBoxf",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::BoundingBoxf* LunaTraits< osg::BoundingBoxf >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::BoundingBoxf >::_bind_dtor(osg::BoundingBoxf* obj) {
	delete obj;
}

const char LunaTraits< osg::BoundingBoxf >::className[] = "BoundingBoxf";
const char LunaTraits< osg::BoundingBoxf >::fullName[] = "osg::BoundingBoxf";
const char LunaTraits< osg::BoundingBoxf >::moduleName[] = "osg";
const char* LunaTraits< osg::BoundingBoxf >::parents[] = {0};
const int LunaTraits< osg::BoundingBoxf >::hash = 82744899;
const int LunaTraits< osg::BoundingBoxf >::uniqueIDs[] = {82744899,0};

luna_RegType LunaTraits< osg::BoundingBoxf >::methods[] = {
	{"dynCast", &luna_wrapper_osg_BoundingBoxf::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_BoundingBoxf::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::BoundingBoxf >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::BoundingBoxf >::enumValues[] = {
	{0,0}
};


