#include <plug_common.h>

class luna_wrapper_mglArg {
public:
	typedef Luna< mglArg > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18983491) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(mglArg*)");
		}

		mglArg* rhs =(Luna< mglArg >::check(L,2));
		mglArg* self=(Luna< mglArg >::check(L,1));
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		mglArg* self= (mglArg*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglArg >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18983491) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< mglArg >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
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

		mglArg* self=(Luna< mglArg >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("mglArg");
		
		return luna_dynamicCast(L,converters,"mglArg",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getD(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getW(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getS(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getV(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setD(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,45413231)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setW(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setS(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setV(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// mglArg::mglArg()
	static mglArg* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglArg::mglArg() function, expected prototype:\nmglArg::mglArg()\nClass arguments details:\n");
		}


		return new mglArg();
	}


	// Function binds:
	// int mglArg::type()
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglArg::type() function, expected prototype:\nint mglArg::type()\nClass arguments details:\n");
		}


		mglArg* self=(Luna< mglArg >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglArg::type(). Got : '%s'",typeid(Luna< mglArg >::check(L,1)).name());
		}
		int lret = self->type;
		lua_pushnumber(L,lret);

		return 1;
	}

	// mglData * mglArg::d()
	static int _bind_getD(lua_State *L) {
		if (!_lg_typecheck_getD(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData * mglArg::d() function, expected prototype:\nmglData * mglArg::d()\nClass arguments details:\n");
		}


		mglArg* self=(Luna< mglArg >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData * mglArg::d(). Got : '%s'",typeid(Luna< mglArg >::check(L,1)).name());
		}
		mglData * lret = self->d;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,false);

		return 1;
	}

	// std::wstring mglArg::w()
	static int _bind_getW(lua_State *L) {
		if (!_lg_typecheck_getW(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::wstring mglArg::w() function, expected prototype:\nstd::wstring mglArg::w()\nClass arguments details:\n");
		}


		mglArg* self=(Luna< mglArg >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::wstring mglArg::w(). Got : '%s'",typeid(Luna< mglArg >::check(L,1)).name());
		}
		std::wstring lret = self->w;
		std::string lret_str = sgt::ws2s(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// std::string mglArg::s()
	static int _bind_getS(lua_State *L) {
		if (!_lg_typecheck_getS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string mglArg::s() function, expected prototype:\nstd::string mglArg::s()\nClass arguments details:\n");
		}


		mglArg* self=(Luna< mglArg >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string mglArg::s(). Got : '%s'",typeid(Luna< mglArg >::check(L,1)).name());
		}
		std::string lret = self->s;
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// double mglArg::v()
	static int _bind_getV(lua_State *L) {
		if (!_lg_typecheck_getV(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglArg::v() function, expected prototype:\ndouble mglArg::v()\nClass arguments details:\n");
		}


		mglArg* self=(Luna< mglArg >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglArg::v(). Got : '%s'",typeid(Luna< mglArg >::check(L,1)).name());
		}
		double lret = self->v;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglArg::type(int value)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglArg::type(int value) function, expected prototype:\nvoid mglArg::type(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		mglArg* self=(Luna< mglArg >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglArg::type(int). Got : '%s'",typeid(Luna< mglArg >::check(L,1)).name());
		}
		self->type = value;

		return 0;
	}

	// void mglArg::d(mglData * value)
	static int _bind_setD(lua_State *L) {
		if (!_lg_typecheck_setD(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglArg::d(mglData * value) function, expected prototype:\nvoid mglArg::d(mglData * value)\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		mglData* value=(Luna< mglDataA >::checkSubType< mglData >(L,2));

		mglArg* self=(Luna< mglArg >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglArg::d(mglData *). Got : '%s'",typeid(Luna< mglArg >::check(L,1)).name());
		}
		self->d = value;

		return 0;
	}

	// void mglArg::w(std::wstring value)
	static int _bind_setW(lua_State *L) {
		if (!_lg_typecheck_setW(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglArg::w(std::wstring value) function, expected prototype:\nvoid mglArg::w(std::wstring value)\nClass arguments details:\n");
		}

		std::string value_str(lua_tostring(L,2),lua_objlen(L,2));
		std::wstring value = sgt::s2ws(value_str);

		mglArg* self=(Luna< mglArg >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglArg::w(std::wstring). Got : '%s'",typeid(Luna< mglArg >::check(L,1)).name());
		}
		self->w = value;

		return 0;
	}

	// void mglArg::s(std::string value)
	static int _bind_setS(lua_State *L) {
		if (!_lg_typecheck_setS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglArg::s(std::string value) function, expected prototype:\nvoid mglArg::s(std::string value)\nClass arguments details:\n");
		}

		std::string value(lua_tostring(L,2),lua_objlen(L,2));

		mglArg* self=(Luna< mglArg >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglArg::s(std::string). Got : '%s'",typeid(Luna< mglArg >::check(L,1)).name());
		}
		self->s = value;

		return 0;
	}

	// void mglArg::v(double value)
	static int _bind_setV(lua_State *L) {
		if (!_lg_typecheck_setV(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglArg::v(double value) function, expected prototype:\nvoid mglArg::v(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		mglArg* self=(Luna< mglArg >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglArg::v(double). Got : '%s'",typeid(Luna< mglArg >::check(L,1)).name());
		}
		self->v = value;

		return 0;
	}


	// Operator binds:

};

mglArg* LunaTraits< mglArg >::_bind_ctor(lua_State *L) {
	return luna_wrapper_mglArg::_bind_ctor(L);
}

void LunaTraits< mglArg >::_bind_dtor(mglArg* obj) {
	delete obj;
}

const char LunaTraits< mglArg >::className[] = "mglArg";
const char LunaTraits< mglArg >::fullName[] = "mglArg";
const char LunaTraits< mglArg >::moduleName[] = "mathgl";
const char* LunaTraits< mglArg >::parents[] = {0};
const int LunaTraits< mglArg >::hash = 18983491;
const int LunaTraits< mglArg >::uniqueIDs[] = {18983491,0};

luna_RegType LunaTraits< mglArg >::methods[] = {
	{"getType", &luna_wrapper_mglArg::_bind_getType},
	{"getD", &luna_wrapper_mglArg::_bind_getD},
	{"getW", &luna_wrapper_mglArg::_bind_getW},
	{"getS", &luna_wrapper_mglArg::_bind_getS},
	{"getV", &luna_wrapper_mglArg::_bind_getV},
	{"setType", &luna_wrapper_mglArg::_bind_setType},
	{"setD", &luna_wrapper_mglArg::_bind_setD},
	{"setW", &luna_wrapper_mglArg::_bind_setW},
	{"setS", &luna_wrapper_mglArg::_bind_setS},
	{"setV", &luna_wrapper_mglArg::_bind_setV},
	{"dynCast", &luna_wrapper_mglArg::_bind_dynCast},
	{"__eq", &luna_wrapper_mglArg::_bind___eq},
	{"fromVoid", &luna_wrapper_mglArg::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglArg::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< mglArg >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< mglArg >::enumValues[] = {
	{0,0}
};


