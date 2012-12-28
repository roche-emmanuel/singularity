#include <plug_common.h>

class luna_wrapper_osgViewer_ViewerBase_Windows {
public:
	typedef Luna< osgViewer::ViewerBase::Windows > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,98734151) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgViewer::ViewerBase::Windows*)");
		}

		osgViewer::ViewerBase::Windows* rhs =(Luna< osgViewer::ViewerBase::Windows >::check(L,2));
		osgViewer::ViewerBase::Windows* self=(Luna< osgViewer::ViewerBase::Windows >::check(L,1));
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

		osgViewer::ViewerBase::Windows* self=(Luna< osgViewer::ViewerBase::Windows >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgViewer::ViewerBase::Windows");
		
		return luna_dynamicCast(L,converters,"osgViewer::ViewerBase::Windows",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgViewer::ViewerBase::Windows* LunaTraits< osgViewer::ViewerBase::Windows >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgViewer::ViewerBase::Windows >::_bind_dtor(osgViewer::ViewerBase::Windows* obj) {
	delete obj;
}

const char LunaTraits< osgViewer::ViewerBase::Windows >::className[] = "Windows";
const char LunaTraits< osgViewer::ViewerBase::Windows >::fullName[] = "osgViewer::ViewerBase::Windows";
const char LunaTraits< osgViewer::ViewerBase::Windows >::moduleName[] = "osg";
const char* LunaTraits< osgViewer::ViewerBase::Windows >::parents[] = {0};
const int LunaTraits< osgViewer::ViewerBase::Windows >::hash = 98734151;
const int LunaTraits< osgViewer::ViewerBase::Windows >::uniqueIDs[] = {98734151,0};

luna_RegType LunaTraits< osgViewer::ViewerBase::Windows >::methods[] = {
	{"dynCast", &luna_wrapper_osgViewer_ViewerBase_Windows::_bind_dynCast},
	{"__eq", &luna_wrapper_osgViewer_ViewerBase_Windows::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::ViewerBase::Windows >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::ViewerBase::Windows >::enumValues[] = {
	{0,0}
};


