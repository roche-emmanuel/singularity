#include <plug_common.h>

#include <luna/wrappers/wrapper_btCompoundCollisionAlgorithm_SwappedCreateFunc.h>

class luna_wrapper_btCompoundCollisionAlgorithm_SwappedCreateFunc {
public:
	typedef Luna< btCompoundCollisionAlgorithm::SwappedCreateFunc > luna_t;

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

		btCompoundCollisionAlgorithm::SwappedCreateFunc* self= (btCompoundCollisionAlgorithm::SwappedCreateFunc*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btCompoundCollisionAlgorithm::SwappedCreateFunc >::push(L,self,false);
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
		//btCompoundCollisionAlgorithm::SwappedCreateFunc* ptr= dynamic_cast< btCompoundCollisionAlgorithm::SwappedCreateFunc* >(Luna< btCollisionAlgorithmCreateFunc >::check(L,1));
		btCompoundCollisionAlgorithm::SwappedCreateFunc* ptr= luna_caster< btCollisionAlgorithmCreateFunc, btCompoundCollisionAlgorithm::SwappedCreateFunc >::cast(Luna< btCollisionAlgorithmCreateFunc >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btCompoundCollisionAlgorithm::SwappedCreateFunc >::push(L,ptr,false);
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
	// btCompoundCollisionAlgorithm::SwappedCreateFunc::SwappedCreateFunc()
	static btCompoundCollisionAlgorithm::SwappedCreateFunc* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in btCompoundCollisionAlgorithm::SwappedCreateFunc::SwappedCreateFunc() function, expected prototype:\nbtCompoundCollisionAlgorithm::SwappedCreateFunc::SwappedCreateFunc()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new btCompoundCollisionAlgorithm::SwappedCreateFunc();
	}

	// btCompoundCollisionAlgorithm::SwappedCreateFunc::SwappedCreateFunc(lua_Table * data)
	static btCompoundCollisionAlgorithm::SwappedCreateFunc* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in btCompoundCollisionAlgorithm::SwappedCreateFunc::SwappedCreateFunc(lua_Table * data) function, expected prototype:\nbtCompoundCollisionAlgorithm::SwappedCreateFunc::SwappedCreateFunc(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_btCompoundCollisionAlgorithm_SwappedCreateFunc(L,NULL);
	}

	// Overload binder for btCompoundCollisionAlgorithm::SwappedCreateFunc::SwappedCreateFunc
	static btCompoundCollisionAlgorithm::SwappedCreateFunc* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function SwappedCreateFunc, cannot match any of the overloads for function SwappedCreateFunc:\n  SwappedCreateFunc()\n  SwappedCreateFunc(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// btCollisionAlgorithm * btCompoundCollisionAlgorithm::SwappedCreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)
	static int _bind_CreateCollisionAlgorithm(lua_State *L) {
		if (!_lg_typecheck_CreateCollisionAlgorithm(L)) {
			luaL_error(L, "luna typecheck failed in btCollisionAlgorithm * btCompoundCollisionAlgorithm::SwappedCreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap) function, expected prototype:\nbtCollisionAlgorithm * btCompoundCollisionAlgorithm::SwappedCreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)\nClass arguments details:\narg 1 ID = 61780402\narg 2 ID = 32391296\narg 3 ID = 32391296\n\n%s",luna_dumpStack(L).c_str());
		}

		btCollisionAlgorithmConstructionInfo* ci_ptr=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,2));
		if( !ci_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ci in btCompoundCollisionAlgorithm::SwappedCreateFunc::CreateCollisionAlgorithm function");
		}
		btCollisionAlgorithmConstructionInfo & ci=*ci_ptr;
		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,4));

		btCompoundCollisionAlgorithm::SwappedCreateFunc* self=Luna< btCollisionAlgorithmCreateFunc >::checkSubType< btCompoundCollisionAlgorithm::SwappedCreateFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btCollisionAlgorithm * btCompoundCollisionAlgorithm::SwappedCreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo &, const btCollisionObjectWrapper *, const btCollisionObjectWrapper *). Got : '%s'\n%s",typeid(Luna< btCollisionAlgorithmCreateFunc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btCollisionAlgorithm * lret = self->CreateCollisionAlgorithm(ci, body0Wrap, body1Wrap);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionAlgorithm >::push(L,lret,false);

		return 1;
	}

	// btCollisionAlgorithm * btCompoundCollisionAlgorithm::SwappedCreateFunc::base_CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)
	static int _bind_base_CreateCollisionAlgorithm(lua_State *L) {
		if (!_lg_typecheck_base_CreateCollisionAlgorithm(L)) {
			luaL_error(L, "luna typecheck failed in btCollisionAlgorithm * btCompoundCollisionAlgorithm::SwappedCreateFunc::base_CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap) function, expected prototype:\nbtCollisionAlgorithm * btCompoundCollisionAlgorithm::SwappedCreateFunc::base_CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)\nClass arguments details:\narg 1 ID = 61780402\narg 2 ID = 32391296\narg 3 ID = 32391296\n\n%s",luna_dumpStack(L).c_str());
		}

		btCollisionAlgorithmConstructionInfo* ci_ptr=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,2));
		if( !ci_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ci in btCompoundCollisionAlgorithm::SwappedCreateFunc::base_CreateCollisionAlgorithm function");
		}
		btCollisionAlgorithmConstructionInfo & ci=*ci_ptr;
		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,4));

		btCompoundCollisionAlgorithm::SwappedCreateFunc* self=Luna< btCollisionAlgorithmCreateFunc >::checkSubType< btCompoundCollisionAlgorithm::SwappedCreateFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btCollisionAlgorithm * btCompoundCollisionAlgorithm::SwappedCreateFunc::base_CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo &, const btCollisionObjectWrapper *, const btCollisionObjectWrapper *). Got : '%s'\n%s",typeid(Luna< btCollisionAlgorithmCreateFunc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btCollisionAlgorithm * lret = self->SwappedCreateFunc::CreateCollisionAlgorithm(ci, body0Wrap, body1Wrap);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionAlgorithm >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

