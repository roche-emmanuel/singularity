#include <plug_common.h>

class luna_wrapper_osg_StateSet_ParentList {
public:
	typedef Luna< osg::StateSet::ParentList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81229680) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::StateSet::ParentList*)");
		}

		osg::StateSet::ParentList* rhs =(Luna< osg::StateSet::ParentList >::check(L,2));
		osg::StateSet::ParentList* self=(Luna< osg::StateSet::ParentList >::check(L,1));
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

		osg::StateSet::ParentList* self=(Luna< osg::StateSet::ParentList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::StateSet::ParentList");
		
		return luna_dynamicCast(L,converters,"osg::StateSet::ParentList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::StateSet::ParentList* LunaTraits< osg::StateSet::ParentList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::StateSet::ParentList >::_bind_dtor(osg::StateSet::ParentList* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osg::StateSet::ParentList >::className[] = "ParentList";
const char LunaTraits< osg::StateSet::ParentList >::fullName[] = "osg::StateSet::ParentList";
const char LunaTraits< osg::StateSet::ParentList >::moduleName[] = "osg";
const char* LunaTraits< osg::StateSet::ParentList >::parents[] = {0};
const int LunaTraits< osg::StateSet::ParentList >::hash = 81229680;
const int LunaTraits< osg::StateSet::ParentList >::uniqueIDs[] = {81229680,0};

luna_RegType LunaTraits< osg::StateSet::ParentList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_StateSet_ParentList::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_StateSet_ParentList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::StateSet::ParentList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::StateSet::ParentList >::enumValues[] = {
	{0,0}
};


