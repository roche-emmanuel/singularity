#include <plug_common.h>

class luna_wrapper_osg_StateAttributeUIntPairList {
public:
	typedef Luna< osg::StateAttributeUIntPairList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,97032511) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::StateAttributeUIntPairList*)");
		}

		osg::StateAttributeUIntPairList* rhs =(Luna< osg::StateAttributeUIntPairList >::check(L,2));
		osg::StateAttributeUIntPairList* self=(Luna< osg::StateAttributeUIntPairList >::check(L,1));
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

		osg::StateAttributeUIntPairList* self=(Luna< osg::StateAttributeUIntPairList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::StateAttributeUIntPairList");
		
		return luna_dynamicCast(L,converters,"osg::StateAttributeUIntPairList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::StateAttributeUIntPairList* LunaTraits< osg::StateAttributeUIntPairList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::StateAttributeUIntPairList >::_bind_dtor(osg::StateAttributeUIntPairList* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osg::StateAttributeUIntPairList >::className[] = "StateAttributeUIntPairList";
const char LunaTraits< osg::StateAttributeUIntPairList >::fullName[] = "osg::StateAttributeUIntPairList";
const char LunaTraits< osg::StateAttributeUIntPairList >::moduleName[] = "osg";
const char* LunaTraits< osg::StateAttributeUIntPairList >::parents[] = {0};
const int LunaTraits< osg::StateAttributeUIntPairList >::hash = 97032511;
const int LunaTraits< osg::StateAttributeUIntPairList >::uniqueIDs[] = {97032511,0};

luna_RegType LunaTraits< osg::StateAttributeUIntPairList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_StateAttributeUIntPairList::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_StateAttributeUIntPairList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::StateAttributeUIntPairList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::StateAttributeUIntPairList >::enumValues[] = {
	{0,0}
};


