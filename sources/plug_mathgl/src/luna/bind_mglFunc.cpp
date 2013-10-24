#include <plug_common.h>

class luna_wrapper_mglFunc {
public:
	typedef Luna< mglFunc > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,88640340) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(mglFunc*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		mglFunc* rhs =(Luna< mglFunc >::check(L,2));
		mglFunc* self=(Luna< mglFunc >::check(L,1));
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

		mglFunc* self= (mglFunc*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglFunc >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,88640340) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< mglFunc >::check(L,1));
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

		mglFunc* self=(Luna< mglFunc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("mglFunc");
		
		return luna_dynamicCast(L,converters,"mglFunc",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,88640340) ) return false;
		if( (!(Luna< mglFunc >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getPos(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNarg(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPos(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNarg(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// mglFunc::mglFunc(const mglFunc & f)
	static mglFunc* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in mglFunc::mglFunc(const mglFunc & f) function, expected prototype:\nmglFunc::mglFunc(const mglFunc & f)\nClass arguments details:\narg 1 ID = 88640340\n\n%s",luna_dumpStack(L).c_str());
		}

		const mglFunc* f_ptr=(Luna< mglFunc >::check(L,1));
		if( !f_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg f in mglFunc::mglFunc function");
		}
		const mglFunc & f=*f_ptr;

		return new mglFunc(f);
	}

	// mglFunc::mglFunc()
	static mglFunc* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in mglFunc::mglFunc() function, expected prototype:\nmglFunc::mglFunc()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new mglFunc();
	}

	// Overload binder for mglFunc::mglFunc
	static mglFunc* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function mglFunc, cannot match any of the overloads for function mglFunc:\n  mglFunc(const mglFunc &)\n  mglFunc()\n");
		return NULL;
	}


	// Function binds:
	// long mglFunc::pos()
	static int _bind_getPos(lua_State *L) {
		if (!_lg_typecheck_getPos(L)) {
			luaL_error(L, "luna typecheck failed in long mglFunc::pos() function, expected prototype:\nlong mglFunc::pos()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglFunc* self=(Luna< mglFunc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long mglFunc::pos(). Got : '%s'\n%s",typeid(Luna< mglFunc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->pos;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int mglFunc::narg()
	static int _bind_getNarg(lua_State *L) {
		if (!_lg_typecheck_getNarg(L)) {
			luaL_error(L, "luna typecheck failed in int mglFunc::narg() function, expected prototype:\nint mglFunc::narg()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglFunc* self=(Luna< mglFunc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int mglFunc::narg(). Got : '%s'\n%s",typeid(Luna< mglFunc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->narg;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglFunc::pos(long value)
	static int _bind_setPos(lua_State *L) {
		if (!_lg_typecheck_setPos(L)) {
			luaL_error(L, "luna typecheck failed in void mglFunc::pos(long value) function, expected prototype:\nvoid mglFunc::pos(long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long value=(long)lua_tonumber(L,2);

		mglFunc* self=(Luna< mglFunc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglFunc::pos(long). Got : '%s'\n%s",typeid(Luna< mglFunc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pos = value;

		return 0;
	}

	// void mglFunc::narg(int value)
	static int _bind_setNarg(lua_State *L) {
		if (!_lg_typecheck_setNarg(L)) {
			luaL_error(L, "luna typecheck failed in void mglFunc::narg(int value) function, expected prototype:\nvoid mglFunc::narg(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		mglFunc* self=(Luna< mglFunc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglFunc::narg(int). Got : '%s'\n%s",typeid(Luna< mglFunc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->narg = value;

		return 0;
	}


	// Operator binds:

};

mglFunc* LunaTraits< mglFunc >::_bind_ctor(lua_State *L) {
	return luna_wrapper_mglFunc::_bind_ctor(L);
}

void LunaTraits< mglFunc >::_bind_dtor(mglFunc* obj) {
	delete obj;
}

const char LunaTraits< mglFunc >::className[] = "mglFunc";
const char LunaTraits< mglFunc >::fullName[] = "mglFunc";
const char LunaTraits< mglFunc >::moduleName[] = "mathgl";
const char* LunaTraits< mglFunc >::parents[] = {0};
const int LunaTraits< mglFunc >::hash = 88640340;
const int LunaTraits< mglFunc >::uniqueIDs[] = {88640340,0};

luna_RegType LunaTraits< mglFunc >::methods[] = {
	{"getPos", &luna_wrapper_mglFunc::_bind_getPos},
	{"getNarg", &luna_wrapper_mglFunc::_bind_getNarg},
	{"setPos", &luna_wrapper_mglFunc::_bind_setPos},
	{"setNarg", &luna_wrapper_mglFunc::_bind_setNarg},
	{"dynCast", &luna_wrapper_mglFunc::_bind_dynCast},
	{"__eq", &luna_wrapper_mglFunc::_bind___eq},
	{"fromVoid", &luna_wrapper_mglFunc::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglFunc::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< mglFunc >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< mglFunc >::enumValues[] = {
	{0,0}
};


