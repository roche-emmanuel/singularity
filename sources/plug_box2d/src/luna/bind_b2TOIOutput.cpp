#include <plug_common.h>

class luna_wrapper_b2TOIOutput {
public:
	typedef Luna< b2TOIOutput > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,17329370) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2TOIOutput*)");
		}

		b2TOIOutput* rhs =(Luna< b2TOIOutput >::check(L,2));
		b2TOIOutput* self=(Luna< b2TOIOutput >::check(L,1));
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

		b2TOIOutput* self=(Luna< b2TOIOutput >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2TOIOutput");
		
		return luna_dynamicCast(L,converters,"b2TOIOutput",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getState(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getT(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setState(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setT(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// b2TOIOutput::State b2TOIOutput::state()
	static int _bind_getState(lua_State *L) {
		if (!_lg_typecheck_getState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2TOIOutput::State b2TOIOutput::state() function, expected prototype:\nb2TOIOutput::State b2TOIOutput::state()\nClass arguments details:\n");
		}


		b2TOIOutput* self=(Luna< b2TOIOutput >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2TOIOutput::State b2TOIOutput::state(). Got : '%s'",typeid(Luna< b2TOIOutput >::check(L,1)).name());
		}
		b2TOIOutput::State lret = self->state;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2TOIOutput::t()
	static int _bind_getT(lua_State *L) {
		if (!_lg_typecheck_getT(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2TOIOutput::t() function, expected prototype:\nfloat b2TOIOutput::t()\nClass arguments details:\n");
		}


		b2TOIOutput* self=(Luna< b2TOIOutput >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2TOIOutput::t(). Got : '%s'",typeid(Luna< b2TOIOutput >::check(L,1)).name());
		}
		float lret = self->t;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2TOIOutput::state(b2TOIOutput::State value)
	static int _bind_setState(lua_State *L) {
		if (!_lg_typecheck_setState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2TOIOutput::state(b2TOIOutput::State value) function, expected prototype:\nvoid b2TOIOutput::state(b2TOIOutput::State value)\nClass arguments details:\n");
		}

		b2TOIOutput::State value=(b2TOIOutput::State)lua_tointeger(L,2);

		b2TOIOutput* self=(Luna< b2TOIOutput >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2TOIOutput::state(b2TOIOutput::State). Got : '%s'",typeid(Luna< b2TOIOutput >::check(L,1)).name());
		}
		self->state = value;

		return 0;
	}

	// void b2TOIOutput::t(float value)
	static int _bind_setT(lua_State *L) {
		if (!_lg_typecheck_setT(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2TOIOutput::t(float value) function, expected prototype:\nvoid b2TOIOutput::t(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2TOIOutput* self=(Luna< b2TOIOutput >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2TOIOutput::t(float). Got : '%s'",typeid(Luna< b2TOIOutput >::check(L,1)).name());
		}
		self->t = value;

		return 0;
	}


	// Operator binds:

};

b2TOIOutput* LunaTraits< b2TOIOutput >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< b2TOIOutput >::_bind_dtor(b2TOIOutput* obj) {
	delete obj;
}

const char LunaTraits< b2TOIOutput >::className[] = "b2TOIOutput";
const char LunaTraits< b2TOIOutput >::fullName[] = "b2TOIOutput";
const char LunaTraits< b2TOIOutput >::moduleName[] = "box2d";
const char* LunaTraits< b2TOIOutput >::parents[] = {0};
const int LunaTraits< b2TOIOutput >::hash = 17329370;
const int LunaTraits< b2TOIOutput >::uniqueIDs[] = {17329370,0};

luna_RegType LunaTraits< b2TOIOutput >::methods[] = {
	{"getState", &luna_wrapper_b2TOIOutput::_bind_getState},
	{"getT", &luna_wrapper_b2TOIOutput::_bind_getT},
	{"setState", &luna_wrapper_b2TOIOutput::_bind_setState},
	{"setT", &luna_wrapper_b2TOIOutput::_bind_setT},
	{"dynCast", &luna_wrapper_b2TOIOutput::_bind_dynCast},
	{"__eq", &luna_wrapper_b2TOIOutput::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< b2TOIOutput >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2TOIOutput >::enumValues[] = {
	{"e_unknown", b2TOIOutput::e_unknown},
	{"e_failed", b2TOIOutput::e_failed},
	{"e_overlapped", b2TOIOutput::e_overlapped},
	{"e_touching", b2TOIOutput::e_touching},
	{"e_separated", b2TOIOutput::e_separated},
	{0,0}
};


