#ifndef _WRAPPERS_WRAPPER_BTSEQUENTIALIMPULSECONSTRAINTSOLVER_H_
#define _WRAPPERS_WRAPPER_BTSEQUENTIALIMPULSECONSTRAINTSOLVER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletDynamics/ConstraintSolver/btSequentialImpulseConstraintSolver.h>

class wrapper_btSequentialImpulseConstraintSolver : public btSequentialImpulseConstraintSolver, public luna_wrapper_base {

public:
		

	~wrapper_btSequentialImpulseConstraintSolver() {
		logDEBUG3("Calling delete function for wrapper btSequentialImpulseConstraintSolver");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btSequentialImpulseConstraintSolver*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btSequentialImpulseConstraintSolver(lua_State* L, lua_Table* dum) 
		: btSequentialImpulseConstraintSolver(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btSequentialImpulseConstraintSolver*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btConstraintSolver::prepareSolve(int arg1, int arg2)
	void prepareSolve(int arg1, int arg2) {
		if(_obj.pushFunction("prepareSolve")) {
			_obj.pushArg((btSequentialImpulseConstraintSolver*)this);
			_obj.pushArg(arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<void>());
		}

		return btSequentialImpulseConstraintSolver::prepareSolve(arg1, arg2);
	};

	// void btConstraintSolver::allSolved(const btContactSolverInfo & arg1, class btIDebugDraw * arg2, btStackAlloc * arg3)
	void allSolved(const btContactSolverInfo & arg1, class btIDebugDraw * arg2, btStackAlloc * arg3) {
		if(_obj.pushFunction("allSolved")) {
			_obj.pushArg((btSequentialImpulseConstraintSolver*)this);
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			_obj.pushArg(arg3);
			return (_obj.callFunction<void>());
		}

		return btSequentialImpulseConstraintSolver::allSolved(arg1, arg2, arg3);
	};

	// void btSequentialImpulseConstraintSolver::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			_obj.pushArg((btSequentialImpulseConstraintSolver*)this);
			return (_obj.callFunction<void>());
		}

		return btSequentialImpulseConstraintSolver::reset();
	};


	// Protected non-virtual methods:
	// void btSequentialImpulseConstraintSolver::setupFrictionConstraint(btSolverConstraint & solverConstraint, const btVector3 & normalAxis, int solverBodyIdA, int solverBodyIdB, btManifoldPoint & cp, const btVector3 & rel_pos1, const btVector3 & rel_pos2, btCollisionObject * colObj0, btCollisionObject * colObj1, float relaxation, float desiredVelocity = 0., float cfmSlip = 0.)
	void public_setupFrictionConstraint(btSolverConstraint & solverConstraint, const btVector3 & normalAxis, int solverBodyIdA, int solverBodyIdB, btManifoldPoint & cp, const btVector3 & rel_pos1, const btVector3 & rel_pos2, btCollisionObject * colObj0, btCollisionObject * colObj1, float relaxation, float desiredVelocity = 0., float cfmSlip = 0.) {
		return btSequentialImpulseConstraintSolver::setupFrictionConstraint(solverConstraint, normalAxis, solverBodyIdA, solverBodyIdB, cp, rel_pos1, rel_pos2, colObj0, colObj1, relaxation, desiredVelocity, cfmSlip);
	};

	// void btSequentialImpulseConstraintSolver::setupRollingFrictionConstraint(btSolverConstraint & solverConstraint, const btVector3 & normalAxis, int solverBodyIdA, int solverBodyIdB, btManifoldPoint & cp, const btVector3 & rel_pos1, const btVector3 & rel_pos2, btCollisionObject * colObj0, btCollisionObject * colObj1, float relaxation, float desiredVelocity = 0., float cfmSlip = 0.)
	void public_setupRollingFrictionConstraint(btSolverConstraint & solverConstraint, const btVector3 & normalAxis, int solverBodyIdA, int solverBodyIdB, btManifoldPoint & cp, const btVector3 & rel_pos1, const btVector3 & rel_pos2, btCollisionObject * colObj0, btCollisionObject * colObj1, float relaxation, float desiredVelocity = 0., float cfmSlip = 0.) {
		return btSequentialImpulseConstraintSolver::setupRollingFrictionConstraint(solverConstraint, normalAxis, solverBodyIdA, solverBodyIdB, cp, rel_pos1, rel_pos2, colObj0, colObj1, relaxation, desiredVelocity, cfmSlip);
	};

	// btSolverConstraint & btSequentialImpulseConstraintSolver::addFrictionConstraint(const btVector3 & normalAxis, int solverBodyIdA, int solverBodyIdB, int frictionIndex, btManifoldPoint & cp, const btVector3 & rel_pos1, const btVector3 & rel_pos2, btCollisionObject * colObj0, btCollisionObject * colObj1, float relaxation, float desiredVelocity = 0., float cfmSlip = 0.)
	btSolverConstraint & public_addFrictionConstraint(const btVector3 & normalAxis, int solverBodyIdA, int solverBodyIdB, int frictionIndex, btManifoldPoint & cp, const btVector3 & rel_pos1, const btVector3 & rel_pos2, btCollisionObject * colObj0, btCollisionObject * colObj1, float relaxation, float desiredVelocity = 0., float cfmSlip = 0.) {
		return btSequentialImpulseConstraintSolver::addFrictionConstraint(normalAxis, solverBodyIdA, solverBodyIdB, frictionIndex, cp, rel_pos1, rel_pos2, colObj0, colObj1, relaxation, desiredVelocity, cfmSlip);
	};

	// btSolverConstraint & btSequentialImpulseConstraintSolver::addRollingFrictionConstraint(const btVector3 & normalAxis, int solverBodyIdA, int solverBodyIdB, int frictionIndex, btManifoldPoint & cp, const btVector3 & rel_pos1, const btVector3 & rel_pos2, btCollisionObject * colObj0, btCollisionObject * colObj1, float relaxation, float desiredVelocity = 0, float cfmSlip = 0.f)
	btSolverConstraint & public_addRollingFrictionConstraint(const btVector3 & normalAxis, int solverBodyIdA, int solverBodyIdB, int frictionIndex, btManifoldPoint & cp, const btVector3 & rel_pos1, const btVector3 & rel_pos2, btCollisionObject * colObj0, btCollisionObject * colObj1, float relaxation, float desiredVelocity = 0, float cfmSlip = 0.f) {
		return btSequentialImpulseConstraintSolver::addRollingFrictionConstraint(normalAxis, solverBodyIdA, solverBodyIdB, frictionIndex, cp, rel_pos1, rel_pos2, colObj0, colObj1, relaxation, desiredVelocity, cfmSlip);
	};

	// void btSequentialImpulseConstraintSolver::setupContactConstraint(btSolverConstraint & solverConstraint, int solverBodyIdA, int solverBodyIdB, btManifoldPoint & cp, const btContactSolverInfo & infoGlobal, btVector3 & vel, float & rel_vel, float & relaxation, btVector3 & rel_pos1, btVector3 & rel_pos2)
	void public_setupContactConstraint(btSolverConstraint & solverConstraint, int solverBodyIdA, int solverBodyIdB, btManifoldPoint & cp, const btContactSolverInfo & infoGlobal, btVector3 & vel, float & rel_vel, float & relaxation, btVector3 & rel_pos1, btVector3 & rel_pos2) {
		return btSequentialImpulseConstraintSolver::setupContactConstraint(solverConstraint, solverBodyIdA, solverBodyIdB, cp, infoGlobal, vel, rel_vel, relaxation, rel_pos1, rel_pos2);
	};

