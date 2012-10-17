#include <plug_common.h>

class luna_wrapper_osg_StateSet_RefUniformPair {
public:
	typedef Luna< osg::StateSet::RefUniformPair > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,49832211) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::StateSet::RefUniformPair*)");
		}

		osg::StateSet::RefUniformPair* rhs =(Luna< osg::StateSet::RefUniformPair >::check(L,2));
		osg::StateSet::RefUniformPair* self=(Luna< osg::StateSet::RefUniformPair >::check(L,1));
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

		osg::StateSet::RefUniformPair* self=(Luna< osg::StateSet::RefUniformPair >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::StateSet::RefUniformPair");
		
		return luna_dynamicCast(L,converters,"osg::StateSet::RefUniformPair",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::StateSet::RefUniformPair* LunaTraits< osg::StateSet::RefUniformPair >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::StateSet::RefUniformPair >::_bind_dtor(osg::StateSet::RefUniformPair* obj) {
	delete obj;
}

const char LunaTraits< osg::StateSet::RefUniformPair >::className[] = "RefUniformPair";
const char LunaTraits< osg::StateSet::RefUniformPair >::fullName[] = "osg::StateSet::RefUniformPair";
const char LunaTraits< osg::StateSet::RefUniformPair >::moduleName[] = "osg";
const char* LunaTraits< osg::StateSet::RefUniformPair >::parents[] = {0};
const int LunaTraits< osg::StateSet::RefUniformPair >::hash = 49832211;
const int LunaTraits< osg::StateSet::RefUniformPair >::uniqueIDs[] = {49832211,0};

luna_RegType LunaTraits< osg::StateSet::RefUniformPair >::methods[] = {
	{"dynCast", &luna_wrapper_osg_StateSet_RefUniformPair::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_StateSet_RefUniformPair::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::StateSet::RefUniformPair >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::StateSet::RefUniformPair >::enumValues[] = {
	{0,0}
};


