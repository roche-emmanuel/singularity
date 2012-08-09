#include <plug_common.h>

class luna_wrapper_osg_StateAttribute_ParentList {
public:
	typedef Luna< osg::StateAttribute::ParentList > luna_t;

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

		osg::StateAttribute::ParentList* self=(Luna< osg::StateAttribute::ParentList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::StateAttribute::ParentList");
		
		return luna_dynamicCast(L,converters,"osg::StateAttribute::ParentList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::StateAttribute::ParentList* LunaTraits< osg::StateAttribute::ParentList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::StateAttribute::ParentList >::_bind_dtor(osg::StateAttribute::ParentList* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osg::StateAttribute::ParentList >::className[] = "ParentList";
const char LunaTraits< osg::StateAttribute::ParentList >::fullName[] = "osg::StateAttribute::ParentList";
const char LunaTraits< osg::StateAttribute::ParentList >::moduleName[] = "osg";
const char* LunaTraits< osg::StateAttribute::ParentList >::parents[] = {0};
const int LunaTraits< osg::StateAttribute::ParentList >::hash = 57890271;
const int LunaTraits< osg::StateAttribute::ParentList >::uniqueIDs[] = {57890271,0};

luna_RegType LunaTraits< osg::StateAttribute::ParentList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_StateAttribute_ParentList::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::StateAttribute::ParentList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::StateAttribute::ParentList >::enumValues[] = {
	{0,0}
};

