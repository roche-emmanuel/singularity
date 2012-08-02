#include <plug_common.h>

class luna_wrapper_osgViewer_View_EventHandlers {
public:
	typedef Luna< osgViewer::View::EventHandlers > luna_t;

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

		osgViewer::View::EventHandlers* self=(Luna< osgViewer::View::EventHandlers >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgViewer::View::EventHandlers");
		
		return luna_dynamicCast(L,converters,"osgViewer::View::EventHandlers",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgViewer::View::EventHandlers* LunaTraits< osgViewer::View::EventHandlers >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgViewer::View::EventHandlers >::_bind_dtor(osgViewer::View::EventHandlers* obj) {
	delete obj;
}

const char LunaTraits< osgViewer::View::EventHandlers >::className[] = "EventHandlers";
const char LunaTraits< osgViewer::View::EventHandlers >::fullName[] = "osgViewer::View::EventHandlers";
const char LunaTraits< osgViewer::View::EventHandlers >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::View::EventHandlers >::parents[] = {0};
const int LunaTraits< osgViewer::View::EventHandlers >::hash = 62378713;
const int LunaTraits< osgViewer::View::EventHandlers >::uniqueIDs[] = {62378713,0};

luna_RegType LunaTraits< osgViewer::View::EventHandlers >::methods[] = {
	{"dynCast", &luna_wrapper_osgViewer_View_EventHandlers::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::View::EventHandlers >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::View::EventHandlers >::enumValues[] = {
	{0,0}
};


