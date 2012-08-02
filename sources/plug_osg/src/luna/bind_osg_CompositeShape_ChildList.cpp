#include <plug_common.h>

class luna_wrapper_osg_CompositeShape_ChildList {
public:
	typedef Luna< osg::CompositeShape::ChildList > luna_t;

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

		osg::CompositeShape::ChildList* self=(Luna< osg::CompositeShape::ChildList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::CompositeShape::ChildList");
		
		return luna_dynamicCast(L,converters,"osg::CompositeShape::ChildList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::CompositeShape::ChildList* LunaTraits< osg::CompositeShape::ChildList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::CompositeShape::ChildList >::_bind_dtor(osg::CompositeShape::ChildList* obj) {
	delete obj;
}

const char LunaTraits< osg::CompositeShape::ChildList >::className[] = "ChildList";
const char LunaTraits< osg::CompositeShape::ChildList >::fullName[] = "osg::CompositeShape::ChildList";
const char LunaTraits< osg::CompositeShape::ChildList >::moduleName[] = "osg";
const char* LunaTraits< osg::CompositeShape::ChildList >::parents[] = {0};
const int LunaTraits< osg::CompositeShape::ChildList >::hash = 38958908;
const int LunaTraits< osg::CompositeShape::ChildList >::uniqueIDs[] = {38958908,0};

luna_RegType LunaTraits< osg::CompositeShape::ChildList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_CompositeShape_ChildList::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::CompositeShape::ChildList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::CompositeShape::ChildList >::enumValues[] = {
	{0,0}
};


