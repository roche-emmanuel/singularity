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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(mglThreadV*)");
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
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

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
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

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setN(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// double * mglThreadV::a()
	static int _bind_getA(lua_State *L) {
		if (!_lg_typecheck_getA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double * mglThreadV::a() function, expected prototype:\ndouble * mglThreadV::a()\nClass arguments details:\n");
		}


		mglThreadV* self=(Luna< mglThreadV >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double * mglThreadV::a(). Got : '%s'",typeid(Luna< mglThreadV >::check(L,1)).name());
		}
		double * lret = self->a;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// dual * mglThreadV::aa()
	static int _bind_getAa(lua_State *L) {
		if (!_lg_typecheck_getAa(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dual * mglThreadV::aa() function, expected prototype:\ndual * mglThreadV::aa()\nClass arguments details:\n");
		}


		mglThreadV* self=(Luna< mglThreadV >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call dual * mglThreadV::aa(). Got : '%s'",typeid(Luna< mglThreadV >::check(L,1)).name());
		}
		dual * lret = self->aa;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< dual >::push(L,lret,false);

		return 1;
	}

	// const void * mglThreadV::b()
	static int _bind_getB(lua_State *L) {
		if (!_lg_typecheck_getB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const void * mglThreadV::b() function, expected prototype:\nconst void * mglThreadV::b()\nClass arguments details:\n");
		}


		mglThreadV* self=(Luna< mglThreadV >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const void * mglThreadV::b(). Got : '%s'",typeid(Luna< mglThreadV >::check(L,1)).name());
		}
		const void * lret = self->b;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// const void * mglThreadV::c()
	static int _bind_getC(lua_State *L) {
		if (!_lg_typecheck_getC(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const void * mglThreadV::c() function, expected prototype:\nconst void * mglThreadV::c()\nClass arguments details:\n");
		}


		mglThreadV* self=(Luna< mglThreadV >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const void * mglThreadV::c(). Got : '%s'",typeid(Luna< mglThreadV >::check(L,1)).name());
		}
		const void * lret = self->c;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// const double * mglThreadV::d()
	static int _bind_getD(lua_State *L) {
		if (!_lg_typecheck_getD(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const double * mglThreadV::d() function, expected prototype:\nconst double * mglThreadV::d()\nClass arguments details:\n");
		}


		mglThreadV* self=(Luna< mglThreadV >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const double * mglThreadV::d(). Got : '%s'",typeid(Luna< mglThreadV >::check(L,1)).name());
		}
		const double * lret = self->d;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// const long * mglThreadV::p()
	static int _bind_getP(lua_State *L) {
		if (!_lg_typecheck_getP(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const long * mglThreadV::p() function, expected prototype:\nconst long * mglThreadV::p()\nClass arguments details:\n");
		}


		mglThreadV* self=(Luna< mglThreadV >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const long * mglThreadV::p(). Got : '%s'",typeid(Luna< mglThreadV >::check(L,1)).name());
		}
		const long * lret = self->p;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// const void * mglThreadV::v()
	static int _bind_getV(lua_State *L) {
		if (!_lg_typecheck_getV(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const void * mglThreadV::v() function, expected prototype:\nconst void * mglThreadV::v()\nClass arguments details:\n");
		}


		mglThreadV* self=(Luna< mglThreadV >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const void * mglThreadV::v(). Got : '%s'",typeid(Luna< mglThreadV >::check(L,1)).name());
		}
		const void * lret = self->v;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// int mglThreadV::id()
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglThreadV::id() function, expected prototype:\nint mglThreadV::id()\nClass arguments details:\n");
		}


		mglThreadV* self=(Luna< mglThreadV >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglThreadV::id(). Got : '%s'",typeid(Luna< mglThreadV >::check(L,1)).name());
		}
		int lret = self->id;
		lua_pushnumber(L,lret);

		return 1;
	}

	// long mglThreadV::n()
	static int _bind_getN(lua_State *L) {
		if (!_lg_typecheck_getN(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long mglThreadV::n() function, expected prototype:\nlong mglThreadV::n()\nClass arguments details:\n");
		}


		mglThreadV* self=(Luna< mglThreadV >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long mglThreadV::n(). Got : '%s'",typeid(Luna< mglThreadV >::check(L,1)).name());
		}
		long lret = self->n;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglThreadV::a(double * value)
	static int _bind_setA(lua_State *L) {
		if (!_lg_typecheck_setA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglThreadV::a(double * value) function, expected prototype:\nvoid mglThreadV::a(double * value)\nClass arguments details:\n");
		}

		double* value=(double*)Luna< void >::check(L,2);

		mglThreadV* self=(Luna< mglThreadV >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglThreadV::a(double *). Got : '%s'",typeid(Luna< mglThreadV >::check(L,1)).name());
		}
		self->a = value;

		return 0;
	}

	// void mglThreadV::aa(dual * value)
	static int _bind_setAa(lua_State *L) {
		if (!_lg_typecheck_setAa(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglThreadV::aa(dual * value) function, expected prototype:\nvoid mglThreadV::aa(dual * value)\nClass arguments details:\narg 1 ID = 3094652\n");
		}

		dual* value=(Luna< std::complex< double > >::checkSubType< dual >(L,2));

		mglThreadV* self=(Luna< mglThreadV >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglThreadV::aa(dual *). Got : '%s'",typeid(Luna< mglThreadV >::check(L,1)).name());
		}
		self->aa = value;

		return 0;
	}

	// void mglThreadV::id(int value)
	static int _bind_setId(lua_State *L) {
		if (!_lg_typecheck_setId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglThreadV::id(int value) function, expected prototype:\nvoid mglThreadV::id(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		mglThreadV* self=(Luna< mglThreadV >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglThreadV::id(int). Got : '%s'",typeid(Luna< mglThreadV >::check(L,1)).name());
		}
		self->id = value;

		return 0;
	}

	// void mglThreadV::n(long value)
	static int _bind_setN(lua_State *L) {
		if (!_lg_typecheck_setN(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglThreadV::n(long value) function, expected prototype:\nvoid mglThreadV::n(long value)\nClass arguments details:\n");
		}

		long value=(long)lua_tointeger(L,2);

		mglThreadV* self=(Luna< mglThreadV >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglThreadV::n(long). Got : '%s'",typeid(Luna< mglThreadV >::check(L,1)).name());
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


