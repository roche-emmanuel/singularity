#include <plug_common.h>

class luna_wrapper_btGjkEpaSolver2_sResults {
public:
	typedef Luna< btGjkEpaSolver2::sResults > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,71238194) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btGjkEpaSolver2::sResults*)");
		}

		btGjkEpaSolver2::sResults* rhs =(Luna< btGjkEpaSolver2::sResults >::check(L,2));
		btGjkEpaSolver2::sResults* self=(Luna< btGjkEpaSolver2::sResults >::check(L,1));
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

		btGjkEpaSolver2::sResults* self=(Luna< btGjkEpaSolver2::sResults >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btGjkEpaSolver2::sResults");
		
		return luna_dynamicCast(L,converters,"btGjkEpaSolver2::sResults",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getStatus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNormal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDistance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setStatus(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNormal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDistance(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// enum btGjkEpaSolver2::sResults::eStatus btGjkEpaSolver2::sResults::status()
	static int _bind_getStatus(lua_State *L) {
		if (!_lg_typecheck_getStatus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in enum btGjkEpaSolver2::sResults::eStatus btGjkEpaSolver2::sResults::status() function, expected prototype:\nenum btGjkEpaSolver2::sResults::eStatus btGjkEpaSolver2::sResults::status()\nClass arguments details:\n");
		}


		btGjkEpaSolver2::sResults* self=(Luna< btGjkEpaSolver2::sResults >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call enum btGjkEpaSolver2::sResults::eStatus btGjkEpaSolver2::sResults::status(). Got : '%s'",typeid(Luna< btGjkEpaSolver2::sResults >::check(L,1)).name());
		}
		enum btGjkEpaSolver2::sResults::eStatus lret = self->status;
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btGjkEpaSolver2::sResults::normal()
	static int _bind_getNormal(lua_State *L) {
		if (!_lg_typecheck_getNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btGjkEpaSolver2::sResults::normal() function, expected prototype:\nbtVector3 btGjkEpaSolver2::sResults::normal()\nClass arguments details:\n");
		}


		btGjkEpaSolver2::sResults* self=(Luna< btGjkEpaSolver2::sResults >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btGjkEpaSolver2::sResults::normal(). Got : '%s'",typeid(Luna< btGjkEpaSolver2::sResults >::check(L,1)).name());
		}
		const btVector3* lret = &self->normal;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// float btGjkEpaSolver2::sResults::distance()
	static int _bind_getDistance(lua_State *L) {
		if (!_lg_typecheck_getDistance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btGjkEpaSolver2::sResults::distance() function, expected prototype:\nfloat btGjkEpaSolver2::sResults::distance()\nClass arguments details:\n");
		}


		btGjkEpaSolver2::sResults* self=(Luna< btGjkEpaSolver2::sResults >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btGjkEpaSolver2::sResults::distance(). Got : '%s'",typeid(Luna< btGjkEpaSolver2::sResults >::check(L,1)).name());
		}
		float lret = self->distance;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGjkEpaSolver2::sResults::status(enum btGjkEpaSolver2::sResults::eStatus value)
	static int _bind_setStatus(lua_State *L) {
		if (!_lg_typecheck_setStatus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGjkEpaSolver2::sResults::status(enum btGjkEpaSolver2::sResults::eStatus value) function, expected prototype:\nvoid btGjkEpaSolver2::sResults::status(enum btGjkEpaSolver2::sResults::eStatus value)\nClass arguments details:\n");
		}

		btGjkEpaSolver2::sResults::eStatus value=(btGjkEpaSolver2::sResults::eStatus)lua_tointeger(L,2);

		btGjkEpaSolver2::sResults* self=(Luna< btGjkEpaSolver2::sResults >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGjkEpaSolver2::sResults::status(enum btGjkEpaSolver2::sResults::eStatus). Got : '%s'",typeid(Luna< btGjkEpaSolver2::sResults >::check(L,1)).name());
		}
		self->status = value;

		return 0;
	}

	// void btGjkEpaSolver2::sResults::normal(btVector3 value)
	static int _bind_setNormal(lua_State *L) {
		if (!_lg_typecheck_setNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGjkEpaSolver2::sResults::normal(btVector3 value) function, expected prototype:\nvoid btGjkEpaSolver2::sResults::normal(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btGjkEpaSolver2::sResults::normal function");
		}
		btVector3 value=*value_ptr;

		btGjkEpaSolver2::sResults* self=(Luna< btGjkEpaSolver2::sResults >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGjkEpaSolver2::sResults::normal(btVector3). Got : '%s'",typeid(Luna< btGjkEpaSolver2::sResults >::check(L,1)).name());
		}
		self->normal = value;

		return 0;
	}

	// void btGjkEpaSolver2::sResults::distance(float value)
	static int _bind_setDistance(lua_State *L) {
		if (!_lg_typecheck_setDistance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGjkEpaSolver2::sResults::distance(float value) function, expected prototype:\nvoid btGjkEpaSolver2::sResults::distance(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btGjkEpaSolver2::sResults* self=(Luna< btGjkEpaSolver2::sResults >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGjkEpaSolver2::sResults::distance(float). Got : '%s'",typeid(Luna< btGjkEpaSolver2::sResults >::check(L,1)).name());
		}
		self->distance = value;

		return 0;
	}


	// Operator binds:

};

btGjkEpaSolver2::sResults* LunaTraits< btGjkEpaSolver2::sResults >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btGjkEpaSolver2::sResults >::_bind_dtor(btGjkEpaSolver2::sResults* obj) {
	delete obj;
}

const char LunaTraits< btGjkEpaSolver2::sResults >::className[] = "btGjkEpaSolver2_sResults";
const char LunaTraits< btGjkEpaSolver2::sResults >::fullName[] = "btGjkEpaSolver2::sResults";
const char LunaTraits< btGjkEpaSolver2::sResults >::moduleName[] = "bullet";
const char* LunaTraits< btGjkEpaSolver2::sResults >::parents[] = {0};
const int LunaTraits< btGjkEpaSolver2::sResults >::hash = 71238194;
const int LunaTraits< btGjkEpaSolver2::sResults >::uniqueIDs[] = {71238194,0};

luna_RegType LunaTraits< btGjkEpaSolver2::sResults >::methods[] = {
	{"getStatus", &luna_wrapper_btGjkEpaSolver2_sResults::_bind_getStatus},
	{"getNormal", &luna_wrapper_btGjkEpaSolver2_sResults::_bind_getNormal},
	{"getDistance", &luna_wrapper_btGjkEpaSolver2_sResults::_bind_getDistance},
	{"setStatus", &luna_wrapper_btGjkEpaSolver2_sResults::_bind_setStatus},
	{"setNormal", &luna_wrapper_btGjkEpaSolver2_sResults::_bind_setNormal},
	{"setDistance", &luna_wrapper_btGjkEpaSolver2_sResults::_bind_setDistance},
	{"dynCast", &luna_wrapper_btGjkEpaSolver2_sResults::_bind_dynCast},
	{"__eq", &luna_wrapper_btGjkEpaSolver2_sResults::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btGjkEpaSolver2::sResults >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btGjkEpaSolver2::sResults >::enumValues[] = {
	{"Separated", btGjkEpaSolver2::sResults::Separated},
	{"Penetrating", btGjkEpaSolver2::sResults::Penetrating},
	{"GJK_Failed", btGjkEpaSolver2::sResults::GJK_Failed},
	{"EPA_Failed", btGjkEpaSolver2::sResults::EPA_Failed},
	{0,0}
};


