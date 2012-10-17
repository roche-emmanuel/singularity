#include <plug_common.h>

class luna_wrapper_osgViewer_ViewerBase_Views {
public:
	typedef Luna< osgViewer::ViewerBase::Views > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2917259) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgViewer::ViewerBase::Views*)");
		}

		osgViewer::ViewerBase::Views* rhs =(Luna< osgViewer::ViewerBase::Views >::check(L,2));
		osgViewer::ViewerBase::Views* self=(Luna< osgViewer::ViewerBase::Views >::check(L,1));
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

		osgViewer::ViewerBase::Views* self=(Luna< osgViewer::ViewerBase::Views >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgViewer::ViewerBase::Views");
		
		return luna_dynamicCast(L,converters,"osgViewer::ViewerBase::Views",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgViewer::ViewerBase::Views* LunaTraits< osgViewer::ViewerBase::Views >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgViewer::ViewerBase::Views >::_bind_dtor(osgViewer::ViewerBase::Views* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osgViewer::ViewerBase::Views >::className[] = "Views";
const char LunaTraits< osgViewer::ViewerBase::Views >::fullName[] = "osgViewer::ViewerBase::Views";
const char LunaTraits< osgViewer::ViewerBase::Views >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::ViewerBase::Views >::parents[] = {0};
const int LunaTraits< osgViewer::ViewerBase::Views >::hash = 2917259;
const int LunaTraits< osgViewer::ViewerBase::Views >::uniqueIDs[] = {2917259,0};

luna_RegType LunaTraits< osgViewer::ViewerBase::Views >::methods[] = {
	{"dynCast", &luna_wrapper_osgViewer_ViewerBase_Views::_bind_dynCast},
	{"__eq", &luna_wrapper_osgViewer_ViewerBase_Views::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::ViewerBase::Views >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::ViewerBase::Views >::enumValues[] = {
	{0,0}
};


