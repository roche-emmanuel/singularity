#include <plug_common.h>

#include <luna/wrappers/wrapper_btConvexConcaveCollisionAlgorithm_SwappedCreateFunc.h>

class luna_wrapper_btConvexConcaveCollisionAlgorithm_SwappedCreateFunc {
public:
	typedef Luna< btConvexConcaveCollisionAlgorithm::SwappedCreateFunc > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
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

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,67911425) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btCollisionAlgorithmCreateFunc*)");
		}

		btCollisionAlgorithmCreateFunc* rhs =(Luna< btCollisionAlgorithmCreateFunc >::check(L,2));
		btCollisionAlgorithmCreateFunc* self=(Luna< btCollisionAlgorithmCreateFunc >::check(L,1));
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

		btConvexConcaveCollisionAlgorithm::SwappedCreateFunc* self= (btConvexConcaveCollisionAlgorithm::SwappedCreateFunc*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btConvexConcaveCollisionAlgorithm::SwappedCreateFunc >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,67911425) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
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
		//btConvexConcaveCollisionAlgorithm::SwappedCreateFunc* ptr= dynamic_cast< btConvexConcaveCollisionAlgorithm::SwappedCreateFunc* >(Luna< btCollisionAlgorithmCreateFunc >::check(L,1));
		btConvexConcaveCollisionAlgorithm::SwappedCreateFunc* ptr= luna_caster< btCollisionAlgorithmCreateFunc, btConvexConcaveCollisionAlgorithm::SwappedCreateFunc >::cast(Luna< btCollisionAlgorithmCreateFunc >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btConvexConcaveCollisionAlgorithm::SwappedCreateFunc >::push(L,ptr,false);
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
	// btConvexConcaveCollisionAlgorithm::SwappedCreateFunc::SwappedCreateFunc()
	static btConvexConcaveCollisionAlgorithm::SwappedCreateFunc* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btConvexConcaveCollisionAlgorithm::SwappedCreateFunc::SwappedCreateFunc() function, expected prototype:\nbtConvexConcaveCollisionAlgorithm::SwappedCreateFunc::SwappedCreateFunc()\nClass arguments details:\n");
		}


		return new btConvexConcaveCollisionAlgorithm::SwappedCreateFunc();
	}

	// btConvexConcaveCollisionAlgorithm::SwappedCreateFunc::SwappedCreateFunc(lua_Table * data)
	static btConvexConcaveCollisionAlgorithm::SwappedCreateFunc* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btConvexConcaveCollisionAlgorithm::SwappedCreateFunc::SwappedCreateFunc(lua_Table * data) function, expected prototype:\nbtConvexConcaveCollisionAlgorithm::SwappedCreateFunc::SwappedCreateFunc(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btConvexConcaveCollisionAlgorithm_SwappedCreateFunc(L,NULL);
	}

	// Overload binder for btConvexConcaveCollisionAlgorithm::SwappedCreateFunc::SwappedCreateFunc
	static btConvexConcaveCollisionAlgorithm::SwappedCreateFunc* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function SwappedCreateFunc, cannot match any of the overloads for function SwappedCreateFunc:\n  SwappedCreateFunc()\n  SwappedCreateFunc(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// btCollisionAlgorithm * btConvexConcaveCollisionAlgorithm::SwappedCreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)
	static int _bind_CreateCollisionAlgorithm(lua_State *L) {
		if (!_lg_typecheck_CreateCollisionAlgorithm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionAlgorithm * btConvexConcaveCollisionAlgorithm::SwappedCreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap) function, expected prototype:\nbtCollisionAlgorithm * btConvexConcaveCollisionAlgorithm::SwappedCreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)\nClass arguments details:\narg 1 ID = 61780402\narg 2 ID = 32391296\narg 3 ID = 32391296\n");
		}

		btCollisionAlgorithmConstructionInfo* ci_ptr=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,2));
		if( !ci_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ci in btConvexConcaveCollisionAlgorithm::SwappedCreateFunc::CreateCollisionAlgorithm function");
		}
		btCollisionAlgorithmConstructionInfo & ci=*ci_ptr;
		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,4));

		btConvexConcaveCollisionAlgorithm::SwappedCreateFunc* self=Luna< btCollisionAlgorithmCreateFunc >::checkSubType< btConvexConcaveCollisionAlgorithm::SwappedCreateFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCollisionAlgorithm * btConvexConcaveCollisionAlgorithm::SwappedCreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo &, const btCollisionObjectWrapper *, const btCollisionObjectWrapper *). Got : '%s'",typeid(Luna< btCollisionAlgorithmCreateFunc >::check(L,1)).name());
		}
		btCollisionAlgorithm * lret = self->CreateCollisionAlgorithm(ci, body0Wrap, body1Wrap);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionAlgorithm >::push(L,lret,false);

		return 1;
	}

	// btCollisionAlgorithm * btConvexConcaveCollisionAlgorithm::SwappedCreateFunc::base_CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)
	static int _bind_base_CreateCollisionAlgorithm(lua_State *L) {
		if (!_lg_typecheck_base_CreateCollisionAlgorithm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionAlgorithm * btConvexConcaveCollisionAlgorithm::SwappedCreateFunc::base_CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap) function, expected prototype:\nbtCollisionAlgorithm * btConvexConcaveCollisionAlgorithm::SwappedCreateFunc::base_CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)\nClass arguments details:\narg 1 ID = 61780402\narg 2 ID = 32391296\narg 3 ID = 32391296\n");
		}

		btCollisionAlgorithmConstructionInfo* ci_ptr=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,2));
		if( !ci_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ci in btConvexConcaveCollisionAlgorithm::SwappedCreateFunc::base_CreateCollisionAlgorithm function");
		}
		btCollisionAlgorithmConstructionInfo & ci=*ci_ptr;
		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,4));

		btConvexConcaveCollisionAlgorithm::SwappedCreateFunc* self=Luna< btCollisionAlgorithmCreateFunc >::checkSubType< btConvexConcaveCollisionAlgorithm::SwappedCreateFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCollisionAlgorithm * btConvexConcaveCollisionAlgorithm::SwappedCreateFunc::base_CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo &, const btCollisionObjectWrapper *, const btCollisionObjectWrapper *). Got : '%s'",typeid(Luna< btCollisionAlgorithmCreateFunc >::check(L,1)).name());
		}
		btCollisionAlgorithm * lret = self->SwappedCreateFunc::CreateCollisionAlgorithm(ci, body0Wrap, body1Wrap);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionAlgorithm >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

