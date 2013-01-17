#include <plug_common.h>

#include <luna/wrappers/wrapper_btPointCollector.h>

class luna_wrapper_btPointCollector {
public:
	typedef Luna< btPointCollector > luna_t;

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
		//btPointCollector* ptr= dynamic_cast< btPointCollector* >(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1));
		btPointCollector* ptr= luna_caster< btDiscreteCollisionDetectorInterface::Result, btPointCollector >::cast(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btPointCollector >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setShapeIdentifiersA(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setShapeIdentifiersB(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addContactPoint(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getM_normalOnBInWorld(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_pointInWorld(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_distance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_hasResult(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_normalOnBInWorld(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_pointInWorld(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_distance(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_hasResult(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setShapeIdentifiersA(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setShapeIdentifiersB(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
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
	// btPointCollector::btPointCollector()
	static btPointCollector* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btPointCollector::btPointCollector() function, expected prototype:\nbtPointCollector::btPointCollector()\nClass arguments details:\n");
		}


		return new btPointCollector();
	}

	// btPointCollector::btPointCollector(lua_Table * data)
	static btPointCollector* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btPointCollector::btPointCollector(lua_Table * data) function, expected prototype:\nbtPointCollector::btPointCollector(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btPointCollector(L,NULL);
	}

	// Overload binder for btPointCollector::btPointCollector
	static btPointCollector* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btPointCollector, cannot match any of the overloads for function btPointCollector:\n  btPointCollector()\n  btPointCollector(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void btPointCollector::setShapeIdentifiersA(int partId0, int index0)
	static int _bind_setShapeIdentifiersA(lua_State *L) {
		if (!_lg_typecheck_setShapeIdentifiersA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPointCollector::setShapeIdentifiersA(int partId0, int index0) function, expected prototype:\nvoid btPointCollector::setShapeIdentifiersA(int partId0, int index0)\nClass arguments details:\n");
		}

		int partId0=(int)lua_tointeger(L,2);
		int index0=(int)lua_tointeger(L,3);

		btPointCollector* self=Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btPointCollector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPointCollector::setShapeIdentifiersA(int, int). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name());
		}
		self->setShapeIdentifiersA(partId0, index0);

		return 0;
	}

	// void btPointCollector::setShapeIdentifiersB(int partId1, int index1)
	static int _bind_setShapeIdentifiersB(lua_State *L) {
		if (!_lg_typecheck_setShapeIdentifiersB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPointCollector::setShapeIdentifiersB(int partId1, int index1) function, expected prototype:\nvoid btPointCollector::setShapeIdentifiersB(int partId1, int index1)\nClass arguments details:\n");
		}

		int partId1=(int)lua_tointeger(L,2);
		int index1=(int)lua_tointeger(L,3);

		btPointCollector* self=Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btPointCollector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPointCollector::setShapeIdentifiersB(int, int). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name());
		}
		self->setShapeIdentifiersB(partId1, index1);

		return 0;
	}

	// void btPointCollector::addContactPoint(const btVector3 & normalOnBInWorld, const btVector3 & pointInWorld, float depth)
	static int _bind_addContactPoint(lua_State *L) {
		if (!_lg_typecheck_addContactPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPointCollector::addContactPoint(const btVector3 & normalOnBInWorld, const btVector3 & pointInWorld, float depth) function, expected prototype:\nvoid btPointCollector::addContactPoint(const btVector3 & normalOnBInWorld, const btVector3 & pointInWorld, float depth)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* normalOnBInWorld_ptr=(Luna< btVector3 >::check(L,2));
		if( !normalOnBInWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normalOnBInWorld in btPointCollector::addContactPoint function");
		}
		const btVector3 & normalOnBInWorld=*normalOnBInWorld_ptr;
		const btVector3* pointInWorld_ptr=(Luna< btVector3 >::check(L,3));
		if( !pointInWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pointInWorld in btPointCollector::addContactPoint function");
		}
		const btVector3 & pointInWorld=*pointInWorld_ptr;
		float depth=(float)lua_tonumber(L,4);

		btPointCollector* self=Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btPointCollector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPointCollector::addContactPoint(const btVector3 &, const btVector3 &, float). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name());
		}
		self->addContactPoint(normalOnBInWorld, pointInWorld, depth);

		return 0;
	}

	// btVector3 btPointCollector::m_normalOnBInWorld()
	static int _bind_getM_normalOnBInWorld(lua_State *L) {
		if (!_lg_typecheck_getM_normalOnBInWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btPointCollector::m_normalOnBInWorld() function, expected prototype:\nbtVector3 btPointCollector::m_normalOnBInWorld()\nClass arguments details:\n");
		}


		btPointCollector* self=Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btPointCollector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btPointCollector::m_normalOnBInWorld(). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_normalOnBInWorld;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btPointCollector::m_pointInWorld()
	static int _bind_getM_pointInWorld(lua_State *L) {
		if (!_lg_typecheck_getM_pointInWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btPointCollector::m_pointInWorld() function, expected prototype:\nbtVector3 btPointCollector::m_pointInWorld()\nClass arguments details:\n");
		}


		btPointCollector* self=Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btPointCollector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btPointCollector::m_pointInWorld(). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_pointInWorld;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// float btPointCollector::m_distance()
	static int _bind_getM_distance(lua_State *L) {
		if (!_lg_typecheck_getM_distance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btPointCollector::m_distance() function, expected prototype:\nfloat btPointCollector::m_distance()\nClass arguments details:\n");
		}


		btPointCollector* self=Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btPointCollector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btPointCollector::m_distance(). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name());
		}
		float lret = self->m_distance;
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btPointCollector::m_hasResult()
	static int _bind_getM_hasResult(lua_State *L) {
		if (!_lg_typecheck_getM_hasResult(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btPointCollector::m_hasResult() function, expected prototype:\nbool btPointCollector::m_hasResult()\nClass arguments details:\n");
		}


		btPointCollector* self=Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btPointCollector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btPointCollector::m_hasResult(). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name());
		}
		bool lret = self->m_hasResult;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btPointCollector::m_normalOnBInWorld(btVector3 value)
	static int _bind_setM_normalOnBInWorld(lua_State *L) {
		if (!_lg_typecheck_setM_normalOnBInWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPointCollector::m_normalOnBInWorld(btVector3 value) function, expected prototype:\nvoid btPointCollector::m_normalOnBInWorld(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btPointCollector::m_normalOnBInWorld function");
		}
		btVector3 value=*value_ptr;

		btPointCollector* self=Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btPointCollector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPointCollector::m_normalOnBInWorld(btVector3). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name());
		}
		self->m_normalOnBInWorld = value;

		return 0;
	}

	// void btPointCollector::m_pointInWorld(btVector3 value)
	static int _bind_setM_pointInWorld(lua_State *L) {
		if (!_lg_typecheck_setM_pointInWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPointCollector::m_pointInWorld(btVector3 value) function, expected prototype:\nvoid btPointCollector::m_pointInWorld(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btPointCollector::m_pointInWorld function");
		}
		btVector3 value=*value_ptr;

		btPointCollector* self=Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btPointCollector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPointCollector::m_pointInWorld(btVector3). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name());
		}
		self->m_pointInWorld = value;

		return 0;
	}

	// void btPointCollector::m_distance(float value)
	static int _bind_setM_distance(lua_State *L) {
		if (!_lg_typecheck_setM_distance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPointCollector::m_distance(float value) function, expected prototype:\nvoid btPointCollector::m_distance(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btPointCollector* self=Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btPointCollector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPointCollector::m_distance(float). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name());
		}
		self->m_distance = value;

		return 0;
	}

	// void btPointCollector::m_hasResult(bool value)
	static int _bind_setM_hasResult(lua_State *L) {
		if (!_lg_typecheck_setM_hasResult(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPointCollector::m_hasResult(bool value) function, expected prototype:\nvoid btPointCollector::m_hasResult(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		btPointCollector* self=Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btPointCollector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPointCollector::m_hasResult(bool). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name());
		}
		self->m_hasResult = value;

		return 0;
	}

	// void btPointCollector::base_setShapeIdentifiersA(int partId0, int index0)
	static int _bind_base_setShapeIdentifiersA(lua_State *L) {
		if (!_lg_typecheck_base_setShapeIdentifiersA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPointCollector::base_setShapeIdentifiersA(int partId0, int index0) function, expected prototype:\nvoid btPointCollector::base_setShapeIdentifiersA(int partId0, int index0)\nClass arguments details:\n");
		}

		int partId0=(int)lua_tointeger(L,2);
		int index0=(int)lua_tointeger(L,3);

		btPointCollector* self=Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btPointCollector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPointCollector::base_setShapeIdentifiersA(int, int). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name());
		}
		self->btPointCollector::setShapeIdentifiersA(partId0, index0);

		return 0;
	}

	// void btPointCollector::base_setShapeIdentifiersB(int partId1, int index1)
	static int _bind_base_setShapeIdentifiersB(lua_State *L) {
		if (!_lg_typecheck_base_setShapeIdentifiersB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPointCollector::base_setShapeIdentifiersB(int partId1, int index1) function, expected prototype:\nvoid btPointCollector::base_setShapeIdentifiersB(int partId1, int index1)\nClass arguments details:\n");
		}

		int partId1=(int)lua_tointeger(L,2);
		int index1=(int)lua_tointeger(L,3);

		btPointCollector* self=Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btPointCollector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPointCollector::base_setShapeIdentifiersB(int, int). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name());
		}
		self->btPointCollector::setShapeIdentifiersB(partId1, index1);

		return 0;
	}

	// void btPointCollector::base_addContactPoint(const btVector3 & normalOnBInWorld, const btVector3 & pointInWorld, float depth)
	static int _bind_base_addContactPoint(lua_State *L) {
		if (!_lg_typecheck_base_addContactPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPointCollector::base_addContactPoint(const btVector3 & normalOnBInWorld, const btVector3 & pointInWorld, float depth) function, expected prototype:\nvoid btPointCollector::base_addContactPoint(const btVector3 & normalOnBInWorld, const btVector3 & pointInWorld, float depth)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* normalOnBInWorld_ptr=(Luna< btVector3 >::check(L,2));
		if( !normalOnBInWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normalOnBInWorld in btPointCollector::base_addContactPoint function");
		}
		const btVector3 & normalOnBInWorld=*normalOnBInWorld_ptr;
		const btVector3* pointInWorld_ptr=(Luna< btVector3 >::check(L,3));
		if( !pointInWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pointInWorld in btPointCollector::base_addContactPoint function");
		}
		const btVector3 & pointInWorld=*pointInWorld_ptr;
		float depth=(float)lua_tonumber(L,4);

		btPointCollector* self=Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btPointCollector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPointCollector::base_addContactPoint(const btVector3 &, const btVector3 &, float). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name());
		}
		self->btPointCollector::addContactPoint(normalOnBInWorld, pointInWorld, depth);

		return 0;
	}


	// Operator binds:

};

btPointCollector* LunaTraits< btPointCollector >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btPointCollector::_bind_ctor(L);
}

void LunaTraits< btPointCollector >::_bind_dtor(btPointCollector* obj) {
	delete obj;
}

const char LunaTraits< btPointCollector >::className[] = "btPointCollector";
const char LunaTraits< btPointCollector >::fullName[] = "btPointCollector";
const char LunaTraits< btPointCollector >::moduleName[] = "bullet";
const char* LunaTraits< btPointCollector >::parents[] = {"btDiscreteCollisionDetectorInterface.btDiscreteCollisionDetectorInterface_Result", 0};
const int LunaTraits< btPointCollector >::hash = 4766288;
const int LunaTraits< btPointCollector >::uniqueIDs[] = {25324514,0};

luna_RegType LunaTraits< btPointCollector >::methods[] = {
	{"setShapeIdentifiersA", &luna_wrapper_btPointCollector::_bind_setShapeIdentifiersA},
	{"setShapeIdentifiersB", &luna_wrapper_btPointCollector::_bind_setShapeIdentifiersB},
	{"addContactPoint", &luna_wrapper_btPointCollector::_bind_addContactPoint},
	{"getM_normalOnBInWorld", &luna_wrapper_btPointCollector::_bind_getM_normalOnBInWorld},
	{"getM_pointInWorld", &luna_wrapper_btPointCollector::_bind_getM_pointInWorld},
	{"getM_distance", &luna_wrapper_btPointCollector::_bind_getM_distance},
	{"getM_hasResult", &luna_wrapper_btPointCollector::_bind_getM_hasResult},
	{"setM_normalOnBInWorld", &luna_wrapper_btPointCollector::_bind_setM_normalOnBInWorld},
	{"setM_pointInWorld", &luna_wrapper_btPointCollector::_bind_setM_pointInWorld},
	{"setM_distance", &luna_wrapper_btPointCollector::_bind_setM_distance},
	{"setM_hasResult", &luna_wrapper_btPointCollector::_bind_setM_hasResult},
	{"base_setShapeIdentifiersA", &luna_wrapper_btPointCollector::_bind_base_setShapeIdentifiersA},
	{"base_setShapeIdentifiersB", &luna_wrapper_btPointCollector::_bind_base_setShapeIdentifiersB},
	{"base_addContactPoint", &luna_wrapper_btPointCollector::_bind_base_addContactPoint},
	{"__eq", &luna_wrapper_btPointCollector::_bind___eq},
	{"getTable", &luna_wrapper_btPointCollector::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btPointCollector >::converters[] = {
	{"btDiscreteCollisionDetectorInterface::Result", &luna_wrapper_btPointCollector::_cast_from_Result},
	{0,0}
};

luna_RegEnumType LunaTraits< btPointCollector >::enumValues[] = {
	{0,0}
};


