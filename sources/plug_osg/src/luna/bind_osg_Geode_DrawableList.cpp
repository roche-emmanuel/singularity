#include <plug_common.h>

class luna_wrapper_osg_Geode_DrawableList {
public:
	typedef Luna< osg::Geode::DrawableList > luna_t;

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

		osg::Geode::DrawableList* self=(Luna< osg::Geode::DrawableList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Geode::DrawableList");
		
		return luna_dynamicCast(L,converters,"osg::Geode::DrawableList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::Geode::DrawableList* LunaTraits< osg::Geode::DrawableList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::Geode::DrawableList >::_bind_dtor(osg::Geode::DrawableList* obj) {
	delete obj;
}

const char LunaTraits< osg::Geode::DrawableList >::className[] = "DrawableList";
const char LunaTraits< osg::Geode::DrawableList >::fullName[] = "osg::Geode::DrawableList";
const char LunaTraits< osg::Geode::DrawableList >::moduleName[] = "osg";
const char* LunaTraits< osg::Geode::DrawableList >::parents[] = {0};
const int LunaTraits< osg::Geode::DrawableList >::hash = 47161606;
const int LunaTraits< osg::Geode::DrawableList >::uniqueIDs[] = {47161606,0};

luna_RegType LunaTraits< osg::Geode::DrawableList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Geode_DrawableList::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Geode::DrawableList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Geode::DrawableList >::enumValues[] = {
	{0,0}
};


