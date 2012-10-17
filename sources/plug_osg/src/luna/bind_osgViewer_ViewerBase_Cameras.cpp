#include <plug_common.h>

class luna_wrapper_osgViewer_ViewerBase_Cameras {
public:
	typedef Luna< osgViewer::ViewerBase::Cameras > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18740017) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgViewer::ViewerBase::Cameras*)");
		}

		osgViewer::ViewerBase::Cameras* rhs =(Luna< osgViewer::ViewerBase::Cameras >::check(L,2));
		osgViewer::ViewerBase::Cameras* self=(Luna< osgViewer::ViewerBase::Cameras >::check(L,1));
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

		osgViewer::ViewerBase::Cameras* self=(Luna< osgViewer::ViewerBase::Cameras >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgViewer::ViewerBase::Cameras");
		
		return luna_dynamicCast(L,converters,"osgViewer::ViewerBase::Cameras",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgViewer::ViewerBase::Cameras* LunaTraits< osgViewer::ViewerBase::Cameras >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgViewer::ViewerBase::Cameras >::_bind_dtor(osgViewer::ViewerBase::Cameras* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osgViewer::ViewerBase::Cameras >::className[] = "Cameras";
const char LunaTraits< osgViewer::ViewerBase::Cameras >::fullName[] = "osgViewer::ViewerBase::Cameras";
const char LunaTraits< osgViewer::ViewerBase::Cameras >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::ViewerBase::Cameras >::parents[] = {0};
const int LunaTraits< osgViewer::ViewerBase::Cameras >::hash = 18740017;
const int LunaTraits< osgViewer::ViewerBase::Cameras >::uniqueIDs[] = {18740017,0};

luna_RegType LunaTraits< osgViewer::ViewerBase::Cameras >::methods[] = {
	{"dynCast", &luna_wrapper_osgViewer_ViewerBase_Cameras::_bind_dynCast},
	{"__eq", &luna_wrapper_osgViewer_ViewerBase_Cameras::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::ViewerBase::Cameras >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::ViewerBase::Cameras >::enumValues[] = {
	{0,0}
};


