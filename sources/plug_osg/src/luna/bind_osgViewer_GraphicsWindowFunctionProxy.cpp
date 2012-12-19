#include <plug_common.h>

class luna_wrapper_osgViewer_GraphicsWindowFunctionProxy {
public:
	typedef Luna< osgViewer::GraphicsWindowFunctionProxy > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,30766822) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgViewer::GraphicsWindowFunctionProxy*)");
		}

		osgViewer::GraphicsWindowFunctionProxy* rhs =(Luna< osgViewer::GraphicsWindowFunctionProxy >::check(L,2));
		osgViewer::GraphicsWindowFunctionProxy* self=(Luna< osgViewer::GraphicsWindowFunctionProxy >::check(L,1));
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

		osgViewer::GraphicsWindowFunctionProxy* self=(Luna< osgViewer::GraphicsWindowFunctionProxy >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgViewer::GraphicsWindowFunctionProxy");
		
		return luna_dynamicCast(L,converters,"osgViewer::GraphicsWindowFunctionProxy",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgViewer::GraphicsWindowFunctionProxy* LunaTraits< osgViewer::GraphicsWindowFunctionProxy >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgViewer::GraphicsWindowFunctionProxy >::_bind_dtor(osgViewer::GraphicsWindowFunctionProxy* obj) {
	delete obj;
}

const char LunaTraits< osgViewer::GraphicsWindowFunctionProxy >::className[] = "GraphicsWindowFunctionProxy";
const char LunaTraits< osgViewer::GraphicsWindowFunctionProxy >::fullName[] = "osgViewer::GraphicsWindowFunctionProxy";
const char LunaTraits< osgViewer::GraphicsWindowFunctionProxy >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::GraphicsWindowFunctionProxy >::parents[] = {0};
const int LunaTraits< osgViewer::GraphicsWindowFunctionProxy >::hash = 30766822;
const int LunaTraits< osgViewer::GraphicsWindowFunctionProxy >::uniqueIDs[] = {30766822,0};

luna_RegType LunaTraits< osgViewer::GraphicsWindowFunctionProxy >::methods[] = {
	{"dynCast", &luna_wrapper_osgViewer_GraphicsWindowFunctionProxy::_bind_dynCast},
	{"__eq", &luna_wrapper_osgViewer_GraphicsWindowFunctionProxy::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::GraphicsWindowFunctionProxy >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::GraphicsWindowFunctionProxy >::enumValues[] = {
	{0,0}
};


