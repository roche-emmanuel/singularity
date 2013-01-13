#include <plug_common.h>

class luna_wrapper_wxMatrix2D {
public:
	typedef Luna< wxMatrix2D > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,83648097) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxMatrix2D*)");
		}

		wxMatrix2D* rhs =(Luna< wxMatrix2D >::check(L,2));
		wxMatrix2D* self=(Luna< wxMatrix2D >::check(L,1));
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

		wxMatrix2D* self=(Luna< wxMatrix2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxMatrix2D");
		
		return luna_dynamicCast(L,converters,"wxMatrix2D",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>4 ) return false;

		if( luatop>0 && lua_isnumber(L,1)==0 ) return false;
		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getM_11(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_12(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_21(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_22(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_11(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_12(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_21(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_22(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxMatrix2D::wxMatrix2D(double v11 = 1, double v12 = 0, double v21 = 0, double v22 = 1)
	static wxMatrix2D* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMatrix2D::wxMatrix2D(double v11 = 1, double v12 = 0, double v21 = 0, double v22 = 1) function, expected prototype:\nwxMatrix2D::wxMatrix2D(double v11 = 1, double v12 = 0, double v21 = 0, double v22 = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double v11=luatop>0 ? (double)lua_tonumber(L,1) : 1;
		double v12=luatop>1 ? (double)lua_tonumber(L,2) : 0;
		double v21=luatop>2 ? (double)lua_tonumber(L,3) : 0;
		double v22=luatop>3 ? (double)lua_tonumber(L,4) : 1;

		return new wxMatrix2D(v11, v12, v21, v22);
	}


	// Function binds:
	// double wxMatrix2D::m_11()
	static int _bind_getM_11(lua_State *L) {
		if (!_lg_typecheck_getM_11(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double wxMatrix2D::m_11() function, expected prototype:\ndouble wxMatrix2D::m_11()\nClass arguments details:\n");
		}


		wxMatrix2D* self=(Luna< wxMatrix2D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double wxMatrix2D::m_11(). Got : '%s'",typeid(Luna< wxMatrix2D >::check(L,1)).name());
		}
		double lret = self->m_11;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double wxMatrix2D::m_12()
	static int _bind_getM_12(lua_State *L) {
		if (!_lg_typecheck_getM_12(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double wxMatrix2D::m_12() function, expected prototype:\ndouble wxMatrix2D::m_12()\nClass arguments details:\n");
		}


		wxMatrix2D* self=(Luna< wxMatrix2D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double wxMatrix2D::m_12(). Got : '%s'",typeid(Luna< wxMatrix2D >::check(L,1)).name());
		}
		double lret = self->m_12;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double wxMatrix2D::m_21()
	static int _bind_getM_21(lua_State *L) {
		if (!_lg_typecheck_getM_21(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double wxMatrix2D::m_21() function, expected prototype:\ndouble wxMatrix2D::m_21()\nClass arguments details:\n");
		}


		wxMatrix2D* self=(Luna< wxMatrix2D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double wxMatrix2D::m_21(). Got : '%s'",typeid(Luna< wxMatrix2D >::check(L,1)).name());
		}
		double lret = self->m_21;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double wxMatrix2D::m_22()
	static int _bind_getM_22(lua_State *L) {
		if (!_lg_typecheck_getM_22(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double wxMatrix2D::m_22() function, expected prototype:\ndouble wxMatrix2D::m_22()\nClass arguments details:\n");
		}


		wxMatrix2D* self=(Luna< wxMatrix2D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double wxMatrix2D::m_22(). Got : '%s'",typeid(Luna< wxMatrix2D >::check(L,1)).name());
		}
		double lret = self->m_22;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxMatrix2D::m_11(double value)
	static int _bind_setM_11(lua_State *L) {
		if (!_lg_typecheck_setM_11(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMatrix2D::m_11(double value) function, expected prototype:\nvoid wxMatrix2D::m_11(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		wxMatrix2D* self=(Luna< wxMatrix2D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMatrix2D::m_11(double). Got : '%s'",typeid(Luna< wxMatrix2D >::check(L,1)).name());
		}
		self->m_11 = value;

		return 0;
	}

	// void wxMatrix2D::m_12(double value)
	static int _bind_setM_12(lua_State *L) {
		if (!_lg_typecheck_setM_12(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMatrix2D::m_12(double value) function, expected prototype:\nvoid wxMatrix2D::m_12(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		wxMatrix2D* self=(Luna< wxMatrix2D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMatrix2D::m_12(double). Got : '%s'",typeid(Luna< wxMatrix2D >::check(L,1)).name());
		}
		self->m_12 = value;

		return 0;
	}

	// void wxMatrix2D::m_21(double value)
	static int _bind_setM_21(lua_State *L) {
		if (!_lg_typecheck_setM_21(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMatrix2D::m_21(double value) function, expected prototype:\nvoid wxMatrix2D::m_21(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		wxMatrix2D* self=(Luna< wxMatrix2D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMatrix2D::m_21(double). Got : '%s'",typeid(Luna< wxMatrix2D >::check(L,1)).name());
		}
		self->m_21 = value;

		return 0;
	}

	// void wxMatrix2D::m_22(double value)
	static int _bind_setM_22(lua_State *L) {
		if (!_lg_typecheck_setM_22(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMatrix2D::m_22(double value) function, expected prototype:\nvoid wxMatrix2D::m_22(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		wxMatrix2D* self=(Luna< wxMatrix2D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMatrix2D::m_22(double). Got : '%s'",typeid(Luna< wxMatrix2D >::check(L,1)).name());
		}
		self->m_22 = value;

		return 0;
	}


	// Operator binds:

};

wxMatrix2D* LunaTraits< wxMatrix2D >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxMatrix2D::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxMatrix2D >::_bind_dtor(wxMatrix2D* obj) {
	delete obj;
}

const char LunaTraits< wxMatrix2D >::className[] = "wxMatrix2D";
const char LunaTraits< wxMatrix2D >::fullName[] = "wxMatrix2D";
const char LunaTraits< wxMatrix2D >::moduleName[] = "wx";
const char* LunaTraits< wxMatrix2D >::parents[] = {0};
const int LunaTraits< wxMatrix2D >::hash = 83648097;
const int LunaTraits< wxMatrix2D >::uniqueIDs[] = {83648097,0};

luna_RegType LunaTraits< wxMatrix2D >::methods[] = {
	{"getM_11", &luna_wrapper_wxMatrix2D::_bind_getM_11},
	{"getM_12", &luna_wrapper_wxMatrix2D::_bind_getM_12},
	{"getM_21", &luna_wrapper_wxMatrix2D::_bind_getM_21},
	{"getM_22", &luna_wrapper_wxMatrix2D::_bind_getM_22},
	{"setM_11", &luna_wrapper_wxMatrix2D::_bind_setM_11},
	{"setM_12", &luna_wrapper_wxMatrix2D::_bind_setM_12},
	{"setM_21", &luna_wrapper_wxMatrix2D::_bind_setM_21},
	{"setM_22", &luna_wrapper_wxMatrix2D::_bind_setM_22},
	{"dynCast", &luna_wrapper_wxMatrix2D::_bind_dynCast},
	{"__eq", &luna_wrapper_wxMatrix2D::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxMatrix2D >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxMatrix2D >::enumValues[] = {
	{0,0}
};


