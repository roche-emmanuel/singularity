#include <plug_common.h>

class luna_wrapper_b2Transform {
public:
	typedef Luna< b2Transform > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,44090970) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2Transform*)");
		}

		b2Transform* rhs =(Luna< b2Transform >::check(L,2));
		b2Transform* self=(Luna< b2Transform >::check(L,1));
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

		b2Transform* self= (b2Transform*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2Transform >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,44090970) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< b2Transform >::check(L,1));
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

		b2Transform* self=(Luna< b2Transform >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2Transform");
		
		return luna_dynamicCast(L,converters,"b2Transform",name);
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
		if( !Luna<void>::has_uniqueid(L,2,92076967) ) return false;
		if( (!(Luna< b2Rot >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_SetIdentity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Set(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getP(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getQ(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setP(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setQ(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92076967) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// b2Transform::b2Transform()
	static b2Transform* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Transform::b2Transform() function, expected prototype:\nb2Transform::b2Transform()\nClass arguments details:\n");
		}


		return new b2Transform();
	}

	// b2Transform::b2Transform(const b2Vec2 & position, const b2Rot & rotation)
	static b2Transform* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Transform::b2Transform(const b2Vec2 & position, const b2Rot & rotation) function, expected prototype:\nb2Transform::b2Transform(const b2Vec2 & position, const b2Rot & rotation)\nClass arguments details:\narg 1 ID = 54494886\narg 2 ID = 92076967\n");
		}

		const b2Vec2* position_ptr=(Luna< b2Vec2 >::check(L,1));
		if( !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in b2Transform::b2Transform function");
		}
		const b2Vec2 & position=*position_ptr;
		const b2Rot* rotation_ptr=(Luna< b2Rot >::check(L,2));
		if( !rotation_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rotation in b2Transform::b2Transform function");
		}
		const b2Rot & rotation=*rotation_ptr;

		return new b2Transform(position, rotation);
	}

	// Overload binder for b2Transform::b2Transform
	static b2Transform* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function b2Transform, cannot match any of the overloads for function b2Transform:\n  b2Transform()\n  b2Transform(const b2Vec2 &, const b2Rot &)\n");
		return NULL;
	}


	// Function binds:
	// void b2Transform::SetIdentity()
	static int _bind_SetIdentity(lua_State *L) {
		if (!_lg_typecheck_SetIdentity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Transform::SetIdentity() function, expected prototype:\nvoid b2Transform::SetIdentity()\nClass arguments details:\n");
		}


		b2Transform* self=(Luna< b2Transform >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Transform::SetIdentity(). Got : '%s'",typeid(Luna< b2Transform >::check(L,1)).name());
		}
		self->SetIdentity();

		return 0;
	}

	// void b2Transform::Set(const b2Vec2 & position, float angle)
	static int _bind_Set(lua_State *L) {
		if (!_lg_typecheck_Set(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Transform::Set(const b2Vec2 & position, float angle) function, expected prototype:\nvoid b2Transform::Set(const b2Vec2 & position, float angle)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		const b2Vec2* position_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in b2Transform::Set function");
		}
		const b2Vec2 & position=*position_ptr;
		float angle=(float)lua_tonumber(L,3);

		b2Transform* self=(Luna< b2Transform >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Transform::Set(const b2Vec2 &, float). Got : '%s'",typeid(Luna< b2Transform >::check(L,1)).name());
		}
		self->Set(position, angle);

		return 0;
	}

	// b2Vec2 b2Transform::p()
	static int _bind_getP(lua_State *L) {
		if (!_lg_typecheck_getP(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2Transform::p() function, expected prototype:\nb2Vec2 b2Transform::p()\nClass arguments details:\n");
		}


		b2Transform* self=(Luna< b2Transform >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2Transform::p(). Got : '%s'",typeid(Luna< b2Transform >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->p;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// b2Rot b2Transform::q()
	static int _bind_getQ(lua_State *L) {
		if (!_lg_typecheck_getQ(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Rot b2Transform::q() function, expected prototype:\nb2Rot b2Transform::q()\nClass arguments details:\n");
		}


		b2Transform* self=(Luna< b2Transform >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Rot b2Transform::q(). Got : '%s'",typeid(Luna< b2Transform >::check(L,1)).name());
		}
		const b2Rot* lret = &self->q;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Rot >::push(L,lret,false);

		return 1;
	}

	// void b2Transform::p(b2Vec2 value)
	static int _bind_setP(lua_State *L) {
		if (!_lg_typecheck_setP(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Transform::p(b2Vec2 value) function, expected prototype:\nvoid b2Transform::p(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2Transform::p function");
		}
		b2Vec2 value=*value_ptr;

		b2Transform* self=(Luna< b2Transform >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Transform::p(b2Vec2). Got : '%s'",typeid(Luna< b2Transform >::check(L,1)).name());
		}
		self->p = value;

		return 0;
	}

	// void b2Transform::q(b2Rot value)
	static int _bind_setQ(lua_State *L) {
		if (!_lg_typecheck_setQ(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Transform::q(b2Rot value) function, expected prototype:\nvoid b2Transform::q(b2Rot value)\nClass arguments details:\narg 1 ID = 92076967\n");
		}

		b2Rot* value_ptr=(Luna< b2Rot >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2Transform::q function");
		}
		b2Rot value=*value_ptr;

		b2Transform* self=(Luna< b2Transform >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Transform::q(b2Rot). Got : '%s'",typeid(Luna< b2Transform >::check(L,1)).name());
		}
		self->q = value;

		return 0;
	}


	// Operator binds:

};

b2Transform* LunaTraits< b2Transform >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2Transform::_bind_ctor(L);
}

void LunaTraits< b2Transform >::_bind_dtor(b2Transform* obj) {
	delete obj;
}

const char LunaTraits< b2Transform >::className[] = "b2Transform";
const char LunaTraits< b2Transform >::fullName[] = "b2Transform";
const char LunaTraits< b2Transform >::moduleName[] = "box2d";
const char* LunaTraits< b2Transform >::parents[] = {0};
const int LunaTraits< b2Transform >::hash = 44090970;
const int LunaTraits< b2Transform >::uniqueIDs[] = {44090970,0};

luna_RegType LunaTraits< b2Transform >::methods[] = {
	{"SetIdentity", &luna_wrapper_b2Transform::_bind_SetIdentity},
	{"Set", &luna_wrapper_b2Transform::_bind_Set},
	{"getP", &luna_wrapper_b2Transform::_bind_getP},
	{"getQ", &luna_wrapper_b2Transform::_bind_getQ},
	{"setP", &luna_wrapper_b2Transform::_bind_setP},
	{"setQ", &luna_wrapper_b2Transform::_bind_setQ},
	{"dynCast", &luna_wrapper_b2Transform::_bind_dynCast},
	{"__eq", &luna_wrapper_b2Transform::_bind___eq},
	{"fromVoid", &luna_wrapper_b2Transform::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2Transform::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2Transform >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2Transform >::enumValues[] = {
	{0,0}
};