btCompoundCollisionAlgorithm::SwappedCreateFunc* LunaTraits< btCompoundCollisionAlgorithm::SwappedCreateFunc >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btCompoundCollisionAlgorithm_SwappedCreateFunc::_bind_ctor(L);
}

void LunaTraits< btCompoundCollisionAlgorithm::SwappedCreateFunc >::_bind_dtor(btCompoundCollisionAlgorithm::SwappedCreateFunc* obj) {
	delete obj;
}

const char LunaTraits< btCompoundCollisionAlgorithm::SwappedCreateFunc >::className[] = "btCompoundCollisionAlgorithm_SwappedCreateFunc";
const char LunaTraits< btCompoundCollisionAlgorithm::SwappedCreateFunc >::fullName[] = "btCompoundCollisionAlgorithm::SwappedCreateFunc";
const char LunaTraits< btCompoundCollisionAlgorithm::SwappedCreateFunc >::moduleName[] = "bullet";
const char* LunaTraits< btCompoundCollisionAlgorithm::SwappedCreateFunc >::parents[] = {"bullet.btCollisionAlgorithmCreateFunc", 0};
const int LunaTraits< btCompoundCollisionAlgorithm::SwappedCreateFunc >::hash = 66577004;
const int LunaTraits< btCompoundCollisionAlgorithm::SwappedCreateFunc >::uniqueIDs[] = {67911425,0};

luna_RegType LunaTraits< btCompoundCollisionAlgorithm::SwappedCreateFunc >::methods[] = {
	{"CreateCollisionAlgorithm", &luna_wrapper_btCompoundCollisionAlgorithm_SwappedCreateFunc::_bind_CreateCollisionAlgorithm},
	{"base_CreateCollisionAlgorithm", &luna_wrapper_btCompoundCollisionAlgorithm_SwappedCreateFunc::_bind_base_CreateCollisionAlgorithm},
	{"fromVoid", &luna_wrapper_btCompoundCollisionAlgorithm_SwappedCreateFunc::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btCompoundCollisionAlgorithm_SwappedCreateFunc::_bind_asVoid},
	{"getTable", &luna_wrapper_btCompoundCollisionAlgorithm_SwappedCreateFunc::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btCompoundCollisionAlgorithm::SwappedCreateFunc >::converters[] = {
	{"btCollisionAlgorithmCreateFunc", &luna_wrapper_btCompoundCollisionAlgorithm_SwappedCreateFunc::_cast_from_btCollisionAlgorithmCreateFunc},
	{0,0}
};

luna_RegEnumType LunaTraits< btCompoundCollisionAlgorithm::SwappedCreateFunc >::enumValues[] = {
	{0,0}
};


