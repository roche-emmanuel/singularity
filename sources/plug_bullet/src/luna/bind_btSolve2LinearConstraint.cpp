#include <plug_common.h>

class luna_wrapper_btSolve2LinearConstraint {
public:
	typedef Luna< btSolve2LinearConstraint > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,34428590) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btSolve2LinearConstraint*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btSolve2LinearConstraint* rhs =(Luna< btSolve2LinearConstraint >::check(L,2));
		btSolve2LinearConstraint* self=(Luna< btSolve2LinearConstraint >::check(L,1));
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
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btSolve2LinearConstraint* self= (btSolve2LinearConstraint*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btSolve2LinearConstraint >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,34428590) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btSolve2LinearConstraint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		btSolve2LinearConstraint* self=(Luna< btSolve2LinearConstraint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btSolve2LinearConstraint");
		
		return luna_dynamicCast(L,converters,"btSolve2LinearConstraint",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_resolveUnilateralPairConstraint(lua_State *L) {
		if( lua_gettop(L)!=23 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,85758361)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,30394543) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,30394543) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,8,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,10,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,11,91544891) ) return false;
		if( lua_type(L,12)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,13,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,14,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,15,91544891) ) return false;
		if( lua_type(L,16)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,17,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,18,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,19,91544891) ) return false;
		if( lua_type(L,20)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,21,91544891) ) return false;
		if( lua_type(L,22)!=LUA_TNUMBER ) return false;
		if( lua_type(L,23)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_resolveBilateralPairConstraint(lua_State *L) {
		if( lua_gettop(L)!=23 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,85758361)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,30394543) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,30394543) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,8,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,10,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,11,91544891) ) return false;
		if( lua_type(L,12)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,13,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,14,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,15,91544891) ) return false;
		if( lua_type(L,16)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,17,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,18,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,19,91544891) ) return false;
		if( lua_type(L,20)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,21,91544891) ) return false;
		if( lua_type(L,22)!=LUA_TNUMBER ) return false;
		if( lua_type(L,23)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btSolve2LinearConstraint::btSolve2LinearConstraint(float tau, float damping)
	static btSolve2LinearConstraint* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in btSolve2LinearConstraint::btSolve2LinearConstraint(float tau, float damping) function, expected prototype:\nbtSolve2LinearConstraint::btSolve2LinearConstraint(float tau, float damping)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float tau=(float)lua_tonumber(L,1);
		float damping=(float)lua_tonumber(L,2);

		return new btSolve2LinearConstraint(tau, damping);
	}


	// Function binds:
	// void btSolve2LinearConstraint::resolveUnilateralPairConstraint(btRigidBody * body0, btRigidBody * body1, const btMatrix3x3 & world2A, const btMatrix3x3 & world2B, const btVector3 & invInertiaADiag, const float invMassA, const btVector3 & linvelA, const btVector3 & angvelA, const btVector3 & rel_posA1, const btVector3 & invInertiaBDiag, const float invMassB, const btVector3 & linvelB, const btVector3 & angvelB, const btVector3 & rel_posA2, float depthA, const btVector3 & normalA, const btVector3 & rel_posB1, const btVector3 & rel_posB2, float depthB, const btVector3 & normalB, float & imp0, float & imp1)
	static int _bind_resolveUnilateralPairConstraint(lua_State *L) {
		if (!_lg_typecheck_resolveUnilateralPairConstraint(L)) {
			luaL_error(L, "luna typecheck failed in void btSolve2LinearConstraint::resolveUnilateralPairConstraint(btRigidBody * body0, btRigidBody * body1, const btMatrix3x3 & world2A, const btMatrix3x3 & world2B, const btVector3 & invInertiaADiag, const float invMassA, const btVector3 & linvelA, const btVector3 & angvelA, const btVector3 & rel_posA1, const btVector3 & invInertiaBDiag, const float invMassB, const btVector3 & linvelB, const btVector3 & angvelB, const btVector3 & rel_posA2, float depthA, const btVector3 & normalA, const btVector3 & rel_posB1, const btVector3 & rel_posB2, float depthB, const btVector3 & normalB, float & imp0, float & imp1) function, expected prototype:\nvoid btSolve2LinearConstraint::resolveUnilateralPairConstraint(btRigidBody * body0, btRigidBody * body1, const btMatrix3x3 & world2A, const btMatrix3x3 & world2B, const btVector3 & invInertiaADiag, const float invMassA, const btVector3 & linvelA, const btVector3 & angvelA, const btVector3 & rel_posA1, const btVector3 & invInertiaBDiag, const float invMassB, const btVector3 & linvelB, const btVector3 & angvelB, const btVector3 & rel_posA2, float depthA, const btVector3 & normalA, const btVector3 & rel_posB1, const btVector3 & rel_posB2, float depthB, const btVector3 & normalB, float & imp0, float & imp1)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\narg 3 ID = 30394543\narg 4 ID = 30394543\narg 5 ID = 91544891\narg 7 ID = 91544891\narg 8 ID = 91544891\narg 9 ID = 91544891\narg 10 ID = 91544891\narg 12 ID = 91544891\narg 13 ID = 91544891\narg 14 ID = 91544891\narg 16 ID = 91544891\narg 17 ID = 91544891\narg 18 ID = 91544891\narg 20 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btRigidBody* body0=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));
		btRigidBody* body1=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,3));
		const btMatrix3x3* world2A_ptr=(Luna< btMatrix3x3 >::check(L,4));
		if( !world2A_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg world2A in btSolve2LinearConstraint::resolveUnilateralPairConstraint function");
		}
		const btMatrix3x3 & world2A=*world2A_ptr;
		const btMatrix3x3* world2B_ptr=(Luna< btMatrix3x3 >::check(L,5));
		if( !world2B_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg world2B in btSolve2LinearConstraint::resolveUnilateralPairConstraint function");
		}
		const btMatrix3x3 & world2B=*world2B_ptr;
		const btVector3* invInertiaADiag_ptr=(Luna< btVector3 >::check(L,6));
		if( !invInertiaADiag_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg invInertiaADiag in btSolve2LinearConstraint::resolveUnilateralPairConstraint function");
		}
		const btVector3 & invInertiaADiag=*invInertiaADiag_ptr;
		const float invMassA=(const float)lua_tonumber(L,7);
		const btVector3* linvelA_ptr=(Luna< btVector3 >::check(L,8));
		if( !linvelA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg linvelA in btSolve2LinearConstraint::resolveUnilateralPairConstraint function");
		}
		const btVector3 & linvelA=*linvelA_ptr;
		const btVector3* angvelA_ptr=(Luna< btVector3 >::check(L,9));
		if( !angvelA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg angvelA in btSolve2LinearConstraint::resolveUnilateralPairConstraint function");
		}
		const btVector3 & angvelA=*angvelA_ptr;
		const btVector3* rel_posA1_ptr=(Luna< btVector3 >::check(L,10));
		if( !rel_posA1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rel_posA1 in btSolve2LinearConstraint::resolveUnilateralPairConstraint function");
		}
		const btVector3 & rel_posA1=*rel_posA1_ptr;
		const btVector3* invInertiaBDiag_ptr=(Luna< btVector3 >::check(L,11));
		if( !invInertiaBDiag_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg invInertiaBDiag in btSolve2LinearConstraint::resolveUnilateralPairConstraint function");
		}
		const btVector3 & invInertiaBDiag=*invInertiaBDiag_ptr;
		const float invMassB=(const float)lua_tonumber(L,12);
		const btVector3* linvelB_ptr=(Luna< btVector3 >::check(L,13));
		if( !linvelB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg linvelB in btSolve2LinearConstraint::resolveUnilateralPairConstraint function");
		}
		const btVector3 & linvelB=*linvelB_ptr;
		const btVector3* angvelB_ptr=(Luna< btVector3 >::check(L,14));
		if( !angvelB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg angvelB in btSolve2LinearConstraint::resolveUnilateralPairConstraint function");
		}
		const btVector3 & angvelB=*angvelB_ptr;
		const btVector3* rel_posA2_ptr=(Luna< btVector3 >::check(L,15));
		if( !rel_posA2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rel_posA2 in btSolve2LinearConstraint::resolveUnilateralPairConstraint function");
		}
		const btVector3 & rel_posA2=*rel_posA2_ptr;
		float depthA=(float)lua_tonumber(L,16);
		const btVector3* normalA_ptr=(Luna< btVector3 >::check(L,17));
		if( !normalA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normalA in btSolve2LinearConstraint::resolveUnilateralPairConstraint function");
		}
		const btVector3 & normalA=*normalA_ptr;
		const btVector3* rel_posB1_ptr=(Luna< btVector3 >::check(L,18));
		if( !rel_posB1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rel_posB1 in btSolve2LinearConstraint::resolveUnilateralPairConstraint function");
		}
		const btVector3 & rel_posB1=*rel_posB1_ptr;
		const btVector3* rel_posB2_ptr=(Luna< btVector3 >::check(L,19));
		if( !rel_posB2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rel_posB2 in btSolve2LinearConstraint::resolveUnilateralPairConstraint function");
		}
		const btVector3 & rel_posB2=*rel_posB2_ptr;
		float depthB=(float)lua_tonumber(L,20);
		const btVector3* normalB_ptr=(Luna< btVector3 >::check(L,21));
		if( !normalB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normalB in btSolve2LinearConstraint::resolveUnilateralPairConstraint function");
		}
		const btVector3 & normalB=*normalB_ptr;
		float imp0=(float)lua_tonumber(L,22);
		float imp1=(float)lua_tonumber(L,23);

		btSolve2LinearConstraint* self=(Luna< btSolve2LinearConstraint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btSolve2LinearConstraint::resolveUnilateralPairConstraint(btRigidBody *, btRigidBody *, const btMatrix3x3 &, const btMatrix3x3 &, const btVector3 &, const float, const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &, const float, const btVector3 &, const btVector3 &, const btVector3 &, float, const btVector3 &, const btVector3 &, const btVector3 &, float, const btVector3 &, float &, float &). Got : '%s'\n%s",typeid(Luna< btSolve2LinearConstraint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->resolveUnilateralPairConstraint(body0, body1, world2A, world2B, invInertiaADiag, invMassA, linvelA, angvelA, rel_posA1, invInertiaBDiag, invMassB, linvelB, angvelB, rel_posA2, depthA, normalA, rel_posB1, rel_posB2, depthB, normalB, imp0, imp1);

		lua_pushnumber(L,imp0);
		lua_pushnumber(L,imp1);
		return 2;
	}

	// void btSolve2LinearConstraint::resolveBilateralPairConstraint(btRigidBody * body0, btRigidBody * body1, const btMatrix3x3 & world2A, const btMatrix3x3 & world2B, const btVector3 & invInertiaADiag, const float invMassA, const btVector3 & linvelA, const btVector3 & angvelA, const btVector3 & rel_posA1, const btVector3 & invInertiaBDiag, const float invMassB, const btVector3 & linvelB, const btVector3 & angvelB, const btVector3 & rel_posA2, float depthA, const btVector3 & normalA, const btVector3 & rel_posB1, const btVector3 & rel_posB2, float depthB, const btVector3 & normalB, float & imp0, float & imp1)
	static int _bind_resolveBilateralPairConstraint(lua_State *L) {
		if (!_lg_typecheck_resolveBilateralPairConstraint(L)) {
			luaL_error(L, "luna typecheck failed in void btSolve2LinearConstraint::resolveBilateralPairConstraint(btRigidBody * body0, btRigidBody * body1, const btMatrix3x3 & world2A, const btMatrix3x3 & world2B, const btVector3 & invInertiaADiag, const float invMassA, const btVector3 & linvelA, const btVector3 & angvelA, const btVector3 & rel_posA1, const btVector3 & invInertiaBDiag, const float invMassB, const btVector3 & linvelB, const btVector3 & angvelB, const btVector3 & rel_posA2, float depthA, const btVector3 & normalA, const btVector3 & rel_posB1, const btVector3 & rel_posB2, float depthB, const btVector3 & normalB, float & imp0, float & imp1) function, expected prototype:\nvoid btSolve2LinearConstraint::resolveBilateralPairConstraint(btRigidBody * body0, btRigidBody * body1, const btMatrix3x3 & world2A, const btMatrix3x3 & world2B, const btVector3 & invInertiaADiag, const float invMassA, const btVector3 & linvelA, const btVector3 & angvelA, const btVector3 & rel_posA1, const btVector3 & invInertiaBDiag, const float invMassB, const btVector3 & linvelB, const btVector3 & angvelB, const btVector3 & rel_posA2, float depthA, const btVector3 & normalA, const btVector3 & rel_posB1, const btVector3 & rel_posB2, float depthB, const btVector3 & normalB, float & imp0, float & imp1)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\narg 3 ID = 30394543\narg 4 ID = 30394543\narg 5 ID = 91544891\narg 7 ID = 91544891\narg 8 ID = 91544891\narg 9 ID = 91544891\narg 10 ID = 91544891\narg 12 ID = 91544891\narg 13 ID = 91544891\narg 14 ID = 91544891\narg 16 ID = 91544891\narg 17 ID = 91544891\narg 18 ID = 91544891\narg 20 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btRigidBody* body0=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));
		btRigidBody* body1=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,3));
		const btMatrix3x3* world2A_ptr=(Luna< btMatrix3x3 >::check(L,4));
		if( !world2A_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg world2A in btSolve2LinearConstraint::resolveBilateralPairConstraint function");
		}
		const btMatrix3x3 & world2A=*world2A_ptr;
		const btMatrix3x3* world2B_ptr=(Luna< btMatrix3x3 >::check(L,5));
		if( !world2B_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg world2B in btSolve2LinearConstraint::resolveBilateralPairConstraint function");
		}
		const btMatrix3x3 & world2B=*world2B_ptr;
		const btVector3* invInertiaADiag_ptr=(Luna< btVector3 >::check(L,6));
		if( !invInertiaADiag_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg invInertiaADiag in btSolve2LinearConstraint::resolveBilateralPairConstraint function");
		}
		const btVector3 & invInertiaADiag=*invInertiaADiag_ptr;
		const float invMassA=(const float)lua_tonumber(L,7);
		const btVector3* linvelA_ptr=(Luna< btVector3 >::check(L,8));
		if( !linvelA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg linvelA in btSolve2LinearConstraint::resolveBilateralPairConstraint function");
		}
		const btVector3 & linvelA=*linvelA_ptr;
		const btVector3* angvelA_ptr=(Luna< btVector3 >::check(L,9));
		if( !angvelA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg angvelA in btSolve2LinearConstraint::resolveBilateralPairConstraint function");
		}
		const btVector3 & angvelA=*angvelA_ptr;
		const btVector3* rel_posA1_ptr=(Luna< btVector3 >::check(L,10));
		if( !rel_posA1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rel_posA1 in btSolve2LinearConstraint::resolveBilateralPairConstraint function");
		}
		const btVector3 & rel_posA1=*rel_posA1_ptr;
		const btVector3* invInertiaBDiag_ptr=(Luna< btVector3 >::check(L,11));
		if( !invInertiaBDiag_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg invInertiaBDiag in btSolve2LinearConstraint::resolveBilateralPairConstraint function");
		}
		const btVector3 & invInertiaBDiag=*invInertiaBDiag_ptr;
		const float invMassB=(const float)lua_tonumber(L,12);
		const btVector3* linvelB_ptr=(Luna< btVector3 >::check(L,13));
		if( !linvelB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg linvelB in btSolve2LinearConstraint::resolveBilateralPairConstraint function");
		}
		const btVector3 & linvelB=*linvelB_ptr;
		const btVector3* angvelB_ptr=(Luna< btVector3 >::check(L,14));
		if( !angvelB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg angvelB in btSolve2LinearConstraint::resolveBilateralPairConstraint function");
		}
		const btVector3 & angvelB=*angvelB_ptr;
		const btVector3* rel_posA2_ptr=(Luna< btVector3 >::check(L,15));
		if( !rel_posA2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rel_posA2 in btSolve2LinearConstraint::resolveBilateralPairConstraint function");
		}
		const btVector3 & rel_posA2=*rel_posA2_ptr;
		float depthA=(float)lua_tonumber(L,16);
		const btVector3* normalA_ptr=(Luna< btVector3 >::check(L,17));
		if( !normalA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normalA in btSolve2LinearConstraint::resolveBilateralPairConstraint function");
		}
		const btVector3 & normalA=*normalA_ptr;
		const btVector3* rel_posB1_ptr=(Luna< btVector3 >::check(L,18));
		if( !rel_posB1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rel_posB1 in btSolve2LinearConstraint::resolveBilateralPairConstraint function");
		}
		const btVector3 & rel_posB1=*rel_posB1_ptr;
		const btVector3* rel_posB2_ptr=(Luna< btVector3 >::check(L,19));
		if( !rel_posB2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rel_posB2 in btSolve2LinearConstraint::resolveBilateralPairConstraint function");
		}
		const btVector3 & rel_posB2=*rel_posB2_ptr;
		float depthB=(float)lua_tonumber(L,20);
		const btVector3* normalB_ptr=(Luna< btVector3 >::check(L,21));
		if( !normalB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normalB in btSolve2LinearConstraint::resolveBilateralPairConstraint function");
		}
		const btVector3 & normalB=*normalB_ptr;
		float imp0=(float)lua_tonumber(L,22);
		float imp1=(float)lua_tonumber(L,23);

		btSolve2LinearConstraint* self=(Luna< btSolve2LinearConstraint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btSolve2LinearConstraint::resolveBilateralPairConstraint(btRigidBody *, btRigidBody *, const btMatrix3x3 &, const btMatrix3x3 &, const btVector3 &, const float, const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &, const float, const btVector3 &, const btVector3 &, const btVector3 &, float, const btVector3 &, const btVector3 &, const btVector3 &, float, const btVector3 &, float &, float &). Got : '%s'\n%s",typeid(Luna< btSolve2LinearConstraint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->resolveBilateralPairConstraint(body0, body1, world2A, world2B, invInertiaADiag, invMassA, linvelA, angvelA, rel_posA1, invInertiaBDiag, invMassB, linvelB, angvelB, rel_posA2, depthA, normalA, rel_posB1, rel_posB2, depthB, normalB, imp0, imp1);

		lua_pushnumber(L,imp0);
		lua_pushnumber(L,imp1);
		return 2;
	}


	// Operator binds:

};

btSolve2LinearConstraint* LunaTraits< btSolve2LinearConstraint >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btSolve2LinearConstraint::_bind_ctor(L);
}

