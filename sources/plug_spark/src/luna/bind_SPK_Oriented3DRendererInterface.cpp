#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_SPK_Oriented3DRendererInterface {
public:
	typedef Luna< SPK::Oriented3DRendererInterface > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,95637678) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SPK::Oriented3DRendererInterface*)");
		}

		SPK::Oriented3DRendererInterface* rhs =(Luna< SPK::Oriented3DRendererInterface >::check(L,2));
		SPK::Oriented3DRendererInterface* self=(Luna< SPK::Oriented3DRendererInterface >::check(L,1));
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

		SPK::Oriented3DRendererInterface* self=(Luna< SPK::Oriented3DRendererInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SPK::Oriented3DRendererInterface");
		
		return luna_dynamicCast(L,converters,"SPK::Oriented3DRendererInterface",name);
	}

	inline static bool _lg_typecheck_setLookVector(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'SPK::Oriented3DRendererInterface *'
		////////////////////////////////////////////////////////////////////
		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'SPK::Vector3D *'
		////////////////////////////////////////////////////////////////////
		return true;
	}

	inline static bool _lg_typecheck_setUpVector(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'SPK::Oriented3DRendererInterface *'
		////////////////////////////////////////////////////////////////////
		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'SPK::Vector3D *'
		////////////////////////////////////////////////////////////////////
		return true;
	}


	// void SPK::Oriented3DRendererInterface *::setLookVector(SPK::Oriented3DRendererInterface * intf, SPK::Vector3D * vec)
	static int _bind_setLookVector(lua_State *L) {
		if (!_lg_typecheck_setLookVector(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Oriented3DRendererInterface *::setLookVector(SPK::Oriented3DRendererInterface * intf, SPK::Vector3D * vec) function, expected prototype:\nvoid SPK::Oriented3DRendererInterface *::setLookVector(SPK::Oriented3DRendererInterface * intf, SPK::Vector3D * vec)\nClass arguments details:\n");
		}

		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'SPK::Oriented3DRendererInterface *' baseTypeName is 'SPK::Oriented3DRendererInterface'
		////////////////////////////////////////////////////////////////////
		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'SPK::Vector3D *' baseTypeName is 'SPK::Vector3D'
		////////////////////////////////////////////////////////////////////

		setLookVector(&intf, &vec);

		return 0;
	}

	// void SPK::Oriented3DRendererInterface *::setUpVector(SPK::Oriented3DRendererInterface * intf, SPK::Vector3D * vec)
	static int _bind_setUpVector(lua_State *L) {
		if (!_lg_typecheck_setUpVector(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Oriented3DRendererInterface *::setUpVector(SPK::Oriented3DRendererInterface * intf, SPK::Vector3D * vec) function, expected prototype:\nvoid SPK::Oriented3DRendererInterface *::setUpVector(SPK::Oriented3DRendererInterface * intf, SPK::Vector3D * vec)\nClass arguments details:\n");
		}

		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'SPK::Oriented3DRendererInterface *' baseTypeName is 'SPK::Oriented3DRendererInterface'
		////////////////////////////////////////////////////////////////////
		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'SPK::Vector3D *' baseTypeName is 'SPK::Vector3D'
		////////////////////////////////////////////////////////////////////

		setUpVector(&intf, &vec);

		return 0;
	}

};

SPK::Oriented3DRendererInterface* LunaTraits< SPK::Oriented3DRendererInterface >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SPK::Oriented3DRendererInterface >::_bind_dtor(SPK::Oriented3DRendererInterface* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< SPK::Oriented3DRendererInterface >::className[] = "SPK_Oriented3DRendererInterface";
const char LunaTraits< SPK::Oriented3DRendererInterface >::fullName[] = "SPK::Oriented3DRendererInterface";
const char LunaTraits< SPK::Oriented3DRendererInterface >::moduleName[] = "spark";
const char* LunaTraits< SPK::Oriented3DRendererInterface >::parents[] = {0};
const int LunaTraits< SPK::Oriented3DRendererInterface >::hash = 95637678;
const int LunaTraits< SPK::Oriented3DRendererInterface >::uniqueIDs[] = {95637678,0};

luna_RegType LunaTraits< SPK::Oriented3DRendererInterface >::methods[] = {
	{"dynCast", &luna_wrapper_SPK_Oriented3DRendererInterface::_bind_dynCast},
	{"__eq", &luna_wrapper_SPK_Oriented3DRendererInterface::_bind___eq},
	
	{"setLookVector", &luna_wrapper_SPK_Oriented3DRendererInterface::_bind_setLookVector},
	{"setUpVector", &luna_wrapper_SPK_Oriented3DRendererInterface::_bind_setUpVector},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::Oriented3DRendererInterface >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::Oriented3DRendererInterface >::enumValues[] = {
	{0,0}
};


