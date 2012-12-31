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

	// Operator binds:

};

SPK::InterpolatorEntry* LunaTraits< SPK::InterpolatorEntry >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_InterpolatorEntry::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
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


