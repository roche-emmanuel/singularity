#include <plug_common.h>

class luna_wrapper_SPK_InterpolatorEntry {
public:
	typedef Luna< SPK::InterpolatorEntry > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,63689174) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SPK::InterpolatorEntry*)");
		}

		SPK::InterpolatorEntry* rhs =(Luna< SPK::InterpolatorEntry >::check(L,2));
		SPK::InterpolatorEntry* self=(Luna< SPK::InterpolatorEntry >::check(L,1));
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

		SPK::InterpolatorEntry* self=(Luna< SPK::InterpolatorEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SPK::InterpolatorEntry");
		
		return luna_dynamicCast(L,converters,"SPK::InterpolatorEntry",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getY0(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getY1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setY0(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setY1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// SPK::InterpolatorEntry::InterpolatorEntry()
	static SPK::InterpolatorEntry* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::InterpolatorEntry::InterpolatorEntry() function, expected prototype:\nSPK::InterpolatorEntry::InterpolatorEntry()\nClass arguments details:\n");
		}


		return new SPK::InterpolatorEntry();
	}

	// SPK::InterpolatorEntry::InterpolatorEntry(float x, float y)
	static SPK::InterpolatorEntry* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::InterpolatorEntry::InterpolatorEntry(float x, float y) function, expected prototype:\nSPK::InterpolatorEntry::InterpolatorEntry(float x, float y)\nClass arguments details:\n");
		}

		float x=(float)lua_tonumber(L,1);
		float y=(float)lua_tonumber(L,2);

		return new SPK::InterpolatorEntry(x, y);
	}

	// SPK::InterpolatorEntry::InterpolatorEntry(float x, float y0, float y1)
	static SPK::InterpolatorEntry* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::InterpolatorEntry::InterpolatorEntry(float x, float y0, float y1) function, expected prototype:\nSPK::InterpolatorEntry::InterpolatorEntry(float x, float y0, float y1)\nClass arguments details:\n");
		}

		float x=(float)lua_tonumber(L,1);
		float y0=(float)lua_tonumber(L,2);
		float y1=(float)lua_tonumber(L,3);

		return new SPK::InterpolatorEntry(x, y0, y1);
	}

	// SPK::InterpolatorEntry::InterpolatorEntry(float x)
	static SPK::InterpolatorEntry* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::InterpolatorEntry::InterpolatorEntry(float x) function, expected prototype:\nSPK::InterpolatorEntry::InterpolatorEntry(float x)\nClass arguments details:\n");
		}

		float x=(float)lua_tonumber(L,1);

		return new SPK::InterpolatorEntry(x);
	}

	// Overload binder for SPK::InterpolatorEntry::InterpolatorEntry
	static SPK::InterpolatorEntry* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function InterpolatorEntry, cannot match any of the overloads for function InterpolatorEntry:\n  InterpolatorEntry()\n  InterpolatorEntry(float, float)\n  InterpolatorEntry(float, float, float)\n  InterpolatorEntry(float)\n");
		return NULL;
	}


	// Function binds:
	// float SPK::InterpolatorEntry::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::InterpolatorEntry::x() function, expected prototype:\nfloat SPK::InterpolatorEntry::x()\nClass arguments details:\n");
		}


		SPK::InterpolatorEntry* self=(Luna< SPK::InterpolatorEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::InterpolatorEntry::x(). Got : '%s'",typeid(Luna< SPK::InterpolatorEntry >::check(L,1)).name());
		}
		float lret = self->x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::InterpolatorEntry::y0()
	static int _bind_getY0(lua_State *L) {
		if (!_lg_typecheck_getY0(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::InterpolatorEntry::y0() function, expected prototype:\nfloat SPK::InterpolatorEntry::y0()\nClass arguments details:\n");
		}


		SPK::InterpolatorEntry* self=(Luna< SPK::InterpolatorEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::InterpolatorEntry::y0(). Got : '%s'",typeid(Luna< SPK::InterpolatorEntry >::check(L,1)).name());
		}
		float lret = self->y0;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::InterpolatorEntry::y1()
	static int _bind_getY1(lua_State *L) {
		if (!_lg_typecheck_getY1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::InterpolatorEntry::y1() function, expected prototype:\nfloat SPK::InterpolatorEntry::y1()\nClass arguments details:\n");
		}


		SPK::InterpolatorEntry* self=(Luna< SPK::InterpolatorEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::InterpolatorEntry::y1(). Got : '%s'",typeid(Luna< SPK::InterpolatorEntry >::check(L,1)).name());
		}
		float lret = self->y1;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void SPK::InterpolatorEntry::x(float value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::InterpolatorEntry::x(float value) function, expected prototype:\nvoid SPK::InterpolatorEntry::x(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		SPK::InterpolatorEntry* self=(Luna< SPK::InterpolatorEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::InterpolatorEntry::x(float). Got : '%s'",typeid(Luna< SPK::InterpolatorEntry >::check(L,1)).name());
		}
		self->x = value;

		return 0;
	}

	// void SPK::InterpolatorEntry::y0(float value)
	static int _bind_setY0(lua_State *L) {
		if (!_lg_typecheck_setY0(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::InterpolatorEntry::y0(float value) function, expected prototype:\nvoid SPK::InterpolatorEntry::y0(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		SPK::InterpolatorEntry* self=(Luna< SPK::InterpolatorEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::InterpolatorEntry::y0(float). Got : '%s'",typeid(Luna< SPK::InterpolatorEntry >::check(L,1)).name());
		}
		self->y0 = value;

		return 0;
	}

	// void SPK::InterpolatorEntry::y1(float value)
	static int _bind_setY1(lua_State *L) {
		if (!_lg_typecheck_setY1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::InterpolatorEntry::y1(float value) function, expected prototype:\nvoid SPK::InterpolatorEntry::y1(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		SPK::InterpolatorEntry* self=(Luna< SPK::InterpolatorEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::InterpolatorEntry::y1(float). Got : '%s'",typeid(Luna< SPK::InterpolatorEntry >::check(L,1)).name());
		}
		self->y1 = value;

		return 0;
	}


	// Operator binds:

};

SPK::InterpolatorEntry* LunaTraits< SPK::InterpolatorEntry >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_InterpolatorEntry::_bind_ctor(L);
}

void LunaTraits< SPK::InterpolatorEntry >::_bind_dtor(SPK::InterpolatorEntry* obj) {
	delete obj;
}

const char LunaTraits< SPK::InterpolatorEntry >::className[] = "InterpolatorEntry";
const char LunaTraits< SPK::InterpolatorEntry >::fullName[] = "SPK::InterpolatorEntry";
const char LunaTraits< SPK::InterpolatorEntry >::moduleName[] = "spark";
const char* LunaTraits< SPK::InterpolatorEntry >::parents[] = {0};
const int LunaTraits< SPK::InterpolatorEntry >::hash = 63689174;
const int LunaTraits< SPK::InterpolatorEntry >::uniqueIDs[] = {63689174,0};

luna_RegType LunaTraits< SPK::InterpolatorEntry >::methods[] = {
	{"getX", &luna_wrapper_SPK_InterpolatorEntry::_bind_getX},
	{"getY0", &luna_wrapper_SPK_InterpolatorEntry::_bind_getY0},
	{"getY1", &luna_wrapper_SPK_InterpolatorEntry::_bind_getY1},
	{"setX", &luna_wrapper_SPK_InterpolatorEntry::_bind_setX},
	{"setY0", &luna_wrapper_SPK_InterpolatorEntry::_bind_setY0},
	{"setY1", &luna_wrapper_SPK_InterpolatorEntry::_bind_setY1},
	{"dynCast", &luna_wrapper_SPK_InterpolatorEntry::_bind_dynCast},
	{"__eq", &luna_wrapper_SPK_InterpolatorEntry::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::InterpolatorEntry >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::InterpolatorEntry >::enumValues[] = {
	{0,0}
};


