#ifndef _WRAPPERS_WRAPPER_BTCONVEX_DCONVEX_DALGORITHM_CREATEFUNC_H_
#define _WRAPPERS_WRAPPER_BTCONVEX_DCONVEX_DALGORITHM_CREATEFUNC_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/CollisionDispatch/btConvex2dConvex2dAlgorithm.h>

class wrapper_btConvex2dConvex2dAlgorithm_CreateFunc : public btConvex2dConvex2dAlgorithm::CreateFunc, public luna_wrapper_base {

public:
		

	~wrapper_btConvex2dConvex2dAlgorithm_CreateFunc() {
		logDEBUG3("Calling delete function for wrapper btConvex2dConvex2dAlgorithm_CreateFunc");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btConvex2dConvex2dAlgorithm::CreateFunc*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btConvex2dConvex2dAlgorithm_CreateFunc(lua_State* L, lua_Table* dum, btVoronoiSimplexSolver * simplexSolver, btConvexPenetrationDepthSolver * pdSolver) 
		: btConvex2dConvex2dAlgorithm::CreateFunc(simplexSolver, pdSolver), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btConvex2dConvex2dAlgorithm::CreateFunc*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// btCollisionAlgorithm * btConvex2dConvex2dAlgorithm::CreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)
	btCollisionAlgorithm * CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap) {
		if(_obj.pushFunction("CreateCollisionAlgorithm")) {
			_obj.pushArg((btConvex2dConvex2dAlgorithm::CreateFunc*)this);
			_obj.pushArg(&ci);
			_obj.pushArg(body0Wrap);
			_obj.pushArg(body1Wrap);
			return (_obj.callFunction<btCollisionAlgorithm*>());
		}

		return CreateFunc::CreateCollisionAlgorithm(ci, body0Wrap, body1Wrap);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

