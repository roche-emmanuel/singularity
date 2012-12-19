#include <plug_common.h>

class luna_wrapper_osg_StateAttribute_TypeMemberPair {
public:
	typedef Luna< osg::StateAttribute::TypeMemberPair > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,493552) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::StateAttribute::TypeMemberPair*)");
		}

		osg::StateAttribute::TypeMemberPair* rhs =(Luna< osg::StateAttribute::TypeMemberPair >::check(L,2));
		osg::StateAttribute::TypeMemberPair* self=(Luna< osg::StateAttribute::TypeMemberPair >::check(L,1));
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

		osg::StateAttribute::TypeMemberPair* self=(Luna< osg::StateAttribute::TypeMemberPair >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::StateAttribute::TypeMemberPair");
		
		return luna_dynamicCast(L,converters,"osg::StateAttribute::TypeMemberPair",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::StateAttribute::TypeMemberPair* LunaTraits< osg::StateAttribute::TypeMemberPair >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::StateAttribute::TypeMemberPair >::_bind_dtor(osg::StateAttribute::TypeMemberPair* obj) {
	delete obj;
}

const char LunaTraits< osg::StateAttribute::TypeMemberPair >::className[] = "TypeMemberPair";
const char LunaTraits< osg::StateAttribute::TypeMemberPair >::fullName[] = "osg::StateAttribute::TypeMemberPair";
const char LunaTraits< osg::StateAttribute::TypeMemberPair >::moduleName[] = "osg";
const char* LunaTraits< osg::StateAttribute::TypeMemberPair >::parents[] = {0};
const int LunaTraits< osg::StateAttribute::TypeMemberPair >::hash = 493552;
const int LunaTraits< osg::StateAttribute::TypeMemberPair >::uniqueIDs[] = {493552,0};

luna_RegType LunaTraits< osg::StateAttribute::TypeMemberPair >::methods[] = {
	{"dynCast", &luna_wrapper_osg_StateAttribute_TypeMemberPair::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_StateAttribute_TypeMemberPair::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::StateAttribute::TypeMemberPair >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::StateAttribute::TypeMemberPair >::enumValues[] = {
	{0,0}
};


