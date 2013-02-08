#include <plug_common.h>

class luna_wrapper_mglLight {
public:
	typedef Luna< mglLight > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,53027502) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(mglLight*)");
		}

		mglLight* rhs =(Luna< mglLight >::check(L,2));
		mglLight* self=(Luna< mglLight >::check(L,1));
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

		mglLight* self= (mglLight*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglLight >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,53027502) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< mglLight >::check(L,1));
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

		mglLight* self=(Luna< mglLight >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("mglLight");
		
		return luna_dynamicCast(L,converters,"mglLight",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getN(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getD(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getR(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getQ(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getP(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

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

	inline static bool _lg_typecheck_setN(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setD(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setR(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setQ(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setP(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setC(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,44899579) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// mglLight::mglLight()
	static mglLight* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglLight::mglLight() function, expected prototype:\nmglLight::mglLight()\nClass arguments details:\n");
		}


		return new mglLight();
	}


	// Function binds:
	// bool mglLight::n()
	static int _bind_getN(lua_State *L) {
		if (!_lg_typecheck_getN(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool mglLight::n() function, expected prototype:\nbool mglLight::n()\nClass arguments details:\n");
		}


		mglLight* self=(Luna< mglLight >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool mglLight::n(). Got : '%s'",typeid(Luna< mglLight >::check(L,1)).name());
		}
		bool lret = self->n;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// mglPoint mglLight::d()
	static int _bind_getD(lua_State *L) {
		if (!_lg_typecheck_getD(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglPoint mglLight::d() function, expected prototype:\nmglPoint mglLight::d()\nClass arguments details:\n");
		}


		mglLight* self=(Luna< mglLight >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglPoint mglLight::d(). Got : '%s'",typeid(Luna< mglLight >::check(L,1)).name());
		}
		const mglPoint* lret = &self->d;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglPoint >::push(L,lret,false);

		return 1;
	}

	// mglPoint mglLight::r()
	static int _bind_getR(lua_State *L) {
		if (!_lg_typecheck_getR(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglPoint mglLight::r() function, expected prototype:\nmglPoint mglLight::r()\nClass arguments details:\n");
		}


		mglLight* self=(Luna< mglLight >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglPoint mglLight::r(). Got : '%s'",typeid(Luna< mglLight >::check(L,1)).name());
		}
		const mglPoint* lret = &self->r;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglPoint >::push(L,lret,false);

		return 1;
	}

	// mglPoint mglLight::q()
	static int _bind_getQ(lua_State *L) {
		if (!_lg_typecheck_getQ(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglPoint mglLight::q() function, expected prototype:\nmglPoint mglLight::q()\nClass arguments details:\n");
		}


		mglLight* self=(Luna< mglLight >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglPoint mglLight::q(). Got : '%s'",typeid(Luna< mglLight >::check(L,1)).name());
		}
		const mglPoint* lret = &self->q;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglPoint >::push(L,lret,false);

		return 1;
	}

	// mglPoint mglLight::p()
	static int _bind_getP(lua_State *L) {
		if (!_lg_typecheck_getP(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglPoint mglLight::p() function, expected prototype:\nmglPoint mglLight::p()\nClass arguments details:\n");
		}


		mglLight* self=(Luna< mglLight >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglPoint mglLight::p(). Got : '%s'",typeid(Luna< mglLight >::check(L,1)).name());
		}
		const mglPoint* lret = &self->p;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglPoint >::push(L,lret,false);

		return 1;
	}

	// double mglLight::a()
	static int _bind_getA(lua_State *L) {
		if (!_lg_typecheck_getA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglLight::a() function, expected prototype:\ndouble mglLight::a()\nClass arguments details:\n");
		}


		mglLight* self=(Luna< mglLight >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglLight::a(). Got : '%s'",typeid(Luna< mglLight >::check(L,1)).name());
		}
		double lret = self->a;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglLight::b()
	static int _bind_getB(lua_State *L) {
		if (!_lg_typecheck_getB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglLight::b() function, expected prototype:\ndouble mglLight::b()\nClass arguments details:\n");
		}


		mglLight* self=(Luna< mglLight >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglLight::b(). Got : '%s'",typeid(Luna< mglLight >::check(L,1)).name());
		}
		double lret = self->b;
		lua_pushnumber(L,lret);

		return 1;
	}

	// mglColor mglLight::c()
	static int _bind_getC(lua_State *L) {
		if (!_lg_typecheck_getC(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglColor mglLight::c() function, expected prototype:\nmglColor mglLight::c()\nClass arguments details:\n");
		}


		mglLight* self=(Luna< mglLight >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglColor mglLight::c(). Got : '%s'",typeid(Luna< mglLight >::check(L,1)).name());
		}
		const mglColor* lret = &self->c;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglColor >::push(L,lret,false);

		return 1;
	}

	// void mglLight::n(bool value)
	static int _bind_setN(lua_State *L) {
		if (!_lg_typecheck_setN(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglLight::n(bool value) function, expected prototype:\nvoid mglLight::n(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		mglLight* self=(Luna< mglLight >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglLight::n(bool). Got : '%s'",typeid(Luna< mglLight >::check(L,1)).name());
		}
		self->n = value;

		return 0;
	}

	// void mglLight::d(mglPoint value)
	static int _bind_setD(lua_State *L) {
		if (!_lg_typecheck_setD(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglLight::d(mglPoint value) function, expected prototype:\nvoid mglLight::d(mglPoint value)\nClass arguments details:\narg 1 ID = 56902440\n");
		}

		mglPoint* value_ptr=(Luna< mglPoint >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in mglLight::d function");
		}
		mglPoint value=*value_ptr;

		mglLight* self=(Luna< mglLight >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglLight::d(mglPoint). Got : '%s'",typeid(Luna< mglLight >::check(L,1)).name());
		}
		self->d = value;

		return 0;
	}

	// void mglLight::r(mglPoint value)
	static int _bind_setR(lua_State *L) {
		if (!_lg_typecheck_setR(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglLight::r(mglPoint value) function, expected prototype:\nvoid mglLight::r(mglPoint value)\nClass arguments details:\narg 1 ID = 56902440\n");
		}

		mglPoint* value_ptr=(Luna< mglPoint >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in mglLight::r function");
		}
		mglPoint value=*value_ptr;

		mglLight* self=(Luna< mglLight >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglLight::r(mglPoint). Got : '%s'",typeid(Luna< mglLight >::check(L,1)).name());
		}
		self->r = value;

		return 0;
	}

	// void mglLight::q(mglPoint value)
	static int _bind_setQ(lua_State *L) {
		if (!_lg_typecheck_setQ(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglLight::q(mglPoint value) function, expected prototype:\nvoid mglLight::q(mglPoint value)\nClass arguments details:\narg 1 ID = 56902440\n");
		}

		mglPoint* value_ptr=(Luna< mglPoint >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in mglLight::q function");
		}
		mglPoint value=*value_ptr;

		mglLight* self=(Luna< mglLight >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglLight::q(mglPoint). Got : '%s'",typeid(Luna< mglLight >::check(L,1)).name());
		}
		self->q = value;

		return 0;
	}

	// void mglLight::p(mglPoint value)
	static int _bind_setP(lua_State *L) {
		if (!_lg_typecheck_setP(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglLight::p(mglPoint value) function, expected prototype:\nvoid mglLight::p(mglPoint value)\nClass arguments details:\narg 1 ID = 56902440\n");
		}

		mglPoint* value_ptr=(Luna< mglPoint >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in mglLight::p function");
		}
		mglPoint value=*value_ptr;

		mglLight* self=(Luna< mglLight >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglLight::p(mglPoint). Got : '%s'",typeid(Luna< mglLight >::check(L,1)).name());
		}
		self->p = value;

		return 0;
	}

	// void mglLight::a(double value)
	static int _bind_setA(lua_State *L) {
		if (!_lg_typecheck_setA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglLight::a(double value) function, expected prototype:\nvoid mglLight::a(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		mglLight* self=(Luna< mglLight >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglLight::a(double). Got : '%s'",typeid(Luna< mglLight >::check(L,1)).name());
		}
		self->a = value;

		return 0;
	}

	// void mglLight::b(double value)
	static int _bind_setB(lua_State *L) {
		if (!_lg_typecheck_setB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglLight::b(double value) function, expected prototype:\nvoid mglLight::b(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		mglLight* self=(Luna< mglLight >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglLight::b(double). Got : '%s'",typeid(Luna< mglLight >::check(L,1)).name());
		}
		self->b = value;

		return 0;
	}

	// void mglLight::c(mglColor value)
	static int _bind_setC(lua_State *L) {
		if (!_lg_typecheck_setC(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglLight::c(mglColor value) function, expected prototype:\nvoid mglLight::c(mglColor value)\nClass arguments details:\narg 1 ID = 44899579\n");
		}

		mglColor* value_ptr=(Luna< mglColor >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in mglLight::c function");
		}
		mglColor value=*value_ptr;

		mglLight* self=(Luna< mglLight >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglLight::c(mglColor). Got : '%s'",typeid(Luna< mglLight >::check(L,1)).name());
		}
		self->c = value;

		return 0;
	}


	// Operator binds:

};

mglLight* LunaTraits< mglLight >::_bind_ctor(lua_State *L) {
	return luna_wrapper_mglLight::_bind_ctor(L);
}

void LunaTraits< mglLight >::_bind_dtor(mglLight* obj) {
	delete obj;
}

const char LunaTraits< mglLight >::className[] = "mglLight";
const char LunaTraits< mglLight >::fullName[] = "mglLight";
const char LunaTraits< mglLight >::moduleName[] = "mathgl";
const char* LunaTraits< mglLight >::parents[] = {0};
const int LunaTraits< mglLight >::hash = 53027502;
const int LunaTraits< mglLight >::uniqueIDs[] = {53027502,0};

luna_RegType LunaTraits< mglLight >::methods[] = {
	{"getN", &luna_wrapper_mglLight::_bind_getN},
	{"getD", &luna_wrapper_mglLight::_bind_getD},
	{"getR", &luna_wrapper_mglLight::_bind_getR},
	{"getQ", &luna_wrapper_mglLight::_bind_getQ},
	{"getP", &luna_wrapper_mglLight::_bind_getP},
	{"getA", &luna_wrapper_mglLight::_bind_getA},
	{"getB", &luna_wrapper_mglLight::_bind_getB},
	{"getC", &luna_wrapper_mglLight::_bind_getC},
	{"setN", &luna_wrapper_mglLight::_bind_setN},
	{"setD", &luna_wrapper_mglLight::_bind_setD},
	{"setR", &luna_wrapper_mglLight::_bind_setR},
	{"setQ", &luna_wrapper_mglLight::_bind_setQ},
	{"setP", &luna_wrapper_mglLight::_bind_setP},
	{"setA", &luna_wrapper_mglLight::_bind_setA},
	{"setB", &luna_wrapper_mglLight::_bind_setB},
	{"setC", &luna_wrapper_mglLight::_bind_setC},
	{"dynCast", &luna_wrapper_mglLight::_bind_dynCast},
	{"__eq", &luna_wrapper_mglLight::_bind___eq},
	{"fromVoid", &luna_wrapper_mglLight::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglLight::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< mglLight >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< mglLight >::enumValues[] = {
	{0,0}
};


