#include <plug_common.h>

class luna_wrapper_osg_ShaderComponents {
public:
	typedef Luna< osg::ShaderComponents > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,73063359) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ShaderComponents*)");
		}

		osg::ShaderComponents* rhs =(Luna< osg::ShaderComponents >::check(L,2));
		osg::ShaderComponents* self=(Luna< osg::ShaderComponents >::check(L,1));
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

		osg::ShaderComponents* self=(Luna< osg::ShaderComponents >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ShaderComponents");
		
		return luna_dynamicCast(L,converters,"osg::ShaderComponents",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::ShaderComponents* LunaTraits< osg::ShaderComponents >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::ShaderComponents >::_bind_dtor(osg::ShaderComponents* obj) {
	delete obj;
}

const char LunaTraits< osg::ShaderComponents >::className[] = "ShaderComponents";
const char LunaTraits< osg::ShaderComponents >::fullName[] = "osg::ShaderComponents";
const char LunaTraits< osg::ShaderComponents >::moduleName[] = "osg";
const char* LunaTraits< osg::ShaderComponents >::parents[] = {0};
const int LunaTraits< osg::ShaderComponents >::hash = 73063359;
const int LunaTraits< osg::ShaderComponents >::uniqueIDs[] = {73063359,0};

luna_RegType LunaTraits< osg::ShaderComponents >::methods[] = {
	{"dynCast", &luna_wrapper_osg_ShaderComponents::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ShaderComponents::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ShaderComponents >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ShaderComponents >::enumValues[] = {
	{0,0}
};


