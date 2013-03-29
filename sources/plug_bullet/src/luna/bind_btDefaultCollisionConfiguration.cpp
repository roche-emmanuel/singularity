#include <plug_common.h>

#include <luna/wrappers/wrapper_btDefaultCollisionConfiguration.h>

class luna_wrapper_btDefaultCollisionConfiguration {
public:
	typedef Luna< btDefaultCollisionConfiguration > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btCollisionConfiguration* self=(Luna< btCollisionConfiguration >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btCollisionConfiguration,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31901746) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btCollisionConfiguration*)");
		}

		btCollisionConfiguration* rhs =(Luna< btCollisionConfiguration >::check(L,2));
		btCollisionConfiguration* self=(Luna< btCollisionConfiguration >::check(L,1));
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

		btDefaultCollisionConfiguration* self= (btDefaultCollisionConfiguration*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btDefaultCollisionConfiguration >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31901746) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btCollisionConfiguration >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_btCollisionConfiguration(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btDefaultCollisionConfiguration* ptr= dynamic_cast< btDefaultCollisionConfiguration* >(Luna< btCollisionConfiguration >::check(L,1));
		btDefaultCollisionConfiguration* ptr= luna_caster< btCollisionConfiguration, btDefaultCollisionConfiguration >::cast(Luna< btCollisionConfiguration >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btDefaultCollisionConfiguration >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && !Luna<void>::has_uniqueid(L,1,82853014) ) return false;
		if( luatop>0 && (!(Luna< btDefaultCollisionConstructionInfo >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,82853014) ) return false;
		if( luatop>1 && (!(Luna< btDefaultCollisionConstructionInfo >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getPersistentManifoldPool(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCollisionAlgorithmPool(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStackAllocator(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSimplexSolver(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCollisionAlgorithmCreateFunc(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setConvexConvexMultipointIterations(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPlaneConvexMultipointIterations(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getPersistentManifoldPool(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getCollisionAlgorithmPool(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getStackAllocator(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getSimplexSolver(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getCollisionAlgorithmCreateFunc(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btDefaultCollisionConfiguration::btDefaultCollisionConfiguration(const btDefaultCollisionConstructionInfo & constructionInfo = btDefaultCollisionConstructionInfo ())
	static btDefaultCollisionConfiguration* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDefaultCollisionConfiguration::btDefaultCollisionConfiguration(const btDefaultCollisionConstructionInfo & constructionInfo = btDefaultCollisionConstructionInfo ()) function, expected prototype:\nbtDefaultCollisionConfiguration::btDefaultCollisionConfiguration(const btDefaultCollisionConstructionInfo & constructionInfo = btDefaultCollisionConstructionInfo ())\nClass arguments details:\narg 1 ID = 82853014\n");
		}

		int luatop = lua_gettop(L);

		const btDefaultCollisionConstructionInfo* constructionInfo_ptr=luatop>0 ? (Luna< btDefaultCollisionConstructionInfo >::check(L,1)) : NULL;
		if( luatop>0 && !constructionInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg constructionInfo in btDefaultCollisionConfiguration::btDefaultCollisionConfiguration function");
		}
		const btDefaultCollisionConstructionInfo & constructionInfo=luatop>0 ? *constructionInfo_ptr : (const btDefaultCollisionConstructionInfo)btDefaultCollisionConstructionInfo ();

		return new btDefaultCollisionConfiguration(constructionInfo);
	}

	// btDefaultCollisionConfiguration::btDefaultCollisionConfiguration(lua_Table * data, const btDefaultCollisionConstructionInfo & constructionInfo = btDefaultCollisionConstructionInfo ())
	static btDefaultCollisionConfiguration* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDefaultCollisionConfiguration::btDefaultCollisionConfiguration(lua_Table * data, const btDefaultCollisionConstructionInfo & constructionInfo = btDefaultCollisionConstructionInfo ()) function, expected prototype:\nbtDefaultCollisionConfiguration::btDefaultCollisionConfiguration(lua_Table * data, const btDefaultCollisionConstructionInfo & constructionInfo = btDefaultCollisionConstructionInfo ())\nClass arguments details:\narg 2 ID = 82853014\n");
		}

		int luatop = lua_gettop(L);

		const btDefaultCollisionConstructionInfo* constructionInfo_ptr=luatop>1 ? (Luna< btDefaultCollisionConstructionInfo >::check(L,2)) : NULL;
		if( luatop>1 && !constructionInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg constructionInfo in btDefaultCollisionConfiguration::btDefaultCollisionConfiguration function");
		}
		const btDefaultCollisionConstructionInfo & constructionInfo=luatop>1 ? *constructionInfo_ptr : (const btDefaultCollisionConstructionInfo)btDefaultCollisionConstructionInfo ();

		return new wrapper_btDefaultCollisionConfiguration(L,NULL, constructionInfo);
	}

	// Overload binder for btDefaultCollisionConfiguration::btDefaultCollisionConfiguration
	static btDefaultCollisionConfiguration* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btDefaultCollisionConfiguration, cannot match any of the overloads for function btDefaultCollisionConfiguration:\n  btDefaultCollisionConfiguration(const btDefaultCollisionConstructionInfo &)\n  btDefaultCollisionConfiguration(lua_Table *, const btDefaultCollisionConstructionInfo &)\n");
		return NULL;
	}


	// Function binds:
	// btPoolAllocator * btDefaultCollisionConfiguration::getPersistentManifoldPool()
	static int _bind_getPersistentManifoldPool(lua_State *L) {
		if (!_lg_typecheck_getPersistentManifoldPool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btPoolAllocator * btDefaultCollisionConfiguration::getPersistentManifoldPool() function, expected prototype:\nbtPoolAllocator * btDefaultCollisionConfiguration::getPersistentManifoldPool()\nClass arguments details:\n");
		}


		btDefaultCollisionConfiguration* self=Luna< btCollisionConfiguration >::checkSubType< btDefaultCollisionConfiguration >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btPoolAllocator * btDefaultCollisionConfiguration::getPersistentManifoldPool(). Got : '%s'",typeid(Luna< btCollisionConfiguration >::check(L,1)).name());
		}
		btPoolAllocator * lret = self->getPersistentManifoldPool();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPoolAllocator >::push(L,lret,false);

		return 1;
	}

	// btPoolAllocator * btDefaultCollisionConfiguration::getCollisionAlgorithmPool()
	static int _bind_getCollisionAlgorithmPool(lua_State *L) {
		if (!_lg_typecheck_getCollisionAlgorithmPool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btPoolAllocator * btDefaultCollisionConfiguration::getCollisionAlgorithmPool() function, expected prototype:\nbtPoolAllocator * btDefaultCollisionConfiguration::getCollisionAlgorithmPool()\nClass arguments details:\n");
		}


		btDefaultCollisionConfiguration* self=Luna< btCollisionConfiguration >::checkSubType< btDefaultCollisionConfiguration >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btPoolAllocator * btDefaultCollisionConfiguration::getCollisionAlgorithmPool(). Got : '%s'",typeid(Luna< btCollisionConfiguration >::check(L,1)).name());
		}
		btPoolAllocator * lret = self->getCollisionAlgorithmPool();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPoolAllocator >::push(L,lret,false);

		return 1;
	}

	// btStackAlloc * btDefaultCollisionConfiguration::getStackAllocator()
	static int _bind_getStackAllocator(lua_State *L) {
		if (!_lg_typecheck_getStackAllocator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btStackAlloc * btDefaultCollisionConfiguration::getStackAllocator() function, expected prototype:\nbtStackAlloc * btDefaultCollisionConfiguration::getStackAllocator()\nClass arguments details:\n");
		}


		btDefaultCollisionConfiguration* self=Luna< btCollisionConfiguration >::checkSubType< btDefaultCollisionConfiguration >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btStackAlloc * btDefaultCollisionConfiguration::getStackAllocator(). Got : '%s'",typeid(Luna< btCollisionConfiguration >::check(L,1)).name());
		}
		btStackAlloc * lret = self->getStackAllocator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btStackAlloc >::push(L,lret,false);

		return 1;
	}

	// btVoronoiSimplexSolver * btDefaultCollisionConfiguration::getSimplexSolver()
	static int _bind_getSimplexSolver(lua_State *L) {
		if (!_lg_typecheck_getSimplexSolver(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVoronoiSimplexSolver * btDefaultCollisionConfiguration::getSimplexSolver() function, expected prototype:\nbtVoronoiSimplexSolver * btDefaultCollisionConfiguration::getSimplexSolver()\nClass arguments details:\n");
		}


		btDefaultCollisionConfiguration* self=Luna< btCollisionConfiguration >::checkSubType< btDefaultCollisionConfiguration >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVoronoiSimplexSolver * btDefaultCollisionConfiguration::getSimplexSolver(). Got : '%s'",typeid(Luna< btCollisionConfiguration >::check(L,1)).name());
		}
		btVoronoiSimplexSolver * lret = self->getSimplexSolver();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVoronoiSimplexSolver >::push(L,lret,false);

		return 1;
	}

	// btCollisionAlgorithmCreateFunc * btDefaultCollisionConfiguration::getCollisionAlgorithmCreateFunc(int proxyType0, int proxyType1)
	static int _bind_getCollisionAlgorithmCreateFunc(lua_State *L) {
		if (!_lg_typecheck_getCollisionAlgorithmCreateFunc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionAlgorithmCreateFunc * btDefaultCollisionConfiguration::getCollisionAlgorithmCreateFunc(int proxyType0, int proxyType1) function, expected prototype:\nbtCollisionAlgorithmCreateFunc * btDefaultCollisionConfiguration::getCollisionAlgorithmCreateFunc(int proxyType0, int proxyType1)\nClass arguments details:\n");
		}

		int proxyType0=(int)lua_tointeger(L,2);
		int proxyType1=(int)lua_tointeger(L,3);

		btDefaultCollisionConfiguration* self=Luna< btCollisionConfiguration >::checkSubType< btDefaultCollisionConfiguration >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCollisionAlgorithmCreateFunc * btDefaultCollisionConfiguration::getCollisionAlgorithmCreateFunc(int, int). Got : '%s'",typeid(Luna< btCollisionConfiguration >::check(L,1)).name());
		}
		btCollisionAlgorithmCreateFunc * lret = self->getCollisionAlgorithmCreateFunc(proxyType0, proxyType1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionAlgorithmCreateFunc >::push(L,lret,false);

		return 1;
	}

	// void btDefaultCollisionConfiguration::setConvexConvexMultipointIterations(int numPerturbationIterations = 3, int minimumPointsPerturbationThreshold = 3)
	static int _bind_setConvexConvexMultipointIterations(lua_State *L) {
		if (!_lg_typecheck_setConvexConvexMultipointIterations(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDefaultCollisionConfiguration::setConvexConvexMultipointIterations(int numPerturbationIterations = 3, int minimumPointsPerturbationThreshold = 3) function, expected prototype:\nvoid btDefaultCollisionConfiguration::setConvexConvexMultipointIterations(int numPerturbationIterations = 3, int minimumPointsPerturbationThreshold = 3)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int numPerturbationIterations=luatop>1 ? (int)lua_tointeger(L,2) : (int)3;
		int minimumPointsPerturbationThreshold=luatop>2 ? (int)lua_tointeger(L,3) : (int)3;

		btDefaultCollisionConfiguration* self=Luna< btCollisionConfiguration >::checkSubType< btDefaultCollisionConfiguration >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDefaultCollisionConfiguration::setConvexConvexMultipointIterations(int, int). Got : '%s'",typeid(Luna< btCollisionConfiguration >::check(L,1)).name());
		}
		self->setConvexConvexMultipointIterations(numPerturbationIterations, minimumPointsPerturbationThreshold);

		return 0;
	}

	// void btDefaultCollisionConfiguration::setPlaneConvexMultipointIterations(int numPerturbationIterations = 3, int minimumPointsPerturbationThreshold = 3)
	static int _bind_setPlaneConvexMultipointIterations(lua_State *L) {
		if (!_lg_typecheck_setPlaneConvexMultipointIterations(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDefaultCollisionConfiguration::setPlaneConvexMultipointIterations(int numPerturbationIterations = 3, int minimumPointsPerturbationThreshold = 3) function, expected prototype:\nvoid btDefaultCollisionConfiguration::setPlaneConvexMultipointIterations(int numPerturbationIterations = 3, int minimumPointsPerturbationThreshold = 3)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int numPerturbationIterations=luatop>1 ? (int)lua_tointeger(L,2) : (int)3;
		int minimumPointsPerturbationThreshold=luatop>2 ? (int)lua_tointeger(L,3) : (int)3;

		btDefaultCollisionConfiguration* self=Luna< btCollisionConfiguration >::checkSubType< btDefaultCollisionConfiguration >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDefaultCollisionConfiguration::setPlaneConvexMultipointIterations(int, int). Got : '%s'",typeid(Luna< btCollisionConfiguration >::check(L,1)).name());
		}
		self->setPlaneConvexMultipointIterations(numPerturbationIterations, minimumPointsPerturbationThreshold);

		return 0;
	}

	// btPoolAllocator * btDefaultCollisionConfiguration::base_getPersistentManifoldPool()
	static int _bind_base_getPersistentManifoldPool(lua_State *L) {
		if (!_lg_typecheck_base_getPersistentManifoldPool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btPoolAllocator * btDefaultCollisionConfiguration::base_getPersistentManifoldPool() function, expected prototype:\nbtPoolAllocator * btDefaultCollisionConfiguration::base_getPersistentManifoldPool()\nClass arguments details:\n");
		}


		btDefaultCollisionConfiguration* self=Luna< btCollisionConfiguration >::checkSubType< btDefaultCollisionConfiguration >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btPoolAllocator * btDefaultCollisionConfiguration::base_getPersistentManifoldPool(). Got : '%s'",typeid(Luna< btCollisionConfiguration >::check(L,1)).name());
		}
		btPoolAllocator * lret = self->btDefaultCollisionConfiguration::getPersistentManifoldPool();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPoolAllocator >::push(L,lret,false);

		return 1;
	}

	// btPoolAllocator * btDefaultCollisionConfiguration::base_getCollisionAlgorithmPool()
	static int _bind_base_getCollisionAlgorithmPool(lua_State *L) {
		if (!_lg_typecheck_base_getCollisionAlgorithmPool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btPoolAllocator * btDefaultCollisionConfiguration::base_getCollisionAlgorithmPool() function, expected prototype:\nbtPoolAllocator * btDefaultCollisionConfiguration::base_getCollisionAlgorithmPool()\nClass arguments details:\n");
		}


		btDefaultCollisionConfiguration* self=Luna< btCollisionConfiguration >::checkSubType< btDefaultCollisionConfiguration >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btPoolAllocator * btDefaultCollisionConfiguration::base_getCollisionAlgorithmPool(). Got : '%s'",typeid(Luna< btCollisionConfiguration >::check(L,1)).name());
		}
		btPoolAllocator * lret = self->btDefaultCollisionConfiguration::getCollisionAlgorithmPool();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPoolAllocator >::push(L,lret,false);

		return 1;
	}

	// btStackAlloc * btDefaultCollisionConfiguration::base_getStackAllocator()
	static int _bind_base_getStackAllocator(lua_State *L) {
		if (!_lg_typecheck_base_getStackAllocator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btStackAlloc * btDefaultCollisionConfiguration::base_getStackAllocator() function, expected prototype:\nbtStackAlloc * btDefaultCollisionConfiguration::base_getStackAllocator()\nClass arguments details:\n");
		}


		btDefaultCollisionConfiguration* self=Luna< btCollisionConfiguration >::checkSubType< btDefaultCollisionConfiguration >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btStackAlloc * btDefaultCollisionConfiguration::base_getStackAllocator(). Got : '%s'",typeid(Luna< btCollisionConfiguration >::check(L,1)).name());
		}
		btStackAlloc * lret = self->btDefaultCollisionConfiguration::getStackAllocator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btStackAlloc >::push(L,lret,false);

		return 1;
	}

	// btVoronoiSimplexSolver * btDefaultCollisionConfiguration::base_getSimplexSolver()
	static int _bind_base_getSimplexSolver(lua_State *L) {
		if (!_lg_typecheck_base_getSimplexSolver(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVoronoiSimplexSolver * btDefaultCollisionConfiguration::base_getSimplexSolver() function, expected prototype:\nbtVoronoiSimplexSolver * btDefaultCollisionConfiguration::base_getSimplexSolver()\nClass arguments details:\n");
		}


		btDefaultCollisionConfiguration* self=Luna< btCollisionConfiguration >::checkSubType< btDefaultCollisionConfiguration >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVoronoiSimplexSolver * btDefaultCollisionConfiguration::base_getSimplexSolver(). Got : '%s'",typeid(Luna< btCollisionConfiguration >::check(L,1)).name());
		}
		btVoronoiSimplexSolver * lret = self->btDefaultCollisionConfiguration::getSimplexSolver();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVoronoiSimplexSolver >::push(L,lret,false);

		return 1;
	}

	// btCollisionAlgorithmCreateFunc * btDefaultCollisionConfiguration::base_getCollisionAlgorithmCreateFunc(int proxyType0, int proxyType1)
	static int _bind_base_getCollisionAlgorithmCreateFunc(lua_State *L) {
		if (!_lg_typecheck_base_getCollisionAlgorithmCreateFunc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionAlgorithmCreateFunc * btDefaultCollisionConfiguration::base_getCollisionAlgorithmCreateFunc(int proxyType0, int proxyType1) function, expected prototype:\nbtCollisionAlgorithmCreateFunc * btDefaultCollisionConfiguration::base_getCollisionAlgorithmCreateFunc(int proxyType0, int proxyType1)\nClass arguments details:\n");
		}

		int proxyType0=(int)lua_tointeger(L,2);
		int proxyType1=(int)lua_tointeger(L,3);

		btDefaultCollisionConfiguration* self=Luna< btCollisionConfiguration >::checkSubType< btDefaultCollisionConfiguration >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCollisionAlgorithmCreateFunc * btDefaultCollisionConfiguration::base_getCollisionAlgorithmCreateFunc(int, int). Got : '%s'",typeid(Luna< btCollisionConfiguration >::check(L,1)).name());
		}
		btCollisionAlgorithmCreateFunc * lret = self->btDefaultCollisionConfiguration::getCollisionAlgorithmCreateFunc(proxyType0, proxyType1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionAlgorithmCreateFunc >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

btDefaultCollisionConfiguration* LunaTraits< btDefaultCollisionConfiguration >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btDefaultCollisionConfiguration::_bind_ctor(L);
}

void LunaTraits< btDefaultCollisionConfiguration >::_bind_dtor(btDefaultCollisionConfiguration* obj) {
	delete obj;
}

const char LunaTraits< btDefaultCollisionConfiguration >::className[] = "btDefaultCollisionConfiguration";
const char LunaTraits< btDefaultCollisionConfiguration >::fullName[] = "btDefaultCollisionConfiguration";
const char LunaTraits< btDefaultCollisionConfiguration >::moduleName[] = "bullet";
const char* LunaTraits< btDefaultCollisionConfiguration >::parents[] = {"bullet.btCollisionConfiguration", 0};
const int LunaTraits< btDefaultCollisionConfiguration >::hash = 81162269;
const int LunaTraits< btDefaultCollisionConfiguration >::uniqueIDs[] = {31901746,0};

luna_RegType LunaTraits< btDefaultCollisionConfiguration >::methods[] = {
	{"getPersistentManifoldPool", &luna_wrapper_btDefaultCollisionConfiguration::_bind_getPersistentManifoldPool},
	{"getCollisionAlgorithmPool", &luna_wrapper_btDefaultCollisionConfiguration::_bind_getCollisionAlgorithmPool},
	{"getStackAllocator", &luna_wrapper_btDefaultCollisionConfiguration::_bind_getStackAllocator},
	{"getSimplexSolver", &luna_wrapper_btDefaultCollisionConfiguration::_bind_getSimplexSolver},
	{"getCollisionAlgorithmCreateFunc", &luna_wrapper_btDefaultCollisionConfiguration::_bind_getCollisionAlgorithmCreateFunc},
	{"setConvexConvexMultipointIterations", &luna_wrapper_btDefaultCollisionConfiguration::_bind_setConvexConvexMultipointIterations},
	{"setPlaneConvexMultipointIterations", &luna_wrapper_btDefaultCollisionConfiguration::_bind_setPlaneConvexMultipointIterations},
	{"base_getPersistentManifoldPool", &luna_wrapper_btDefaultCollisionConfiguration::_bind_base_getPersistentManifoldPool},
	{"base_getCollisionAlgorithmPool", &luna_wrapper_btDefaultCollisionConfiguration::_bind_base_getCollisionAlgorithmPool},
	{"base_getStackAllocator", &luna_wrapper_btDefaultCollisionConfiguration::_bind_base_getStackAllocator},
	{"base_getSimplexSolver", &luna_wrapper_btDefaultCollisionConfiguration::_bind_base_getSimplexSolver},
	{"base_getCollisionAlgorithmCreateFunc", &luna_wrapper_btDefaultCollisionConfiguration::_bind_base_getCollisionAlgorithmCreateFunc},
	{"__eq", &luna_wrapper_btDefaultCollisionConfiguration::_bind___eq},
	{"fromVoid", &luna_wrapper_btDefaultCollisionConfiguration::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btDefaultCollisionConfiguration::_bind_asVoid},
	{"getTable", &luna_wrapper_btDefaultCollisionConfiguration::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btDefaultCollisionConfiguration >::converters[] = {
	{"btCollisionConfiguration", &luna_wrapper_btDefaultCollisionConfiguration::_cast_from_btCollisionConfiguration},
	{0,0}
};

luna_RegEnumType LunaTraits< btDefaultCollisionConfiguration >::enumValues[] = {
	{0,0}
};


