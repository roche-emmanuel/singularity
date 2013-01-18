#include <plug_common.h>

class luna_wrapper_b2ManifoldPoint {
public:
	typedef Luna< b2ManifoldPoint > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,57686136) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2ManifoldPoint*)");
		}

		b2ManifoldPoint* rhs =(Luna< b2ManifoldPoint >::check(L,2));
		b2ManifoldPoint* self=(Luna< b2ManifoldPoint >::check(L,1));
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

		b2ManifoldPoint* self= (b2ManifoldPoint*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2ManifoldPoint >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,57686136) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< b2ManifoldPoint >::check(L,1));
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

		b2ManifoldPoint* self=(Luna< b2ManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2ManifoldPoint");
		
		return luna_dynamicCast(L,converters,"b2ManifoldPoint",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getLocalPoint(lua_State *L) {
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

	inline static bool _lg_typecheck_setLocalPoint(lua_State *L) {
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// b2Vec2 b2ManifoldPoint::localPoint()
	static int _bind_getLocalPoint(lua_State *L) {
		if (!_lg_typecheck_getLocalPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2ManifoldPoint::localPoint() function, expected prototype:\nb2Vec2 b2ManifoldPoint::localPoint()\nClass arguments details:\n");
		}


		b2ManifoldPoint* self=(Luna< b2ManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2ManifoldPoint::localPoint(). Got : '%s'",typeid(Luna< b2ManifoldPoint >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->localPoint;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// float b2ManifoldPoint::normalImpulse()
	static int _bind_getNormalImpulse(lua_State *L) {
		if (!_lg_typecheck_getNormalImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2ManifoldPoint::normalImpulse() function, expected prototype:\nfloat b2ManifoldPoint::normalImpulse()\nClass arguments details:\n");
		}


		b2ManifoldPoint* self=(Luna< b2ManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2ManifoldPoint::normalImpulse(). Got : '%s'",typeid(Luna< b2ManifoldPoint >::check(L,1)).name());
		}
		float lret = self->normalImpulse;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2ManifoldPoint::tangentImpulse()
	static int _bind_getTangentImpulse(lua_State *L) {
		if (!_lg_typecheck_getTangentImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2ManifoldPoint::tangentImpulse() function, expected prototype:\nfloat b2ManifoldPoint::tangentImpulse()\nClass arguments details:\n");
		}


		b2ManifoldPoint* self=(Luna< b2ManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2ManifoldPoint::tangentImpulse(). Got : '%s'",typeid(Luna< b2ManifoldPoint >::check(L,1)).name());
		}
		float lret = self->tangentImpulse;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2ManifoldPoint::localPoint(b2Vec2 value)
	static int _bind_setLocalPoint(lua_State *L) {
		if (!_lg_typecheck_setLocalPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ManifoldPoint::localPoint(b2Vec2 value) function, expected prototype:\nvoid b2ManifoldPoint::localPoint(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2ManifoldPoint::localPoint function");
		}
		b2Vec2 value=*value_ptr;

		b2ManifoldPoint* self=(Luna< b2ManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ManifoldPoint::localPoint(b2Vec2). Got : '%s'",typeid(Luna< b2ManifoldPoint >::check(L,1)).name());
		}
		self->localPoint = value;

		return 0;
	}

	// void b2ManifoldPoint::normalImpulse(float value)
	static int _bind_setNormalImpulse(lua_State *L) {
		if (!_lg_typecheck_setNormalImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ManifoldPoint::normalImpulse(float value) function, expected prototype:\nvoid b2ManifoldPoint::normalImpulse(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2ManifoldPoint* self=(Luna< b2ManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ManifoldPoint::normalImpulse(float). Got : '%s'",typeid(Luna< b2ManifoldPoint >::check(L,1)).name());
		}
		self->normalImpulse = value;

		return 0;
	}

	// void b2ManifoldPoint::tangentImpulse(float value)
	static int _bind_setTangentImpulse(lua_State *L) {
		if (!_lg_typecheck_setTangentImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ManifoldPoint::tangentImpulse(float value) function, expected prototype:\nvoid b2ManifoldPoint::tangentImpulse(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2ManifoldPoint* self=(Luna< b2ManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ManifoldPoint::tangentImpulse(float). Got : '%s'",typeid(Luna< b2ManifoldPoint >::check(L,1)).name());
		}
		self->tangentImpulse = value;

		return 0;
	}


	// Operator binds:

};

b2ManifoldPoint* LunaTraits< b2ManifoldPoint >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< b2ManifoldPoint >::_bind_dtor(b2ManifoldPoint* obj) {
	delete obj;
}

const char LunaTraits< b2ManifoldPoint >::className[] = "b2ManifoldPoint";
const char LunaTraits< b2ManifoldPoint >::fullName[] = "b2ManifoldPoint";
const char LunaTraits< b2ManifoldPoint >::moduleName[] = "box2d";
const char* LunaTraits< b2ManifoldPoint >::parents[] = {0};
const int LunaTraits< b2ManifoldPoint >::hash = 57686136;
const int LunaTraits< b2ManifoldPoint >::uniqueIDs[] = {57686136,0};

luna_RegType LunaTraits< b2ManifoldPoint >::methods[] = {
	{"getLocalPoint", &luna_wrapper_b2ManifoldPoint::_bind_getLocalPoint},
	{"getNormalImpulse", &luna_wrapper_b2ManifoldPoint::_bind_getNormalImpulse},
	{"getTangentImpulse", &luna_wrapper_b2ManifoldPoint::_bind_getTangentImpulse},
	{"setLocalPoint", &luna_wrapper_b2ManifoldPoint::_bind_setLocalPoint},
	{"setNormalImpulse", &luna_wrapper_b2ManifoldPoint::_bind_setNormalImpulse},
	{"setTangentImpulse", &luna_wrapper_b2ManifoldPoint::_bind_setTangentImpulse},
	{"dynCast", &luna_wrapper_b2ManifoldPoint::_bind_dynCast},
	{"__eq", &luna_wrapper_b2ManifoldPoint::_bind___eq},
	{"fromVoid", &luna_wrapper_b2ManifoldPoint::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2ManifoldPoint::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2ManifoldPoint >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2ManifoldPoint >::enumValues[] = {
	{0,0}
};


