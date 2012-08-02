#include <plug_common.h>

class luna_wrapper_osg_StateSetList {
public:
	typedef Luna< osg::StateSetList > luna_t;

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

		osg::StateSetList* self=(Luna< osg::StateSetList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::StateSetList");
		
		return luna_dynamicCast(L,converters,"osg::StateSetList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::StateSetList* LunaTraits< osg::StateSetList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::StateSetList >::_bind_dtor(osg::StateSetList* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osg::StateSetList >::className[] = "StateSetList";
const char LunaTraits< osg::StateSetList >::fullName[] = "osg::StateSetList";
const char LunaTraits< osg::StateSetList >::moduleName[] = "osg";
const char* LunaTraits< osg::StateSetList >::parents[] = {0};
const int LunaTraits< osg::StateSetList >::hash = 73580662;
const int LunaTraits< osg::StateSetList >::uniqueIDs[] = {73580662,0};

luna_RegType LunaTraits< osg::StateSetList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_StateSetList::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::StateSetList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::StateSetList >::enumValues[] = {
	{0,0}
};