	// void btSequentialImpulseConstraintSolver::setFrictionConstraintImpulse(btSolverConstraint & solverConstraint, int solverBodyIdA, int solverBodyIdB, btManifoldPoint & cp, const btContactSolverInfo & infoGlobal)
	void public_setFrictionConstraintImpulse(btSolverConstraint & solverConstraint, int solverBodyIdA, int solverBodyIdB, btManifoldPoint & cp, const btContactSolverInfo & infoGlobal) {
		return btSequentialImpulseConstraintSolver::setFrictionConstraintImpulse(solverConstraint, solverBodyIdA, solverBodyIdB, cp, infoGlobal);
	};

	// float btSequentialImpulseConstraintSolver::restitutionCurve(float rel_vel, float restitution)
	float public_restitutionCurve(float rel_vel, float restitution) {
		return btSequentialImpulseConstraintSolver::restitutionCurve(rel_vel, restitution);
	};

	// void btSequentialImpulseConstraintSolver::convertContact(btPersistentManifold * manifold, const btContactSolverInfo & infoGlobal)
	void public_convertContact(btPersistentManifold * manifold, const btContactSolverInfo & infoGlobal) {
		return btSequentialImpulseConstraintSolver::convertContact(manifold, infoGlobal);
	};

	// void btSequentialImpulseConstraintSolver::resolveSplitPenetrationSIMD(btSolverBody & bodyA, btSolverBody & bodyB, const btSolverConstraint & contactConstraint)
	void public_resolveSplitPenetrationSIMD(btSolverBody & bodyA, btSolverBody & bodyB, const btSolverConstraint & contactConstraint) {
		return btSequentialImpulseConstraintSolver::resolveSplitPenetrationSIMD(bodyA, bodyB, contactConstraint);
	};

	// void btSequentialImpulseConstraintSolver::resolveSplitPenetrationImpulseCacheFriendly(btSolverBody & bodyA, btSolverBody & bodyB, const btSolverConstraint & contactConstraint)
	void public_resolveSplitPenetrationImpulseCacheFriendly(btSolverBody & bodyA, btSolverBody & bodyB, const btSolverConstraint & contactConstraint) {
		return btSequentialImpulseConstraintSolver::resolveSplitPenetrationImpulseCacheFriendly(bodyA, bodyB, contactConstraint);
	};

	// int btSequentialImpulseConstraintSolver::getOrInitSolverBody(btCollisionObject & body)
	int public_getOrInitSolverBody(btCollisionObject & body) {
		return btSequentialImpulseConstraintSolver::getOrInitSolverBody(body);
	};

	// void btSequentialImpulseConstraintSolver::initSolverBody(btSolverBody * solverBody, btCollisionObject * collisionObject)
	void public_initSolverBody(btSolverBody * solverBody, btCollisionObject * collisionObject) {
		return btSequentialImpulseConstraintSolver::initSolverBody(solverBody, collisionObject);
	};

	// void btSequentialImpulseConstraintSolver::resolveSingleConstraintRowGeneric(btSolverBody & bodyA, btSolverBody & bodyB, const btSolverConstraint & contactConstraint)
	void public_resolveSingleConstraintRowGeneric(btSolverBody & bodyA, btSolverBody & bodyB, const btSolverConstraint & contactConstraint) {
		return btSequentialImpulseConstraintSolver::resolveSingleConstraintRowGeneric(bodyA, bodyB, contactConstraint);
	};

	// void btSequentialImpulseConstraintSolver::resolveSingleConstraintRowGenericSIMD(btSolverBody & bodyA, btSolverBody & bodyB, const btSolverConstraint & contactConstraint)
	void public_resolveSingleConstraintRowGenericSIMD(btSolverBody & bodyA, btSolverBody & bodyB, const btSolverConstraint & contactConstraint) {
		return btSequentialImpulseConstraintSolver::resolveSingleConstraintRowGenericSIMD(bodyA, bodyB, contactConstraint);
	};

	// void btSequentialImpulseConstraintSolver::resolveSingleConstraintRowLowerLimit(btSolverBody & bodyA, btSolverBody & bodyB, const btSolverConstraint & contactConstraint)
	void public_resolveSingleConstraintRowLowerLimit(btSolverBody & bodyA, btSolverBody & bodyB, const btSolverConstraint & contactConstraint) {
		return btSequentialImpulseConstraintSolver::resolveSingleConstraintRowLowerLimit(bodyA, bodyB, contactConstraint);
	};

