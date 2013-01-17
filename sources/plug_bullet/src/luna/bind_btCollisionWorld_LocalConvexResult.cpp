#include <plug_common.h>

class luna_wrapper_btCollisionWorld_LocalConvexResult {
public:
	typedef Luna< btCollisionWorld::LocalConvexResult > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,34210430) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btCollisionWorld::LocalConvexResult*)");
		}

		btCollisionWorld::LocalConvexResult* rhs =(Luna< btCollisionWorld::LocalConvexResult >::check(L,2));
		btCollisionWorld::LocalConvexResult* self=(Luna< btCollisionWorld::LocalConvexResult >::check(L,1));
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

		btCollisionWorld::LocalConvexResult* self=(Luna< btCollisionWorld::LocalConvexResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btCollisionWorld::LocalConvexResult");
		
		return luna_dynamicCast(L,converters,"btCollisionWorld::LocalConvexResult",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,85758361)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,68696671)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getM_hitCollisionObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_localShapeInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_hitNormalLocal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_hitPointLocal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_hitFraction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_localShapeInfo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,68696671)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_hitNormalLocal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_hitPointLocal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_hitFraction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btCollisionWorld::LocalConvexResult::LocalConvexResult(const btCollisionObject * hitCollisionObject, btCollisionWorld::LocalShapeInfo * localShapeInfo, const btVector3 & hitNormalLocal, const btVector3 & hitPointLocal, float hitFraction)
	static btCollisionWorld::LocalConvexResult* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionWorld::LocalConvexResult::LocalConvexResult(const btCollisionObject * hitCollisionObject, btCollisionWorld::LocalShapeInfo * localShapeInfo, const btVector3 & hitNormalLocal, const btVector3 & hitPointLocal, float hitFraction) function, expected prototype:\nbtCollisionWorld::LocalConvexResult::LocalConvexResult(const btCollisionObject * hitCollisionObject, btCollisionWorld::LocalShapeInfo * localShapeInfo, const btVector3 & hitNormalLocal, const btVector3 & hitPointLocal, float hitFraction)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 68696671\narg 3 ID = 91544891\narg 4 ID = 91544891\n");
		}

		const btCollisionObject* hitCollisionObject=(Luna< btCollisionObject >::check(L,1));
		btCollisionWorld::LocalShapeInfo* localShapeInfo=(Luna< btCollisionWorld::LocalShapeInfo >::check(L,2));
		const btVector3* hitNormalLocal_ptr=(Luna< btVector3 >::check(L,3));
		if( !hitNormalLocal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg hitNormalLocal in btCollisionWorld::LocalConvexResult::LocalConvexResult function");
		}
		const btVector3 & hitNormalLocal=*hitNormalLocal_ptr;
		const btVector3* hitPointLocal_ptr=(Luna< btVector3 >::check(L,4));
		if( !hitPointLocal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg hitPointLocal in btCollisionWorld::LocalConvexResult::LocalConvexResult function");
		}
		const btVector3 & hitPointLocal=*hitPointLocal_ptr;
		float hitFraction=(float)lua_tonumber(L,5);

		return new btCollisionWorld::LocalConvexResult(hitCollisionObject, localShapeInfo, hitNormalLocal, hitPointLocal, hitFraction);
	}


	// Function binds:
	// const btCollisionObject * btCollisionWorld::LocalConvexResult::m_hitCollisionObject()
	static int _bind_getM_hitCollisionObject(lua_State *L) {
		if (!_lg_typecheck_getM_hitCollisionObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btCollisionObject * btCollisionWorld::LocalConvexResult::m_hitCollisionObject() function, expected prototype:\nconst btCollisionObject * btCollisionWorld::LocalConvexResult::m_hitCollisionObject()\nClass arguments details:\n");
		}


		btCollisionWorld::LocalConvexResult* self=(Luna< btCollisionWorld::LocalConvexResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btCollisionObject * btCollisionWorld::LocalConvexResult::m_hitCollisionObject(). Got : '%s'",typeid(Luna< btCollisionWorld::LocalConvexResult >::check(L,1)).name());
		}
		const btCollisionObject * lret = self->m_hitCollisionObject;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionObject >::push(L,lret,false);

		return 1;
	}

	// btCollisionWorld::LocalShapeInfo * btCollisionWorld::LocalConvexResult::m_localShapeInfo()
	static int _bind_getM_localShapeInfo(lua_State *L) {
		if (!_lg_typecheck_getM_localShapeInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionWorld::LocalShapeInfo * btCollisionWorld::LocalConvexResult::m_localShapeInfo() function, expected prototype:\nbtCollisionWorld::LocalShapeInfo * btCollisionWorld::LocalConvexResult::m_localShapeInfo()\nClass arguments details:\n");
		}


		btCollisionWorld::LocalConvexResult* self=(Luna< btCollisionWorld::LocalConvexResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCollisionWorld::LocalShapeInfo * btCollisionWorld::LocalConvexResult::m_localShapeInfo(). Got : '%s'",typeid(Luna< btCollisionWorld::LocalConvexResult >::check(L,1)).name());
		}
		btCollisionWorld::LocalShapeInfo * lret = self->m_localShapeInfo;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionWorld::LocalShapeInfo >::push(L,lret,false);

		return 1;
	}

	// btVector3 btCollisionWorld::LocalConvexResult::m_hitNormalLocal()
	static int _bind_getM_hitNormalLocal(lua_State *L) {
		if (!_lg_typecheck_getM_hitNormalLocal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btCollisionWorld::LocalConvexResult::m_hitNormalLocal() function, expected prototype:\nbtVector3 btCollisionWorld::LocalConvexResult::m_hitNormalLocal()\nClass arguments details:\n");
		}


		btCollisionWorld::LocalConvexResult* self=(Luna< btCollisionWorld::LocalConvexResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btCollisionWorld::LocalConvexResult::m_hitNormalLocal(). Got : '%s'",typeid(Luna< btCollisionWorld::LocalConvexResult >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_hitNormalLocal;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btCollisionWorld::LocalConvexResult::m_hitPointLocal()
	static int _bind_getM_hitPointLocal(lua_State *L) {
		if (!_lg_typecheck_getM_hitPointLocal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btCollisionWorld::LocalConvexResult::m_hitPointLocal() function, expected prototype:\nbtVector3 btCollisionWorld::LocalConvexResult::m_hitPointLocal()\nClass arguments details:\n");
		}


		btCollisionWorld::LocalConvexResult* self=(Luna< btCollisionWorld::LocalConvexResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btCollisionWorld::LocalConvexResult::m_hitPointLocal(). Got : '%s'",typeid(Luna< btCollisionWorld::LocalConvexResult >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_hitPointLocal;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// float btCollisionWorld::LocalConvexResult::m_hitFraction()
	static int _bind_getM_hitFraction(lua_State *L) {
		if (!_lg_typecheck_getM_hitFraction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCollisionWorld::LocalConvexResult::m_hitFraction() function, expected prototype:\nfloat btCollisionWorld::LocalConvexResult::m_hitFraction()\nClass arguments details:\n");
		}


		btCollisionWorld::LocalConvexResult* self=(Luna< btCollisionWorld::LocalConvexResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCollisionWorld::LocalConvexResult::m_hitFraction(). Got : '%s'",typeid(Luna< btCollisionWorld::LocalConvexResult >::check(L,1)).name());
		}
		float lret = self->m_hitFraction;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btCollisionWorld::LocalConvexResult::m_localShapeInfo(btCollisionWorld::LocalShapeInfo * value)
	static int _bind_setM_localShapeInfo(lua_State *L) {
		if (!_lg_typecheck_setM_localShapeInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::LocalConvexResult::m_localShapeInfo(btCollisionWorld::LocalShapeInfo * value) function, expected prototype:\nvoid btCollisionWorld::LocalConvexResult::m_localShapeInfo(btCollisionWorld::LocalShapeInfo * value)\nClass arguments details:\narg 1 ID = 68696671\n");
		}

		btCollisionWorld::LocalShapeInfo* value=(Luna< btCollisionWorld::LocalShapeInfo >::check(L,2));

		btCollisionWorld::LocalConvexResult* self=(Luna< btCollisionWorld::LocalConvexResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::LocalConvexResult::m_localShapeInfo(btCollisionWorld::LocalShapeInfo *). Got : '%s'",typeid(Luna< btCollisionWorld::LocalConvexResult >::check(L,1)).name());
		}
		self->m_localShapeInfo = value;

		return 0;
	}

	// void btCollisionWorld::LocalConvexResult::m_hitNormalLocal(btVector3 value)
	static int _bind_setM_hitNormalLocal(lua_State *L) {
		if (!_lg_typecheck_setM_hitNormalLocal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::LocalConvexResult::m_hitNormalLocal(btVector3 value) function, expected prototype:\nvoid btCollisionWorld::LocalConvexResult::m_hitNormalLocal(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btCollisionWorld::LocalConvexResult::m_hitNormalLocal function");
		}
		btVector3 value=*value_ptr;

		btCollisionWorld::LocalConvexResult* self=(Luna< btCollisionWorld::LocalConvexResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::LocalConvexResult::m_hitNormalLocal(btVector3). Got : '%s'",typeid(Luna< btCollisionWorld::LocalConvexResult >::check(L,1)).name());
		}
		self->m_hitNormalLocal = value;

		return 0;
	}

	// void btCollisionWorld::LocalConvexResult::m_hitPointLocal(btVector3 value)
	static int _bind_setM_hitPointLocal(lua_State *L) {
		if (!_lg_typecheck_setM_hitPointLocal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::LocalConvexResult::m_hitPointLocal(btVector3 value) function, expected prototype:\nvoid btCollisionWorld::LocalConvexResult::m_hitPointLocal(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btCollisionWorld::LocalConvexResult::m_hitPointLocal function");
		}
		btVector3 value=*value_ptr;

		btCollisionWorld::LocalConvexResult* self=(Luna< btCollisionWorld::LocalConvexResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::LocalConvexResult::m_hitPointLocal(btVector3). Got : '%s'",typeid(Luna< btCollisionWorld::LocalConvexResult >::check(L,1)).name());
		}
		self->m_hitPointLocal = value;

		return 0;
	}

	// void btCollisionWorld::LocalConvexResult::m_hitFraction(float value)
	static int _bind_setM_hitFraction(lua_State *L) {
		if (!_lg_typecheck_setM_hitFraction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionWorld::LocalConvexResult::m_hitFraction(float value) function, expected prototype:\nvoid btCollisionWorld::LocalConvexResult::m_hitFraction(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btCollisionWorld::LocalConvexResult* self=(Luna< btCollisionWorld::LocalConvexResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionWorld::LocalConvexResult::m_hitFraction(float). Got : '%s'",typeid(Luna< btCollisionWorld::LocalConvexResult >::check(L,1)).name());
		}
		self->m_hitFraction = value;

		return 0;
	}


	// Operator binds:

};

btCollisionWorld::LocalConvexResult* LunaTraits< btCollisionWorld::LocalConvexResult >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btCollisionWorld_LocalConvexResult::_bind_ctor(L);
}

void LunaTraits< btCollisionWorld::LocalConvexResult >::_bind_dtor(btCollisionWorld::LocalConvexResult* obj) {
	delete obj;
}

const char LunaTraits< btCollisionWorld::LocalConvexResult >::className[] = "btCollisionWorld_LocalConvexResult";
const char LunaTraits< btCollisionWorld::LocalConvexResult >::fullName[] = "btCollisionWorld::LocalConvexResult";
const char LunaTraits< btCollisionWorld::LocalConvexResult >::moduleName[] = "btCollisionWorld";
const char* LunaTraits< btCollisionWorld::LocalConvexResult >::parents[] = {0};
const int LunaTraits< btCollisionWorld::LocalConvexResult >::hash = 34210430;
const int LunaTraits< btCollisionWorld::LocalConvexResult >::uniqueIDs[] = {34210430,0};

luna_RegType LunaTraits< btCollisionWorld::LocalConvexResult >::methods[] = {
	{"getM_hitCollisionObject", &luna_wrapper_btCollisionWorld_LocalConvexResult::_bind_getM_hitCollisionObject},
	{"getM_localShapeInfo", &luna_wrapper_btCollisionWorld_LocalConvexResult::_bind_getM_localShapeInfo},
	{"getM_hitNormalLocal", &luna_wrapper_btCollisionWorld_LocalConvexResult::_bind_getM_hitNormalLocal},
	{"getM_hitPointLocal", &luna_wrapper_btCollisionWorld_LocalConvexResult::_bind_getM_hitPointLocal},
	{"getM_hitFraction", &luna_wrapper_btCollisionWorld_LocalConvexResult::_bind_getM_hitFraction},
	{"setM_localShapeInfo", &luna_wrapper_btCollisionWorld_LocalConvexResult::_bind_setM_localShapeInfo},
	{"setM_hitNormalLocal", &luna_wrapper_btCollisionWorld_LocalConvexResult::_bind_setM_hitNormalLocal},
	{"setM_hitPointLocal", &luna_wrapper_btCollisionWorld_LocalConvexResult::_bind_setM_hitPointLocal},
	{"setM_hitFraction", &luna_wrapper_btCollisionWorld_LocalConvexResult::_bind_setM_hitFraction},
	{"dynCast", &luna_wrapper_btCollisionWorld_LocalConvexResult::_bind_dynCast},
	{"__eq", &luna_wrapper_btCollisionWorld_LocalConvexResult::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btCollisionWorld::LocalConvexResult >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btCollisionWorld::LocalConvexResult >::enumValues[] = {
	{0,0}
};


