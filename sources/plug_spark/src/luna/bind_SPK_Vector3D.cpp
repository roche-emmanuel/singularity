#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_SPK_Vector3D {
public:
	typedef Luna< SPK::Vector3D > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70092749) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SPK::Vector3D*)");
		}

		SPK::Vector3D* rhs =(Luna< SPK::Vector3D >::check(L,2));
		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
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

		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SPK::Vector3D");
		
		return luna_dynamicCast(L,converters,"SPK::Vector3D",name);
	}

	inline static bool _lg_typecheck_x(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'SPK::Vector3D *'
		////////////////////////////////////////////////////////////////////
		return true;
	}

	inline static bool _lg_typecheck_y(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'SPK::Vector3D *'
		////////////////////////////////////////////////////////////////////
		return true;
	}

	inline static bool _lg_typecheck_z(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'SPK::Vector3D *'
		////////////////////////////////////////////////////////////////////
		return true;
	}


	// float SPK::Vector3D *::vec_get_x(SPK::Vector3D * vec)
	static int _bind_x(lua_State *L) {
		if (!_lg_typecheck_x(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::Vector3D *::vec_get_x(SPK::Vector3D * vec) function, expected prototype:\nfloat SPK::Vector3D *::vec_get_x(SPK::Vector3D * vec)\nClass arguments details:\n");
		}

		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'SPK::Vector3D *' baseTypeName is 'SPK::Vector3D'
		////////////////////////////////////////////////////////////////////

		float lret = vec_get_x(&vec);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::Vector3D *::vec_get_y(SPK::Vector3D * vec)
	static int _bind_y(lua_State *L) {
		if (!_lg_typecheck_y(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::Vector3D *::vec_get_y(SPK::Vector3D * vec) function, expected prototype:\nfloat SPK::Vector3D *::vec_get_y(SPK::Vector3D * vec)\nClass arguments details:\n");
		}

		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'SPK::Vector3D *' baseTypeName is 'SPK::Vector3D'
		////////////////////////////////////////////////////////////////////

		float lret = vec_get_y(&vec);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::Vector3D *::vec_get_z(SPK::Vector3D * vec)
	static int _bind_z(lua_State *L) {
		if (!_lg_typecheck_z(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::Vector3D *::vec_get_z(SPK::Vector3D * vec) function, expected prototype:\nfloat SPK::Vector3D *::vec_get_z(SPK::Vector3D * vec)\nClass arguments details:\n");
		}

		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'SPK::Vector3D *' baseTypeName is 'SPK::Vector3D'
		////////////////////////////////////////////////////////////////////

		float lret = vec_get_z(&vec);
		lua_pushnumber(L,lret);

		return 1;
	}

};

SPK::Vector3D* LunaTraits< SPK::Vector3D >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SPK::Vector3D >::_bind_dtor(SPK::Vector3D* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< SPK::Vector3D >::className[] = "SPK_Vector3D";
const char LunaTraits< SPK::Vector3D >::fullName[] = "SPK::Vector3D";
const char LunaTraits< SPK::Vector3D >::moduleName[] = "spark";
const char* LunaTraits< SPK::Vector3D >::parents[] = {0};
const int LunaTraits< SPK::Vector3D >::hash = 70092749;
const int LunaTraits< SPK::Vector3D >::uniqueIDs[] = {70092749,0};

luna_RegType LunaTraits< SPK::Vector3D >::methods[] = {
	{"dynCast", &luna_wrapper_SPK_Vector3D::_bind_dynCast},
	{"__eq", &luna_wrapper_SPK_Vector3D::_bind___eq},
	
	{"x", &luna_wrapper_SPK_Vector3D::_bind_x},
	{"y", &luna_wrapper_SPK_Vector3D::_bind_y},
	{"z", &luna_wrapper_SPK_Vector3D::_bind_z},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::Vector3D >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::Vector3D >::enumValues[] = {
	{0,0}
};


