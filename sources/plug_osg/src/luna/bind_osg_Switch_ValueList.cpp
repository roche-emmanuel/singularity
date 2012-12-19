#include <plug_common.h>

class luna_wrapper_osg_Switch_ValueList {
public:
	typedef Luna< osg::Switch::ValueList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,23153681) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Switch::ValueList*)");
		}

		osg::Switch::ValueList* rhs =(Luna< osg::Switch::ValueList >::check(L,2));
		osg::Switch::ValueList* self=(Luna< osg::Switch::ValueList >::check(L,1));
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

		osg::Switch::ValueList* self=(Luna< osg::Switch::ValueList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Switch::ValueList");
		
		return luna_dynamicCast(L,converters,"osg::Switch::ValueList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::Switch::ValueList* LunaTraits< osg::Switch::ValueList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::Switch::ValueList >::_bind_dtor(osg::Switch::ValueList* obj) {
	delete obj;
}

const char LunaTraits< osg::Switch::ValueList >::className[] = "ValueList";
const char LunaTraits< osg::Switch::ValueList >::fullName[] = "osg::Switch::ValueList";
const char LunaTraits< osg::Switch::ValueList >::moduleName[] = "osg";
const char* LunaTraits< osg::Switch::ValueList >::parents[] = {0};
const int LunaTraits< osg::Switch::ValueList >::hash = 23153681;
const int LunaTraits< osg::Switch::ValueList >::uniqueIDs[] = {23153681,0};

luna_RegType LunaTraits< osg::Switch::ValueList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Switch_ValueList::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Switch_ValueList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Switch::ValueList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Switch::ValueList >::enumValues[] = {
	{0,0}
};


