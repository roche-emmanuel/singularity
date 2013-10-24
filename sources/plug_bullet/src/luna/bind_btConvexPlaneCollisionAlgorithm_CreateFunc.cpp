#include <plug_common.h>

#include <luna/wrappers/wrapper_btConvexPlaneCollisionAlgorithm_CreateFunc.h>

class luna_wrapper_btConvexPlaneCollisionAlgorithm_CreateFunc {
public:
	typedef Luna< btConvexPlaneCollisionAlgorithm::CreateFunc > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btCollisionAlgorithmCreateFunc* self=(Luna< btCollisionAlgorithmCreateFunc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btCollisionAlgorithmCreateFunc,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
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

		btConvexPlaneCollisionAlgorithm::CreateFunc* self= (btConvexPlaneCollisionAlgorithm::CreateFunc*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btConvexPlaneCollisionAlgorithm::CreateFunc >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,67911425) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btCollisionAlgorithmCreateFunc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_btCollisionAlgorithmCreateFunc(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btConvexPlaneCollisionAlgorithm::CreateFunc* ptr= dynamic_cast< btConvexPlaneCollisionAlgorithm::CreateFunc* >(Luna< btCollisionAlgorithmCreateFunc >::check(L,1));
		btConvexPlaneCollisionAlgorithm::CreateFunc* ptr= luna_caster< btCollisionAlgorithmCreateFunc, btConvexPlaneCollisionAlgorithm::CreateFunc >::cast(Luna< btCollisionAlgorithmCreateFunc >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btConvexPlaneCollisionAlgorithm::CreateFunc >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_CreateCollisionAlgorithm(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,61780402) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32391296)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,32391296)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumPerturbationIterations(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMinimumPointsPerturbationThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNumPerturbationIterations(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMinimumPointsPerturbationThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_CreateCollisionAlgorithm(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,61780402) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32391296)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,32391296)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btConvexPlaneCollisionAlgorithm::CreateFunc::CreateFunc()
	static btConvexPlaneCollisionAlgorithm::CreateFunc* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in btConvexPlaneCollisionAlgorithm::CreateFunc::CreateFunc() function, expected prototype:\nbtConvexPlaneCollisionAlgorithm::CreateFunc::CreateFunc()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new btConvexPlaneCollisionAlgorithm::CreateFunc();
	}

	// btConvexPlaneCollisionAlgorithm::CreateFunc::CreateFunc(lua_Table * data)
	static btConvexPlaneCollisionAlgorithm::CreateFunc* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in btConvexPlaneCollisionAlgorithm::CreateFunc::CreateFunc(lua_Table * data) function, expected prototype:\nbtConvexPlaneCollisionAlgorithm::CreateFunc::CreateFunc(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_btConvexPlaneCollisionAlgorithm_CreateFunc(L,NULL);
	}

