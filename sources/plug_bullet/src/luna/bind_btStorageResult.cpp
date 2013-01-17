#include <plug_common.h>

#include <luna/wrappers/wrapper_btStorageResult.h>

class luna_wrapper_btStorageResult {
public:
	typedef Luna< btStorageResult > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btDiscreteCollisionDetectorInterface::Result* self=(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btDiscreteCollisionDetectorInterface::Result,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,25324514) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btDiscreteCollisionDetectorInterface::Result*)");
		}

		btDiscreteCollisionDetectorInterface::Result* rhs =(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,2));
		btDiscreteCollisionDetectorInterface::Result* self=(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_Result(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btStorageResult* ptr= dynamic_cast< btStorageResult* >(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1));
		btStorageResult* ptr= luna_caster< btDiscreteCollisionDetectorInterface::Result, btStorageResult >::cast(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btStorageResult >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_addContactPoint(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getM_normalOnSurfaceB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_closestPointInB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_distance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_normalOnSurfaceB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_closestPointInB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_distance(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addContactPoint(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btStorageResult::btStorageResult(lua_Table * data)
	static btStorageResult* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btStorageResult::btStorageResult(lua_Table * data) function, expected prototype:\nbtStorageResult::btStorageResult(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btStorageResult(L,NULL);
	}


	// Function binds:
	// void btStorageResult::addContactPoint(const btVector3 & normalOnBInWorld, const btVector3 & pointInWorld, float depth)
	static int _bind_addContactPoint(lua_State *L) {
		if (!_lg_typecheck_addContactPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btStorageResult::addContactPoint(const btVector3 & normalOnBInWorld, const btVector3 & pointInWorld, float depth) function, expected prototype:\nvoid btStorageResult::addContactPoint(const btVector3 & normalOnBInWorld, const btVector3 & pointInWorld, float depth)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* normalOnBInWorld_ptr=(Luna< btVector3 >::check(L,2));
		if( !normalOnBInWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normalOnBInWorld in btStorageResult::addContactPoint function");
		}
		const btVector3 & normalOnBInWorld=*normalOnBInWorld_ptr;
		const btVector3* pointInWorld_ptr=(Luna< btVector3 >::check(L,3));
		if( !pointInWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pointInWorld in btStorageResult::addContactPoint function");
		}
		const btVector3 & pointInWorld=*pointInWorld_ptr;
		float depth=(float)lua_tonumber(L,4);

		btStorageResult* self=Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btStorageResult >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btStorageResult::addContactPoint(const btVector3 &, const btVector3 &, float). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name());
		}
		self->addContactPoint(normalOnBInWorld, pointInWorld, depth);

		return 0;
	}

	// btVector3 btStorageResult::m_normalOnSurfaceB()
	static int _bind_getM_normalOnSurfaceB(lua_State *L) {
		if (!_lg_typecheck_getM_normalOnSurfaceB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btStorageResult::m_normalOnSurfaceB() function, expected prototype:\nbtVector3 btStorageResult::m_normalOnSurfaceB()\nClass arguments details:\n");
		}


		btStorageResult* self=Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btStorageResult >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btStorageResult::m_normalOnSurfaceB(). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_normalOnSurfaceB;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btStorageResult::m_closestPointInB()
	static int _bind_getM_closestPointInB(lua_State *L) {
		if (!_lg_typecheck_getM_closestPointInB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btStorageResult::m_closestPointInB() function, expected prototype:\nbtVector3 btStorageResult::m_closestPointInB()\nClass arguments details:\n");
		}


		btStorageResult* self=Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btStorageResult >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btStorageResult::m_closestPointInB(). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_closestPointInB;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// float btStorageResult::m_distance()
	static int _bind_getM_distance(lua_State *L) {
		if (!_lg_typecheck_getM_distance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btStorageResult::m_distance() function, expected prototype:\nfloat btStorageResult::m_distance()\nClass arguments details:\n");
		}


		btStorageResult* self=Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btStorageResult >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btStorageResult::m_distance(). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name());
		}
		float lret = self->m_distance;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btStorageResult::m_normalOnSurfaceB(btVector3 value)
	static int _bind_setM_normalOnSurfaceB(lua_State *L) {
		if (!_lg_typecheck_setM_normalOnSurfaceB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btStorageResult::m_normalOnSurfaceB(btVector3 value) function, expected prototype:\nvoid btStorageResult::m_normalOnSurfaceB(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btStorageResult::m_normalOnSurfaceB function");
		}
		btVector3 value=*value_ptr;

		btStorageResult* self=Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btStorageResult >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btStorageResult::m_normalOnSurfaceB(btVector3). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name());
		}
		self->m_normalOnSurfaceB = value;

		return 0;
	}

	// void btStorageResult::m_closestPointInB(btVector3 value)
	static int _bind_setM_closestPointInB(lua_State *L) {
		if (!_lg_typecheck_setM_closestPointInB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btStorageResult::m_closestPointInB(btVector3 value) function, expected prototype:\nvoid btStorageResult::m_closestPointInB(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btStorageResult::m_closestPointInB function");
		}
		btVector3 value=*value_ptr;

		btStorageResult* self=Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btStorageResult >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btStorageResult::m_closestPointInB(btVector3). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name());
		}
		self->m_closestPointInB = value;

		return 0;
	}

	// void btStorageResult::m_distance(float value)
	static int _bind_setM_distance(lua_State *L) {
		if (!_lg_typecheck_setM_distance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btStorageResult::m_distance(float value) function, expected prototype:\nvoid btStorageResult::m_distance(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btStorageResult* self=Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btStorageResult >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btStorageResult::m_distance(float). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name());
		}
		self->m_distance = value;

		return 0;
	}

	// void btStorageResult::base_addContactPoint(const btVector3 & normalOnBInWorld, const btVector3 & pointInWorld, float depth)
	static int _bind_base_addContactPoint(lua_State *L) {
		if (!_lg_typecheck_base_addContactPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btStorageResult::base_addContactPoint(const btVector3 & normalOnBInWorld, const btVector3 & pointInWorld, float depth) function, expected prototype:\nvoid btStorageResult::base_addContactPoint(const btVector3 & normalOnBInWorld, const btVector3 & pointInWorld, float depth)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* normalOnBInWorld_ptr=(Luna< btVector3 >::check(L,2));
		if( !normalOnBInWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normalOnBInWorld in btStorageResult::base_addContactPoint function");
		}
		const btVector3 & normalOnBInWorld=*normalOnBInWorld_ptr;
		const btVector3* pointInWorld_ptr=(Luna< btVector3 >::check(L,3));
		if( !pointInWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pointInWorld in btStorageResult::base_addContactPoint function");
		}
		const btVector3 & pointInWorld=*pointInWorld_ptr;
		float depth=(float)lua_tonumber(L,4);

		btStorageResult* self=Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btStorageResult >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btStorageResult::base_addContactPoint(const btVector3 &, const btVector3 &, float). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name());
		}
		self->btStorageResult::addContactPoint(normalOnBInWorld, pointInWorld, depth);

		return 0;
	}


	// Operator binds:

};

btStorageResult* LunaTraits< btStorageResult >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btStorageResult::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void btDiscreteCollisionDetectorInterface::Result::setShapeIdentifiersA(int partId0, int index0)
	// void btDiscreteCollisionDetectorInterface::Result::setShapeIdentifiersB(int partId1, int index1)
}

