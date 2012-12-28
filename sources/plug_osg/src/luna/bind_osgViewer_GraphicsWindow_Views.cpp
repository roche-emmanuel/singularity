#include <plug_common.h>

class luna_wrapper_osgViewer_GraphicsWindow_Views {
public:
	typedef Luna< osgViewer::GraphicsWindow::Views > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,51540588) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgViewer::GraphicsWindow::Views*)");
		}

		osgViewer::GraphicsWindow::Views* rhs =(Luna< osgViewer::GraphicsWindow::Views >::check(L,2));
		osgViewer::GraphicsWindow::Views* self=(Luna< osgViewer::GraphicsWindow::Views >::check(L,1));
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

		osgViewer::GraphicsWindow::Views* self=(Luna< osgViewer::GraphicsWindow::Views >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgViewer::GraphicsWindow::Views");
		
		return luna_dynamicCast(L,converters,"osgViewer::GraphicsWindow::Views",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgViewer::GraphicsWindow::Views* LunaTraits< osgViewer::GraphicsWindow::Views >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgViewer::GraphicsWindow::Views >::_bind_dtor(osgViewer::GraphicsWindow::Views* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osgViewer::GraphicsWindow::Views >::className[] = "Views";
const char LunaTraits< osgViewer::GraphicsWindow::Views >::fullName[] = "osgViewer::GraphicsWindow::Views";
const char LunaTraits< osgViewer::GraphicsWindow::Views >::moduleName[] = "osg";
const char* LunaTraits< osgViewer::GraphicsWindow::Views >::parents[] = {0};
const int LunaTraits< osgViewer::GraphicsWindow::Views >::hash = 51540588;
const int LunaTraits< osgViewer::GraphicsWindow::Views >::uniqueIDs[] = {51540588,0};

luna_RegType LunaTraits< osgViewer::GraphicsWindow::Views >::methods[] = {
	{"dynCast", &luna_wrapper_osgViewer_GraphicsWindow_Views::_bind_dynCast},
	{"__eq", &luna_wrapper_osgViewer_GraphicsWindow_Views::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::GraphicsWindow::Views >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::GraphicsWindow::Views >::enumValues[] = {
	{0,0}
};


