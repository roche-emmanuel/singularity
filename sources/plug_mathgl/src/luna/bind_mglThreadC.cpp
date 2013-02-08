#include <plug_common.h>

class luna_wrapper_mglThreadC {
public:
	typedef Luna< mglThreadC > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,40878743) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(mglThreadC*)");
		}

		mglThreadC* rhs =(Luna< mglThreadC >::check(L,2));
		mglThreadC* self=(Luna< mglThreadC >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
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

		mglThreadC* self= (mglThreadC*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglThreadC >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,40878743) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< mglThreadC >::check(L,1));
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

		mglThreadC* self=(Luna< mglThreadC >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("mglThreadC");
		
		return luna_dynamicCast(L,converters,"mglThreadC",name);
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
	// dual * mglThreadC::a()
	static int _bind_getA(lua_State *L) {
		if (!_lg_typecheck_getA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dual * mglThreadC::a() function, expected prototype:\ndual * mglThreadC::a()\nClass arguments details:\n");
		}


		mglThreadC* self=(Luna< mglThreadC >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call dual * mglThreadC::a(). Got : '%s'",typeid(Luna< mglThreadC >::check(L,1)).name());
		}
		dual * lret = self->a;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< dual >::push(L,lret,false);

		return 1;
	}

	// const dual * mglThreadC::b()
	static int _bind_getB(lua_State *L) {
		if (!_lg_typecheck_getB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const dual * mglThreadC::b() function, expected prototype:\nconst dual * mglThreadC::b()\nClass arguments details:\n");
		}


		mglThreadC* self=(Luna< mglThreadC >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const dual * mglThreadC::b(). Got : '%s'",typeid(Luna< mglThreadC >::check(L,1)).name());
		}
		const dual * lret = self->b;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< dual >::push(L,lret,false);

		return 1;
	}

	// const dual * mglThreadC::c()
	static int _bind_getC(lua_State *L) {
		if (!_lg_typecheck_getC(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const dual * mglThreadC::c() function, expected prototype:\nconst dual * mglThreadC::c()\nClass arguments details:\n");
		}


		mglThreadC* self=(Luna< mglThreadC >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const dual * mglThreadC::c(). Got : '%s'",typeid(Luna< mglThreadC >::check(L,1)).name());
		}
		const dual * lret = self->c;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< dual >::push(L,lret,false);

		return 1;
	}

	// const dual * mglThreadC::d()
	static int _bind_getD(lua_State *L) {
		if (!_lg_typecheck_getD(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const dual * mglThreadC::d() function, expected prototype:\nconst dual * mglThreadC::d()\nClass arguments details:\n");
		}


		mglThreadC* self=(Luna< mglThreadC >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const dual * mglThreadC::d(). Got : '%s'",typeid(Luna< mglThreadC >::check(L,1)).name());
		}
		const dual * lret = self->d;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< dual >::push(L,lret,false);

		return 1;
	}

	// const dual * mglThreadC::e()
	static int _bind_getE(lua_State *L) {
		if (!_lg_typecheck_getE(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const dual * mglThreadC::e() function, expected prototype:\nconst dual * mglThreadC::e()\nClass arguments details:\n");
		}


		mglThreadC* self=(Luna< mglThreadC >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const dual * mglThreadC::e(). Got : '%s'",typeid(Luna< mglThreadC >::check(L,1)).name());
		}
		const dual * lret = self->e;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< dual >::push(L,lret,false);

		return 1;
	}

	// const long * mglThreadC::p()
	static int _bind_getP(lua_State *L) {
		if (!_lg_typecheck_getP(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const long * mglThreadC::p() function, expected prototype:\nconst long * mglThreadC::p()\nClass arguments details:\n");
		}


		mglThreadC* self=(Luna< mglThreadC >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const long * mglThreadC::p(). Got : '%s'",typeid(Luna< mglThreadC >::check(L,1)).name());
		}
		const long * lret = self->p;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// const void * mglThreadC::v()
	static int _bind_getV(lua_State *L) {
		if (!_lg_typecheck_getV(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const void * mglThreadC::v() function, expected prototype:\nconst void * mglThreadC::v()\nClass arguments details:\n");
		}


		mglThreadC* self=(Luna< mglThreadC >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const void * mglThreadC::v(). Got : '%s'",typeid(Luna< mglThreadC >::check(L,1)).name());
		}
		const void * lret = self->v;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// int mglThreadC::id()
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglThreadC::id() function, expected prototype:\nint mglThreadC::id()\nClass arguments details:\n");
		}


		mglThreadC* self=(Luna< mglThreadC >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglThreadC::id(). Got : '%s'",typeid(Luna< mglThreadC >::check(L,1)).name());
		}
		int lret = self->id;
		lua_pushnumber(L,lret);

		return 1;
	}

	// long mglThreadC::n()
	static int _bind_getN(lua_State *L) {
		if (!_lg_typecheck_getN(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long mglThreadC::n() function, expected prototype:\nlong mglThreadC::n()\nClass arguments details:\n");
		}


		mglThreadC* self=(Luna< mglThreadC >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long mglThreadC::n(). Got : '%s'",typeid(Luna< mglThreadC >::check(L,1)).name());
		}
		long lret = self->n;
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * mglThreadC::s()
	static int _bind_getS(lua_State *L) {
		if (!_lg_typecheck_getS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * mglThreadC::s() function, expected prototype:\nconst char * mglThreadC::s()\nClass arguments details:\n");
		}


		mglThreadC* self=(Luna< mglThreadC >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * mglThreadC::s(). Got : '%s'",typeid(Luna< mglThreadC >::check(L,1)).name());
		}
		const char * lret = self->s;
		lua_pushstring(L,lret);

		return 1;
	}

	// void mglThreadC::a(dual * value)
	static int _bind_setA(lua_State *L) {
		if (!_lg_typecheck_setA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglThreadC::a(dual * value) function, expected prototype:\nvoid mglThreadC::a(dual * value)\nClass arguments details:\narg 1 ID = 3094652\n");
		}

		dual* value=(Luna< std::complex< double > >::checkSubType< dual >(L,2));

		mglThreadC* self=(Luna< mglThreadC >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglThreadC::a(dual *). Got : '%s'",typeid(Luna< mglThreadC >::check(L,1)).name());
		}
		self->a = value;

		return 0;
	}

	// void mglThreadC::id(int value)
	static int _bind_setId(lua_State *L) {
		if (!_lg_typecheck_setId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglThreadC::id(int value) function, expected prototype:\nvoid mglThreadC::id(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		mglThreadC* self=(Luna< mglThreadC >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglThreadC::id(int). Got : '%s'",typeid(Luna< mglThreadC >::check(L,1)).name());
		}
		self->id = value;

		return 0;
	}

	// void mglThreadC::n(long value)
	static int _bind_setN(lua_State *L) {
		if (!_lg_typecheck_setN(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglThreadC::n(long value) function, expected prototype:\nvoid mglThreadC::n(long value)\nClass arguments details:\n");
		}

		long value=(long)lua_tointeger(L,2);

		mglThreadC* self=(Luna< mglThreadC >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglThreadC::n(long). Got : '%s'",typeid(Luna< mglThreadC >::check(L,1)).name());
		}
		self->n = value;

		return 0;
	}


	// Operator binds:

};

mglThreadC* LunaTraits< mglThreadC >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< mglThreadC >::_bind_dtor(mglThreadC* obj) {
	delete obj;
}

const char LunaTraits< mglThreadC >::className[] = "mglThreadC";
const char LunaTraits< mglThreadC >::fullName[] = "mglThreadC";
const char LunaTraits< mglThreadC >::moduleName[] = "mathgl";
const char* LunaTraits< mglThreadC >::parents[] = {0};
const int LunaTraits< mglThreadC >::hash = 40878743;
const int LunaTraits< mglThreadC >::uniqueIDs[] = {40878743,0};

luna_RegType LunaTraits< mglThreadC >::methods[] = {
	{"getA", &luna_wrapper_mglThreadC::_bind_getA},
	{"getB", &luna_wrapper_mglThreadC::_bind_getB},
	{"getC", &luna_wrapper_mglThreadC::_bind_getC},
	{"getD", &luna_wrapper_mglThreadC::_bind_getD},
	{"getE", &luna_wrapper_mglThreadC::_bind_getE},
	{"getP", &luna_wrapper_mglThreadC::_bind_getP},
	{"getV", &luna_wrapper_mglThreadC::_bind_getV},
	{"getId", &luna_wrapper_mglThreadC::_bind_getId},
	{"getN", &luna_wrapper_mglThreadC::_bind_getN},
	{"getS", &luna_wrapper_mglThreadC::_bind_getS},
	{"setA", &luna_wrapper_mglThreadC::_bind_setA},
	{"setId", &luna_wrapper_mglThreadC::_bind_setId},
	{"setN", &luna_wrapper_mglThreadC::_bind_setN},
	{"dynCast", &luna_wrapper_mglThreadC::_bind_dynCast},
	{"__eq", &luna_wrapper_mglThreadC::_bind___eq},
	{"fromVoid", &luna_wrapper_mglThreadC::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglThreadC::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< mglThreadC >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< mglThreadC >::enumValues[] = {
	{0,0}
};


