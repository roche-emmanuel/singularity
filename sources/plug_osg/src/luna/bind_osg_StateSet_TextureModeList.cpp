#include <plug_common.h>

class luna_wrapper_osg_StateSet_TextureModeList {
public:
	typedef Luna< osg::StateSet::TextureModeList > luna_t;

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

		osg::StateSet::TextureModeList* self=(Luna< osg::StateSet::TextureModeList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::StateSet::TextureModeList");
		
		return luna_dynamicCast(L,converters,"osg::StateSet::TextureModeList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::StateSet::TextureModeList* LunaTraits< osg::StateSet::TextureModeList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::StateSet::TextureModeList >::_bind_dtor(osg::StateSet::TextureModeList* obj) {
	delete obj;
}

const char LunaTraits< osg::StateSet::TextureModeList >::className[] = "TextureModeList";
const char LunaTraits< osg::StateSet::TextureModeList >::fullName[] = "osg::StateSet::TextureModeList";
const char LunaTraits< osg::StateSet::TextureModeList >::moduleName[] = "osg";
const char* LunaTraits< osg::StateSet::TextureModeList >::parents[] = {0};
const int LunaTraits< osg::StateSet::TextureModeList >::hash = 14028616;
const int LunaTraits< osg::StateSet::TextureModeList >::uniqueIDs[] = {14028616,0};

luna_RegType LunaTraits< osg::StateSet::TextureModeList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_StateSet_TextureModeList::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::StateSet::TextureModeList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::StateSet::TextureModeList >::enumValues[] = {
	{0,0}
};