void LunaTraits< btStorageResult >::_bind_dtor(btStorageResult* obj) {
	delete obj;
}

const char LunaTraits< btStorageResult >::className[] = "btStorageResult";
const char LunaTraits< btStorageResult >::fullName[] = "btStorageResult";
const char LunaTraits< btStorageResult >::moduleName[] = "bullet";
const char* LunaTraits< btStorageResult >::parents[] = {"btDiscreteCollisionDetectorInterface.btDiscreteCollisionDetectorInterface_Result", 0};
const int LunaTraits< btStorageResult >::hash = 56045610;
const int LunaTraits< btStorageResult >::uniqueIDs[] = {25324514,0};

luna_RegType LunaTraits< btStorageResult >::methods[] = {
	{"addContactPoint", &luna_wrapper_btStorageResult::_bind_addContactPoint},
	{"getM_normalOnSurfaceB", &luna_wrapper_btStorageResult::_bind_getM_normalOnSurfaceB},
	{"getM_closestPointInB", &luna_wrapper_btStorageResult::_bind_getM_closestPointInB},
	{"getM_distance", &luna_wrapper_btStorageResult::_bind_getM_distance},
	{"setM_normalOnSurfaceB", &luna_wrapper_btStorageResult::_bind_setM_normalOnSurfaceB},
	{"setM_closestPointInB", &luna_wrapper_btStorageResult::_bind_setM_closestPointInB},
	{"setM_distance", &luna_wrapper_btStorageResult::_bind_setM_distance},
	{"base_addContactPoint", &luna_wrapper_btStorageResult::_bind_base_addContactPoint},
	{"__eq", &luna_wrapper_btStorageResult::_bind___eq},
	{"getTable", &luna_wrapper_btStorageResult::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btStorageResult >::converters[] = {
	{"btDiscreteCollisionDetectorInterface::Result", &luna_wrapper_btStorageResult::_cast_from_Result},
	{0,0}
};

luna_RegEnumType LunaTraits< btStorageResult >::enumValues[] = {
	{0,0}
};


