#include <plug_common.h>

#include <luna/wrappers/wrapper_btContinuousConvexCollision.h>

class luna_wrapper_btContinuousConvexCollision {
public:
	typedef Luna< btContinuousConvexCollision > luna_t;

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
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_btConvexCast(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btContinuousConvexCollision* ptr= dynamic_cast< btContinuousConvexCollision* >(Luna< btConvexCast >::check(L,1));
		btContinuousConvexCollision* ptr= luna_caster< btConvexCast, btContinuousConvexCollision >::cast(Luna< btConvexCast >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btContinuousConvexCollision >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,58243831)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,1)) ) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58243831)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,95428271)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< btVoronoiSimplexSolver >::check(L,3)) ) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,62802517)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< btConvexPenetrationDepthSolver >::check(L,4)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,58243831)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,1)) ) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58243831)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btCollisionShape >::checkSubType< btStaticPlaneShape >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58243831)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,58243831)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,3)) ) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,95428271)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< btVoronoiSimplexSolver >::check(L,4)) ) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,62802517)) ) return false;
		if( (lua_isnil(L,5)==0 && !(Luna< btConvexPenetrationDepthSolver >::check(L,5)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58243831)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,58243831)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< btCollisionShape >::checkSubType< btStaticPlaneShape >(L,3)) ) ) return false;
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
	// btContinuousConvexCollision::btContinuousConvexCollision(const btConvexShape * shapeA, const btConvexShape * shapeB, btVoronoiSimplexSolver * simplexSolver, btConvexPenetrationDepthSolver * penetrationDepthSolver)
	static btContinuousConvexCollision* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btContinuousConvexCollision::btContinuousConvexCollision(const btConvexShape * shapeA, const btConvexShape * shapeB, btVoronoiSimplexSolver * simplexSolver, btConvexPenetrationDepthSolver * penetrationDepthSolver) function, expected prototype:\nbtContinuousConvexCollision::btContinuousConvexCollision(const btConvexShape * shapeA, const btConvexShape * shapeB, btVoronoiSimplexSolver * simplexSolver, btConvexPenetrationDepthSolver * penetrationDepthSolver)\nClass arguments details:\narg 1 ID = 58243831\narg 2 ID = 58243831\narg 3 ID = 95428271\narg 4 ID = 62802517\n");
		}

		const btConvexShape* shapeA=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,1));
		const btConvexShape* shapeB=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,2));
		btVoronoiSimplexSolver* simplexSolver=(Luna< btVoronoiSimplexSolver >::check(L,3));
		btConvexPenetrationDepthSolver* penetrationDepthSolver=(Luna< btConvexPenetrationDepthSolver >::check(L,4));

		return new btContinuousConvexCollision(shapeA, shapeB, simplexSolver, penetrationDepthSolver);
	}

	// btContinuousConvexCollision::btContinuousConvexCollision(const btConvexShape * shapeA, const btStaticPlaneShape * plane)
	static btContinuousConvexCollision* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btContinuousConvexCollision::btContinuousConvexCollision(const btConvexShape * shapeA, const btStaticPlaneShape * plane) function, expected prototype:\nbtContinuousConvexCollision::btContinuousConvexCollision(const btConvexShape * shapeA, const btStaticPlaneShape * plane)\nClass arguments details:\narg 1 ID = 58243831\narg 2 ID = 58243831\n");
		}

		const btConvexShape* shapeA=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,1));
		const btStaticPlaneShape* plane=(Luna< btCollisionShape >::checkSubType< btStaticPlaneShape >(L,2));

		return new btContinuousConvexCollision(shapeA, plane);
	}

	// btContinuousConvexCollision::btContinuousConvexCollision(lua_Table * data, const btConvexShape * shapeA, const btConvexShape * shapeB, btVoronoiSimplexSolver * simplexSolver, btConvexPenetrationDepthSolver * penetrationDepthSolver)
	static btContinuousConvexCollision* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btContinuousConvexCollision::btContinuousConvexCollision(lua_Table * data, const btConvexShape * shapeA, const btConvexShape * shapeB, btVoronoiSimplexSolver * simplexSolver, btConvexPenetrationDepthSolver * penetrationDepthSolver) function, expected prototype:\nbtContinuousConvexCollision::btContinuousConvexCollision(lua_Table * data, const btConvexShape * shapeA, const btConvexShape * shapeB, btVoronoiSimplexSolver * simplexSolver, btConvexPenetrationDepthSolver * penetrationDepthSolver)\nClass arguments details:\narg 2 ID = 58243831\narg 3 ID = 58243831\narg 4 ID = 95428271\narg 5 ID = 62802517\n");
		}

		const btConvexShape* shapeA=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,2));
		const btConvexShape* shapeB=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,3));
		btVoronoiSimplexSolver* simplexSolver=(Luna< btVoronoiSimplexSolver >::check(L,4));
		btConvexPenetrationDepthSolver* penetrationDepthSolver=(Luna< btConvexPenetrationDepthSolver >::check(L,5));

		return new wrapper_btContinuousConvexCollision(L,NULL, shapeA, shapeB, simplexSolver, penetrationDepthSolver);
	}

	// btContinuousConvexCollision::btContinuousConvexCollision(lua_Table * data, const btConvexShape * shapeA, const btStaticPlaneShape * plane)
	static btContinuousConvexCollision* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btContinuousConvexCollision::btContinuousConvexCollision(lua_Table * data, const btConvexShape * shapeA, const btStaticPlaneShape * plane) function, expected prototype:\nbtContinuousConvexCollision::btContinuousConvexCollision(lua_Table * data, const btConvexShape * shapeA, const btStaticPlaneShape * plane)\nClass arguments details:\narg 2 ID = 58243831\narg 3 ID = 58243831\n");
		}

		const btConvexShape* shapeA=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,2));
		const btStaticPlaneShape* plane=(Luna< btCollisionShape >::checkSubType< btStaticPlaneShape >(L,3));

		return new wrapper_btContinuousConvexCollision(L,NULL, shapeA, plane);
	}

	// Overload binder for btContinuousConvexCollision::btContinuousConvexCollision
	static btContinuousConvexCollision* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function btContinuousConvexCollision, cannot match any of the overloads for function btContinuousConvexCollision:\n  btContinuousConvexCollision(const btConvexShape *, const btConvexShape *, btVoronoiSimplexSolver *, btConvexPenetrationDepthSolver *)\n  btContinuousConvexCollision(const btConvexShape *, const btStaticPlaneShape *)\n  btContinuousConvexCollision(lua_Table *, const btConvexShape *, const btConvexShape *, btVoronoiSimplexSolver *, btConvexPenetrationDepthSolver *)\n  btContinuousConvexCollision(lua_Table *, const btConvexShape *, const btStaticPlaneShape *)\n");
		return NULL;
	}


	// Function binds:
	// bool btContinuousConvexCollision::calcTimeOfImpact(const btTransform & fromA, const btTransform & toA, const btTransform & fromB, const btTransform & toB, btConvexCast::CastResult & result)
	static int _bind_calcTimeOfImpact(lua_State *L) {
		if (!_lg_typecheck_calcTimeOfImpact(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btContinuousConvexCollision::calcTimeOfImpact(const btTransform & fromA, const btTransform & toA, const btTransform & fromB, const btTransform & toB, btConvexCast::CastResult & result) function, expected prototype:\nbool btContinuousConvexCollision::calcTimeOfImpact(const btTransform & fromA, const btTransform & toA, const btTransform & fromB, const btTransform & toB, btConvexCast::CastResult & result)\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 13247377\narg 3 ID = 13247377\narg 4 ID = 13247377\narg 5 ID = 12958328\n");
		}

		const btTransform* fromA_ptr=(Luna< btTransform >::check(L,2));
		if( !fromA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fromA in btContinuousConvexCollision::calcTimeOfImpact function");
		}
		const btTransform & fromA=*fromA_ptr;
		const btTransform* toA_ptr=(Luna< btTransform >::check(L,3));
		if( !toA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg toA in btContinuousConvexCollision::calcTimeOfImpact function");
		}
		const btTransform & toA=*toA_ptr;
		const btTransform* fromB_ptr=(Luna< btTransform >::check(L,4));
		if( !fromB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fromB in btContinuousConvexCollision::calcTimeOfImpact function");
		}
		const btTransform & fromB=*fromB_ptr;
		const btTransform* toB_ptr=(Luna< btTransform >::check(L,5));
		if( !toB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg toB in btContinuousConvexCollision::calcTimeOfImpact function");
		}
		const btTransform & toB=*toB_ptr;
		btConvexCast::CastResult* result_ptr=(Luna< btConvexCast::CastResult >::check(L,6));
		if( !result_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg result in btContinuousConvexCollision::calcTimeOfImpact function");
		}
		btConvexCast::CastResult & result=*result_ptr;

		btContinuousConvexCollision* self=Luna< btConvexCast >::checkSubType< btContinuousConvexCollision >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btContinuousConvexCollision::calcTimeOfImpact(const btTransform &, const btTransform &, const btTransform &, const btTransform &, btConvexCast::CastResult &). Got : '%s'",typeid(Luna< btConvexCast >::check(L,1)).name());
		}
		bool lret = self->calcTimeOfImpact(fromA, toA, fromB, toB, result);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btContinuousConvexCollision::base_calcTimeOfImpact(const btTransform & fromA, const btTransform & toA, const btTransform & fromB, const btTransform & toB, btConvexCast::CastResult & result)
	static int _bind_base_calcTimeOfImpact(lua_State *L) {
		if (!_lg_typecheck_base_calcTimeOfImpact(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btContinuousConvexCollision::base_calcTimeOfImpact(const btTransform & fromA, const btTransform & toA, const btTransform & fromB, const btTransform & toB, btConvexCast::CastResult & result) function, expected prototype:\nbool btContinuousConvexCollision::base_calcTimeOfImpact(const btTransform & fromA, const btTransform & toA, const btTransform & fromB, const btTransform & toB, btConvexCast::CastResult & result)\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 13247377\narg 3 ID = 13247377\narg 4 ID = 13247377\narg 5 ID = 12958328\n");
		}

		const btTransform* fromA_ptr=(Luna< btTransform >::check(L,2));
		if( !fromA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fromA in btContinuousConvexCollision::base_calcTimeOfImpact function");
		}
		const btTransform & fromA=*fromA_ptr;
		const btTransform* toA_ptr=(Luna< btTransform >::check(L,3));
		if( !toA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg toA in btContinuousConvexCollision::base_calcTimeOfImpact function");
		}
		const btTransform & toA=*toA_ptr;
		const btTransform* fromB_ptr=(Luna< btTransform >::check(L,4));
		if( !fromB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fromB in btContinuousConvexCollision::base_calcTimeOfImpact function");
		}
		const btTransform & fromB=*fromB_ptr;
		const btTransform* toB_ptr=(Luna< btTransform >::check(L,5));
		if( !toB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg toB in btContinuousConvexCollision::base_calcTimeOfImpact function");
		}
		const btTransform & toB=*toB_ptr;
		btConvexCast::CastResult* result_ptr=(Luna< btConvexCast::CastResult >::check(L,6));
		if( !result_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg result in btContinuousConvexCollision::base_calcTimeOfImpact function");
		}
		btConvexCast::CastResult & result=*result_ptr;

		btContinuousConvexCollision* self=Luna< btConvexCast >::checkSubType< btContinuousConvexCollision >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btContinuousConvexCollision::base_calcTimeOfImpact(const btTransform &, const btTransform &, const btTransform &, const btTransform &, btConvexCast::CastResult &). Got : '%s'",typeid(Luna< btConvexCast >::check(L,1)).name());
		}
		bool lret = self->btContinuousConvexCollision::calcTimeOfImpact(fromA, toA, fromB, toB, result);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

btContinuousConvexCollision* LunaTraits< btContinuousConvexCollision >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btContinuousConvexCollision::_bind_ctor(L);
}

void LunaTraits< btContinuousConvexCollision >::_bind_dtor(btContinuousConvexCollision* obj) {
	delete obj;
}

const char LunaTraits< btContinuousConvexCollision >::className[] = "btContinuousConvexCollision";
const char LunaTraits< btContinuousConvexCollision >::fullName[] = "btContinuousConvexCollision";
const char LunaTraits< btContinuousConvexCollision >::moduleName[] = "bullet";
const char* LunaTraits< btContinuousConvexCollision >::parents[] = {"bullet.btConvexCast", 0};
const int LunaTraits< btContinuousConvexCollision >::hash = 79088333;
const int LunaTraits< btContinuousConvexCollision >::uniqueIDs[] = {76300448,0};

luna_RegType LunaTraits< btContinuousConvexCollision >::methods[] = {
	{"calcTimeOfImpact", &luna_wrapper_btContinuousConvexCollision::_bind_calcTimeOfImpact},
	{"base_calcTimeOfImpact", &luna_wrapper_btContinuousConvexCollision::_bind_base_calcTimeOfImpact},
	{"__eq", &luna_wrapper_btContinuousConvexCollision::_bind___eq},
	{"getTable", &luna_wrapper_btContinuousConvexCollision::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btContinuousConvexCollision >::converters[] = {
	{"btConvexCast", &luna_wrapper_btContinuousConvexCollision::_cast_from_btConvexCast},
	{0,0}
};

luna_RegEnumType LunaTraits< btContinuousConvexCollision >::enumValues[] = {
	{0,0}
};


