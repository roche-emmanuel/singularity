#include <plug_common.h>

class luna_wrapper_btElement {
public:
	typedef Luna< btElement > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,6016384) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btElement*)");
		}

		btElement* rhs =(Luna< btElement >::check(L,2));
		btElement* self=(Luna< btElement >::check(L,1));
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

		btElement* self=(Luna< btElement >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btElement");
		
		return luna_dynamicCast(L,converters,"btElement",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSz(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSz(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// int btElement::m_id()
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btElement::m_id() function, expected prototype:\nint btElement::m_id()\nClass arguments details:\n");
		}


		btElement* self=(Luna< btElement >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btElement::m_id(). Got : '%s'",typeid(Luna< btElement >::check(L,1)).name());
		}
		int lret = self->m_id;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btElement::m_sz()
	static int _bind_getSz(lua_State *L) {
		if (!_lg_typecheck_getSz(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btElement::m_sz() function, expected prototype:\nint btElement::m_sz()\nClass arguments details:\n");
		}


		btElement* self=(Luna< btElement >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btElement::m_sz(). Got : '%s'",typeid(Luna< btElement >::check(L,1)).name());
		}
		int lret = self->m_sz;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btElement::m_id(int value)
	static int _bind_setId(lua_State *L) {
		if (!_lg_typecheck_setId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btElement::m_id(int value) function, expected prototype:\nvoid btElement::m_id(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btElement* self=(Luna< btElement >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btElement::m_id(int). Got : '%s'",typeid(Luna< btElement >::check(L,1)).name());
		}
		self->m_id = value;

		return 0;
	}

	// void btElement::m_sz(int value)
	static int _bind_setSz(lua_State *L) {
		if (!_lg_typecheck_setSz(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btElement::m_sz(int value) function, expected prototype:\nvoid btElement::m_sz(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btElement* self=(Luna< btElement >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btElement::m_sz(int). Got : '%s'",typeid(Luna< btElement >::check(L,1)).name());
		}
		self->m_sz = value;

		return 0;
	}


	// Operator binds:

};

btElement* LunaTraits< btElement >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btElement >::_bind_dtor(btElement* obj) {
	delete obj;
}

const char LunaTraits< btElement >::className[] = "btElement";
const char LunaTraits< btElement >::fullName[] = "btElement";
const char LunaTraits< btElement >::moduleName[] = "bullet";
const char* LunaTraits< btElement >::parents[] = {0};
const int LunaTraits< btElement >::hash = 6016384;
const int LunaTraits< btElement >::uniqueIDs[] = {6016384,0};

luna_RegType LunaTraits< btElement >::methods[] = {
	{"getId", &luna_wrapper_btElement::_bind_getId},
	{"getSz", &luna_wrapper_btElement::_bind_getSz},
	{"setId", &luna_wrapper_btElement::_bind_setId},
	{"setSz", &luna_wrapper_btElement::_bind_setSz},
	{"dynCast", &luna_wrapper_btElement::_bind_dynCast},
	{"__eq", &luna_wrapper_btElement::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btElement >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btElement >::enumValues[] = {
	{0,0}
};


