#include <plug_common.h>

class luna_wrapper_osg_Geometry_PrimitiveSetList {
public:
	typedef Luna< osg::Geometry::PrimitiveSetList > luna_t;

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

		osg::Geometry::PrimitiveSetList* self=(Luna< osg::Geometry::PrimitiveSetList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Geometry::PrimitiveSetList");
		
		return luna_dynamicCast(L,converters,"osg::Geometry::PrimitiveSetList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::Geometry::PrimitiveSetList* LunaTraits< osg::Geometry::PrimitiveSetList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::Geometry::PrimitiveSetList >::_bind_dtor(osg::Geometry::PrimitiveSetList* obj) {
	delete obj;
}

const char LunaTraits< osg::Geometry::PrimitiveSetList >::className[] = "PrimitiveSetList";
const char LunaTraits< osg::Geometry::PrimitiveSetList >::fullName[] = "osg::Geometry::PrimitiveSetList";
const char LunaTraits< osg::Geometry::PrimitiveSetList >::moduleName[] = "osg";
const char* LunaTraits< osg::Geometry::PrimitiveSetList >::parents[] = {0};
const int LunaTraits< osg::Geometry::PrimitiveSetList >::hash = 23074168;
const int LunaTraits< osg::Geometry::PrimitiveSetList >::uniqueIDs[] = {23074168,0};

luna_RegType LunaTraits< osg::Geometry::PrimitiveSetList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Geometry_PrimitiveSetList::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Geometry::PrimitiveSetList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Geometry::PrimitiveSetList >::enumValues[] = {
	{0,0}
};


