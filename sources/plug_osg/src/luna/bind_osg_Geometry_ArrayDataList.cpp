#include <plug_common.h>

class luna_wrapper_osg_Geometry_ArrayDataList {
public:
	typedef Luna< osg::Geometry::ArrayDataList > luna_t;

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

		osg::Geometry::ArrayDataList* self=(Luna< osg::Geometry::ArrayDataList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Geometry::ArrayDataList");
		
		return luna_dynamicCast(L,converters,"osg::Geometry::ArrayDataList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::Geometry::ArrayDataList* LunaTraits< osg::Geometry::ArrayDataList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::Geometry::ArrayDataList >::_bind_dtor(osg::Geometry::ArrayDataList* obj) {
	delete obj;
}

const char LunaTraits< osg::Geometry::ArrayDataList >::className[] = "ArrayDataList";
const char LunaTraits< osg::Geometry::ArrayDataList >::fullName[] = "osg::Geometry::ArrayDataList";
const char LunaTraits< osg::Geometry::ArrayDataList >::moduleName[] = "osg";
const char* LunaTraits< osg::Geometry::ArrayDataList >::parents[] = {0};
const int LunaTraits< osg::Geometry::ArrayDataList >::hash = 57346078;
const int LunaTraits< osg::Geometry::ArrayDataList >::uniqueIDs[] = {57346078,0};

luna_RegType LunaTraits< osg::Geometry::ArrayDataList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Geometry_ArrayDataList::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Geometry::ArrayDataList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Geometry::ArrayDataList >::enumValues[] = {
	{0,0}
};

