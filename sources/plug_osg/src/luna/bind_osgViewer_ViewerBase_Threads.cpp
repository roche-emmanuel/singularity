#include <plug_common.h>

class luna_wrapper_osgViewer_ViewerBase_Threads {
public:
	typedef Luna< osgViewer::ViewerBase::Threads > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,11304538) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgViewer::ViewerBase::Threads*)");
		}

		osgViewer::ViewerBase::Threads* rhs =(Luna< osgViewer::ViewerBase::Threads >::check(L,2));
		osgViewer::ViewerBase::Threads* self=(Luna< osgViewer::ViewerBase::Threads >::check(L,1));
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

		osgViewer::ViewerBase::Threads* self=(Luna< osgViewer::ViewerBase::Threads >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgViewer::ViewerBase::Threads");
		
		return luna_dynamicCast(L,converters,"osgViewer::ViewerBase::Threads",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgViewer::ViewerBase::Threads* LunaTraits< osgViewer::ViewerBase::Threads >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgViewer::ViewerBase::Threads >::_bind_dtor(osgViewer::ViewerBase::Threads* obj) {
	delete obj;
}

const char LunaTraits< osgViewer::ViewerBase::Threads >::className[] = "Threads";
const char LunaTraits< osgViewer::ViewerBase::Threads >::fullName[] = "osgViewer::ViewerBase::Threads";
const char LunaTraits< osgViewer::ViewerBase::Threads >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::ViewerBase::Threads >::parents[] = {0};
const int LunaTraits< osgViewer::ViewerBase::Threads >::hash = 11304538;
const int LunaTraits< osgViewer::ViewerBase::Threads >::uniqueIDs[] = {11304538,0};

luna_RegType LunaTraits< osgViewer::ViewerBase::Threads >::methods[] = {
	{"dynCast", &luna_wrapper_osgViewer_ViewerBase_Threads::_bind_dynCast},
	{"__eq", &luna_wrapper_osgViewer_ViewerBase_Threads::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::ViewerBase::Threads >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::ViewerBase::Threads >::enumValues[] = {
	{0,0}
};


