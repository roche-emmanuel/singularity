#include <plug_common.h>

class luna_wrapper_b2Mat33 {
public:
	typedef Luna< b2Mat33 > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,80926920) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2Mat33*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		b2Mat33* rhs =(Luna< b2Mat33 >::check(L,2));
		b2Mat33* self=(Luna< b2Mat33 >::check(L,1));
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

		b2Mat33* self= (b2Mat33*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2Mat33 >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,80926920) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< b2Mat33 >::check(L,1));
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

		b2Mat33* self=(Luna< b2Mat33 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2Mat33");
		
		return luna_dynamicCast(L,converters,"b2Mat33",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,54494887) ) return false;
		if( (!(Luna< b2Vec3 >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,54494887) ) return false;
		if( (!(Luna< b2Vec3 >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,54494887) ) return false;
		if( (!(Luna< b2Vec3 >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_SetZero(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Solve33(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494887) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Solve22(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetInverse22(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,80926920)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSymInverse33(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,80926920)) ) return false;
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

	inline static bool _lg_typecheck_getEz(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEx(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494887) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEy(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494887) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEz(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494887) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// b2Mat33::b2Mat33()
	static b2Mat33* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in b2Mat33::b2Mat33() function, expected prototype:\nb2Mat33::b2Mat33()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new b2Mat33();
	}

	// b2Mat33::b2Mat33(const b2Vec3 & c1, const b2Vec3 & c2, const b2Vec3 & c3)
	static b2Mat33* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in b2Mat33::b2Mat33(const b2Vec3 & c1, const b2Vec3 & c2, const b2Vec3 & c3) function, expected prototype:\nb2Mat33::b2Mat33(const b2Vec3 & c1, const b2Vec3 & c2, const b2Vec3 & c3)\nClass arguments details:\narg 1 ID = 54494887\narg 2 ID = 54494887\narg 3 ID = 54494887\n\n%s",luna_dumpStack(L).c_str());
		}

		const b2Vec3* c1_ptr=(Luna< b2Vec3 >::check(L,1));
		if( !c1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c1 in b2Mat33::b2Mat33 function");
		}
		const b2Vec3 & c1=*c1_ptr;
		const b2Vec3* c2_ptr=(Luna< b2Vec3 >::check(L,2));
		if( !c2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c2 in b2Mat33::b2Mat33 function");
		}
		const b2Vec3 & c2=*c2_ptr;
		const b2Vec3* c3_ptr=(Luna< b2Vec3 >::check(L,3));
		if( !c3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c3 in b2Mat33::b2Mat33 function");
		}
		const b2Vec3 & c3=*c3_ptr;

		return new b2Mat33(c1, c2, c3);
	}

	// Overload binder for b2Mat33::b2Mat33
	static b2Mat33* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function b2Mat33, cannot match any of the overloads for function b2Mat33:\n  b2Mat33()\n  b2Mat33(const b2Vec3 &, const b2Vec3 &, const b2Vec3 &)\n");
		return NULL;
	}


	// Function binds:
	// void b2Mat33::SetZero()
	static int _bind_SetZero(lua_State *L) {
		if (!_lg_typecheck_SetZero(L)) {
			luaL_error(L, "luna typecheck failed in void b2Mat33::SetZero() function, expected prototype:\nvoid b2Mat33::SetZero()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2Mat33* self=(Luna< b2Mat33 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Mat33::SetZero(). Got : '%s'\n%s",typeid(Luna< b2Mat33 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetZero();

		return 0;
	}

	// b2Vec3 b2Mat33::Solve33(const b2Vec3 & b) const
	static int _bind_Solve33(lua_State *L) {
		if (!_lg_typecheck_Solve33(L)) {
			luaL_error(L, "luna typecheck failed in b2Vec3 b2Mat33::Solve33(const b2Vec3 & b) const function, expected prototype:\nb2Vec3 b2Mat33::Solve33(const b2Vec3 & b) const\nClass arguments details:\narg 1 ID = 54494887\n\n%s",luna_dumpStack(L).c_str());
		}

		const b2Vec3* b_ptr=(Luna< b2Vec3 >::check(L,2));
		if( !b_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg b in b2Mat33::Solve33 function");
		}
		const b2Vec3 & b=*b_ptr;

		b2Mat33* self=(Luna< b2Mat33 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Vec3 b2Mat33::Solve33(const b2Vec3 &) const. Got : '%s'\n%s",typeid(Luna< b2Mat33 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		b2Vec3 stack_lret = self->Solve33(b);
		b2Vec3* lret = new b2Vec3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec3 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2Mat33::Solve22(const b2Vec2 & b) const
	static int _bind_Solve22(lua_State *L) {
		if (!_lg_typecheck_Solve22(L)) {
			luaL_error(L, "luna typecheck failed in b2Vec2 b2Mat33::Solve22(const b2Vec2 & b) const function, expected prototype:\nb2Vec2 b2Mat33::Solve22(const b2Vec2 & b) const\nClass arguments details:\narg 1 ID = 54494886\n\n%s",luna_dumpStack(L).c_str());
		}

		const b2Vec2* b_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !b_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg b in b2Mat33::Solve22 function");
		}
		const b2Vec2 & b=*b_ptr;

		b2Mat33* self=(Luna< b2Mat33 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Vec2 b2Mat33::Solve22(const b2Vec2 &) const. Got : '%s'\n%s",typeid(Luna< b2Mat33 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		b2Vec2 stack_lret = self->Solve22(b);
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// void b2Mat33::GetInverse22(b2Mat33 * M) const
	static int _bind_GetInverse22(lua_State *L) {
		if (!_lg_typecheck_GetInverse22(L)) {
			luaL_error(L, "luna typecheck failed in void b2Mat33::GetInverse22(b2Mat33 * M) const function, expected prototype:\nvoid b2Mat33::GetInverse22(b2Mat33 * M) const\nClass arguments details:\narg 1 ID = 80926920\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Mat33* M=(Luna< b2Mat33 >::check(L,2));

		b2Mat33* self=(Luna< b2Mat33 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Mat33::GetInverse22(b2Mat33 *) const. Got : '%s'\n%s",typeid(Luna< b2Mat33 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GetInverse22(M);

		return 0;
	}

	// void b2Mat33::GetSymInverse33(b2Mat33 * M) const
	static int _bind_GetSymInverse33(lua_State *L) {
		if (!_lg_typecheck_GetSymInverse33(L)) {
			luaL_error(L, "luna typecheck failed in void b2Mat33::GetSymInverse33(b2Mat33 * M) const function, expected prototype:\nvoid b2Mat33::GetSymInverse33(b2Mat33 * M) const\nClass arguments details:\narg 1 ID = 80926920\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Mat33* M=(Luna< b2Mat33 >::check(L,2));

		b2Mat33* self=(Luna< b2Mat33 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Mat33::GetSymInverse33(b2Mat33 *) const. Got : '%s'\n%s",typeid(Luna< b2Mat33 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GetSymInverse33(M);

		return 0;
	}

	// b2Vec3 b2Mat33::ex()
	static int _bind_getEx(lua_State *L) {
		if (!_lg_typecheck_getEx(L)) {
			luaL_error(L, "luna typecheck failed in b2Vec3 b2Mat33::ex() function, expected prototype:\nb2Vec3 b2Mat33::ex()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2Mat33* self=(Luna< b2Mat33 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Vec3 b2Mat33::ex(). Got : '%s'\n%s",typeid(Luna< b2Mat33 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const b2Vec3* lret = &self->ex;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec3 >::push(L,lret,false);

		return 1;
	}

	// b2Vec3 b2Mat33::ey()
	static int _bind_getEy(lua_State *L) {
		if (!_lg_typecheck_getEy(L)) {
			luaL_error(L, "luna typecheck failed in b2Vec3 b2Mat33::ey() function, expected prototype:\nb2Vec3 b2Mat33::ey()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2Mat33* self=(Luna< b2Mat33 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Vec3 b2Mat33::ey(). Got : '%s'\n%s",typeid(Luna< b2Mat33 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const b2Vec3* lret = &self->ey;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec3 >::push(L,lret,false);

		return 1;
	}

	// b2Vec3 b2Mat33::ez()
	static int _bind_getEz(lua_State *L) {
		if (!_lg_typecheck_getEz(L)) {
			luaL_error(L, "luna typecheck failed in b2Vec3 b2Mat33::ez() function, expected prototype:\nb2Vec3 b2Mat33::ez()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2Mat33* self=(Luna< b2Mat33 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Vec3 b2Mat33::ez(). Got : '%s'\n%s",typeid(Luna< b2Mat33 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const b2Vec3* lret = &self->ez;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec3 >::push(L,lret,false);

		return 1;
	}

	// void b2Mat33::ex(b2Vec3 value)
	static int _bind_setEx(lua_State *L) {
		if (!_lg_typecheck_setEx(L)) {
			luaL_error(L, "luna typecheck failed in void b2Mat33::ex(b2Vec3 value) function, expected prototype:\nvoid b2Mat33::ex(b2Vec3 value)\nClass arguments details:\narg 1 ID = 54494887\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Vec3* value_ptr=(Luna< b2Vec3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2Mat33::ex function");
		}
		b2Vec3 value=*value_ptr;

		b2Mat33* self=(Luna< b2Mat33 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Mat33::ex(b2Vec3). Got : '%s'\n%s",typeid(Luna< b2Mat33 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ex = value;

		return 0;
	}

	// void b2Mat33::ey(b2Vec3 value)
	static int _bind_setEy(lua_State *L) {
		if (!_lg_typecheck_setEy(L)) {
			luaL_error(L, "luna typecheck failed in void b2Mat33::ey(b2Vec3 value) function, expected prototype:\nvoid b2Mat33::ey(b2Vec3 value)\nClass arguments details:\narg 1 ID = 54494887\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Vec3* value_ptr=(Luna< b2Vec3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2Mat33::ey function");
		}
		b2Vec3 value=*value_ptr;

		b2Mat33* self=(Luna< b2Mat33 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Mat33::ey(b2Vec3). Got : '%s'\n%s",typeid(Luna< b2Mat33 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ey = value;

		return 0;
	}

	// void b2Mat33::ez(b2Vec3 value)
	static int _bind_setEz(lua_State *L) {
		if (!_lg_typecheck_setEz(L)) {
			luaL_error(L, "luna typecheck failed in void b2Mat33::ez(b2Vec3 value) function, expected prototype:\nvoid b2Mat33::ez(b2Vec3 value)\nClass arguments details:\narg 1 ID = 54494887\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Vec3* value_ptr=(Luna< b2Vec3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2Mat33::ez function");
		}
		b2Vec3 value=*value_ptr;

		b2Mat33* self=(Luna< b2Mat33 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Mat33::ez(b2Vec3). Got : '%s'\n%s",typeid(Luna< b2Mat33 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ez = value;

		return 0;
	}


	// Operator binds:

};

b2Mat33* LunaTraits< b2Mat33 >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2Mat33::_bind_ctor(L);
}

void LunaTraits< b2Mat33 >::_bind_dtor(b2Mat33* obj) {
	delete obj;
}

const char LunaTraits< b2Mat33 >::className[] = "b2Mat33";
const char LunaTraits< b2Mat33 >::fullName[] = "b2Mat33";
const char LunaTraits< b2Mat33 >::moduleName[] = "box2d";
const char* LunaTraits< b2Mat33 >::parents[] = {0};
const int LunaTraits< b2Mat33 >::hash = 80926920;
const int LunaTraits< b2Mat33 >::uniqueIDs[] = {80926920,0};

luna_RegType LunaTraits< b2Mat33 >::methods[] = {
	{"SetZero", &luna_wrapper_b2Mat33::_bind_SetZero},
	{"Solve33", &luna_wrapper_b2Mat33::_bind_Solve33},
	{"Solve22", &luna_wrapper_b2Mat33::_bind_Solve22},
	{"GetInverse22", &luna_wrapper_b2Mat33::_bind_GetInverse22},
	{"GetSymInverse33", &luna_wrapper_b2Mat33::_bind_GetSymInverse33},
	{"getEx", &luna_wrapper_b2Mat33::_bind_getEx},
	{"getEy", &luna_wrapper_b2Mat33::_bind_getEy},
	{"getEz", &luna_wrapper_b2Mat33::_bind_getEz},
	{"setEx", &luna_wrapper_b2Mat33::_bind_setEx},
	{"setEy", &luna_wrapper_b2Mat33::_bind_setEy},
	{"setEz", &luna_wrapper_b2Mat33::_bind_setEz},
	{"dynCast", &luna_wrapper_b2Mat33::_bind_dynCast},
	{"__eq", &luna_wrapper_b2Mat33::_bind___eq},
	{"fromVoid", &luna_wrapper_b2Mat33::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2Mat33::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2Mat33 >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2Mat33 >::enumValues[] = {
	{0,0}
};


