#include <plug_common.h>

class luna_wrapper_osg_ObserverSet_Observers {
public:
	typedef Luna< osg::ObserverSet::Observers > luna_t;

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

		osg::ObserverSet::Observers* self=(Luna< osg::ObserverSet::Observers >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ObserverSet::Observers");
		
		return luna_dynamicCast(L,converters,"osg::ObserverSet::Observers",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::ObserverSet::Observers* LunaTraits< osg::ObserverSet::Observers >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::ObserverSet::Observers >::_bind_dtor(osg::ObserverSet::Observers* obj) {
	delete obj;
}

const char LunaTraits< osg::ObserverSet::Observers >::className[] = "Observers";
const char LunaTraits< osg::ObserverSet::Observers >::fullName[] = "osg::ObserverSet::Observers";
const char LunaTraits< osg::ObserverSet::Observers >::moduleName[] = "osg";
const char* LunaTraits< osg::ObserverSet::Observers >::parents[] = {0};
const int LunaTraits< osg::ObserverSet::Observers >::hash = 311637;
const int LunaTraits< osg::ObserverSet::Observers >::uniqueIDs[] = {311637,0};

luna_RegType LunaTraits< osg::ObserverSet::Observers >::methods[] = {
	{"dynCast", &luna_wrapper_osg_ObserverSet_Observers::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ObserverSet::Observers >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ObserverSet::Observers >::enumValues[] = {
	{0,0}
};


