#include <plug_common.h>

class luna_wrapper_mglActivePos {
public:
	typedef Luna< mglActivePos > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2134638) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(mglActivePos*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		mglActivePos* rhs =(Luna< mglActivePos >::check(L,2));
		mglActivePos* self=(Luna< mglActivePos >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		mglActivePos* self= (mglActivePos*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglActivePos >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2134638) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< mglActivePos >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		mglActivePos* self=(Luna< mglActivePos >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("mglActivePos");
		
		return luna_dynamicCast(L,converters,"mglActivePos",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getN(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setN(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// int mglActivePos::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luaL_error(L, "luna typecheck failed in int mglActivePos::x() function, expected prototype:\nint mglActivePos::x()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglActivePos* self=(Luna< mglActivePos >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int mglActivePos::x(). Got : '%s'\n%s",typeid(Luna< mglActivePos >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int mglActivePos::y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luaL_error(L, "luna typecheck failed in int mglActivePos::y() function, expected prototype:\nint mglActivePos::y()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglActivePos* self=(Luna< mglActivePos >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int mglActivePos::y(). Got : '%s'\n%s",typeid(Luna< mglActivePos >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int mglActivePos::id()
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luaL_error(L, "luna typecheck failed in int mglActivePos::id() function, expected prototype:\nint mglActivePos::id()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglActivePos* self=(Luna< mglActivePos >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int mglActivePos::id(). Got : '%s'\n%s",typeid(Luna< mglActivePos >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->id;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int mglActivePos::n()
	static int _bind_getN(lua_State *L) {
		if (!_lg_typecheck_getN(L)) {
			luaL_error(L, "luna typecheck failed in int mglActivePos::n() function, expected prototype:\nint mglActivePos::n()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglActivePos* self=(Luna< mglActivePos >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int mglActivePos::n(). Got : '%s'\n%s",typeid(Luna< mglActivePos >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->n;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglActivePos::x(int value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luaL_error(L, "luna typecheck failed in void mglActivePos::x(int value) function, expected prototype:\nvoid mglActivePos::x(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		mglActivePos* self=(Luna< mglActivePos >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglActivePos::x(int). Got : '%s'\n%s",typeid(Luna< mglActivePos >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->x = value;

		return 0;
	}

	// void mglActivePos::y(int value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luaL_error(L, "luna typecheck failed in void mglActivePos::y(int value) function, expected prototype:\nvoid mglActivePos::y(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		mglActivePos* self=(Luna< mglActivePos >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglActivePos::y(int). Got : '%s'\n%s",typeid(Luna< mglActivePos >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->y = value;

		return 0;
	}

	// void mglActivePos::id(int value)
	static int _bind_setId(lua_State *L) {
		if (!_lg_typecheck_setId(L)) {
			luaL_error(L, "luna typecheck failed in void mglActivePos::id(int value) function, expected prototype:\nvoid mglActivePos::id(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		mglActivePos* self=(Luna< mglActivePos >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglActivePos::id(int). Got : '%s'\n%s",typeid(Luna< mglActivePos >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->id = value;

		return 0;
	}

	// void mglActivePos::n(int value)
	static int _bind_setN(lua_State *L) {
		if (!_lg_typecheck_setN(L)) {
			luaL_error(L, "luna typecheck failed in void mglActivePos::n(int value) function, expected prototype:\nvoid mglActivePos::n(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		mglActivePos* self=(Luna< mglActivePos >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglActivePos::n(int). Got : '%s'\n%s",typeid(Luna< mglActivePos >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->n = value;

		return 0;
	}


	// Operator binds:

};

mglActivePos* LunaTraits< mglActivePos >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< mglActivePos >::_bind_dtor(mglActivePos* obj) {
	delete obj;
}

const char LunaTraits< mglActivePos >::className[] = "mglActivePos";
const char LunaTraits< mglActivePos >::fullName[] = "mglActivePos";
const char LunaTraits< mglActivePos >::moduleName[] = "mathgl";
const char* LunaTraits< mglActivePos >::parents[] = {0};
const int LunaTraits< mglActivePos >::hash = 2134638;
const int LunaTraits< mglActivePos >::uniqueIDs[] = {2134638,0};

luna_RegType LunaTraits< mglActivePos >::methods[] = {
	{"getX", &luna_wrapper_mglActivePos::_bind_getX},
	{"getY", &luna_wrapper_mglActivePos::_bind_getY},
	{"getId", &luna_wrapper_mglActivePos::_bind_getId},
	{"getN", &luna_wrapper_mglActivePos::_bind_getN},
	{"setX", &luna_wrapper_mglActivePos::_bind_setX},
	{"setY", &luna_wrapper_mglActivePos::_bind_setY},
	{"setId", &luna_wrapper_mglActivePos::_bind_setId},
	{"setN", &luna_wrapper_mglActivePos::_bind_setN},
	{"dynCast", &luna_wrapper_mglActivePos::_bind_dynCast},
	{"__eq", &luna_wrapper_mglActivePos::_bind___eq},
	{"fromVoid", &luna_wrapper_mglActivePos::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglActivePos::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< mglActivePos >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< mglActivePos >::enumValues[] = {
	{0,0}
};


