#include <plug_common.h>

class luna_wrapper_b2Sweep {
public:
	typedef Luna< b2Sweep > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,87110644) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2Sweep*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		b2Sweep* rhs =(Luna< b2Sweep >::check(L,2));
		b2Sweep* self=(Luna< b2Sweep >::check(L,1));
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

		b2Sweep* self= (b2Sweep*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2Sweep >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,87110644) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< b2Sweep >::check(L,1));
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

		b2Sweep* self=(Luna< b2Sweep >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2Sweep");
		
		return luna_dynamicCast(L,converters,"b2Sweep",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_GetTransform(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44090970)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Advance(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Normalize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalCenter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getC0(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getC(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getA0(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAlpha0(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLocalCenter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setC0(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setC(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setA0(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAlpha0(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void b2Sweep::GetTransform(b2Transform * xfb, float beta) const
	static int _bind_GetTransform(lua_State *L) {
		if (!_lg_typecheck_GetTransform(L)) {
			luaL_error(L, "luna typecheck failed in void b2Sweep::GetTransform(b2Transform * xfb, float beta) const function, expected prototype:\nvoid b2Sweep::GetTransform(b2Transform * xfb, float beta) const\nClass arguments details:\narg 1 ID = 44090970\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Transform* xfb=(Luna< b2Transform >::check(L,2));
		float beta=(float)lua_tonumber(L,3);

		b2Sweep* self=(Luna< b2Sweep >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Sweep::GetTransform(b2Transform *, float) const. Got : '%s'\n%s",typeid(Luna< b2Sweep >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GetTransform(xfb, beta);

		return 0;
	}

	// void b2Sweep::Advance(float alpha)
	static int _bind_Advance(lua_State *L) {
		if (!_lg_typecheck_Advance(L)) {
			luaL_error(L, "luna typecheck failed in void b2Sweep::Advance(float alpha) function, expected prototype:\nvoid b2Sweep::Advance(float alpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float alpha=(float)lua_tonumber(L,2);

		b2Sweep* self=(Luna< b2Sweep >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Sweep::Advance(float). Got : '%s'\n%s",typeid(Luna< b2Sweep >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Advance(alpha);

		return 0;
	}

	// void b2Sweep::Normalize()
	static int _bind_Normalize(lua_State *L) {
		if (!_lg_typecheck_Normalize(L)) {
			luaL_error(L, "luna typecheck failed in void b2Sweep::Normalize() function, expected prototype:\nvoid b2Sweep::Normalize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2Sweep* self=(Luna< b2Sweep >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Sweep::Normalize(). Got : '%s'\n%s",typeid(Luna< b2Sweep >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Normalize();

		return 0;
	}

	// b2Vec2 b2Sweep::localCenter()
	static int _bind_getLocalCenter(lua_State *L) {
		if (!_lg_typecheck_getLocalCenter(L)) {
			luaL_error(L, "luna typecheck failed in b2Vec2 b2Sweep::localCenter() function, expected prototype:\nb2Vec2 b2Sweep::localCenter()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2Sweep* self=(Luna< b2Sweep >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Vec2 b2Sweep::localCenter(). Got : '%s'\n%s",typeid(Luna< b2Sweep >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const b2Vec2* lret = &self->localCenter;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// b2Vec2 b2Sweep::c0()
	static int _bind_getC0(lua_State *L) {
		if (!_lg_typecheck_getC0(L)) {
			luaL_error(L, "luna typecheck failed in b2Vec2 b2Sweep::c0() function, expected prototype:\nb2Vec2 b2Sweep::c0()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2Sweep* self=(Luna< b2Sweep >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Vec2 b2Sweep::c0(). Got : '%s'\n%s",typeid(Luna< b2Sweep >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const b2Vec2* lret = &self->c0;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// b2Vec2 b2Sweep::c()
	static int _bind_getC(lua_State *L) {
		if (!_lg_typecheck_getC(L)) {
			luaL_error(L, "luna typecheck failed in b2Vec2 b2Sweep::c() function, expected prototype:\nb2Vec2 b2Sweep::c()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2Sweep* self=(Luna< b2Sweep >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Vec2 b2Sweep::c(). Got : '%s'\n%s",typeid(Luna< b2Sweep >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const b2Vec2* lret = &self->c;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// float b2Sweep::a0()
	static int _bind_getA0(lua_State *L) {
		if (!_lg_typecheck_getA0(L)) {
			luaL_error(L, "luna typecheck failed in float b2Sweep::a0() function, expected prototype:\nfloat b2Sweep::a0()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2Sweep* self=(Luna< b2Sweep >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2Sweep::a0(). Got : '%s'\n%s",typeid(Luna< b2Sweep >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->a0;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2Sweep::a()
	static int _bind_getA(lua_State *L) {
		if (!_lg_typecheck_getA(L)) {
			luaL_error(L, "luna typecheck failed in float b2Sweep::a() function, expected prototype:\nfloat b2Sweep::a()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2Sweep* self=(Luna< b2Sweep >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2Sweep::a(). Got : '%s'\n%s",typeid(Luna< b2Sweep >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->a;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2Sweep::alpha0()
	static int _bind_getAlpha0(lua_State *L) {
		if (!_lg_typecheck_getAlpha0(L)) {
			luaL_error(L, "luna typecheck failed in float b2Sweep::alpha0() function, expected prototype:\nfloat b2Sweep::alpha0()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2Sweep* self=(Luna< b2Sweep >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2Sweep::alpha0(). Got : '%s'\n%s",typeid(Luna< b2Sweep >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->alpha0;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2Sweep::localCenter(b2Vec2 value)
	static int _bind_setLocalCenter(lua_State *L) {
		if (!_lg_typecheck_setLocalCenter(L)) {
			luaL_error(L, "luna typecheck failed in void b2Sweep::localCenter(b2Vec2 value) function, expected prototype:\nvoid b2Sweep::localCenter(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2Sweep::localCenter function");
		}
		b2Vec2 value=*value_ptr;

		b2Sweep* self=(Luna< b2Sweep >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Sweep::localCenter(b2Vec2). Got : '%s'\n%s",typeid(Luna< b2Sweep >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->localCenter = value;

		return 0;
	}

	// void b2Sweep::c0(b2Vec2 value)
	static int _bind_setC0(lua_State *L) {
		if (!_lg_typecheck_setC0(L)) {
			luaL_error(L, "luna typecheck failed in void b2Sweep::c0(b2Vec2 value) function, expected prototype:\nvoid b2Sweep::c0(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2Sweep::c0 function");
		}
		b2Vec2 value=*value_ptr;

		b2Sweep* self=(Luna< b2Sweep >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Sweep::c0(b2Vec2). Got : '%s'\n%s",typeid(Luna< b2Sweep >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->c0 = value;

		return 0;
	}

	// void b2Sweep::c(b2Vec2 value)
	static int _bind_setC(lua_State *L) {
		if (!_lg_typecheck_setC(L)) {
			luaL_error(L, "luna typecheck failed in void b2Sweep::c(b2Vec2 value) function, expected prototype:\nvoid b2Sweep::c(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2Sweep::c function");
		}
		b2Vec2 value=*value_ptr;

		b2Sweep* self=(Luna< b2Sweep >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Sweep::c(b2Vec2). Got : '%s'\n%s",typeid(Luna< b2Sweep >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->c = value;

		return 0;
	}

	// void b2Sweep::a0(float value)
	static int _bind_setA0(lua_State *L) {
		if (!_lg_typecheck_setA0(L)) {
			luaL_error(L, "luna typecheck failed in void b2Sweep::a0(float value) function, expected prototype:\nvoid b2Sweep::a0(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		b2Sweep* self=(Luna< b2Sweep >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Sweep::a0(float). Got : '%s'\n%s",typeid(Luna< b2Sweep >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->a0 = value;

		return 0;
	}

	// void b2Sweep::a(float value)
	static int _bind_setA(lua_State *L) {
		if (!_lg_typecheck_setA(L)) {
			luaL_error(L, "luna typecheck failed in void b2Sweep::a(float value) function, expected prototype:\nvoid b2Sweep::a(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		b2Sweep* self=(Luna< b2Sweep >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Sweep::a(float). Got : '%s'\n%s",typeid(Luna< b2Sweep >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->a = value;

		return 0;
	}

	// void b2Sweep::alpha0(float value)
	static int _bind_setAlpha0(lua_State *L) {
		if (!_lg_typecheck_setAlpha0(L)) {
			luaL_error(L, "luna typecheck failed in void b2Sweep::alpha0(float value) function, expected prototype:\nvoid b2Sweep::alpha0(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		b2Sweep* self=(Luna< b2Sweep >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Sweep::alpha0(float). Got : '%s'\n%s",typeid(Luna< b2Sweep >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->alpha0 = value;

		return 0;
	}


	// Operator binds:

};

b2Sweep* LunaTraits< b2Sweep >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< b2Sweep >::_bind_dtor(b2Sweep* obj) {
	delete obj;
}

const char LunaTraits< b2Sweep >::className[] = "b2Sweep";
const char LunaTraits< b2Sweep >::fullName[] = "b2Sweep";
const char LunaTraits< b2Sweep >::moduleName[] = "box2d";
const char* LunaTraits< b2Sweep >::parents[] = {0};
const int LunaTraits< b2Sweep >::hash = 87110644;
const int LunaTraits< b2Sweep >::uniqueIDs[] = {87110644,0};

luna_RegType LunaTraits< b2Sweep >::methods[] = {
	{"GetTransform", &luna_wrapper_b2Sweep::_bind_GetTransform},
	{"Advance", &luna_wrapper_b2Sweep::_bind_Advance},
	{"Normalize", &luna_wrapper_b2Sweep::_bind_Normalize},
	{"getLocalCenter", &luna_wrapper_b2Sweep::_bind_getLocalCenter},
	{"getC0", &luna_wrapper_b2Sweep::_bind_getC0},
	{"getC", &luna_wrapper_b2Sweep::_bind_getC},
	{"getA0", &luna_wrapper_b2Sweep::_bind_getA0},
	{"getA", &luna_wrapper_b2Sweep::_bind_getA},
	{"getAlpha0", &luna_wrapper_b2Sweep::_bind_getAlpha0},
	{"setLocalCenter", &luna_wrapper_b2Sweep::_bind_setLocalCenter},
	{"setC0", &luna_wrapper_b2Sweep::_bind_setC0},
	{"setC", &luna_wrapper_b2Sweep::_bind_setC},
	{"setA0", &luna_wrapper_b2Sweep::_bind_setA0},
	{"setA", &luna_wrapper_b2Sweep::_bind_setA},
	{"setAlpha0", &luna_wrapper_b2Sweep::_bind_setAlpha0},
	{"dynCast", &luna_wrapper_b2Sweep::_bind_dynCast},
	{"__eq", &luna_wrapper_b2Sweep::_bind___eq},
	{"fromVoid", &luna_wrapper_b2Sweep::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2Sweep::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2Sweep >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2Sweep >::enumValues[] = {
	{0,0}
};


