#include <plug_common.h>

class luna_wrapper_osg_StateSet_ModeList {
public:
	typedef Luna< osg::StateSet::ModeList > luna_t;

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

		osg::StateSet::ModeList* self=(Luna< osg::StateSet::ModeList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::StateSet::ModeList");
		
		return luna_dynamicCast(L,converters,"osg::StateSet::ModeList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::StateSet::ModeList* LunaTraits< osg::StateSet::ModeList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::StateSet::ModeList >::_bind_dtor(osg::StateSet::ModeList* obj) {
	delete obj;
}

const char LunaTraits< osg::StateSet::ModeList >::className[] = "ModeList";
const char LunaTraits< osg::StateSet::ModeList >::fullName[] = "osg::StateSet::ModeList";
const char LunaTraits< osg::StateSet::ModeList >::moduleName[] = "osg";
const char* LunaTraits< osg::StateSet::ModeList >::parents[] = {0};
const int LunaTraits< osg::StateSet::ModeList >::hash = 59463386;
const int LunaTraits< osg::StateSet::ModeList >::uniqueIDs[] = {59463386,0};

luna_RegType LunaTraits< osg::StateSet::ModeList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_StateSet_ModeList::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::StateSet::ModeList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::StateSet::ModeList >::enumValues[] = {
	{0,0}
};


