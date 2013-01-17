#include <plug_common.h>

#include <luna/wrappers/wrapper_btDefaultVehicleRaycaster.h>

class luna_wrapper_btDefaultVehicleRaycaster {
public:
	typedef Luna< btDefaultVehicleRaycaster > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btVehicleRaycaster* self=(Luna< btVehicleRaycaster >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btVehicleRaycaster,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,79998095) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btVehicleRaycaster*)");
		}

		btVehicleRaycaster* rhs =(Luna< btVehicleRaycaster >::check(L,2));
		btVehicleRaycaster* self=(Luna< btVehicleRaycaster >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_btVehicleRaycaster(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btDefaultVehicleRaycaster* ptr= dynamic_cast< btDefaultVehicleRaycaster* >(Luna< btVehicleRaycaster >::check(L,1));
		btDefaultVehicleRaycaster* ptr= luna_caster< btVehicleRaycaster, btDefaultVehicleRaycaster >::cast(Luna< btVehicleRaycaster >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btDefaultVehicleRaycaster >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,62162664)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,62162664)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,2)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_castRay(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,50443956) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_castRay(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,50443956) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btDefaultVehicleRaycaster::btDefaultVehicleRaycaster(btDynamicsWorld * world)
	static btDefaultVehicleRaycaster* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDefaultVehicleRaycaster::btDefaultVehicleRaycaster(btDynamicsWorld * world) function, expected prototype:\nbtDefaultVehicleRaycaster::btDefaultVehicleRaycaster(btDynamicsWorld * world)\nClass arguments details:\narg 1 ID = 62162664\n");
		}

		btDynamicsWorld* world=(Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1));

		return new btDefaultVehicleRaycaster(world);
	}

	// btDefaultVehicleRaycaster::btDefaultVehicleRaycaster(lua_Table * data, btDynamicsWorld * world)
	static btDefaultVehicleRaycaster* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDefaultVehicleRaycaster::btDefaultVehicleRaycaster(lua_Table * data, btDynamicsWorld * world) function, expected prototype:\nbtDefaultVehicleRaycaster::btDefaultVehicleRaycaster(lua_Table * data, btDynamicsWorld * world)\nClass arguments details:\narg 2 ID = 62162664\n");
		}

		btDynamicsWorld* world=(Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,2));

		return new wrapper_btDefaultVehicleRaycaster(L,NULL, world);
	}

	// Overload binder for btDefaultVehicleRaycaster::btDefaultVehicleRaycaster
	static btDefaultVehicleRaycaster* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btDefaultVehicleRaycaster, cannot match any of the overloads for function btDefaultVehicleRaycaster:\n  btDefaultVehicleRaycaster(btDynamicsWorld *)\n  btDefaultVehicleRaycaster(lua_Table *, btDynamicsWorld *)\n");
		return NULL;
	}


	// Function binds:
	// void * btDefaultVehicleRaycaster::castRay(const btVector3 & from, const btVector3 & to, btVehicleRaycaster::btVehicleRaycasterResult & result)
	static int _bind_castRay(lua_State *L) {
		if (!_lg_typecheck_castRay(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * btDefaultVehicleRaycaster::castRay(const btVector3 & from, const btVector3 & to, btVehicleRaycaster::btVehicleRaycasterResult & result) function, expected prototype:\nvoid * btDefaultVehicleRaycaster::castRay(const btVector3 & from, const btVector3 & to, btVehicleRaycaster::btVehicleRaycasterResult & result)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 50443956\n");
		}

		const btVector3* from_ptr=(Luna< btVector3 >::check(L,2));
		if( !from_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg from in btDefaultVehicleRaycaster::castRay function");
		}
		const btVector3 & from=*from_ptr;
		const btVector3* to_ptr=(Luna< btVector3 >::check(L,3));
		if( !to_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg to in btDefaultVehicleRaycaster::castRay function");
		}
		const btVector3 & to=*to_ptr;
		btVehicleRaycaster::btVehicleRaycasterResult* result_ptr=(Luna< btVehicleRaycaster::btVehicleRaycasterResult >::check(L,4));
		if( !result_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg result in btDefaultVehicleRaycaster::castRay function");
		}
		btVehicleRaycaster::btVehicleRaycasterResult & result=*result_ptr;

		btDefaultVehicleRaycaster* self=Luna< btVehicleRaycaster >::checkSubType< btDefaultVehicleRaycaster >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * btDefaultVehicleRaycaster::castRay(const btVector3 &, const btVector3 &, btVehicleRaycaster::btVehicleRaycasterResult &). Got : '%s'",typeid(Luna< btVehicleRaycaster >::check(L,1)).name());
		}
		void * lret = self->castRay(from, to, result);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void * btDefaultVehicleRaycaster::base_castRay(const btVector3 & from, const btVector3 & to, btVehicleRaycaster::btVehicleRaycasterResult & result)
	static int _bind_base_castRay(lua_State *L) {
		if (!_lg_typecheck_base_castRay(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * btDefaultVehicleRaycaster::base_castRay(const btVector3 & from, const btVector3 & to, btVehicleRaycaster::btVehicleRaycasterResult & result) function, expected prototype:\nvoid * btDefaultVehicleRaycaster::base_castRay(const btVector3 & from, const btVector3 & to, btVehicleRaycaster::btVehicleRaycasterResult & result)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 50443956\n");
		}

		const btVector3* from_ptr=(Luna< btVector3 >::check(L,2));
		if( !from_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg from in btDefaultVehicleRaycaster::base_castRay function");
		}
		const btVector3 & from=*from_ptr;
		const btVector3* to_ptr=(Luna< btVector3 >::check(L,3));
		if( !to_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg to in btDefaultVehicleRaycaster::base_castRay function");
		}
		const btVector3 & to=*to_ptr;
		btVehicleRaycaster::btVehicleRaycasterResult* result_ptr=(Luna< btVehicleRaycaster::btVehicleRaycasterResult >::check(L,4));
		if( !result_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg result in btDefaultVehicleRaycaster::base_castRay function");
		}
		btVehicleRaycaster::btVehicleRaycasterResult & result=*result_ptr;

		btDefaultVehicleRaycaster* self=Luna< btVehicleRaycaster >::checkSubType< btDefaultVehicleRaycaster >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * btDefaultVehicleRaycaster::base_castRay(const btVector3 &, const btVector3 &, btVehicleRaycaster::btVehicleRaycasterResult &). Got : '%s'",typeid(Luna< btVehicleRaycaster >::check(L,1)).name());
		}
		void * lret = self->btDefaultVehicleRaycaster::castRay(from, to, result);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

btDefaultVehicleRaycaster* LunaTraits< btDefaultVehicleRaycaster >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btDefaultVehicleRaycaster::_bind_ctor(L);
}

void LunaTraits< btDefaultVehicleRaycaster >::_bind_dtor(btDefaultVehicleRaycaster* obj) {
	delete obj;
}

const char LunaTraits< btDefaultVehicleRaycaster >::className[] = "btDefaultVehicleRaycaster";
const char LunaTraits< btDefaultVehicleRaycaster >::fullName[] = "btDefaultVehicleRaycaster";
const char LunaTraits< btDefaultVehicleRaycaster >::moduleName[] = "bullet";
const char* LunaTraits< btDefaultVehicleRaycaster >::parents[] = {"bullet.btVehicleRaycaster", 0};
const int LunaTraits< btDefaultVehicleRaycaster >::hash = 16258250;
const int LunaTraits< btDefaultVehicleRaycaster >::uniqueIDs[] = {79998095,0};

luna_RegType LunaTraits< btDefaultVehicleRaycaster >::methods[] = {
	{"castRay", &luna_wrapper_btDefaultVehicleRaycaster::_bind_castRay},
	{"base_castRay", &luna_wrapper_btDefaultVehicleRaycaster::_bind_base_castRay},
	{"__eq", &luna_wrapper_btDefaultVehicleRaycaster::_bind___eq},
	{"getTable", &luna_wrapper_btDefaultVehicleRaycaster::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btDefaultVehicleRaycaster >::converters[] = {
	{"btVehicleRaycaster", &luna_wrapper_btDefaultVehicleRaycaster::_cast_from_btVehicleRaycaster},
	{0,0}
};

luna_RegEnumType LunaTraits< btDefaultVehicleRaycaster >::enumValues[] = {
	{0,0}
};


