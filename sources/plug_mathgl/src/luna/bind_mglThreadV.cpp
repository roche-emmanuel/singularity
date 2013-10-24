#include <plug_common.h>

class luna_wrapper_mglThreadV {
public:
	typedef Luna< mglThreadV > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,40878762) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(mglThreadV*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		mglThreadV* rhs =(Luna< mglThreadV >::check(L,2));
		mglThreadV* self=(Luna< mglThreadV >::check(L,1));
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

		mglThreadV* self= (mglThreadV*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglThreadV >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,40878762) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< mglThreadV >::check(L,1));
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

		mglThreadV* self=(Luna< mglThreadV >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("mglThreadV");
		
		return luna_dynamicCast(L,converters,"mglThreadV",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAa(lua_State *L) {
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

	inline static bool _lg_typecheck_setA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAa(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,37931827)) ) return false;
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
	// double * mglThreadV::a()
	static int _bind_getA(lua_State *L) {
		if (!_lg_typecheck_getA(L)) {
			luaL_error(L, "luna typecheck failed in double * mglThreadV::a() function, expected prototype:\ndouble * mglThreadV::a()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglThreadV* self=(Luna< mglThreadV >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double * mglThreadV::a(). Got : '%s'\n%s",typeid(Luna< mglThreadV >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double * lret = self->a;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// dual * mglThreadV::aa()
	static int _bind_getAa(lua_State *L) {
		if (!_lg_typecheck_getAa(L)) {
			luaL_error(L, "luna typecheck failed in dual * mglThreadV::aa() function, expected prototype:\ndual * mglThreadV::aa()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglThreadV* self=(Luna< mglThreadV >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dual * mglThreadV::aa(). Got : '%s'\n%s",typeid(Luna< mglThreadV >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		dual * lret = self->aa;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< dual >::push(L,lret,false);

		return 1;
	}

	// const void * mglThreadV::b()
	static int _bind_getB(lua_State *L) {
		if (!_lg_typecheck_getB(L)) {
			luaL_error(L, "luna typecheck failed in const void * mglThreadV::b() function, expected prototype:\nconst void * mglThreadV::b()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglThreadV* self=(Luna< mglThreadV >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const void * mglThreadV::b(). Got : '%s'\n%s",typeid(Luna< mglThreadV >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const void * lret = self->b;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// const void * mglThreadV::c()
	static int _bind_getC(lua_State *L) {
		if (!_lg_typecheck_getC(L)) {
			luaL_error(L, "luna typecheck failed in const void * mglThreadV::c() function, expected prototype:\nconst void * mglThreadV::c()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglThreadV* self=(Luna< mglThreadV >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const void * mglThreadV::c(). Got : '%s'\n%s",typeid(Luna< mglThreadV >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const void * lret = self->c;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// const double * mglThreadV::d()
	static int _bind_getD(lua_State *L) {
		if (!_lg_typecheck_getD(L)) {
			luaL_error(L, "luna typecheck failed in const double * mglThreadV::d() function, expected prototype:\nconst double * mglThreadV::d()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglThreadV* self=(Luna< mglThreadV >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const double * mglThreadV::d(). Got : '%s'\n%s",typeid(Luna< mglThreadV >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const double * lret = self->d;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// const long * mglThreadV::p()
	static int _bind_getP(lua_State *L) {
		if (!_lg_typecheck_getP(L)) {
			luaL_error(L, "luna typecheck failed in const long * mglThreadV::p() function, expected prototype:\nconst long * mglThreadV::p()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglThreadV* self=(Luna< mglThreadV >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const long * mglThreadV::p(). Got : '%s'\n%s",typeid(Luna< mglThreadV >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const long * lret = self->p;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// const void * mglThreadV::v()
	static int _bind_getV(lua_State *L) {
		if (!_lg_typecheck_getV(L)) {
			luaL_error(L, "luna typecheck failed in const void * mglThreadV::v() function, expected prototype:\nconst void * mglThreadV::v()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglThreadV* self=(Luna< mglThreadV >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const void * mglThreadV::v(). Got : '%s'\n%s",typeid(Luna< mglThreadV >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const void * lret = self->v;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// int mglThreadV::id()
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luaL_error(L, "luna typecheck failed in int mglThreadV::id() function, expected prototype:\nint mglThreadV::id()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglThreadV* self=(Luna< mglThreadV >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int mglThreadV::id(). Got : '%s'\n%s",typeid(Luna< mglThreadV >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->id;
		lua_pushnumber(L,lret);

		return 1;
	}

	// long mglThreadV::n()
	static int _bind_getN(lua_State *L) {
		if (!_lg_typecheck_getN(L)) {
			luaL_error(L, "luna typecheck failed in long mglThreadV::n() function, expected prototype:\nlong mglThreadV::n()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglThreadV* self=(Luna< mglThreadV >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long mglThreadV::n(). Got : '%s'\n%s",typeid(Luna< mglThreadV >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->n;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglThreadV::a(double * value)
	static int _bind_setA(lua_State *L) {
		if (!_lg_typecheck_setA(L)) {
			luaL_error(L, "luna typecheck failed in void mglThreadV::a(double * value) function, expected prototype:\nvoid mglThreadV::a(double * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double* value=(double*)Luna< void >::check(L,2);

		mglThreadV* self=(Luna< mglThreadV >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglThreadV::a(double *). Got : '%s'\n%s",typeid(Luna< mglThreadV >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->a = value;

		return 0;
	}

	// void mglThreadV::aa(dual * value)
	static int _bind_setAa(lua_State *L) {
		if (!_lg_typecheck_setAa(L)) {
			luaL_error(L, "luna typecheck failed in void mglThreadV::aa(dual * value) function, expected prototype:\nvoid mglThreadV::aa(dual * value)\nClass arguments details:\narg 1 ID = 3094652\n\n%s",luna_dumpStack(L).c_str());
		}

		dual* value=(Luna< std::complex< double > >::checkSubType< dual >(L,2));

		mglThreadV* self=(Luna< mglThreadV >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglThreadV::aa(dual *). Got : '%s'\n%s",typeid(Luna< mglThreadV >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->aa = value;

		return 0;
	}

	// void mglThreadV::id(int value)
	static int _bind_setId(lua_State *L) {
		if (!_lg_typecheck_setId(L)) {
			luaL_error(L, "luna typecheck failed in void mglThreadV::id(int value) function, expected prototype:\nvoid mglThreadV::id(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		mglThreadV* self=(Luna< mglThreadV >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglThreadV::id(int). Got : '%s'\n%s",typeid(Luna< mglThreadV >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->id = value;

		return 0;
	}

	// void mglThreadV::n(long value)
	static int _bind_setN(lua_State *L) {
		if (!_lg_typecheck_setN(L)) {
			luaL_error(L, "luna typecheck failed in void mglThreadV::n(long value) function, expected prototype:\nvoid mglThreadV::n(long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long value=(long)lua_tonumber(L,2);

		mglThreadV* self=(Luna< mglThreadV >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglThreadV::n(long). Got : '%s'\n%s",typeid(Luna< mglThreadV >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->n = value;

		return 0;
	}


	// Operator binds:

};

mglThreadV* LunaTraits< mglThreadV >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< mglThreadV >::_bind_dtor(mglThreadV* obj) {
	delete obj;
}

const char LunaTraits< mglThreadV >::className[] = "mglThreadV";
const char LunaTraits< mglThreadV >::fullName[] = "mglThreadV";
const char LunaTraits< mglThreadV >::moduleName[] = "mathgl";
const char* LunaTraits< mglThreadV >::parents[] = {0};
const int LunaTraits< mglThreadV >::hash = 40878762;
const int LunaTraits< mglThreadV >::uniqueIDs[] = {40878762,0};

luna_RegType LunaTraits< mglThreadV >::methods[] = {
	{"getA", &luna_wrapper_mglThreadV::_bind_getA},
	{"getAa", &luna_wrapper_mglThreadV::_bind_getAa},
	{"getB", &luna_wrapper_mglThreadV::_bind_getB},
	{"getC", &luna_wrapper_mglThreadV::_bind_getC},
	{"getD", &luna_wrapper_mglThreadV::_bind_getD},
	{"getP", &luna_wrapper_mglThreadV::_bind_getP},
	{"getV", &luna_wrapper_mglThreadV::_bind_getV},
	{"getId", &luna_wrapper_mglThreadV::_bind_getId},
	{"getN", &luna_wrapper_mglThreadV::_bind_getN},
	{"setA", &luna_wrapper_mglThreadV::_bind_setA},
	{"setAa", &luna_wrapper_mglThreadV::_bind_setAa},
	{"setId", &luna_wrapper_mglThreadV::_bind_setId},
	{"setN", &luna_wrapper_mglThreadV::_bind_setN},
	{"dynCast", &luna_wrapper_mglThreadV::_bind_dynCast},
	{"__eq", &luna_wrapper_mglThreadV::_bind___eq},
	{"fromVoid", &luna_wrapper_mglThreadV::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglThreadV::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< mglThreadV >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< mglThreadV >::enumValues[] = {
	{0,0}
};


