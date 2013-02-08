#include <plug_common.h>

#include <luna/wrappers/wrapper_btActivatingCollisionAlgorithm.h>

class luna_wrapper_btActivatingCollisionAlgorithm {
public:
	typedef Luna< btActivatingCollisionAlgorithm > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btCollisionAlgorithm* self=(Luna< btCollisionAlgorithm >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btCollisionAlgorithm,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,17890858) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btCollisionAlgorithm*)");
		}

		btCollisionAlgorithm* rhs =(Luna< btCollisionAlgorithm >::check(L,2));
		btCollisionAlgorithm* self=(Luna< btCollisionAlgorithm >::check(L,1));
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

		btActivatingCollisionAlgorithm* self= (btActivatingCollisionAlgorithm*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btActivatingCollisionAlgorithm >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,17890858) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btCollisionAlgorithm >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_btCollisionAlgorithm(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btActivatingCollisionAlgorithm* ptr= dynamic_cast< btActivatingCollisionAlgorithm* >(Luna< btCollisionAlgorithm >::check(L,1));
		btActivatingCollisionAlgorithm* ptr= luna_caster< btCollisionAlgorithm, btActivatingCollisionAlgorithm >::cast(Luna< btCollisionAlgorithm >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btActivatingCollisionAlgorithm >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,61780402) ) return false;
		if( (!(Luna< btCollisionAlgorithmConstructionInfo >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,61780402) ) return false;
		if( (!(Luna< btCollisionAlgorithmConstructionInfo >::check(L,2))) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32391296)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< btCollisionObjectWrapper >::check(L,3)) ) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,32391296)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< btCollisionObjectWrapper >::check(L,4)) ) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btActivatingCollisionAlgorithm::btActivatingCollisionAlgorithm(lua_Table * data, const btCollisionAlgorithmConstructionInfo & ci)
	static btActivatingCollisionAlgorithm* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btActivatingCollisionAlgorithm::btActivatingCollisionAlgorithm(lua_Table * data, const btCollisionAlgorithmConstructionInfo & ci) function, expected prototype:\nbtActivatingCollisionAlgorithm::btActivatingCollisionAlgorithm(lua_Table * data, const btCollisionAlgorithmConstructionInfo & ci)\nClass arguments details:\narg 2 ID = 61780402\n");
		}

		const btCollisionAlgorithmConstructionInfo* ci_ptr=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,2));
		if( !ci_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ci in btActivatingCollisionAlgorithm::btActivatingCollisionAlgorithm function");
		}
		const btCollisionAlgorithmConstructionInfo & ci=*ci_ptr;

		return new wrapper_btActivatingCollisionAlgorithm(L,NULL, ci);
	}

	// btActivatingCollisionAlgorithm::btActivatingCollisionAlgorithm(lua_Table * data, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)
	static btActivatingCollisionAlgorithm* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btActivatingCollisionAlgorithm::btActivatingCollisionAlgorithm(lua_Table * data, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap) function, expected prototype:\nbtActivatingCollisionAlgorithm::btActivatingCollisionAlgorithm(lua_Table * data, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)\nClass arguments details:\narg 2 ID = 61780402\narg 3 ID = 32391296\narg 4 ID = 32391296\n");
		}

		const btCollisionAlgorithmConstructionInfo* ci_ptr=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,2));
		if( !ci_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ci in btActivatingCollisionAlgorithm::btActivatingCollisionAlgorithm function");
		}
		const btCollisionAlgorithmConstructionInfo & ci=*ci_ptr;
		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,4));

		return new wrapper_btActivatingCollisionAlgorithm(L,NULL, ci, body0Wrap, body1Wrap);
	}

	// Overload binder for btActivatingCollisionAlgorithm::btActivatingCollisionAlgorithm
	static btActivatingCollisionAlgorithm* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btActivatingCollisionAlgorithm, cannot match any of the overloads for function btActivatingCollisionAlgorithm:\n  btActivatingCollisionAlgorithm(lua_Table *, const btCollisionAlgorithmConstructionInfo &)\n  btActivatingCollisionAlgorithm(lua_Table *, const btCollisionAlgorithmConstructionInfo &, const btCollisionObjectWrapper *, const btCollisionObjectWrapper *)\n");
		return NULL;
	}


	// Function binds:

	// Operator binds:

};

btActivatingCollisionAlgorithm* LunaTraits< btActivatingCollisionAlgorithm >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btActivatingCollisionAlgorithm::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void btCollisionAlgorithm::processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	// float btCollisionAlgorithm::calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	// void btCollisionAlgorithm::getAllContactManifolds(btManifoldArray & manifoldArray)
}

void LunaTraits< btActivatingCollisionAlgorithm >::_bind_dtor(btActivatingCollisionAlgorithm* obj) {
	delete obj;
}

const char LunaTraits< btActivatingCollisionAlgorithm >::className[] = "btActivatingCollisionAlgorithm";
const char LunaTraits< btActivatingCollisionAlgorithm >::fullName[] = "btActivatingCollisionAlgorithm";
const char LunaTraits< btActivatingCollisionAlgorithm >::moduleName[] = "bullet";
const char* LunaTraits< btActivatingCollisionAlgorithm >::parents[] = {"bullet.btCollisionAlgorithm", 0};
const int LunaTraits< btActivatingCollisionAlgorithm >::hash = 87873876;
const int LunaTraits< btActivatingCollisionAlgorithm >::uniqueIDs[] = {17890858,0};

luna_RegType LunaTraits< btActivatingCollisionAlgorithm >::methods[] = {
	{"__eq", &luna_wrapper_btActivatingCollisionAlgorithm::_bind___eq},
	{"fromVoid", &luna_wrapper_btActivatingCollisionAlgorithm::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btActivatingCollisionAlgorithm::_bind_asVoid},
	{"getTable", &luna_wrapper_btActivatingCollisionAlgorithm::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btActivatingCollisionAlgorithm >::converters[] = {
	{"btCollisionAlgorithm", &luna_wrapper_btActivatingCollisionAlgorithm::_cast_from_btCollisionAlgorithm},
	{0,0}
};

luna_RegEnumType LunaTraits< btActivatingCollisionAlgorithm >::enumValues[] = {
	{0,0}
};


