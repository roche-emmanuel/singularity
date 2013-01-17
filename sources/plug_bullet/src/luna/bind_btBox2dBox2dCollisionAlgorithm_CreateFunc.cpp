#include <plug_common.h>

#include <luna/wrappers/wrapper_btBox2dBox2dCollisionAlgorithm_CreateFunc.h>

class luna_wrapper_btBox2dBox2dCollisionAlgorithm_CreateFunc {
public:
	typedef Luna< btBox2dBox2dCollisionAlgorithm::CreateFunc > luna_t;

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

	// Derived class converters:
	static int _cast_from_btCollisionAlgorithmCreateFunc(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btBox2dBox2dCollisionAlgorithm::CreateFunc* ptr= dynamic_cast< btBox2dBox2dCollisionAlgorithm::CreateFunc* >(Luna< btCollisionAlgorithmCreateFunc >::check(L,1));
		btBox2dBox2dCollisionAlgorithm::CreateFunc* ptr= luna_caster< btCollisionAlgorithmCreateFunc, btBox2dBox2dCollisionAlgorithm::CreateFunc >::cast(Luna< btCollisionAlgorithmCreateFunc >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btBox2dBox2dCollisionAlgorithm::CreateFunc >::push(L,ptr,false);
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
	// btBox2dBox2dCollisionAlgorithm::CreateFunc::CreateFunc()
	static btBox2dBox2dCollisionAlgorithm::CreateFunc* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBox2dBox2dCollisionAlgorithm::CreateFunc::CreateFunc() function, expected prototype:\nbtBox2dBox2dCollisionAlgorithm::CreateFunc::CreateFunc()\nClass arguments details:\n");
		}


		return new btBox2dBox2dCollisionAlgorithm::CreateFunc();
	}

	// btBox2dBox2dCollisionAlgorithm::CreateFunc::CreateFunc(lua_Table * data)
	static btBox2dBox2dCollisionAlgorithm::CreateFunc* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBox2dBox2dCollisionAlgorithm::CreateFunc::CreateFunc(lua_Table * data) function, expected prototype:\nbtBox2dBox2dCollisionAlgorithm::CreateFunc::CreateFunc(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btBox2dBox2dCollisionAlgorithm_CreateFunc(L,NULL);
	}

	// Overload binder for btBox2dBox2dCollisionAlgorithm::CreateFunc::CreateFunc
	static btBox2dBox2dCollisionAlgorithm::CreateFunc* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function CreateFunc, cannot match any of the overloads for function CreateFunc:\n  CreateFunc()\n  CreateFunc(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// btCollisionAlgorithm * btBox2dBox2dCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)
	static int _bind_CreateCollisionAlgorithm(lua_State *L) {
		if (!_lg_typecheck_CreateCollisionAlgorithm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionAlgorithm * btBox2dBox2dCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap) function, expected prototype:\nbtCollisionAlgorithm * btBox2dBox2dCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)\nClass arguments details:\narg 1 ID = 61780402\narg 2 ID = 32391296\narg 3 ID = 32391296\n");
		}