	// void btSequentialImpulseConstraintSolver::resolveSingleConstraintRowLowerLimitSIMD(btSolverBody & bodyA, btSolverBody & bodyB, const btSolverConstraint & contactConstraint)
	void public_resolveSingleConstraintRowLowerLimitSIMD(btSolverBody & bodyA, btSolverBody & bodyB, const btSolverConstraint & contactConstraint) {
		return btSequentialImpulseConstraintSolver::resolveSingleConstraintRowLowerLimitSIMD(bodyA, bodyB, contactConstraint);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_setupFrictionConstraint(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<11 || luatop>13 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67106554) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,55239733) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,91544891) ) return false;
		if( (lua_isnil(L,9)==0 && !Luna<void>::has_uniqueid(L,9,85758361)) ) return false;
		if( (lua_isnil(L,10)==0 && !Luna<void>::has_uniqueid(L,10,85758361)) ) return false;
		if( lua_isnumber(L,11)==0 ) return false;
		if( luatop>11 && lua_isnumber(L,12)==0 ) return false;
		if( luatop>12 && lua_isnumber(L,13)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_setupRollingFrictionConstraint(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<11 || luatop>13 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67106554) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,55239733) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,91544891) ) return false;
		if( (lua_isnil(L,9)==0 && !Luna<void>::has_uniqueid(L,9,85758361)) ) return false;
		if( (lua_isnil(L,10)==0 && !Luna<void>::has_uniqueid(L,10,85758361)) ) return false;
		if( lua_isnumber(L,11)==0 ) return false;
		if( luatop>11 && lua_isnumber(L,12)==0 ) return false;
		if( luatop>12 && lua_isnumber(L,13)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_addFrictionConstraint(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<11 || luatop>13 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,55239733) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,91544891) ) return false;
		if( (lua_isnil(L,9)==0 && !Luna<void>::has_uniqueid(L,9,85758361)) ) return false;
		if( (lua_isnil(L,10)==0 && !Luna<void>::has_uniqueid(L,10,85758361)) ) return false;
		if( lua_isnumber(L,11)==0 ) return false;
		if( luatop>11 && lua_isnumber(L,12)==0 ) return false;
		if( luatop>12 && lua_isnumber(L,13)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_addRollingFrictionConstraint(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<11 || luatop>13 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,55239733) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,91544891) ) return false;
		if( (lua_isnil(L,9)==0 && !Luna<void>::has_uniqueid(L,9,85758361)) ) return false;
		if( (lua_isnil(L,10)==0 && !Luna<void>::has_uniqueid(L,10,85758361)) ) return false;
		if( lua_isnumber(L,11)==0 ) return false;
		if( luatop>11 && lua_isnumber(L,12)==0 ) return false;
		if( luatop>12 && lua_isnumber(L,13)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_setupContactConstraint(lua_State *L) {
		if( lua_gettop(L)!=11 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67106554) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,55239733) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,5410878) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,91544891) ) return false;
		if( lua_isnumber(L,8)==0 ) return false;
		if( lua_isnumber(L,9)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,10,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,11,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_setFrictionConstraintImpulse(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67106554) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,55239733) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,5410878) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_restitutionCurve(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_convertContact(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,66271199)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,5410878) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_resolveSplitPenetrationSIMD(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,65712094) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,65712094) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,67106554) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_resolveSplitPenetrationImpulseCacheFriendly(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,65712094) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,65712094) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,67106554) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_getOrInitSolverBody(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,85758361) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_initSolverBody(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,65712094)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,85758361)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_resolveSingleConstraintRowGeneric(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,65712094) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,65712094) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,67106554) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_resolveSingleConstraintRowGenericSIMD(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,65712094) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,65712094) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,67106554) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_resolveSingleConstraintRowLowerLimit(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,65712094) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,65712094) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,67106554) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_resolveSingleConstraintRowLowerLimitSIMD(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,65712094) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,65712094) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,67106554) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void btSequentialImpulseConstraintSolver::public_setupFrictionConstraint(btSolverConstraint & solverConstraint, const btVector3 & normalAxis, int solverBodyIdA, int solverBodyIdB, btManifoldPoint & cp, const btVector3 & rel_pos1, const btVector3 & rel_pos2, btCollisionObject * colObj0, btCollisionObject * colObj1, float relaxation, float desiredVelocity = 0., float cfmSlip = 0.)
	static int _bind_public_setupFrictionConstraint(lua_State *L) {
		if (!_lg_typecheck_public_setupFrictionConstraint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSequentialImpulseConstraintSolver::public_setupFrictionConstraint(btSolverConstraint & solverConstraint, const btVector3 & normalAxis, int solverBodyIdA, int solverBodyIdB, btManifoldPoint & cp, const btVector3 & rel_pos1, const btVector3 & rel_pos2, btCollisionObject * colObj0, btCollisionObject * colObj1, float relaxation, float desiredVelocity = 0., float cfmSlip = 0.) function, expected prototype:\nvoid btSequentialImpulseConstraintSolver::public_setupFrictionConstraint(btSolverConstraint & solverConstraint, const btVector3 & normalAxis, int solverBodyIdA, int solverBodyIdB, btManifoldPoint & cp, const btVector3 & rel_pos1, const btVector3 & rel_pos2, btCollisionObject * colObj0, btCollisionObject * colObj1, float relaxation, float desiredVelocity = 0., float cfmSlip = 0.)\nClass arguments details:\narg 1 ID = 67106554\narg 2 ID = 91544891\narg 5 ID = 55239733\narg 6 ID = 91544891\narg 7 ID = 91544891\narg 8 ID = 85758361\narg 9 ID = 85758361\n");
		}

		int luatop = lua_gettop(L);

		btSolverConstraint* solverConstraint_ptr=(Luna< btSolverConstraint >::check(L,2));
		if( !solverConstraint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg solverConstraint in btSequentialImpulseConstraintSolver::public_setupFrictionConstraint function");
		}
		btSolverConstraint & solverConstraint=*solverConstraint_ptr;
		const btVector3* normalAxis_ptr=(Luna< btVector3 >::check(L,3));
		if( !normalAxis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normalAxis in btSequentialImpulseConstraintSolver::public_setupFrictionConstraint function");
		}
		const btVector3 & normalAxis=*normalAxis_ptr;
		int solverBodyIdA=(int)lua_tointeger(L,4);
		int solverBodyIdB=(int)lua_tointeger(L,5);
		btManifoldPoint* cp_ptr=(Luna< btManifoldPoint >::check(L,6));
		if( !cp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cp in btSequentialImpulseConstraintSolver::public_setupFrictionConstraint function");
		}
		btManifoldPoint & cp=*cp_ptr;
		const btVector3* rel_pos1_ptr=(Luna< btVector3 >::check(L,7));
		if( !rel_pos1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rel_pos1 in btSequentialImpulseConstraintSolver::public_setupFrictionConstraint function");
		}
		const btVector3 & rel_pos1=*rel_pos1_ptr;
		const btVector3* rel_pos2_ptr=(Luna< btVector3 >::check(L,8));
		if( !rel_pos2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rel_pos2 in btSequentialImpulseConstraintSolver::public_setupFrictionConstraint function");
		}
		const btVector3 & rel_pos2=*rel_pos2_ptr;
		btCollisionObject* colObj0=(Luna< btCollisionObject >::check(L,9));
		btCollisionObject* colObj1=(Luna< btCollisionObject >::check(L,10));
		float relaxation=(float)lua_tonumber(L,11);
		float desiredVelocity=luatop>11 ? (float)lua_tonumber(L,12) : 0.;
		float cfmSlip=luatop>12 ? (float)lua_tonumber(L,13) : 0.;

		wrapper_btSequentialImpulseConstraintSolver* self=Luna< btConstraintSolver >::checkSubType< wrapper_btSequentialImpulseConstraintSolver >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSequentialImpulseConstraintSolver::public_setupFrictionConstraint(btSolverConstraint &, const btVector3 &, int, int, btManifoldPoint &, const btVector3 &, const btVector3 &, btCollisionObject *, btCollisionObject *, float, float, float). Got : '%s'",typeid(Luna< btConstraintSolver >::check(L,1)).name());
		}
		self->public_setupFrictionConstraint(solverConstraint, normalAxis, solverBodyIdA, solverBodyIdB, cp, rel_pos1, rel_pos2, colObj0, colObj1, relaxation, desiredVelocity, cfmSlip);

		return 0;
	}

	// void btSequentialImpulseConstraintSolver::public_setupRollingFrictionConstraint(btSolverConstraint & solverConstraint, const btVector3 & normalAxis, int solverBodyIdA, int solverBodyIdB, btManifoldPoint & cp, const btVector3 & rel_pos1, const btVector3 & rel_pos2, btCollisionObject * colObj0, btCollisionObject * colObj1, float relaxation, float desiredVelocity = 0., float cfmSlip = 0.)
	static int _bind_public_setupRollingFrictionConstraint(lua_State *L) {
		if (!_lg_typecheck_public_setupRollingFrictionConstraint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSequentialImpulseConstraintSolver::public_setupRollingFrictionConstraint(btSolverConstraint & solverConstraint, const btVector3 & normalAxis, int solverBodyIdA, int solverBodyIdB, btManifoldPoint & cp, const btVector3 & rel_pos1, const btVector3 & rel_pos2, btCollisionObject * colObj0, btCollisionObject * colObj1, float relaxation, float desiredVelocity = 0., float cfmSlip = 0.) function, expected prototype:\nvoid btSequentialImpulseConstraintSolver::public_setupRollingFrictionConstraint(btSolverConstraint & solverConstraint, const btVector3 & normalAxis, int solverBodyIdA, int solverBodyIdB, btManifoldPoint & cp, const btVector3 & rel_pos1, const btVector3 & rel_pos2, btCollisionObject * colObj0, btCollisionObject * colObj1, float relaxation, float desiredVelocity = 0., float cfmSlip = 0.)\nClass arguments details:\narg 1 ID = 67106554\narg 2 ID = 91544891\narg 5 ID = 55239733\narg 6 ID = 91544891\narg 7 ID = 91544891\narg 8 ID = 85758361\narg 9 ID = 85758361\n");
		}

		int luatop = lua_gettop(L);

		btSolverConstraint* solverConstraint_ptr=(Luna< btSolverConstraint >::check(L,2));
		if( !solverConstraint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg solverConstraint in btSequentialImpulseConstraintSolver::public_setupRollingFrictionConstraint function");
		}
		btSolverConstraint & solverConstraint=*solverConstraint_ptr;
		const btVector3* normalAxis_ptr=(Luna< btVector3 >::check(L,3));
		if( !normalAxis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normalAxis in btSequentialImpulseConstraintSolver::public_setupRollingFrictionConstraint function");
		}
		const btVector3 & normalAxis=*normalAxis_ptr;
		int solverBodyIdA=(int)lua_tointeger(L,4);
		int solverBodyIdB=(int)lua_tointeger(L,5);
		btManifoldPoint* cp_ptr=(Luna< btManifoldPoint >::check(L,6));
		if( !cp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cp in btSequentialImpulseConstraintSolver::public_setupRollingFrictionConstraint function");
		}
		btManifoldPoint & cp=*cp_ptr;
		const btVector3* rel_pos1_ptr=(Luna< btVector3 >::check(L,7));
		if( !rel_pos1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rel_pos1 in btSequentialImpulseConstraintSolver::public_setupRollingFrictionConstraint function");
		}
		const btVector3 & rel_pos1=*rel_pos1_ptr;
		const btVector3* rel_pos2_ptr=(Luna< btVector3 >::check(L,8));
		if( !rel_pos2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rel_pos2 in btSequentialImpulseConstraintSolver::public_setupRollingFrictionConstraint function");
		}
		const btVector3 & rel_pos2=*rel_pos2_ptr;
		btCollisionObject* colObj0=(Luna< btCollisionObject >::check(L,9));
		btCollisionObject* colObj1=(Luna< btCollisionObject >::check(L,10));
		float relaxation=(float)lua_tonumber(L,11);
		float desiredVelocity=luatop>11 ? (float)lua_tonumber(L,12) : 0.;
		float cfmSlip=luatop>12 ? (float)lua_tonumber(L,13) : 0.;

		wrapper_btSequentialImpulseConstraintSolver* self=Luna< btConstraintSolver >::checkSubType< wrapper_btSequentialImpulseConstraintSolver >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSequentialImpulseConstraintSolver::public_setupRollingFrictionConstraint(btSolverConstraint &, const btVector3 &, int, int, btManifoldPoint &, const btVector3 &, const btVector3 &, btCollisionObject *, btCollisionObject *, float, float, float). Got : '%s'",typeid(Luna< btConstraintSolver >::check(L,1)).name());
		}
		self->public_setupRollingFrictionConstraint(solverConstraint, normalAxis, solverBodyIdA, solverBodyIdB, cp, rel_pos1, rel_pos2, colObj0, colObj1, relaxation, desiredVelocity, cfmSlip);

		return 0;
	}

	// btSolverConstraint & btSequentialImpulseConstraintSolver::public_addFrictionConstraint(const btVector3 & normalAxis, int solverBodyIdA, int solverBodyIdB, int frictionIndex, btManifoldPoint & cp, const btVector3 & rel_pos1, const btVector3 & rel_pos2, btCollisionObject * colObj0, btCollisionObject * colObj1, float relaxation, float desiredVelocity = 0., float cfmSlip = 0.)
	static int _bind_public_addFrictionConstraint(lua_State *L) {
		if (!_lg_typecheck_public_addFrictionConstraint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btSolverConstraint & btSequentialImpulseConstraintSolver::public_addFrictionConstraint(const btVector3 & normalAxis, int solverBodyIdA, int solverBodyIdB, int frictionIndex, btManifoldPoint & cp, const btVector3 & rel_pos1, const btVector3 & rel_pos2, btCollisionObject * colObj0, btCollisionObject * colObj1, float relaxation, float desiredVelocity = 0., float cfmSlip = 0.) function, expected prototype:\nbtSolverConstraint & btSequentialImpulseConstraintSolver::public_addFrictionConstraint(const btVector3 & normalAxis, int solverBodyIdA, int solverBodyIdB, int frictionIndex, btManifoldPoint & cp, const btVector3 & rel_pos1, const btVector3 & rel_pos2, btCollisionObject * colObj0, btCollisionObject * colObj1, float relaxation, float desiredVelocity = 0., float cfmSlip = 0.)\nClass arguments details:\narg 1 ID = 91544891\narg 5 ID = 55239733\narg 6 ID = 91544891\narg 7 ID = 91544891\narg 8 ID = 85758361\narg 9 ID = 85758361\n");
		}

		int luatop = lua_gettop(L);

		const btVector3* normalAxis_ptr=(Luna< btVector3 >::check(L,2));
		if( !normalAxis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normalAxis in btSequentialImpulseConstraintSolver::public_addFrictionConstraint function");
		}
		const btVector3 & normalAxis=*normalAxis_ptr;
		int solverBodyIdA=(int)lua_tointeger(L,3);
		int solverBodyIdB=(int)lua_tointeger(L,4);
		int frictionIndex=(int)lua_tointeger(L,5);
		btManifoldPoint* cp_ptr=(Luna< btManifoldPoint >::check(L,6));
		if( !cp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cp in btSequentialImpulseConstraintSolver::public_addFrictionConstraint function");
		}
		btManifoldPoint & cp=*cp_ptr;
		const btVector3* rel_pos1_ptr=(Luna< btVector3 >::check(L,7));
		if( !rel_pos1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rel_pos1 in btSequentialImpulseConstraintSolver::public_addFrictionConstraint function");
		}
		const btVector3 & rel_pos1=*rel_pos1_ptr;
		const btVector3* rel_pos2_ptr=(Luna< btVector3 >::check(L,8));
		if( !rel_pos2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rel_pos2 in btSequentialImpulseConstraintSolver::public_addFrictionConstraint function");
		}
		const btVector3 & rel_pos2=*rel_pos2_ptr;
		btCollisionObject* colObj0=(Luna< btCollisionObject >::check(L,9));
		btCollisionObject* colObj1=(Luna< btCollisionObject >::check(L,10));
		float relaxation=(float)lua_tonumber(L,11);
		float desiredVelocity=luatop>11 ? (float)lua_tonumber(L,12) : 0.;
		float cfmSlip=luatop>12 ? (float)lua_tonumber(L,13) : 0.;

		wrapper_btSequentialImpulseConstraintSolver* self=Luna< btConstraintSolver >::checkSubType< wrapper_btSequentialImpulseConstraintSolver >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btSolverConstraint & btSequentialImpulseConstraintSolver::public_addFrictionConstraint(const btVector3 &, int, int, int, btManifoldPoint &, const btVector3 &, const btVector3 &, btCollisionObject *, btCollisionObject *, float, float, float). Got : '%s'",typeid(Luna< btConstraintSolver >::check(L,1)).name());
		}
		const btSolverConstraint* lret = &self->public_addFrictionConstraint(normalAxis, solverBodyIdA, solverBodyIdB, frictionIndex, cp, rel_pos1, rel_pos2, colObj0, colObj1, relaxation, desiredVelocity, cfmSlip);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btSolverConstraint >::push(L,lret,false);

		return 1;
	}

	// btSolverConstraint & btSequentialImpulseConstraintSolver::public_addRollingFrictionConstraint(const btVector3 & normalAxis, int solverBodyIdA, int solverBodyIdB, int frictionIndex, btManifoldPoint & cp, const btVector3 & rel_pos1, const btVector3 & rel_pos2, btCollisionObject * colObj0, btCollisionObject * colObj1, float relaxation, float desiredVelocity = 0, float cfmSlip = 0.f)
	static int _bind_public_addRollingFrictionConstraint(lua_State *L) {
		if (!_lg_typecheck_public_addRollingFrictionConstraint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btSolverConstraint & btSequentialImpulseConstraintSolver::public_addRollingFrictionConstraint(const btVector3 & normalAxis, int solverBodyIdA, int solverBodyIdB, int frictionIndex, btManifoldPoint & cp, const btVector3 & rel_pos1, const btVector3 & rel_pos2, btCollisionObject * colObj0, btCollisionObject * colObj1, float relaxation, float desiredVelocity = 0, float cfmSlip = 0.f) function, expected prototype:\nbtSolverConstraint & btSequentialImpulseConstraintSolver::public_addRollingFrictionConstraint(const btVector3 & normalAxis, int solverBodyIdA, int solverBodyIdB, int frictionIndex, btManifoldPoint & cp, const btVector3 & rel_pos1, const btVector3 & rel_pos2, btCollisionObject * colObj0, btCollisionObject * colObj1, float relaxation, float desiredVelocity = 0, float cfmSlip = 0.f)\nClass arguments details:\narg 1 ID = 91544891\narg 5 ID = 55239733\narg 6 ID = 91544891\narg 7 ID = 91544891\narg 8 ID = 85758361\narg 9 ID = 85758361\n");
		}

		int luatop = lua_gettop(L);

		const btVector3* normalAxis_ptr=(Luna< btVector3 >::check(L,2));
		if( !normalAxis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normalAxis in btSequentialImpulseConstraintSolver::public_addRollingFrictionConstraint function");
		}
		const btVector3 & normalAxis=*normalAxis_ptr;
		int solverBodyIdA=(int)lua_tointeger(L,3);
		int solverBodyIdB=(int)lua_tointeger(L,4);
		int frictionIndex=(int)lua_tointeger(L,5);
		btManifoldPoint* cp_ptr=(Luna< btManifoldPoint >::check(L,6));
		if( !cp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cp in btSequentialImpulseConstraintSolver::public_addRollingFrictionConstraint function");
		}
		btManifoldPoint & cp=*cp_ptr;
		const btVector3* rel_pos1_ptr=(Luna< btVector3 >::check(L,7));
		if( !rel_pos1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rel_pos1 in btSequentialImpulseConstraintSolver::public_addRollingFrictionConstraint function");
		}
		const btVector3 & rel_pos1=*rel_pos1_ptr;
		const btVector3* rel_pos2_ptr=(Luna< btVector3 >::check(L,8));
		if( !rel_pos2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rel_pos2 in btSequentialImpulseConstraintSolver::public_addRollingFrictionConstraint function");
		}
		const btVector3 & rel_pos2=*rel_pos2_ptr;
		btCollisionObject* colObj0=(Luna< btCollisionObject >::check(L,9));
		btCollisionObject* colObj1=(Luna< btCollisionObject >::check(L,10));
		float relaxation=(float)lua_tonumber(L,11);
		float desiredVelocity=luatop>11 ? (float)lua_tonumber(L,12) : 0;
		float cfmSlip=luatop>12 ? (float)lua_tonumber(L,13) : 0.f;

		wrapper_btSequentialImpulseConstraintSolver* self=Luna< btConstraintSolver >::checkSubType< wrapper_btSequentialImpulseConstraintSolver >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btSolverConstraint & btSequentialImpulseConstraintSolver::public_addRollingFrictionConstraint(const btVector3 &, int, int, int, btManifoldPoint &, const btVector3 &, const btVector3 &, btCollisionObject *, btCollisionObject *, float, float, float). Got : '%s'",typeid(Luna< btConstraintSolver >::check(L,1)).name());
		}
		const btSolverConstraint* lret = &self->public_addRollingFrictionConstraint(normalAxis, solverBodyIdA, solverBodyIdB, frictionIndex, cp, rel_pos1, rel_pos2, colObj0, colObj1, relaxation, desiredVelocity, cfmSlip);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btSolverConstraint >::push(L,lret,false);

		return 1;
	}

	// void btSequentialImpulseConstraintSolver::public_setupContactConstraint(btSolverConstraint & solverConstraint, int solverBodyIdA, int solverBodyIdB, btManifoldPoint & cp, const btContactSolverInfo & infoGlobal, btVector3 & vel, float & rel_vel, float & relaxation, btVector3 & rel_pos1, btVector3 & rel_pos2)
	static int _bind_public_setupContactConstraint(lua_State *L) {
		if (!_lg_typecheck_public_setupContactConstraint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSequentialImpulseConstraintSolver::public_setupContactConstraint(btSolverConstraint & solverConstraint, int solverBodyIdA, int solverBodyIdB, btManifoldPoint & cp, const btContactSolverInfo & infoGlobal, btVector3 & vel, float & rel_vel, float & relaxation, btVector3 & rel_pos1, btVector3 & rel_pos2) function, expected prototype:\nvoid btSequentialImpulseConstraintSolver::public_setupContactConstraint(btSolverConstraint & solverConstraint, int solverBodyIdA, int solverBodyIdB, btManifoldPoint & cp, const btContactSolverInfo & infoGlobal, btVector3 & vel, float & rel_vel, float & relaxation, btVector3 & rel_pos1, btVector3 & rel_pos2)\nClass arguments details:\narg 1 ID = 67106554\narg 4 ID = 55239733\narg 5 ID = 5410878\narg 6 ID = 91544891\narg 9 ID = 91544891\narg 10 ID = 91544891\n");
		}

		btSolverConstraint* solverConstraint_ptr=(Luna< btSolverConstraint >::check(L,2));
		if( !solverConstraint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg solverConstraint in btSequentialImpulseConstraintSolver::public_setupContactConstraint function");
		}
		btSolverConstraint & solverConstraint=*solverConstraint_ptr;
		int solverBodyIdA=(int)lua_tointeger(L,3);
		int solverBodyIdB=(int)lua_tointeger(L,4);
		btManifoldPoint* cp_ptr=(Luna< btManifoldPoint >::check(L,5));
		if( !cp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cp in btSequentialImpulseConstraintSolver::public_setupContactConstraint function");
		}
		btManifoldPoint & cp=*cp_ptr;
		const btContactSolverInfo* infoGlobal_ptr=(Luna< btContactSolverInfoData >::checkSubType< btContactSolverInfo >(L,6));
		if( !infoGlobal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg infoGlobal in btSequentialImpulseConstraintSolver::public_setupContactConstraint function");
		}
		const btContactSolverInfo & infoGlobal=*infoGlobal_ptr;
		btVector3* vel_ptr=(Luna< btVector3 >::check(L,7));
		if( !vel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vel in btSequentialImpulseConstraintSolver::public_setupContactConstraint function");
		}
		btVector3 & vel=*vel_ptr;
		float rel_vel=(float)lua_tonumber(L,8);
		float relaxation=(float)lua_tonumber(L,9);
		btVector3* rel_pos1_ptr=(Luna< btVector3 >::check(L,10));
		if( !rel_pos1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rel_pos1 in btSequentialImpulseConstraintSolver::public_setupContactConstraint function");
		}
		btVector3 & rel_pos1=*rel_pos1_ptr;
		btVector3* rel_pos2_ptr=(Luna< btVector3 >::check(L,11));
		if( !rel_pos2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rel_pos2 in btSequentialImpulseConstraintSolver::public_setupContactConstraint function");
		}
		btVector3 & rel_pos2=*rel_pos2_ptr;

		wrapper_btSequentialImpulseConstraintSolver* self=Luna< btConstraintSolver >::checkSubType< wrapper_btSequentialImpulseConstraintSolver >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSequentialImpulseConstraintSolver::public_setupContactConstraint(btSolverConstraint &, int, int, btManifoldPoint &, const btContactSolverInfo &, btVector3 &, float &, float &, btVector3 &, btVector3 &). Got : '%s'",typeid(Luna< btConstraintSolver >::check(L,1)).name());
		}
		self->public_setupContactConstraint(solverConstraint, solverBodyIdA, solverBodyIdB, cp, infoGlobal, vel, rel_vel, relaxation, rel_pos1, rel_pos2);

		return 0;
	}

	// void btSequentialImpulseConstraintSolver::public_setFrictionConstraintImpulse(btSolverConstraint & solverConstraint, int solverBodyIdA, int solverBodyIdB, btManifoldPoint & cp, const btContactSolverInfo & infoGlobal)
	static int _bind_public_setFrictionConstraintImpulse(lua_State *L) {
		if (!_lg_typecheck_public_setFrictionConstraintImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSequentialImpulseConstraintSolver::public_setFrictionConstraintImpulse(btSolverConstraint & solverConstraint, int solverBodyIdA, int solverBodyIdB, btManifoldPoint & cp, const btContactSolverInfo & infoGlobal) function, expected prototype:\nvoid btSequentialImpulseConstraintSolver::public_setFrictionConstraintImpulse(btSolverConstraint & solverConstraint, int solverBodyIdA, int solverBodyIdB, btManifoldPoint & cp, const btContactSolverInfo & infoGlobal)\nClass arguments details:\narg 1 ID = 67106554\narg 4 ID = 55239733\narg 5 ID = 5410878\n");
		}

		btSolverConstraint* solverConstraint_ptr=(Luna< btSolverConstraint >::check(L,2));
		if( !solverConstraint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg solverConstraint in btSequentialImpulseConstraintSolver::public_setFrictionConstraintImpulse function");
		}
		btSolverConstraint & solverConstraint=*solverConstraint_ptr;
		int solverBodyIdA=(int)lua_tointeger(L,3);
		int solverBodyIdB=(int)lua_tointeger(L,4);
		btManifoldPoint* cp_ptr=(Luna< btManifoldPoint >::check(L,5));
		if( !cp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cp in btSequentialImpulseConstraintSolver::public_setFrictionConstraintImpulse function");
		}
		btManifoldPoint & cp=*cp_ptr;
		const btContactSolverInfo* infoGlobal_ptr=(Luna< btContactSolverInfoData >::checkSubType< btContactSolverInfo >(L,6));
		if( !infoGlobal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg infoGlobal in btSequentialImpulseConstraintSolver::public_setFrictionConstraintImpulse function");
		}
		const btContactSolverInfo & infoGlobal=*infoGlobal_ptr;

		wrapper_btSequentialImpulseConstraintSolver* self=Luna< btConstraintSolver >::checkSubType< wrapper_btSequentialImpulseConstraintSolver >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSequentialImpulseConstraintSolver::public_setFrictionConstraintImpulse(btSolverConstraint &, int, int, btManifoldPoint &, const btContactSolverInfo &). Got : '%s'",typeid(Luna< btConstraintSolver >::check(L,1)).name());
		}
		self->public_setFrictionConstraintImpulse(solverConstraint, solverBodyIdA, solverBodyIdB, cp, infoGlobal);

		return 0;
	}

	// float btSequentialImpulseConstraintSolver::public_restitutionCurve(float rel_vel, float restitution)
	static int _bind_public_restitutionCurve(lua_State *L) {
		if (!_lg_typecheck_public_restitutionCurve(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSequentialImpulseConstraintSolver::public_restitutionCurve(float rel_vel, float restitution) function, expected prototype:\nfloat btSequentialImpulseConstraintSolver::public_restitutionCurve(float rel_vel, float restitution)\nClass arguments details:\n");
		}

		float rel_vel=(float)lua_tonumber(L,2);
		float restitution=(float)lua_tonumber(L,3);

		wrapper_btSequentialImpulseConstraintSolver* self=Luna< btConstraintSolver >::checkSubType< wrapper_btSequentialImpulseConstraintSolver >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSequentialImpulseConstraintSolver::public_restitutionCurve(float, float). Got : '%s'",typeid(Luna< btConstraintSolver >::check(L,1)).name());
		}
		float lret = self->public_restitutionCurve(rel_vel, restitution);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btSequentialImpulseConstraintSolver::public_convertContact(btPersistentManifold * manifold, const btContactSolverInfo & infoGlobal)
	static int _bind_public_convertContact(lua_State *L) {
		if (!_lg_typecheck_public_convertContact(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSequentialImpulseConstraintSolver::public_convertContact(btPersistentManifold * manifold, const btContactSolverInfo & infoGlobal) function, expected prototype:\nvoid btSequentialImpulseConstraintSolver::public_convertContact(btPersistentManifold * manifold, const btContactSolverInfo & infoGlobal)\nClass arguments details:\narg 1 ID = 66271199\narg 2 ID = 5410878\n");
		}

		btPersistentManifold* manifold=(Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,2));
		const btContactSolverInfo* infoGlobal_ptr=(Luna< btContactSolverInfoData >::checkSubType< btContactSolverInfo >(L,3));
		if( !infoGlobal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg infoGlobal in btSequentialImpulseConstraintSolver::public_convertContact function");
		}
		const btContactSolverInfo & infoGlobal=*infoGlobal_ptr;

		wrapper_btSequentialImpulseConstraintSolver* self=Luna< btConstraintSolver >::checkSubType< wrapper_btSequentialImpulseConstraintSolver >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSequentialImpulseConstraintSolver::public_convertContact(btPersistentManifold *, const btContactSolverInfo &). Got : '%s'",typeid(Luna< btConstraintSolver >::check(L,1)).name());
		}
		self->public_convertContact(manifold, infoGlobal);

		return 0;
	}

	// void btSequentialImpulseConstraintSolver::public_resolveSplitPenetrationSIMD(btSolverBody & bodyA, btSolverBody & bodyB, const btSolverConstraint & contactConstraint)
	static int _bind_public_resolveSplitPenetrationSIMD(lua_State *L) {
		if (!_lg_typecheck_public_resolveSplitPenetrationSIMD(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSequentialImpulseConstraintSolver::public_resolveSplitPenetrationSIMD(btSolverBody & bodyA, btSolverBody & bodyB, const btSolverConstraint & contactConstraint) function, expected prototype:\nvoid btSequentialImpulseConstraintSolver::public_resolveSplitPenetrationSIMD(btSolverBody & bodyA, btSolverBody & bodyB, const btSolverConstraint & contactConstraint)\nClass arguments details:\narg 1 ID = 65712094\narg 2 ID = 65712094\narg 3 ID = 67106554\n");
		}

		btSolverBody* bodyA_ptr=(Luna< btSolverBody >::check(L,2));
		if( !bodyA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bodyA in btSequentialImpulseConstraintSolver::public_resolveSplitPenetrationSIMD function");
		}
		btSolverBody & bodyA=*bodyA_ptr;
		btSolverBody* bodyB_ptr=(Luna< btSolverBody >::check(L,3));
		if( !bodyB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bodyB in btSequentialImpulseConstraintSolver::public_resolveSplitPenetrationSIMD function");
		}
		btSolverBody & bodyB=*bodyB_ptr;
		const btSolverConstraint* contactConstraint_ptr=(Luna< btSolverConstraint >::check(L,4));
		if( !contactConstraint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg contactConstraint in btSequentialImpulseConstraintSolver::public_resolveSplitPenetrationSIMD function");
		}
		const btSolverConstraint & contactConstraint=*contactConstraint_ptr;

		wrapper_btSequentialImpulseConstraintSolver* self=Luna< btConstraintSolver >::checkSubType< wrapper_btSequentialImpulseConstraintSolver >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSequentialImpulseConstraintSolver::public_resolveSplitPenetrationSIMD(btSolverBody &, btSolverBody &, const btSolverConstraint &). Got : '%s'",typeid(Luna< btConstraintSolver >::check(L,1)).name());
		}
		self->public_resolveSplitPenetrationSIMD(bodyA, bodyB, contactConstraint);

		return 0;
	}

	// void btSequentialImpulseConstraintSolver::public_resolveSplitPenetrationImpulseCacheFriendly(btSolverBody & bodyA, btSolverBody & bodyB, const btSolverConstraint & contactConstraint)
	static int _bind_public_resolveSplitPenetrationImpulseCacheFriendly(lua_State *L) {
		if (!_lg_typecheck_public_resolveSplitPenetrationImpulseCacheFriendly(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSequentialImpulseConstraintSolver::public_resolveSplitPenetrationImpulseCacheFriendly(btSolverBody & bodyA, btSolverBody & bodyB, const btSolverConstraint & contactConstraint) function, expected prototype:\nvoid btSequentialImpulseConstraintSolver::public_resolveSplitPenetrationImpulseCacheFriendly(btSolverBody & bodyA, btSolverBody & bodyB, const btSolverConstraint & contactConstraint)\nClass arguments details:\narg 1 ID = 65712094\narg 2 ID = 65712094\narg 3 ID = 67106554\n");
		}

		btSolverBody* bodyA_ptr=(Luna< btSolverBody >::check(L,2));
		if( !bodyA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bodyA in btSequentialImpulseConstraintSolver::public_resolveSplitPenetrationImpulseCacheFriendly function");
		}
		btSolverBody & bodyA=*bodyA_ptr;
		btSolverBody* bodyB_ptr=(Luna< btSolverBody >::check(L,3));
		if( !bodyB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bodyB in btSequentialImpulseConstraintSolver::public_resolveSplitPenetrationImpulseCacheFriendly function");
		}
		btSolverBody & bodyB=*bodyB_ptr;
		const btSolverConstraint* contactConstraint_ptr=(Luna< btSolverConstraint >::check(L,4));
		if( !contactConstraint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg contactConstraint in btSequentialImpulseConstraintSolver::public_resolveSplitPenetrationImpulseCacheFriendly function");
		}
		const btSolverConstraint & contactConstraint=*contactConstraint_ptr;

		wrapper_btSequentialImpulseConstraintSolver* self=Luna< btConstraintSolver >::checkSubType< wrapper_btSequentialImpulseConstraintSolver >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSequentialImpulseConstraintSolver::public_resolveSplitPenetrationImpulseCacheFriendly(btSolverBody &, btSolverBody &, const btSolverConstraint &). Got : '%s'",typeid(Luna< btConstraintSolver >::check(L,1)).name());
		}
		self->public_resolveSplitPenetrationImpulseCacheFriendly(bodyA, bodyB, contactConstraint);

		return 0;
	}

	// int btSequentialImpulseConstraintSolver::public_getOrInitSolverBody(btCollisionObject & body)
	static int _bind_public_getOrInitSolverBody(lua_State *L) {
		if (!_lg_typecheck_public_getOrInitSolverBody(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btSequentialImpulseConstraintSolver::public_getOrInitSolverBody(btCollisionObject & body) function, expected prototype:\nint btSequentialImpulseConstraintSolver::public_getOrInitSolverBody(btCollisionObject & body)\nClass arguments details:\narg 1 ID = 85758361\n");
		}

		btCollisionObject* body_ptr=(Luna< btCollisionObject >::check(L,2));
		if( !body_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg body in btSequentialImpulseConstraintSolver::public_getOrInitSolverBody function");
		}
		btCollisionObject & body=*body_ptr;

		wrapper_btSequentialImpulseConstraintSolver* self=Luna< btConstraintSolver >::checkSubType< wrapper_btSequentialImpulseConstraintSolver >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btSequentialImpulseConstraintSolver::public_getOrInitSolverBody(btCollisionObject &). Got : '%s'",typeid(Luna< btConstraintSolver >::check(L,1)).name());
		}
		int lret = self->public_getOrInitSolverBody(body);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btSequentialImpulseConstraintSolver::public_initSolverBody(btSolverBody * solverBody, btCollisionObject * collisionObject)
	static int _bind_public_initSolverBody(lua_State *L) {
		if (!_lg_typecheck_public_initSolverBody(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSequentialImpulseConstraintSolver::public_initSolverBody(btSolverBody * solverBody, btCollisionObject * collisionObject) function, expected prototype:\nvoid btSequentialImpulseConstraintSolver::public_initSolverBody(btSolverBody * solverBody, btCollisionObject * collisionObject)\nClass arguments details:\narg 1 ID = 65712094\narg 2 ID = 85758361\n");
		}

		btSolverBody* solverBody=(Luna< btSolverBody >::check(L,2));
		btCollisionObject* collisionObject=(Luna< btCollisionObject >::check(L,3));

		wrapper_btSequentialImpulseConstraintSolver* self=Luna< btConstraintSolver >::checkSubType< wrapper_btSequentialImpulseConstraintSolver >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSequentialImpulseConstraintSolver::public_initSolverBody(btSolverBody *, btCollisionObject *). Got : '%s'",typeid(Luna< btConstraintSolver >::check(L,1)).name());
		}
		self->public_initSolverBody(solverBody, collisionObject);

		return 0;
	}

	// void btSequentialImpulseConstraintSolver::public_resolveSingleConstraintRowGeneric(btSolverBody & bodyA, btSolverBody & bodyB, const btSolverConstraint & contactConstraint)
	static int _bind_public_resolveSingleConstraintRowGeneric(lua_State *L) {
		if (!_lg_typecheck_public_resolveSingleConstraintRowGeneric(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSequentialImpulseConstraintSolver::public_resolveSingleConstraintRowGeneric(btSolverBody & bodyA, btSolverBody & bodyB, const btSolverConstraint & contactConstraint) function, expected prototype:\nvoid btSequentialImpulseConstraintSolver::public_resolveSingleConstraintRowGeneric(btSolverBody & bodyA, btSolverBody & bodyB, const btSolverConstraint & contactConstraint)\nClass arguments details:\narg 1 ID = 65712094\narg 2 ID = 65712094\narg 3 ID = 67106554\n");
		}

		btSolverBody* bodyA_ptr=(Luna< btSolverBody >::check(L,2));
		if( !bodyA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bodyA in btSequentialImpulseConstraintSolver::public_resolveSingleConstraintRowGeneric function");
		}
		btSolverBody & bodyA=*bodyA_ptr;
		btSolverBody* bodyB_ptr=(Luna< btSolverBody >::check(L,3));
		if( !bodyB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bodyB in btSequentialImpulseConstraintSolver::public_resolveSingleConstraintRowGeneric function");
		}
		btSolverBody & bodyB=*bodyB_ptr;
		const btSolverConstraint* contactConstraint_ptr=(Luna< btSolverConstraint >::check(L,4));
		if( !contactConstraint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg contactConstraint in btSequentialImpulseConstraintSolver::public_resolveSingleConstraintRowGeneric function");
		}
		const btSolverConstraint & contactConstraint=*contactConstraint_ptr;

		wrapper_btSequentialImpulseConstraintSolver* self=Luna< btConstraintSolver >::checkSubType< wrapper_btSequentialImpulseConstraintSolver >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSequentialImpulseConstraintSolver::public_resolveSingleConstraintRowGeneric(btSolverBody &, btSolverBody &, const btSolverConstraint &). Got : '%s'",typeid(Luna< btConstraintSolver >::check(L,1)).name());
		}
		self->public_resolveSingleConstraintRowGeneric(bodyA, bodyB, contactConstraint);

		return 0;
	}

	// void btSequentialImpulseConstraintSolver::public_resolveSingleConstraintRowGenericSIMD(btSolverBody & bodyA, btSolverBody & bodyB, const btSolverConstraint & contactConstraint)
	static int _bind_public_resolveSingleConstraintRowGenericSIMD(lua_State *L) {
		if (!_lg_typecheck_public_resolveSingleConstraintRowGenericSIMD(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSequentialImpulseConstraintSolver::public_resolveSingleConstraintRowGenericSIMD(btSolverBody & bodyA, btSolverBody & bodyB, const btSolverConstraint & contactConstraint) function, expected prototype:\nvoid btSequentialImpulseConstraintSolver::public_resolveSingleConstraintRowGenericSIMD(btSolverBody & bodyA, btSolverBody & bodyB, const btSolverConstraint & contactConstraint)\nClass arguments details:\narg 1 ID = 65712094\narg 2 ID = 65712094\narg 3 ID = 67106554\n");
		}

		btSolverBody* bodyA_ptr=(Luna< btSolverBody >::check(L,2));
		if( !bodyA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bodyA in btSequentialImpulseConstraintSolver::public_resolveSingleConstraintRowGenericSIMD function");
		}
		btSolverBody & bodyA=*bodyA_ptr;
		btSolverBody* bodyB_ptr=(Luna< btSolverBody >::check(L,3));
		if( !bodyB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bodyB in btSequentialImpulseConstraintSolver::public_resolveSingleConstraintRowGenericSIMD function");
		}
		btSolverBody & bodyB=*bodyB_ptr;
		const btSolverConstraint* contactConstraint_ptr=(Luna< btSolverConstraint >::check(L,4));
		if( !contactConstraint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg contactConstraint in btSequentialImpulseConstraintSolver::public_resolveSingleConstraintRowGenericSIMD function");
		}
		const btSolverConstraint & contactConstraint=*contactConstraint_ptr;

		wrapper_btSequentialImpulseConstraintSolver* self=Luna< btConstraintSolver >::checkSubType< wrapper_btSequentialImpulseConstraintSolver >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSequentialImpulseConstraintSolver::public_resolveSingleConstraintRowGenericSIMD(btSolverBody &, btSolverBody &, const btSolverConstraint &). Got : '%s'",typeid(Luna< btConstraintSolver >::check(L,1)).name());
		}
		self->public_resolveSingleConstraintRowGenericSIMD(bodyA, bodyB, contactConstraint);

		return 0;
	}

	// void btSequentialImpulseConstraintSolver::public_resolveSingleConstraintRowLowerLimit(btSolverBody & bodyA, btSolverBody & bodyB, const btSolverConstraint & contactConstraint)
	static int _bind_public_resolveSingleConstraintRowLowerLimit(lua_State *L) {
		if (!_lg_typecheck_public_resolveSingleConstraintRowLowerLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSequentialImpulseConstraintSolver::public_resolveSingleConstraintRowLowerLimit(btSolverBody & bodyA, btSolverBody & bodyB, const btSolverConstraint & contactConstraint) function, expected prototype:\nvoid btSequentialImpulseConstraintSolver::public_resolveSingleConstraintRowLowerLimit(btSolverBody & bodyA, btSolverBody & bodyB, const btSolverConstraint & contactConstraint)\nClass arguments details:\narg 1 ID = 65712094\narg 2 ID = 65712094\narg 3 ID = 67106554\n");
		}

		btSolverBody* bodyA_ptr=(Luna< btSolverBody >::check(L,2));
		if( !bodyA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bodyA in btSequentialImpulseConstraintSolver::public_resolveSingleConstraintRowLowerLimit function");
		}
		btSolverBody & bodyA=*bodyA_ptr;
		btSolverBody* bodyB_ptr=(Luna< btSolverBody >::check(L,3));
		if( !bodyB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bodyB in btSequentialImpulseConstraintSolver::public_resolveSingleConstraintRowLowerLimit function");
		}
		btSolverBody & bodyB=*bodyB_ptr;
		const btSolverConstraint* contactConstraint_ptr=(Luna< btSolverConstraint >::check(L,4));
		if( !contactConstraint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg contactConstraint in btSequentialImpulseConstraintSolver::public_resolveSingleConstraintRowLowerLimit function");
		}
		const btSolverConstraint & contactConstraint=*contactConstraint_ptr;

		wrapper_btSequentialImpulseConstraintSolver* self=Luna< btConstraintSolver >::checkSubType< wrapper_btSequentialImpulseConstraintSolver >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSequentialImpulseConstraintSolver::public_resolveSingleConstraintRowLowerLimit(btSolverBody &, btSolverBody &, const btSolverConstraint &). Got : '%s'",typeid(Luna< btConstraintSolver >::check(L,1)).name());
		}
		self->public_resolveSingleConstraintRowLowerLimit(bodyA, bodyB, contactConstraint);

		return 0;
	}

	// void btSequentialImpulseConstraintSolver::public_resolveSingleConstraintRowLowerLimitSIMD(btSolverBody & bodyA, btSolverBody & bodyB, const btSolverConstraint & contactConstraint)
	static int _bind_public_resolveSingleConstraintRowLowerLimitSIMD(lua_State *L) {
		if (!_lg_typecheck_public_resolveSingleConstraintRowLowerLimitSIMD(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSequentialImpulseConstraintSolver::public_resolveSingleConstraintRowLowerLimitSIMD(btSolverBody & bodyA, btSolverBody & bodyB, const btSolverConstraint & contactConstraint) function, expected prototype:\nvoid btSequentialImpulseConstraintSolver::public_resolveSingleConstraintRowLowerLimitSIMD(btSolverBody & bodyA, btSolverBody & bodyB, const btSolverConstraint & contactConstraint)\nClass arguments details:\narg 1 ID = 65712094\narg 2 ID = 65712094\narg 3 ID = 67106554\n");
		}

		btSolverBody* bodyA_ptr=(Luna< btSolverBody >::check(L,2));
		if( !bodyA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bodyA in btSequentialImpulseConstraintSolver::public_resolveSingleConstraintRowLowerLimitSIMD function");
		}
		btSolverBody & bodyA=*bodyA_ptr;
		btSolverBody* bodyB_ptr=(Luna< btSolverBody >::check(L,3));
		if( !bodyB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bodyB in btSequentialImpulseConstraintSolver::public_resolveSingleConstraintRowLowerLimitSIMD function");
		}
		btSolverBody & bodyB=*bodyB_ptr;
		const btSolverConstraint* contactConstraint_ptr=(Luna< btSolverConstraint >::check(L,4));
		if( !contactConstraint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg contactConstraint in btSequentialImpulseConstraintSolver::public_resolveSingleConstraintRowLowerLimitSIMD function");
		}
		const btSolverConstraint & contactConstraint=*contactConstraint_ptr;

		wrapper_btSequentialImpulseConstraintSolver* self=Luna< btConstraintSolver >::checkSubType< wrapper_btSequentialImpulseConstraintSolver >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSequentialImpulseConstraintSolver::public_resolveSingleConstraintRowLowerLimitSIMD(btSolverBody &, btSolverBody &, const btSolverConstraint &). Got : '%s'",typeid(Luna< btConstraintSolver >::check(L,1)).name());
		}
		self->public_resolveSingleConstraintRowLowerLimitSIMD(bodyA, bodyB, contactConstraint);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"setupFrictionConstraint",_bind_public_setupFrictionConstraint},
		{"setupRollingFrictionConstraint",_bind_public_setupRollingFrictionConstraint},
		{"addFrictionConstraint",_bind_public_addFrictionConstraint},
		{"addRollingFrictionConstraint",_bind_public_addRollingFrictionConstraint},
		{"setupContactConstraint",_bind_public_setupContactConstraint},
		{"setFrictionConstraintImpulse",_bind_public_setFrictionConstraintImpulse},
		{"restitutionCurve",_bind_public_restitutionCurve},
		{"convertContact",_bind_public_convertContact},
		{"resolveSplitPenetrationSIMD",_bind_public_resolveSplitPenetrationSIMD},
		{"resolveSplitPenetrationImpulseCacheFriendly",_bind_public_resolveSplitPenetrationImpulseCacheFriendly},
		{"getOrInitSolverBody",_bind_public_getOrInitSolverBody},
		{"initSolverBody",_bind_public_initSolverBody},
		{"resolveSingleConstraintRowGeneric",_bind_public_resolveSingleConstraintRowGeneric},
		{"resolveSingleConstraintRowGenericSIMD",_bind_public_resolveSingleConstraintRowGenericSIMD},
		{"resolveSingleConstraintRowLowerLimit",_bind_public_resolveSingleConstraintRowLowerLimit},
		{"resolveSingleConstraintRowLowerLimitSIMD",_bind_public_resolveSingleConstraintRowLowerLimitSIMD},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

