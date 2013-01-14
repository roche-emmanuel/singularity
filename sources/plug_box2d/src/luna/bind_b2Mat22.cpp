#include <plug_common.h>

class luna_wrapper_b2Mat22 {
public:
	typedef Luna< b2Mat22 > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,80926888) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2Mat22*)");
		}

		b2Mat22* rhs =(Luna< b2Mat22 >::check(L,2));
		b2Mat22* self=(Luna< b2Mat22 >::check(L,1));
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

		b2Mat22* self=(Luna< b2Mat22 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2Mat22");
		
		return luna_dynamicCast(L,converters,"b2Mat22",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,54494886) ) return false;
		if( (!(Luna< b2Vec2 >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		if( (!(Luna< b2Vec2 >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Set(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetIdentity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetZero(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetInverse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Solve(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEx(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEx(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEy(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// b2Mat22::b2Mat22()
	static b2Mat22* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Mat22::b2Mat22() function, expected prototype:\nb2Mat22::b2Mat22()\nClass arguments details:\n");
		}


		return new b2Mat22();
	}

	// b2Mat22::b2Mat22(const b2Vec2 & c1, const b2Vec2 & c2)
	static b2Mat22* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Mat22::b2Mat22(const b2Vec2 & c1, const b2Vec2 & c2) function, expected prototype:\nb2Mat22::b2Mat22(const b2Vec2 & c1, const b2Vec2 & c2)\nClass arguments details:\narg 1 ID = 54494886\narg 2 ID = 54494886\n");
		}

		const b2Vec2* c1_ptr=(Luna< b2Vec2 >::check(L,1));
		if( !c1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c1 in b2Mat22::b2Mat22 function");
		}
		const b2Vec2 & c1=*c1_ptr;
		const b2Vec2* c2_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !c2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c2 in b2Mat22::b2Mat22 function");
		}
		const b2Vec2 & c2=*c2_ptr;

		return new b2Mat22(c1, c2);
	}

	// b2Mat22::b2Mat22(float a11, float a12, float a21, float a22)
	static b2Mat22* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Mat22::b2Mat22(float a11, float a12, float a21, float a22) function, expected prototype:\nb2Mat22::b2Mat22(float a11, float a12, float a21, float a22)\nClass arguments details:\n");
		}

		float a11=(float)lua_tonumber(L,1);
		float a12=(float)lua_tonumber(L,2);
		float a21=(float)lua_tonumber(L,3);
		float a22=(float)lua_tonumber(L,4);

		return new b2Mat22(a11, a12, a21, a22);
	}

	// Overload binder for b2Mat22::b2Mat22
	static b2Mat22* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function b2Mat22, cannot match any of the overloads for function b2Mat22:\n  b2Mat22()\n  b2Mat22(const b2Vec2 &, const b2Vec2 &)\n  b2Mat22(float, float, float, float)\n");
		return NULL;
	}


	// Function binds:
	// void b2Mat22::Set(const b2Vec2 & c1, const b2Vec2 & c2)
	static int _bind_Set(lua_State *L) {
		if (!_lg_typecheck_Set(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Mat22::Set(const b2Vec2 & c1, const b2Vec2 & c2) function, expected prototype:\nvoid b2Mat22::Set(const b2Vec2 & c1, const b2Vec2 & c2)\nClass arguments details:\narg 1 ID = 54494886\narg 2 ID = 54494886\n");
		}

		const b2Vec2* c1_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !c1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c1 in b2Mat22::Set function");
		}
		const b2Vec2 & c1=*c1_ptr;
		const b2Vec2* c2_ptr=(Luna< b2Vec2 >::check(L,3));
		if( !c2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c2 in b2Mat22::Set function");
		}
		const b2Vec2 & c2=*c2_ptr;

		b2Mat22* self=(Luna< b2Mat22 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Mat22::Set(const b2Vec2 &, const b2Vec2 &). Got : '%s'",typeid(Luna< b2Mat22 >::check(L,1)).name());
		}
		self->Set(c1, c2);

		return 0;
	}

	// void b2Mat22::SetIdentity()
	static int _bind_SetIdentity(lua_State *L) {
		if (!_lg_typecheck_SetIdentity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Mat22::SetIdentity() function, expected prototype:\nvoid b2Mat22::SetIdentity()\nClass arguments details:\n");
		}


		b2Mat22* self=(Luna< b2Mat22 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Mat22::SetIdentity(). Got : '%s'",typeid(Luna< b2Mat22 >::check(L,1)).name());
		}
		self->SetIdentity();

		return 0;
	}

	// void b2Mat22::SetZero()
	static int _bind_SetZero(lua_State *L) {
		if (!_lg_typecheck_SetZero(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Mat22::SetZero() function, expected prototype:\nvoid b2Mat22::SetZero()\nClass arguments details:\n");
		}


		b2Mat22* self=(Luna< b2Mat22 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Mat22::SetZero(). Got : '%s'",typeid(Luna< b2Mat22 >::check(L,1)).name());
		}
		self->SetZero();

		return 0;
	}

	// b2Mat22 b2Mat22::GetInverse() const
	static int _bind_GetInverse(lua_State *L) {
		if (!_lg_typecheck_GetInverse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Mat22 b2Mat22::GetInverse() const function, expected prototype:\nb2Mat22 b2Mat22::GetInverse() const\nClass arguments details:\n");
		}


		b2Mat22* self=(Luna< b2Mat22 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Mat22 b2Mat22::GetInverse() const. Got : '%s'",typeid(Luna< b2Mat22 >::check(L,1)).name());
		}
		b2Mat22 stack_lret = self->GetInverse();
		b2Mat22* lret = new b2Mat22(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Mat22 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2Mat22::Solve(const b2Vec2 & b) const
	static int _bind_Solve(lua_State *L) {
		if (!_lg_typecheck_Solve(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2Mat22::Solve(const b2Vec2 & b) const function, expected prototype:\nb2Vec2 b2Mat22::Solve(const b2Vec2 & b) const\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		const b2Vec2* b_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !b_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg b in b2Mat22::Solve function");
		}
		const b2Vec2 & b=*b_ptr;

		b2Mat22* self=(Luna< b2Mat22 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2Mat22::Solve(const b2Vec2 &) const. Got : '%s'",typeid(Luna< b2Mat22 >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->Solve(b);
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2Mat22::ex()
	static int _bind_getEx(lua_State *L) {
		if (!_lg_typecheck_getEx(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2Mat22::ex() function, expected prototype:\nb2Vec2 b2Mat22::ex()\nClass arguments details:\n");
		}


		b2Mat22* self=(Luna< b2Mat22 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2Mat22::ex(). Got : '%s'",typeid(Luna< b2Mat22 >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->ex;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// b2Vec2 b2Mat22::ey()
	static int _bind_getEy(lua_State *L) {
		if (!_lg_typecheck_getEy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2Mat22::ey() function, expected prototype:\nb2Vec2 b2Mat22::ey()\nClass arguments details:\n");
		}


		b2Mat22* self=(Luna< b2Mat22 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2Mat22::ey(). Got : '%s'",typeid(Luna< b2Mat22 >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->ey;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// void b2Mat22::ex(b2Vec2 value)
	static int _bind_setEx(lua_State *L) {
		if (!_lg_typecheck_setEx(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Mat22::ex(b2Vec2 value) function, expected prototype:\nvoid b2Mat22::ex(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2Mat22::ex function");
		}
		b2Vec2 value=*value_ptr;

		b2Mat22* self=(Luna< b2Mat22 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Mat22::ex(b2Vec2). Got : '%s'",typeid(Luna< b2Mat22 >::check(L,1)).name());
		}
		self->ex = value;

		return 0;
	}

	// void b2Mat22::ey(b2Vec2 value)
	static int _bind_setEy(lua_State *L) {
		if (!_lg_typecheck_setEy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Mat22::ey(b2Vec2 value) function, expected prototype:\nvoid b2Mat22::ey(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2Mat22::ey function");
		}
		b2Vec2 value=*value_ptr;

		b2Mat22* self=(Luna< b2Mat22 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Mat22::ey(b2Vec2). Got : '%s'",typeid(Luna< b2Mat22 >::check(L,1)).name());
		}
		self->ey = value;

		return 0;
	}


	// Operator binds:

};

b2Mat22* LunaTraits< b2Mat22 >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2Mat22::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< b2Mat22 >::_bind_dtor(b2Mat22* obj) {
	delete obj;
}

const char LunaTraits< b2Mat22 >::className[] = "b2Mat22";
const char LunaTraits< b2Mat22 >::fullName[] = "b2Mat22";
const char LunaTraits< b2Mat22 >::moduleName[] = "box2d";
const char* LunaTraits< b2Mat22 >::parents[] = {0};
const int LunaTraits< b2Mat22 >::hash = 80926888;
const int LunaTraits< b2Mat22 >::uniqueIDs[] = {80926888,0};

luna_RegType LunaTraits< b2Mat22 >::methods[] = {
	{"Set", &luna_wrapper_b2Mat22::_bind_Set},
	{"SetIdentity", &luna_wrapper_b2Mat22::_bind_SetIdentity},
	{"SetZero", &luna_wrapper_b2Mat22::_bind_SetZero},
	{"GetInverse", &luna_wrapper_b2Mat22::_bind_GetInverse},
	{"Solve", &luna_wrapper_b2Mat22::_bind_Solve},
	{"getEx", &luna_wrapper_b2Mat22::_bind_getEx},
	{"getEy", &luna_wrapper_b2Mat22::_bind_getEy},
	{"setEx", &luna_wrapper_b2Mat22::_bind_setEx},
	{"setEy", &luna_wrapper_b2Mat22::_bind_setEy},
	{"dynCast", &luna_wrapper_b2Mat22::_bind_dynCast},
	{"__eq", &luna_wrapper_b2Mat22::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< b2Mat22 >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2Mat22 >::enumValues[] = {
	{0,0}
};