btConvexConcaveCollisionAlgorithm::SwappedCreateFunc* LunaTraits< btConvexConcaveCollisionAlgorithm::SwappedCreateFunc >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btConvexConcaveCollisionAlgorithm_SwappedCreateFunc::_bind_ctor(L);
}

void LunaTraits< btConvexConcaveCollisionAlgorithm::SwappedCreateFunc >::_bind_dtor(btConvexConcaveCollisionAlgorithm::SwappedCreateFunc* obj) {
	delete obj;
}

const char LunaTraits< btConvexConcaveCollisionAlgorithm::SwappedCreateFunc >::className[] = "btConvexConcaveCollisionAlgorithm_SwappedCreateFunc";
const char LunaTraits< btConvexConcaveCollisionAlgorithm::SwappedCreateFunc >::fullName[] = "btConvexConcaveCollisionAlgorithm::SwappedCreateFunc";
const char LunaTraits< btConvexConcaveCollisionAlgorithm::SwappedCreateFunc >::moduleName[] = "bullet";
const char* LunaTraits< btConvexConcaveCollisionAlgorithm::SwappedCreateFunc >::parents[] = {"bullet.btCollisionAlgorithmCreateFunc", 0};
const int LunaTraits< btConvexConcaveCollisionAlgorithm::SwappedCreateFunc >::hash = 7452926;
const int LunaTraits< btConvexConcaveCollisionAlgorithm::SwappedCreateFunc >::uniqueIDs[] = {67911425,0};

luna_RegType LunaTraits< btConvexConcaveCollisionAlgorithm::SwappedCreateFunc >::methods[] = {
	{"CreateCollisionAlgorithm", &luna_wrapper_btConvexConcaveCollisionAlgorithm_SwappedCreateFunc::_bind_CreateCollisionAlgorithm},
	{"base_CreateCollisionAlgorithm", &luna_wrapper_btConvexConcaveCollisionAlgorithm_SwappedCreateFunc::_bind_base_CreateCollisionAlgorithm},
	{"__eq", &luna_wrapper_btConvexConcaveCollisionAlgorithm_SwappedCreateFunc::_bind___eq},
	{"fromVoid", &luna_wrapper_btConvexConcaveCollisionAlgorithm_SwappedCreateFunc::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btConvexConcaveCollisionAlgorithm_SwappedCreateFunc::_bind_asVoid},
	{"getTable", &luna_wrapper_btConvexConcaveCollisionAlgorithm_SwappedCreateFunc::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btConvexConcaveCollisionAlgorithm::SwappedCreateFunc >::converters[] = {
	{"btCollisionAlgorithmCreateFunc", &luna_wrapper_btConvexConcaveCollisionAlgorithm_SwappedCreateFunc::_cast_from_btCollisionAlgorithmCreateFunc},
	{0,0}
};

luna_RegEnumType LunaTraits< btConvexConcaveCollisionAlgorithm::SwappedCreateFunc >::enumValues[] = {
	{0,0}
};


