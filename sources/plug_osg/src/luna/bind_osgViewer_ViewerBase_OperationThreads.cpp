#include <plug_common.h>

class luna_wrapper_osgViewer_ViewerBase_OperationThreads {
public:
	typedef Luna< osgViewer::ViewerBase::OperationThreads > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,32227808) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgViewer::ViewerBase::OperationThreads*)");
		}

		osgViewer::ViewerBase::OperationThreads* rhs =(Luna< osgViewer::ViewerBase::OperationThreads >::check(L,2));
		osgViewer::ViewerBase::OperationThreads* self=(Luna< osgViewer::ViewerBase::OperationThreads >::check(L,1));
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

		osgViewer::ViewerBase::OperationThreads* self=(Luna< osgViewer::ViewerBase::OperationThreads >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgViewer::ViewerBase::OperationThreads");
		
		return luna_dynamicCast(L,converters,"osgViewer::ViewerBase::OperationThreads",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgViewer::ViewerBase::OperationThreads* LunaTraits< osgViewer::ViewerBase::OperationThreads >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgViewer::ViewerBase::OperationThreads >::_bind_dtor(osgViewer::ViewerBase::OperationThreads* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osgViewer::ViewerBase::OperationThreads >::className[] = "OperationThreads";
const char LunaTraits< osgViewer::ViewerBase::OperationThreads >::fullName[] = "osgViewer::ViewerBase::OperationThreads";
const char LunaTraits< osgViewer::ViewerBase::OperationThreads >::moduleName[] = "osg";
const char* LunaTraits< osgViewer::ViewerBase::OperationThreads >::parents[] = {0};
const int LunaTraits< osgViewer::ViewerBase::OperationThreads >::hash = 32227808;
const int LunaTraits< osgViewer::ViewerBase::OperationThreads >::uniqueIDs[] = {32227808,0};

luna_RegType LunaTraits< osgViewer::ViewerBase::OperationThreads >::methods[] = {
	{"dynCast", &luna_wrapper_osgViewer_ViewerBase_OperationThreads::_bind_dynCast},
	{"__eq", &luna_wrapper_osgViewer_ViewerBase_OperationThreads::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::ViewerBase::OperationThreads >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::ViewerBase::OperationThreads >::enumValues[] = {
	{0,0}
};


