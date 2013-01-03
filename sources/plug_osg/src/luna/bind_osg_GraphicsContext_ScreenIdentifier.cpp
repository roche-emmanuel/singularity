#include <plug_common.h>

class luna_wrapper_osg_GraphicsContext_ScreenIdentifier {
public:
	typedef Luna< osg::GraphicsContext::ScreenIdentifier > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,83590106) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::GraphicsContext::ScreenIdentifier*)");
		}

		osg::GraphicsContext::ScreenIdentifier* rhs =(Luna< osg::GraphicsContext::ScreenIdentifier >::check(L,2));
		osg::GraphicsContext::ScreenIdentifier* self=(Luna< osg::GraphicsContext::ScreenIdentifier >::check(L,1));
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

		osg::GraphicsContext::ScreenIdentifier* self=(Luna< osg::GraphicsContext::ScreenIdentifier >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::GraphicsContext::ScreenIdentifier");
		
		return luna_dynamicCast(L,converters,"osg::GraphicsContext::ScreenIdentifier",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::GraphicsContext::ScreenIdentifier* LunaTraits< osg::GraphicsContext::ScreenIdentifier >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::GraphicsContext::ScreenIdentifier >::_bind_dtor(osg::GraphicsContext::ScreenIdentifier* obj) {
	delete obj;
}

const char LunaTraits< osg::GraphicsContext::ScreenIdentifier >::className[] = "GraphicsContext_ScreenIdentifier";
const char LunaTraits< osg::GraphicsContext::ScreenIdentifier >::fullName[] = "osg::GraphicsContext::ScreenIdentifier";
const char LunaTraits< osg::GraphicsContext::ScreenIdentifier >::moduleName[] = "osg";
const char* LunaTraits< osg::GraphicsContext::ScreenIdentifier >::parents[] = {0};
const int LunaTraits< osg::GraphicsContext::ScreenIdentifier >::hash = 83590106;
const int LunaTraits< osg::GraphicsContext::ScreenIdentifier >::uniqueIDs[] = {83590106,0};

luna_RegType LunaTraits< osg::GraphicsContext::ScreenIdentifier >::methods[] = {
	{"dynCast", &luna_wrapper_osg_GraphicsContext_ScreenIdentifier::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_GraphicsContext_ScreenIdentifier::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::GraphicsContext::ScreenIdentifier >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::GraphicsContext::ScreenIdentifier >::enumValues[] = {
	{0,0}
};