void LunaTraits< btSolve2LinearConstraint >::_bind_dtor(btSolve2LinearConstraint* obj) {
	delete obj;
}

const char LunaTraits< btSolve2LinearConstraint >::className[] = "btSolve2LinearConstraint";
const char LunaTraits< btSolve2LinearConstraint >::fullName[] = "btSolve2LinearConstraint";
const char LunaTraits< btSolve2LinearConstraint >::moduleName[] = "bullet";
const char* LunaTraits< btSolve2LinearConstraint >::parents[] = {0};
const int LunaTraits< btSolve2LinearConstraint >::hash = 34428590;
const int LunaTraits< btSolve2LinearConstraint >::uniqueIDs[] = {34428590,0};

luna_RegType LunaTraits< btSolve2LinearConstraint >::methods[] = {
	{"resolveUnilateralPairConstraint", &luna_wrapper_btSolve2LinearConstraint::_bind_resolveUnilateralPairConstraint},
	{"resolveBilateralPairConstraint", &luna_wrapper_btSolve2LinearConstraint::_bind_resolveBilateralPairConstraint},
	{"dynCast", &luna_wrapper_btSolve2LinearConstraint::_bind_dynCast},
	{"__eq", &luna_wrapper_btSolve2LinearConstraint::_bind___eq},
	{"fromVoid", &luna_wrapper_btSolve2LinearConstraint::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btSolve2LinearConstraint::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btSolve2LinearConstraint >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btSolve2LinearConstraint >::enumValues[] = {
	{0,0}
};


