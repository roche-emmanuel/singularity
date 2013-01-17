#include <plug_common.h>

class luna_wrapper_b2ContactImpulse {
public:
	typedef Luna< b2ContactImpulse > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,12344703) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2ContactImpulse*)");
		}

		b2ContactImpulse* rhs =(Luna< b2ContactImpulse >::check(L,2));
		b2ContactImpulse* self=(Luna< b2ContactImpulse >::check(L,1));
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

		b2ContactImpulse* self=(Luna< b2ContactImpulse >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2ContactImpulse");
		
		return luna_dynamicCast(L,converters,"b2ContactImpulse",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// signed int b2ContactImpulse::count()
	static int _bind_getCount(lua_State *L) {
		if (!_lg_typecheck_getCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2ContactImpulse::count() function, expected prototype:\nsigned int b2ContactImpulse::count()\nClass arguments details:\n");
		}


		b2ContactImpulse* self=(Luna< b2ContactImpulse >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2ContactImpulse::count(). Got : '%s'",typeid(Luna< b2ContactImpulse >::check(L,1)).name());
		}
		signed int lret = self->count;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2ContactImpulse::count(signed int value)
	static int _bind_setCount(lua_State *L) {
		if (!_lg_typecheck_setCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactImpulse::count(signed int value) function, expected prototype:\nvoid b2ContactImpulse::count(signed int value)\nClass arguments details:\n");
		}

		signed int value=(signed int)lua_tointeger(L,2);

		b2ContactImpulse* self=(Luna< b2ContactImpulse >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactImpulse::count(signed int). Got : '%s'",typeid(Luna< b2ContactImpulse >::check(L,1)).name());
		}
		self->count = value;

		return 0;
	}


	// Operator binds:

};

b2ContactImpulse* LunaTraits< b2ContactImpulse >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< b2ContactImpulse >::_bind_dtor(b2ContactImpulse* obj) {
	delete obj;
}

const char LunaTraits< b2ContactImpulse >::className[] = "b2ContactImpulse";
const char LunaTraits< b2ContactImpulse >::fullName[] = "b2ContactImpulse";
const char LunaTraits< b2ContactImpulse >::moduleName[] = "box2d";
const char* LunaTraits< b2ContactImpulse >::parents[] = {0};
const int LunaTraits< b2ContactImpulse >::hash = 12344703;
const int LunaTraits< b2ContactImpulse >::uniqueIDs[] = {12344703,0};

luna_RegType LunaTraits< b2ContactImpulse >::methods[] = {
	{"getCount", &luna_wrapper_b2ContactImpulse::_bind_getCount},
	{"setCount", &luna_wrapper_b2ContactImpulse::_bind_setCount},
	{"dynCast", &luna_wrapper_b2ContactImpulse::_bind_dynCast},
	{"__eq", &luna_wrapper_b2ContactImpulse::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< b2ContactImpulse >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2ContactImpulse >::enumValues[] = {
	{0,0}
};