		btCollisionAlgorithmConstructionInfo* ci_ptr=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,2));
		if( !ci_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ci in btBox2dBox2dCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm function");
		}
		btCollisionAlgorithmConstructionInfo & ci=*ci_ptr;
		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,4));

		btBox2dBox2dCollisionAlgorithm::CreateFunc* self=Luna< btCollisionAlgorithmCreateFunc >::checkSubType< btBox2dBox2dCollisionAlgorithm::CreateFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCollisionAlgorithm * btBox2dBox2dCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo &, const btCollisionObjectWrapper *, const btCollisionObjectWrapper *). Got : '%s'",typeid(Luna< btCollisionAlgorithmCreateFunc >::check(L,1)).name());
		}
		btCollisionAlgorithm * lret = self->CreateCollisionAlgorithm(ci, body0Wrap, body1Wrap);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionAlgorithm >::push(L,lret,false);

		return 1;
	}

	// btCollisionAlgorithm * btBox2dBox2dCollisionAlgorithm::CreateFunc::base_CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)
	static int _bind_base_CreateCollisionAlgorithm(lua_State *L) {
		if (!_lg_typecheck_base_CreateCollisionAlgorithm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionAlgorithm * btBox2dBox2dCollisionAlgorithm::CreateFunc::base_CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap) function, expected prototype:\nbtCollisionAlgorithm * btBox2dBox2dCollisionAlgorithm::CreateFunc::base_CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)\nClass arguments details:\narg 1 ID = 61780402\narg 2 ID = 32391296\narg 3 ID = 32391296\n");
		}

		btCollisionAlgorithmConstructionInfo* ci_ptr=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,2));
		if( !ci_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ci in btBox2dBox2dCollisionAlgorithm::CreateFunc::base_CreateCollisionAlgorithm function");
		}
		btCollisionAlgorithmConstructionInfo & ci=*ci_ptr;
		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,4));

		btBox2dBox2dCollisionAlgorithm::CreateFunc* self=Luna< btCollisionAlgorithmCreateFunc >::checkSubType< btBox2dBox2dCollisionAlgorithm::CreateFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCollisionAlgorithm * btBox2dBox2dCollisionAlgorithm::CreateFunc::base_CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo &, const btCollisionObjectWrapper *, const btCollisionObjectWrapper *). Got : '%s'",typeid(Luna< btCollisionAlgorithmCreateFunc >::check(L,1)).name());
		}
		btCollisionAlgorithm * lret = self->CreateFunc::CreateCollisionAlgorithm(ci, body0Wrap, body1Wrap);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionAlgorithm >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

btBox2dBox2dCollisionAlgorithm::CreateFunc* LunaTraits< btBox2dBox2dCollisionAlgorithm::CreateFunc >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btBox2dBox2dCollisionAlgorithm_CreateFunc::_bind_ctor(L);
}

void LunaTraits< btBox2dBox2dCollisionAlgorithm::CreateFunc >::_bind_dtor(btBox2dBox2dCollisionAlgorithm::CreateFunc* obj) {
	delete obj;
}

const char LunaTraits< btBox2dBox2dCollisionAlgorithm::CreateFunc >::className[] = "btBox2dBox2dCollisionAlgorithm_CreateFunc";
const char LunaTraits< btBox2dBox2dCollisionAlgorithm::CreateFunc >::fullName[] = "btBox2dBox2dCollisionAlgorithm::CreateFunc";
const char LunaTraits< btBox2dBox2dCollisionAlgorithm::CreateFunc >::moduleName[] = "btBox2dBox2dCollisionAlgorithm";
const char* LunaTraits< btBox2dBox2dCollisionAlgorithm::CreateFunc >::parents[] = {"bullet.btCollisionAlgorithmCreateFunc", 0};
const int LunaTraits< btBox2dBox2dCollisionAlgorithm::CreateFunc >::hash = 44565479;
const int LunaTraits< btBox2dBox2dCollisionAlgorithm::CreateFunc >::uniqueIDs[] = {67911425,0};

luna_RegType LunaTraits< btBox2dBox2dCollisionAlgorithm::CreateFunc >::methods[] = {
	{"CreateCollisionAlgorithm", &luna_wrapper_btBox2dBox2dCollisionAlgorithm_CreateFunc::_bind_CreateCollisionAlgorithm},
	{"base_CreateCollisionAlgorithm", &luna_wrapper_btBox2dBox2dCollisionAlgorithm_CreateFunc::_bind_base_CreateCollisionAlgorithm},
	{"__eq", &luna_wrapper_btBox2dBox2dCollisionAlgorithm_CreateFunc::_bind___eq},
	{"getTable", &luna_wrapper_btBox2dBox2dCollisionAlgorithm_CreateFunc::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btBox2dBox2dCollisionAlgorithm::CreateFunc >::converters[] = {
	{"btCollisionAlgorithmCreateFunc", &luna_wrapper_btBox2dBox2dCollisionAlgorithm_CreateFunc::_cast_from_btCollisionAlgorithmCreateFunc},
	{0,0}
};

luna_RegEnumType LunaTraits< btBox2dBox2dCollisionAlgorithm::CreateFunc >::enumValues[] = {
	{0,0}
};


