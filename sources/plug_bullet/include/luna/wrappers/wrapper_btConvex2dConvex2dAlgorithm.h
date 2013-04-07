#ifndef _WRAPPERS_WRAPPER_BTCONVEX_DCONVEX_DALGORITHM_H_
#define _WRAPPERS_WRAPPER_BTCONVEX_DCONVEX_DALGORITHM_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/CollisionDispatch/btConvex2dConvex2dAlgorithm.h>

class wrapper_btConvex2dConvex2dAlgorithm : public btConvex2dConvex2dAlgorithm, public luna_wrapper_base {

public:
		

	~wrapper_btConvex2dConvex2dAlgorithm() {
		logDEBUG3("Calling delete function for wrapper btConvex2dConvex2dAlgorithm");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btConvex2dConvex2dAlgorithm*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btConvex2dConvex2dAlgorithm(lua_State* L, lua_Table* dum, btPersistentManifold * mf, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, btVoronoiSimplexSolver * simplexSolver, btConvexPenetrationDepthSolver * pdSolver, int numPerturbationIterations, int minimumPointsPerturbationThreshold) 
		: btConvex2dConvex2dAlgorithm(mf, ci, body0Wrap, body1Wrap, simplexSolver, pdSolver, numPerturbationIterations, minimumPointsPerturbationThreshold), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btConvex2dConvex2dAlgorithm*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btConvex2dConvex2dAlgorithm::processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	void processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) {
		if(_obj.pushFunction("processCollision")) {
			_obj.pushArg((btConvex2dConvex2dAlgorithm*)this);
			_obj.pushArg(body0Wrap);
			_obj.pushArg(body1Wrap);
			_obj.pushArg(&dispatchInfo);
			_obj.pushArg(resultOut);
			return (_obj.callFunction<void>());
		}

		return btConvex2dConvex2dAlgorithm::processCollision(body0Wrap, body1Wrap, dispatchInfo, resultOut);
	};

	// float btConvex2dConvex2dAlgorithm::calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	float calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) {
		if(_obj.pushFunction("calculateTimeOfImpact")) {
			_obj.pushArg((btConvex2dConvex2dAlgorithm*)this);
			_obj.pushArg(body0);
			_obj.pushArg(body1);
			_obj.pushArg(&dispatchInfo);
			_obj.pushArg(resultOut);
			return (_obj.callFunction<float>());
		}

		return btConvex2dConvex2dAlgorithm::calculateTimeOfImpact(body0, body1, dispatchInfo, resultOut);
	};

	// void btConvex2dConvex2dAlgorithm::getAllContactManifolds(btManifoldArray & manifoldArray)
	void getAllContactManifolds(btManifoldArray & manifoldArray) {
		if(_obj.pushFunction("getAllContactManifolds")) {
			_obj.pushArg((btConvex2dConvex2dAlgorithm*)this);
			_obj.pushArg(&manifoldArray);
			return (_obj.callFunction<void>());
		}

		return btConvex2dConvex2dAlgorithm::getAllContactManifolds(manifoldArray);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

