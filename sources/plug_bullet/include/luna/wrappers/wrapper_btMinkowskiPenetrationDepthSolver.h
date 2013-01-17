#ifndef _WRAPPERS_WRAPPER_BTMINKOWSKIPENETRATIONDEPTHSOLVER_H_
#define _WRAPPERS_WRAPPER_BTMINKOWSKIPENETRATIONDEPTHSOLVER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/NarrowPhaseCollision/btMinkowskiPenetrationDepthSolver.h>

class wrapper_btMinkowskiPenetrationDepthSolver : public btMinkowskiPenetrationDepthSolver, public luna_wrapper_base {

public:
		

	~wrapper_btMinkowskiPenetrationDepthSolver() {
		logDEBUG3("Calling delete function for wrapper btMinkowskiPenetrationDepthSolver");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btMinkowskiPenetrationDepthSolver*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btMinkowskiPenetrationDepthSolver(lua_State* L, lua_Table* dum) 
		: btMinkowskiPenetrationDepthSolver(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btMinkowskiPenetrationDepthSolver*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool btMinkowskiPenetrationDepthSolver::calcPenDepth(btVoronoiSimplexSolver & simplexSolver, const btConvexShape * convexA, const btConvexShape * convexB, const btTransform & transA, const btTransform & transB, btVector3 & v, btVector3 & pa, btVector3 & pb, class btIDebugDraw * debugDraw, btStackAlloc * stackAlloc)
	bool calcPenDepth(btVoronoiSimplexSolver & simplexSolver, const btConvexShape * convexA, const btConvexShape * convexB, const btTransform & transA, const btTransform & transB, btVector3 & v, btVector3 & pa, btVector3 & pb, class btIDebugDraw * debugDraw, btStackAlloc * stackAlloc) {
		if(_obj.pushFunction("calcPenDepth")) {
			_obj.pushArg((btMinkowskiPenetrationDepthSolver*)this);
			_obj.pushArg(&simplexSolver);
			_obj.pushArg(convexA);
			_obj.pushArg(convexB);
			_obj.pushArg(&transA);
			_obj.pushArg(&transB);
			_obj.pushArg(&v);
			_obj.pushArg(&pa);
			_obj.pushArg(&pb);
			_obj.pushArg(debugDraw);
			_obj.pushArg(stackAlloc);
			return (_obj.callFunction<bool>());
		}

		return btMinkowskiPenetrationDepthSolver::calcPenDepth(simplexSolver, convexA, convexB, transA, transB, v, pa, pb, debugDraw, stackAlloc);
	};


	// Protected non-virtual methods:
	// static btVector3 * btMinkowskiPenetrationDepthSolver::getPenetrationDirections()
	static btVector3 * public_getPenetrationDirections() {
		return btMinkowskiPenetrationDepthSolver::getPenetrationDirections();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_getPenetrationDirections(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Protected non-virtual function binds:
	// static btVector3 * btMinkowskiPenetrationDepthSolver::public_getPenetrationDirections()
	static int _bind_public_getPenetrationDirections(lua_State *L) {
		if (!_lg_typecheck_public_getPenetrationDirections(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static btVector3 * btMinkowskiPenetrationDepthSolver::public_getPenetrationDirections() function, expected prototype:\nstatic btVector3 * btMinkowskiPenetrationDepthSolver::public_getPenetrationDirections()\nClass arguments details:\n");
		}


		wrapper_btMinkowskiPenetrationDepthSolver* self=Luna< btConvexPenetrationDepthSolver >::checkSubType< wrapper_btMinkowskiPenetrationDepthSolver >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call static btVector3 * btMinkowskiPenetrationDepthSolver::public_getPenetrationDirections(). Got : '%s'",typeid(Luna< btConvexPenetrationDepthSolver >::check(L,1)).name());
		}
		btVector3 * lret = self->public_getPenetrationDirections();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"getPenetrationDirections",_bind_public_getPenetrationDirections},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

