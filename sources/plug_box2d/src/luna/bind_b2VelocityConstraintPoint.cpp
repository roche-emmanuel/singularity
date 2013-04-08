#include <plug_common.h>

class luna_wrapper_b2VelocityConstraintPoint {
public:
	typedef Luna< b2VelocityConstraintPoint > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,52147941) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2VelocityConstraintPoint*)");
		}

		b2VelocityConstraintPoint* rhs =(Luna< b2VelocityConstraintPoint >::check(L,2));
		b2VelocityConstraintPoint* self=(Luna< b2VelocityConstraintPoint >::check(L,1));
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

		b2VelocityConstraintPoint* self= (b2VelocityConstraintPoint*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2VelocityConstraintPoint >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,52147941) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< b2VelocityConstraintPoint >::check(L,1));
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

		b2VelocityConstraintPoint* self=(Luna< b2VelocityConstraintPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2VelocityConstraintPoint");
		
		return luna_dynamicCast(L,converters,"b2VelocityConstraintPoint",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getRA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNormalImpulse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTangentImpulse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNormalMass(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTangentMass(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVelocityBias(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNormalImpulse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTangentImpulse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNormalMass(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTangentMass(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVelocityBias(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// b2Vec2 b2VelocityConstraintPoint::rA()
	static int _bind_getRA(lua_State *L) {
		if (!_lg_typecheck_getRA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2VelocityConstraintPoint::rA() function, expected prototype:\nb2Vec2 b2VelocityConstraintPoint::rA()\nClass arguments details:\n");
		}


		b2VelocityConstraintPoint* self=(Luna< b2VelocityConstraintPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2VelocityConstraintPoint::rA(). Got : '%s'",typeid(Luna< b2VelocityConstraintPoint >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->rA;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// b2Vec2 b2VelocityConstraintPoint::rB()
	static int _bind_getRB(lua_State *L) {
		if (!_lg_typecheck_getRB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2VelocityConstraintPoint::rB() function, expected prototype:\nb2Vec2 b2VelocityConstraintPoint::rB()\nClass arguments details:\n");
		}


		b2VelocityConstraintPoint* self=(Luna< b2VelocityConstraintPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2VelocityConstraintPoint::rB(). Got : '%s'",typeid(Luna< b2VelocityConstraintPoint >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->rB;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// float b2VelocityConstraintPoint::normalImpulse()
	static int _bind_getNormalImpulse(lua_State *L) {
		if (!_lg_typecheck_getNormalImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2VelocityConstraintPoint::normalImpulse() function, expected prototype:\nfloat b2VelocityConstraintPoint::normalImpulse()\nClass arguments details:\n");
		}


		b2VelocityConstraintPoint* self=(Luna< b2VelocityConstraintPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2VelocityConstraintPoint::normalImpulse(). Got : '%s'",typeid(Luna< b2VelocityConstraintPoint >::check(L,1)).name());
		}
		float lret = self->normalImpulse;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2VelocityConstraintPoint::tangentImpulse()
	static int _bind_getTangentImpulse(lua_State *L) {
		if (!_lg_typecheck_getTangentImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2VelocityConstraintPoint::tangentImpulse() function, expected prototype:\nfloat b2VelocityConstraintPoint::tangentImpulse()\nClass arguments details:\n");
		}


		b2VelocityConstraintPoint* self=(Luna< b2VelocityConstraintPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2VelocityConstraintPoint::tangentImpulse(). Got : '%s'",typeid(Luna< b2VelocityConstraintPoint >::check(L,1)).name());
		}
		float lret = self->tangentImpulse;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2VelocityConstraintPoint::normalMass()
	static int _bind_getNormalMass(lua_State *L) {
		if (!_lg_typecheck_getNormalMass(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2VelocityConstraintPoint::normalMass() function, expected prototype:\nfloat b2VelocityConstraintPoint::normalMass()\nClass arguments details:\n");
		}


		b2VelocityConstraintPoint* self=(Luna< b2VelocityConstraintPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2VelocityConstraintPoint::normalMass(). Got : '%s'",typeid(Luna< b2VelocityConstraintPoint >::check(L,1)).name());
		}
		float lret = self->normalMass;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2VelocityConstraintPoint::tangentMass()
	static int _bind_getTangentMass(lua_State *L) {
		if (!_lg_typecheck_getTangentMass(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2VelocityConstraintPoint::tangentMass() function, expected prototype:\nfloat b2VelocityConstraintPoint::tangentMass()\nClass arguments details:\n");
		}


		b2VelocityConstraintPoint* self=(Luna< b2VelocityConstraintPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2VelocityConstraintPoint::tangentMass(). Got : '%s'",typeid(Luna< b2VelocityConstraintPoint >::check(L,1)).name());
		}
		float lret = self->tangentMass;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2VelocityConstraintPoint::velocityBias()
	static int _bind_getVelocityBias(lua_State *L) {
		if (!_lg_typecheck_getVelocityBias(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2VelocityConstraintPoint::velocityBias() function, expected prototype:\nfloat b2VelocityConstraintPoint::velocityBias()\nClass arguments details:\n");
		}


		b2VelocityConstraintPoint* self=(Luna< b2VelocityConstraintPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2VelocityConstraintPoint::velocityBias(). Got : '%s'",typeid(Luna< b2VelocityConstraintPoint >::check(L,1)).name());
		}
		float lret = self->velocityBias;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2VelocityConstraintPoint::rA(b2Vec2 value)
	static int _bind_setRA(lua_State *L) {
		if (!_lg_typecheck_setRA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2VelocityConstraintPoint::rA(b2Vec2 value) function, expected prototype:\nvoid b2VelocityConstraintPoint::rA(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2VelocityConstraintPoint::rA function");
		}
		b2Vec2 value=*value_ptr;

		b2VelocityConstraintPoint* self=(Luna< b2VelocityConstraintPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2VelocityConstraintPoint::rA(b2Vec2). Got : '%s'",typeid(Luna< b2VelocityConstraintPoint >::check(L,1)).name());
		}
		self->rA = value;

		return 0;
	}

	// void b2VelocityConstraintPoint::rB(b2Vec2 value)
	static int _bind_setRB(lua_State *L) {
		if (!_lg_typecheck_setRB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2VelocityConstraintPoint::rB(b2Vec2 value) function, expected prototype:\nvoid b2VelocityConstraintPoint::rB(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2VelocityConstraintPoint::rB function");
		}
		b2Vec2 value=*value_ptr;

		b2VelocityConstraintPoint* self=(Luna< b2VelocityConstraintPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2VelocityConstraintPoint::rB(b2Vec2). Got : '%s'",typeid(Luna< b2VelocityConstraintPoint >::check(L,1)).name());
		}
		self->rB = value;

		return 0;
	}

	// void b2VelocityConstraintPoint::normalImpulse(float value)
	static int _bind_setNormalImpulse(lua_State *L) {
		if (!_lg_typecheck_setNormalImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2VelocityConstraintPoint::normalImpulse(float value) function, expected prototype:\nvoid b2VelocityConstraintPoint::normalImpulse(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2VelocityConstraintPoint* self=(Luna< b2VelocityConstraintPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2VelocityConstraintPoint::normalImpulse(float). Got : '%s'",typeid(Luna< b2VelocityConstraintPoint >::check(L,1)).name());
		}
		self->normalImpulse = value;

		return 0;
	}

	// void b2VelocityConstraintPoint::tangentImpulse(float value)
	static int _bind_setTangentImpulse(lua_State *L) {
		if (!_lg_typecheck_setTangentImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2VelocityConstraintPoint::tangentImpulse(float value) function, expected prototype:\nvoid b2VelocityConstraintPoint::tangentImpulse(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2VelocityConstraintPoint* self=(Luna< b2VelocityConstraintPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2VelocityConstraintPoint::tangentImpulse(float). Got : '%s'",typeid(Luna< b2VelocityConstraintPoint >::check(L,1)).name());
		}
		self->tangentImpulse = value;

		return 0;
	}

	// void b2VelocityConstraintPoint::normalMass(float value)
	static int _bind_setNormalMass(lua_State *L) {
		if (!_lg_typecheck_setNormalMass(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2VelocityConstraintPoint::normalMass(float value) function, expected prototype:\nvoid b2VelocityConstraintPoint::normalMass(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2VelocityConstraintPoint* self=(Luna< b2VelocityConstraintPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2VelocityConstraintPoint::normalMass(float). Got : '%s'",typeid(Luna< b2VelocityConstraintPoint >::check(L,1)).name());
		}
		self->normalMass = value;

		return 0;
	}

	// void b2VelocityConstraintPoint::tangentMass(float value)
	static int _bind_setTangentMass(lua_State *L) {
		if (!_lg_typecheck_setTangentMass(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2VelocityConstraintPoint::tangentMass(float value) function, expected prototype:\nvoid b2VelocityConstraintPoint::tangentMass(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2VelocityConstraintPoint* self=(Luna< b2VelocityConstraintPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2VelocityConstraintPoint::tangentMass(float). Got : '%s'",typeid(Luna< b2VelocityConstraintPoint >::check(L,1)).name());
		}
		self->tangentMass = value;

		return 0;
	}

	// void b2VelocityConstraintPoint::velocityBias(float value)
	static int _bind_setVelocityBias(lua_State *L) {
		if (!_lg_typecheck_setVelocityBias(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2VelocityConstraintPoint::velocityBias(float value) function, expected prototype:\nvoid b2VelocityConstraintPoint::velocityBias(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2VelocityConstraintPoint* self=(Luna< b2VelocityConstraintPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2VelocityConstraintPoint::velocityBias(float). Got : '%s'",typeid(Luna< b2VelocityConstraintPoint >::check(L,1)).name());
		}
		self->velocityBias = value;

		return 0;
	}


	// Operator binds:

};

b2VelocityConstraintPoint* LunaTraits< b2VelocityConstraintPoint >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< b2VelocityConstraintPoint >::_bind_dtor(b2VelocityConstraintPoint* obj) {
	delete obj;
}

const char LunaTraits< b2VelocityConstraintPoint >::className[] = "b2VelocityConstraintPoint";
const char LunaTraits< b2VelocityConstraintPoint >::fullName[] = "b2VelocityConstraintPoint";
const char LunaTraits< b2VelocityConstraintPoint >::moduleName[] = "box2d";
const char* LunaTraits< b2VelocityConstraintPoint >::parents[] = {0};
const int LunaTraits< b2VelocityConstraintPoint >::hash = 52147941;
const int LunaTraits< b2VelocityConstraintPoint >::uniqueIDs[] = {52147941,0};

luna_RegType LunaTraits< b2VelocityConstraintPoint >::methods[] = {
	{"getRA", &luna_wrapper_b2VelocityConstraintPoint::_bind_getRA},
	{"getRB", &luna_wrapper_b2VelocityConstraintPoint::_bind_getRB},
	{"getNormalImpulse", &luna_wrapper_b2VelocityConstraintPoint::_bind_getNormalImpulse},
	{"getTangentImpulse", &luna_wrapper_b2VelocityConstraintPoint::_bind_getTangentImpulse},
	{"getNormalMass", &luna_wrapper_b2VelocityConstraintPoint::_bind_getNormalMass},
	{"getTangentMass", &luna_wrapper_b2VelocityConstraintPoint::_bind_getTangentMass},
	{"getVelocityBias", &luna_wrapper_b2VelocityConstraintPoint::_bind_getVelocityBias},
	{"setRA", &luna_wrapper_b2VelocityConstraintPoint::_bind_setRA},
	{"setRB", &luna_wrapper_b2VelocityConstraintPoint::_bind_setRB},
	{"setNormalImpulse", &luna_wrapper_b2VelocityConstraintPoint::_bind_setNormalImpulse},
	{"setTangentImpulse", &luna_wrapper_b2VelocityConstraintPoint::_bind_setTangentImpulse},
	{"setNormalMass", &luna_wrapper_b2VelocityConstraintPoint::_bind_setNormalMass},
	{"setTangentMass", &luna_wrapper_b2VelocityConstraintPoint::_bind_setTangentMass},
	{"setVelocityBias", &luna_wrapper_b2VelocityConstraintPoint::_bind_setVelocityBias},
	{"dynCast", &luna_wrapper_b2VelocityConstraintPoint::_bind_dynCast},
	{"__eq", &luna_wrapper_b2VelocityConstraintPoint::_bind___eq},
	{"fromVoid", &luna_wrapper_b2VelocityConstraintPoint::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2VelocityConstraintPoint::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2VelocityConstraintPoint >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2VelocityConstraintPoint >::enumValues[] = {
	{0,0}
};


