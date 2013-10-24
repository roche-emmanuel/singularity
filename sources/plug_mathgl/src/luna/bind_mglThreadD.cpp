#include <plug_common.h>

class luna_wrapper_mglThreadD {
public:
	typedef Luna< mglThreadD > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,40878744) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(mglThreadD*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		mglThreadD* rhs =(Luna< mglThreadD >::check(L,2));
		mglThreadD* self=(Luna< mglThreadD >::check(L,1));
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

		mglThreadD* self= (mglThreadD*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglThreadD >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,40878744) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< mglThreadD >::check(L,1));
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

		mglThreadD* self=(Luna< mglThreadD >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("mglThreadD");
		
		return luna_dynamicCast(L,converters,"mglThreadD",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getC(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getD(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getE(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getP(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getV(lua_State *L) {
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

	inline static bool _lg_typecheck_getS(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setN(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// double * mglThreadD::a()
	static int _bind_getA(lua_State *L) {
		if (!_lg_typecheck_getA(L)) {
			luaL_error(L, "luna typecheck failed in double * mglThreadD::a() function, expected prototype:\ndouble * mglThreadD::a()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglThreadD* self=(Luna< mglThreadD >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double * mglThreadD::a(). Got : '%s'\n%s",typeid(Luna< mglThreadD >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double * lret = self->a;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// const double * mglThreadD::b()
	static int _bind_getB(lua_State *L) {
		if (!_lg_typecheck_getB(L)) {
			luaL_error(L, "luna typecheck failed in const double * mglThreadD::b() function, expected prototype:\nconst double * mglThreadD::b()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglThreadD* self=(Luna< mglThreadD >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const double * mglThreadD::b(). Got : '%s'\n%s",typeid(Luna< mglThreadD >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const double * lret = self->b;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// const double * mglThreadD::c()
	static int _bind_getC(lua_State *L) {
		if (!_lg_typecheck_getC(L)) {
			luaL_error(L, "luna typecheck failed in const double * mglThreadD::c() function, expected prototype:\nconst double * mglThreadD::c()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglThreadD* self=(Luna< mglThreadD >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const double * mglThreadD::c(). Got : '%s'\n%s",typeid(Luna< mglThreadD >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const double * lret = self->c;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// const double * mglThreadD::d()
	static int _bind_getD(lua_State *L) {
		if (!_lg_typecheck_getD(L)) {
			luaL_error(L, "luna typecheck failed in const double * mglThreadD::d() function, expected prototype:\nconst double * mglThreadD::d()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglThreadD* self=(Luna< mglThreadD >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const double * mglThreadD::d(). Got : '%s'\n%s",typeid(Luna< mglThreadD >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const double * lret = self->d;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// const double * mglThreadD::e()
	static int _bind_getE(lua_State *L) {
		if (!_lg_typecheck_getE(L)) {
			luaL_error(L, "luna typecheck failed in const double * mglThreadD::e() function, expected prototype:\nconst double * mglThreadD::e()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglThreadD* self=(Luna< mglThreadD >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const double * mglThreadD::e(). Got : '%s'\n%s",typeid(Luna< mglThreadD >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const double * lret = self->e;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// const long * mglThreadD::p()
	static int _bind_getP(lua_State *L) {
		if (!_lg_typecheck_getP(L)) {
			luaL_error(L, "luna typecheck failed in const long * mglThreadD::p() function, expected prototype:\nconst long * mglThreadD::p()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglThreadD* self=(Luna< mglThreadD >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const long * mglThreadD::p(). Got : '%s'\n%s",typeid(Luna< mglThreadD >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const long * lret = self->p;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// const void * mglThreadD::v()
	static int _bind_getV(lua_State *L) {
		if (!_lg_typecheck_getV(L)) {
			luaL_error(L, "luna typecheck failed in const void * mglThreadD::v() function, expected prototype:\nconst void * mglThreadD::v()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglThreadD* self=(Luna< mglThreadD >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const void * mglThreadD::v(). Got : '%s'\n%s",typeid(Luna< mglThreadD >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const void * lret = self->v;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// int mglThreadD::id()
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luaL_error(L, "luna typecheck failed in int mglThreadD::id() function, expected prototype:\nint mglThreadD::id()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglThreadD* self=(Luna< mglThreadD >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int mglThreadD::id(). Got : '%s'\n%s",typeid(Luna< mglThreadD >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->id;
		lua_pushnumber(L,lret);

		return 1;
	}

	// long mglThreadD::n()
	static int _bind_getN(lua_State *L) {
		if (!_lg_typecheck_getN(L)) {
			luaL_error(L, "luna typecheck failed in long mglThreadD::n() function, expected prototype:\nlong mglThreadD::n()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglThreadD* self=(Luna< mglThreadD >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long mglThreadD::n(). Got : '%s'\n%s",typeid(Luna< mglThreadD >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->n;
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * mglThreadD::s()
	static int _bind_getS(lua_State *L) {
		if (!_lg_typecheck_getS(L)) {
			luaL_error(L, "luna typecheck failed in const char * mglThreadD::s() function, expected prototype:\nconst char * mglThreadD::s()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglThreadD* self=(Luna< mglThreadD >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * mglThreadD::s(). Got : '%s'\n%s",typeid(Luna< mglThreadD >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->s;
		lua_pushstring(L,lret);

		return 1;
	}

	// void mglThreadD::a(double * value)
	static int _bind_setA(lua_State *L) {
		if (!_lg_typecheck_setA(L)) {
			luaL_error(L, "luna typecheck failed in void mglThreadD::a(double * value) function, expected prototype:\nvoid mglThreadD::a(double * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double* value=(double*)Luna< void >::check(L,2);

		mglThreadD* self=(Luna< mglThreadD >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglThreadD::a(double *). Got : '%s'\n%s",typeid(Luna< mglThreadD >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->a = value;

		return 0;
	}

	// void mglThreadD::id(int value)
	static int _bind_setId(lua_State *L) {
		if (!_lg_typecheck_setId(L)) {
			luaL_error(L, "luna typecheck failed in void mglThreadD::id(int value) function, expected prototype:\nvoid mglThreadD::id(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		mglThreadD* self=(Luna< mglThreadD >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglThreadD::id(int). Got : '%s'\n%s",typeid(Luna< mglThreadD >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->id = value;

		return 0;
	}

	// void mglThreadD::n(long value)
	static int _bind_setN(lua_State *L) {
		if (!_lg_typecheck_setN(L)) {
			luaL_error(L, "luna typecheck failed in void mglThreadD::n(long value) function, expected prototype:\nvoid mglThreadD::n(long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long value=(long)lua_tonumber(L,2);

		mglThreadD* self=(Luna< mglThreadD >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglThreadD::n(long). Got : '%s'\n%s",typeid(Luna< mglThreadD >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->n = value;

		return 0;
	}


	// Operator binds:

};

mglThreadD* LunaTraits< mglThreadD >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< mglThreadD >::_bind_dtor(mglThreadD* obj) {
	delete obj;
}

const char LunaTraits< mglThreadD >::className[] = "mglThreadD";
const char LunaTraits< mglThreadD >::fullName[] = "mglThreadD";
const char LunaTraits< mglThreadD >::moduleName[] = "mathgl";
const char* LunaTraits< mglThreadD >::parents[] = {0};
const int LunaTraits< mglThreadD >::hash = 40878744;
const int LunaTraits< mglThreadD >::uniqueIDs[] = {40878744,0};

luna_RegType LunaTraits< mglThreadD >::methods[] = {
	{"getA", &luna_wrapper_mglThreadD::_bind_getA},
	{"getB", &luna_wrapper_mglThreadD::_bind_getB},
	{"getC", &luna_wrapper_mglThreadD::_bind_getC},
	{"getD", &luna_wrapper_mglThreadD::_bind_getD},
	{"getE", &luna_wrapper_mglThreadD::_bind_getE},
	{"getP", &luna_wrapper_mglThreadD::_bind_getP},
	{"getV", &luna_wrapper_mglThreadD::_bind_getV},
	{"getId", &luna_wrapper_mglThreadD::_bind_getId},
	{"getN", &luna_wrapper_mglThreadD::_bind_getN},
	{"getS", &luna_wrapper_mglThreadD::_bind_getS},
	{"setA", &luna_wrapper_mglThreadD::_bind_setA},
	{"setId", &luna_wrapper_mglThreadD::_bind_setId},
	{"setN", &luna_wrapper_mglThreadD::_bind_setN},
	{"dynCast", &luna_wrapper_mglThreadD::_bind_dynCast},
	{"__eq", &luna_wrapper_mglThreadD::_bind___eq},
	{"fromVoid", &luna_wrapper_mglThreadD::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglThreadD::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< mglThreadD >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< mglThreadD >::enumValues[] = {
	{0,0}
};


