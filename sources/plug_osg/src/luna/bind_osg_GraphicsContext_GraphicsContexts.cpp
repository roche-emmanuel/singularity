#include <plug_common.h>

class luna_wrapper_osg_GraphicsContext_GraphicsContexts {
public:
	typedef Luna< osg::GraphicsContext::GraphicsContexts > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,62380053) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::GraphicsContext::GraphicsContexts*)");
		}

		osg::GraphicsContext::GraphicsContexts* rhs =(Luna< osg::GraphicsContext::GraphicsContexts >::check(L,2));
		osg::GraphicsContext::GraphicsContexts* self=(Luna< osg::GraphicsContext::GraphicsContexts >::check(L,1));
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

		osg::GraphicsContext::GraphicsContexts* self=(Luna< osg::GraphicsContext::GraphicsContexts >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::GraphicsContext::GraphicsContexts");
		
		return luna_dynamicCast(L,converters,"osg::GraphicsContext::GraphicsContexts",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::GraphicsContext::GraphicsContexts* LunaTraits< osg::GraphicsContext::GraphicsContexts >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::GraphicsContext::GraphicsContexts >::_bind_dtor(osg::GraphicsContext::GraphicsContexts* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osg::GraphicsContext::GraphicsContexts >::className[] = "GraphicsContexts";
const char LunaTraits< osg::GraphicsContext::GraphicsContexts >::fullName[] = "osg::GraphicsContext::GraphicsContexts";
const char LunaTraits< osg::GraphicsContext::GraphicsContexts >::moduleName[] = "osg";
const char* LunaTraits< osg::GraphicsContext::GraphicsContexts >::parents[] = {0};
const int LunaTraits< osg::GraphicsContext::GraphicsContexts >::hash = 62380053;
const int LunaTraits< osg::GraphicsContext::GraphicsContexts >::uniqueIDs[] = {62380053,0};

luna_RegType LunaTraits< osg::GraphicsContext::GraphicsContexts >::methods[] = {
	{"dynCast", &luna_wrapper_osg_GraphicsContext_GraphicsContexts::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_GraphicsContext_GraphicsContexts::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::GraphicsContext::GraphicsContexts >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::GraphicsContext::GraphicsContexts >::enumValues[] = {
	{0,0}
};


