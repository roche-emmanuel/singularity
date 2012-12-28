#include <plug_common.h>

class luna_wrapper_osgViewer_ViewerBase_Scenes {
public:
	typedef Luna< osgViewer::ViewerBase::Scenes > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,98997480) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgViewer::ViewerBase::Scenes*)");
		}

		osgViewer::ViewerBase::Scenes* rhs =(Luna< osgViewer::ViewerBase::Scenes >::check(L,2));
		osgViewer::ViewerBase::Scenes* self=(Luna< osgViewer::ViewerBase::Scenes >::check(L,1));
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

		osgViewer::ViewerBase::Scenes* self=(Luna< osgViewer::ViewerBase::Scenes >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgViewer::ViewerBase::Scenes");
		
		return luna_dynamicCast(L,converters,"osgViewer::ViewerBase::Scenes",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgViewer::ViewerBase::Scenes* LunaTraits< osgViewer::ViewerBase::Scenes >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgViewer::ViewerBase::Scenes >::_bind_dtor(osgViewer::ViewerBase::Scenes* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osgViewer::ViewerBase::Scenes >::className[] = "Scenes";
const char LunaTraits< osgViewer::ViewerBase::Scenes >::fullName[] = "osgViewer::ViewerBase::Scenes";
const char LunaTraits< osgViewer::ViewerBase::Scenes >::moduleName[] = "osg";
const char* LunaTraits< osgViewer::ViewerBase::Scenes >::parents[] = {0};
const int LunaTraits< osgViewer::ViewerBase::Scenes >::hash = 98997480;
const int LunaTraits< osgViewer::ViewerBase::Scenes >::uniqueIDs[] = {98997480,0};

luna_RegType LunaTraits< osgViewer::ViewerBase::Scenes >::methods[] = {
	{"dynCast", &luna_wrapper_osgViewer_ViewerBase_Scenes::_bind_dynCast},
	{"__eq", &luna_wrapper_osgViewer_ViewerBase_Scenes::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::ViewerBase::Scenes >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::ViewerBase::Scenes >::enumValues[] = {
	{0,0}
};


