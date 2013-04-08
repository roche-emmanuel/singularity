#include <plug_common.h>

#include <luna/wrappers/wrapper_btGjkConvexCast.h>

class luna_wrapper_btGjkConvexCast {
public:
	typedef Luna< btGjkConvexCast > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btConvexCast* self=(Luna< btConvexCast >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btConvexCast,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76300448) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btConvexCast*)");
		}

		btConvexCast* rhs =(Luna< btConvexCast >::check(L,2));
		btConvexCast* self=(Luna< btConvexCast >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
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

		btGjkConvexCast* self= (btGjkConvexCast*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btGjkConvexCast >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76300448) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btConvexCast >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_btConvexCast(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btGjkConvexCast* ptr= dynamic_cast< btGjkConvexCast* >(Luna< btConvexCast >::check(L,1));
		btGjkConvexCast* ptr= luna_caster< btConvexCast, btGjkConvexCast >::cast(Luna< btConvexCast >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btGjkConvexCast >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,58243831)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,1)) ) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58243831)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,95428271)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< btVoronoiSimplexSolver >::check(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58243831)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,58243831)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,3)) ) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,95428271)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< btVoronoiSimplexSolver >::check(L,4)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_calcTimeOfImpact(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,12958328) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_calcTimeOfImpact(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,12958328) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btGjkConvexCast::btGjkConvexCast(const btConvexShape * convexA, const btConvexShape * convexB, btVoronoiSimplexSolver * simplexSolver)
	static btGjkConvexCast* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGjkConvexCast::btGjkConvexCast(const btConvexShape * convexA, const btConvexShape * convexB, btVoronoiSimplexSolver * simplexSolver) function, expected prototype:\nbtGjkConvexCast::btGjkConvexCast(const btConvexShape * convexA, const btConvexShape * convexB, btVoronoiSimplexSolver * simplexSolver)\nClass arguments details:\narg 1 ID = 58243831\narg 2 ID = 58243831\narg 3 ID = 95428271\n");
		}

		const btConvexShape* convexA=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,1));
		const btConvexShape* convexB=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,2));
		btVoronoiSimplexSolver* simplexSolver=(Luna< btVoronoiSimplexSolver >::check(L,3));

		return new btGjkConvexCast(convexA, convexB, simplexSolver);
	}

	// btGjkConvexCast::btGjkConvexCast(lua_Table * data, const btConvexShape * convexA, const btConvexShape * convexB, btVoronoiSimplexSolver * simplexSolver)
	static btGjkConvexCast* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGjkConvexCast::btGjkConvexCast(lua_Table * data, const btConvexShape * convexA, const btConvexShape * convexB, btVoronoiSimplexSolver * simplexSolver) function, expected prototype:\nbtGjkConvexCast::btGjkConvexCast(lua_Table * data, const btConvexShape * convexA, const btConvexShape * convexB, btVoronoiSimplexSolver * simplexSolver)\nClass arguments details:\narg 2 ID = 58243831\narg 3 ID = 58243831\narg 4 ID = 95428271\n");
		}

		const btConvexShape* convexA=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,2));
		const btConvexShape* convexB=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,3));
		btVoronoiSimplexSolver* simplexSolver=(Luna< btVoronoiSimplexSolver >::check(L,4));

		return new wrapper_btGjkConvexCast(L,NULL, convexA, convexB, simplexSolver);
	}

	// Overload binder for btGjkConvexCast::btGjkConvexCast
	static btGjkConvexCast* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btGjkConvexCast, cannot match any of the overloads for function btGjkConvexCast:\n  btGjkConvexCast(const btConvexShape *, const btConvexShape *, btVoronoiSimplexSolver *)\n  btGjkConvexCast(lua_Table *, const btConvexShape *, const btConvexShape *, btVoronoiSimplexSolver *)\n");
		return NULL;
	}


	// Function binds:
	// bool btGjkConvexCast::calcTimeOfImpact(const btTransform & fromA, const btTransform & toA, const btTransform & fromB, const btTransform & toB, btConvexCast::CastResult & result)
	static int _bind_calcTimeOfImpact(lua_State *L) {
		if (!_lg_typecheck_calcTimeOfImpact(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btGjkConvexCast::calcTimeOfImpact(const btTransform & fromA, const btTransform & toA, const btTransform & fromB, const btTransform & toB, btConvexCast::CastResult & result) function, expected prototype:\nbool btGjkConvexCast::calcTimeOfImpact(const btTransform & fromA, const btTransform & toA, const btTransform & fromB, const btTransform & toB, btConvexCast::CastResult & result)\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 13247377\narg 3 ID = 13247377\narg 4 ID = 13247377\narg 5 ID = 12958328\n");
		}

		const btTransform* fromA_ptr=(Luna< btTransform >::check(L,2));
		if( !fromA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fromA in btGjkConvexCast::calcTimeOfImpact function");
		}
		const btTransform & fromA=*fromA_ptr;
		const btTransform* toA_ptr=(Luna< btTransform >::check(L,3));
		if( !toA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg toA in btGjkConvexCast::calcTimeOfImpact function");
		}
		const btTransform & toA=*toA_ptr;
		const btTransform* fromB_ptr=(Luna< btTransform >::check(L,4));
		if( !fromB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fromB in btGjkConvexCast::calcTimeOfImpact function");
		}
		const btTransform & fromB=*fromB_ptr;
		const btTransform* toB_ptr=(Luna< btTransform >::check(L,5));
		if( !toB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg toB in btGjkConvexCast::calcTimeOfImpact function");
		}
		const btTransform & toB=*toB_ptr;
		btConvexCast::CastResult* result_ptr=(Luna< btConvexCast::CastResult >::check(L,6));
		if( !result_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg result in btGjkConvexCast::calcTimeOfImpact function");
		}
		btConvexCast::CastResult & result=*result_ptr;

		btGjkConvexCast* self=Luna< btConvexCast >::checkSubType< btGjkConvexCast >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btGjkConvexCast::calcTimeOfImpact(const btTransform &, const btTransform &, const btTransform &, const btTransform &, btConvexCast::CastResult &). Got : '%s'",typeid(Luna< btConvexCast >::check(L,1)).name());
		}
		bool lret = self->calcTimeOfImpact(fromA, toA, fromB, toB, result);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btGjkConvexCast::base_calcTimeOfImpact(const btTransform & fromA, const btTransform & toA, const btTransform & fromB, const btTransform & toB, btConvexCast::CastResult & result)
	static int _bind_base_calcTimeOfImpact(lua_State *L) {
		if (!_lg_typecheck_base_calcTimeOfImpact(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btGjkConvexCast::base_calcTimeOfImpact(const btTransform & fromA, const btTransform & toA, const btTransform & fromB, const btTransform & toB, btConvexCast::CastResult & result) function, expected prototype:\nbool btGjkConvexCast::base_calcTimeOfImpact(const btTransform & fromA, const btTransform & toA, const btTransform & fromB, const btTransform & toB, btConvexCast::CastResult & result)\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 13247377\narg 3 ID = 13247377\narg 4 ID = 13247377\narg 5 ID = 12958328\n");
		}

		const btTransform* fromA_ptr=(Luna< btTransform >::check(L,2));
		if( !fromA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fromA in btGjkConvexCast::base_calcTimeOfImpact function");
		}
		const btTransform & fromA=*fromA_ptr;
		const btTransform* toA_ptr=(Luna< btTransform >::check(L,3));
		if( !toA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg toA in btGjkConvexCast::base_calcTimeOfImpact function");
		}
		const btTransform & toA=*toA_ptr;
		const btTransform* fromB_ptr=(Luna< btTransform >::check(L,4));
		if( !fromB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fromB in btGjkConvexCast::base_calcTimeOfImpact function");
		}
		const btTransform & fromB=*fromB_ptr;
		const btTransform* toB_ptr=(Luna< btTransform >::check(L,5));
		if( !toB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg toB in btGjkConvexCast::base_calcTimeOfImpact function");
		}
		const btTransform & toB=*toB_ptr;
		btConvexCast::CastResult* result_ptr=(Luna< btConvexCast::CastResult >::check(L,6));
		if( !result_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg result in btGjkConvexCast::base_calcTimeOfImpact function");
		}
		btConvexCast::CastResult & result=*result_ptr;

		btGjkConvexCast* self=Luna< btConvexCast >::checkSubType< btGjkConvexCast >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btGjkConvexCast::base_calcTimeOfImpact(const btTransform &, const btTransform &, const btTransform &, const btTransform &, btConvexCast::CastResult &). Got : '%s'",typeid(Luna< btConvexCast >::check(L,1)).name());
		}
		bool lret = self->btGjkConvexCast::calcTimeOfImpact(fromA, toA, fromB, toB, result);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

btGjkConvexCast* LunaTraits< btGjkConvexCast >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btGjkConvexCast::_bind_ctor(L);
}

void LunaTraits< btGjkConvexCast >::_bind_dtor(btGjkConvexCast* obj) {
	delete obj;
}

const char LunaTraits< btGjkConvexCast >::className[] = "btGjkConvexCast";
const char LunaTraits< btGjkConvexCast >::fullName[] = "btGjkConvexCast";
const char LunaTraits< btGjkConvexCast >::moduleName[] = "bullet";
const char* LunaTraits< btGjkConvexCast >::parents[] = {"bullet.btConvexCast", 0};
const int LunaTraits< btGjkConvexCast >::hash = 24646635;
const int LunaTraits< btGjkConvexCast >::uniqueIDs[] = {76300448,0};

luna_RegType LunaTraits< btGjkConvexCast >::methods[] = {
	{"calcTimeOfImpact", &luna_wrapper_btGjkConvexCast::_bind_calcTimeOfImpact},
	{"base_calcTimeOfImpact", &luna_wrapper_btGjkConvexCast::_bind_base_calcTimeOfImpact},
	{"__eq", &luna_wrapper_btGjkConvexCast::_bind___eq},
	{"fromVoid", &luna_wrapper_btGjkConvexCast::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btGjkConvexCast::_bind_asVoid},
	{"getTable", &luna_wrapper_btGjkConvexCast::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btGjkConvexCast >::converters[] = {
	{"btConvexCast", &luna_wrapper_btGjkConvexCast::_cast_from_btConvexCast},
	{0,0}
};

luna_RegEnumType LunaTraits< btGjkConvexCast >::enumValues[] = {
	{0,0}
};