	// Overload binder for btConvexPlaneCollisionAlgorithm::CreateFunc::CreateFunc
	static btConvexPlaneCollisionAlgorithm::CreateFunc* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function CreateFunc, cannot match any of the overloads for function CreateFunc:\n  CreateFunc()\n  CreateFunc(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// btCollisionAlgorithm * btConvexPlaneCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)
	static int _bind_CreateCollisionAlgorithm(lua_State *L) {
		if (!_lg_typecheck_CreateCollisionAlgorithm(L)) {
			luaL_error(L, "luna typecheck failed in btCollisionAlgorithm * btConvexPlaneCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap) function, expected prototype:\nbtCollisionAlgorithm * btConvexPlaneCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)\nClass arguments details:\narg 1 ID = 61780402\narg 2 ID = 32391296\narg 3 ID = 32391296\n\n%s",luna_dumpStack(L).c_str());
		}

		btCollisionAlgorithmConstructionInfo* ci_ptr=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,2));
		if( !ci_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ci in btConvexPlaneCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm function");
		}
		btCollisionAlgorithmConstructionInfo & ci=*ci_ptr;
		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,4));

		btConvexPlaneCollisionAlgorithm::CreateFunc* self=Luna< btCollisionAlgorithmCreateFunc >::checkSubType< btConvexPlaneCollisionAlgorithm::CreateFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btCollisionAlgorithm * btConvexPlaneCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo &, const btCollisionObjectWrapper *, const btCollisionObjectWrapper *). Got : '%s'\n%s",typeid(Luna< btCollisionAlgorithmCreateFunc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btCollisionAlgorithm * lret = self->CreateCollisionAlgorithm(ci, body0Wrap, body1Wrap);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionAlgorithm >::push(L,lret,false);

		return 1;
	}

	// int btConvexPlaneCollisionAlgorithm::CreateFunc::m_numPerturbationIterations()
	static int _bind_getNumPerturbationIterations(lua_State *L) {
		if (!_lg_typecheck_getNumPerturbationIterations(L)) {
			luaL_error(L, "luna typecheck failed in int btConvexPlaneCollisionAlgorithm::CreateFunc::m_numPerturbationIterations() function, expected prototype:\nint btConvexPlaneCollisionAlgorithm::CreateFunc::m_numPerturbationIterations()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btConvexPlaneCollisionAlgorithm::CreateFunc* self=Luna< btCollisionAlgorithmCreateFunc >::checkSubType< btConvexPlaneCollisionAlgorithm::CreateFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btConvexPlaneCollisionAlgorithm::CreateFunc::m_numPerturbationIterations(). Got : '%s'\n%s",typeid(Luna< btCollisionAlgorithmCreateFunc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_numPerturbationIterations;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btConvexPlaneCollisionAlgorithm::CreateFunc::m_minimumPointsPerturbationThreshold()
	static int _bind_getMinimumPointsPerturbationThreshold(lua_State *L) {
		if (!_lg_typecheck_getMinimumPointsPerturbationThreshold(L)) {
			luaL_error(L, "luna typecheck failed in int btConvexPlaneCollisionAlgorithm::CreateFunc::m_minimumPointsPerturbationThreshold() function, expected prototype:\nint btConvexPlaneCollisionAlgorithm::CreateFunc::m_minimumPointsPerturbationThreshold()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btConvexPlaneCollisionAlgorithm::CreateFunc* self=Luna< btCollisionAlgorithmCreateFunc >::checkSubType< btConvexPlaneCollisionAlgorithm::CreateFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btConvexPlaneCollisionAlgorithm::CreateFunc::m_minimumPointsPerturbationThreshold(). Got : '%s'\n%s",typeid(Luna< btCollisionAlgorithmCreateFunc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_minimumPointsPerturbationThreshold;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConvexPlaneCollisionAlgorithm::CreateFunc::m_numPerturbationIterations(int value)
	static int _bind_setNumPerturbationIterations(lua_State *L) {
		if (!_lg_typecheck_setNumPerturbationIterations(L)) {
			luaL_error(L, "luna typecheck failed in void btConvexPlaneCollisionAlgorithm::CreateFunc::m_numPerturbationIterations(int value) function, expected prototype:\nvoid btConvexPlaneCollisionAlgorithm::CreateFunc::m_numPerturbationIterations(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btConvexPlaneCollisionAlgorithm::CreateFunc* self=Luna< btCollisionAlgorithmCreateFunc >::checkSubType< btConvexPlaneCollisionAlgorithm::CreateFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btConvexPlaneCollisionAlgorithm::CreateFunc::m_numPerturbationIterations(int). Got : '%s'\n%s",typeid(Luna< btCollisionAlgorithmCreateFunc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_numPerturbationIterations = value;

		return 0;
	}

	// void btConvexPlaneCollisionAlgorithm::CreateFunc::m_minimumPointsPerturbationThreshold(int value)
	static int _bind_setMinimumPointsPerturbationThreshold(lua_State *L) {
		if (!_lg_typecheck_setMinimumPointsPerturbationThreshold(L)) {
			luaL_error(L, "luna typecheck failed in void btConvexPlaneCollisionAlgorithm::CreateFunc::m_minimumPointsPerturbationThreshold(int value) function, expected prototype:\nvoid btConvexPlaneCollisionAlgorithm::CreateFunc::m_minimumPointsPerturbationThreshold(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btConvexPlaneCollisionAlgorithm::CreateFunc* self=Luna< btCollisionAlgorithmCreateFunc >::checkSubType< btConvexPlaneCollisionAlgorithm::CreateFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btConvexPlaneCollisionAlgorithm::CreateFunc::m_minimumPointsPerturbationThreshold(int). Got : '%s'\n%s",typeid(Luna< btCollisionAlgorithmCreateFunc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_minimumPointsPerturbationThreshold = value;

		return 0;
	}

	// btCollisionAlgorithm * btConvexPlaneCollisionAlgorithm::CreateFunc::base_CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)
	static int _bind_base_CreateCollisionAlgorithm(lua_State *L) {
		if (!_lg_typecheck_base_CreateCollisionAlgorithm(L)) {
			luaL_error(L, "luna typecheck failed in btCollisionAlgorithm * btConvexPlaneCollisionAlgorithm::CreateFunc::base_CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap) function, expected prototype:\nbtCollisionAlgorithm * btConvexPlaneCollisionAlgorithm::CreateFunc::base_CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)\nClass arguments details:\narg 1 ID = 61780402\narg 2 ID = 32391296\narg 3 ID = 32391296\n\n%s",luna_dumpStack(L).c_str());
		}

		btCollisionAlgorithmConstructionInfo* ci_ptr=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,2));
		if( !ci_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ci in btConvexPlaneCollisionAlgorithm::CreateFunc::base_CreateCollisionAlgorithm function");
		}
		btCollisionAlgorithmConstructionInfo & ci=*ci_ptr;
		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,4));

		btConvexPlaneCollisionAlgorithm::CreateFunc* self=Luna< btCollisionAlgorithmCreateFunc >::checkSubType< btConvexPlaneCollisionAlgorithm::CreateFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btCollisionAlgorithm * btConvexPlaneCollisionAlgorithm::CreateFunc::base_CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo &, const btCollisionObjectWrapper *, const btCollisionObjectWrapper *). Got : '%s'\n%s",typeid(Luna< btCollisionAlgorithmCreateFunc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btCollisionAlgorithm * lret = self->CreateFunc::CreateCollisionAlgorithm(ci, body0Wrap, body1Wrap);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionAlgorithm >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

btConvexPlaneCollisionAlgorithm::CreateFunc* LunaTraits< btConvexPlaneCollisionAlgorithm::CreateFunc >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btConvexPlaneCollisionAlgorithm_CreateFunc::_bind_ctor(L);
}

void LunaTraits< btConvexPlaneCollisionAlgorithm::CreateFunc >::_bind_dtor(btConvexPlaneCollisionAlgorithm::CreateFunc* obj) {
	delete obj;
}

const char LunaTraits< btConvexPlaneCollisionAlgorithm::CreateFunc >::className[] = "btConvexPlaneCollisionAlgorithm_CreateFunc";
const char LunaTraits< btConvexPlaneCollisionAlgorithm::CreateFunc >::fullName[] = "btConvexPlaneCollisionAlgorithm::CreateFunc";
const char LunaTraits< btConvexPlaneCollisionAlgorithm::CreateFunc >::moduleName[] = "bullet";
const char* LunaTraits< btConvexPlaneCollisionAlgorithm::CreateFunc >::parents[] = {"bullet.btCollisionAlgorithmCreateFunc", 0};
const int LunaTraits< btConvexPlaneCollisionAlgorithm::CreateFunc >::hash = 35414750;
const int LunaTraits< btConvexPlaneCollisionAlgorithm::CreateFunc >::uniqueIDs[] = {67911425,0};

luna_RegType LunaTraits< btConvexPlaneCollisionAlgorithm::CreateFunc >::methods[] = {
	{"CreateCollisionAlgorithm", &luna_wrapper_btConvexPlaneCollisionAlgorithm_CreateFunc::_bind_CreateCollisionAlgorithm},
	{"getNumPerturbationIterations", &luna_wrapper_btConvexPlaneCollisionAlgorithm_CreateFunc::_bind_getNumPerturbationIterations},
	{"getMinimumPointsPerturbationThreshold", &luna_wrapper_btConvexPlaneCollisionAlgorithm_CreateFunc::_bind_getMinimumPointsPerturbationThreshold},
	{"setNumPerturbationIterations", &luna_wrapper_btConvexPlaneCollisionAlgorithm_CreateFunc::_bind_setNumPerturbationIterations},
	{"setMinimumPointsPerturbationThreshold", &luna_wrapper_btConvexPlaneCollisionAlgorithm_CreateFunc::_bind_setMinimumPointsPerturbationThreshold},
	{"base_CreateCollisionAlgorithm", &luna_wrapper_btConvexPlaneCollisionAlgorithm_CreateFunc::_bind_base_CreateCollisionAlgorithm},
	{"fromVoid", &luna_wrapper_btConvexPlaneCollisionAlgorithm_CreateFunc::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btConvexPlaneCollisionAlgorithm_CreateFunc::_bind_asVoid},
	{"getTable", &luna_wrapper_btConvexPlaneCollisionAlgorithm_CreateFunc::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btConvexPlaneCollisionAlgorithm::CreateFunc >::converters[] = {
	{"btCollisionAlgorithmCreateFunc", &luna_wrapper_btConvexPlaneCollisionAlgorithm_CreateFunc::_cast_from_btCollisionAlgorithmCreateFunc},
	{0,0}
};

luna_RegEnumType LunaTraits< btConvexPlaneCollisionAlgorithm::CreateFunc >::enumValues[] = {
	{0,0}
};


