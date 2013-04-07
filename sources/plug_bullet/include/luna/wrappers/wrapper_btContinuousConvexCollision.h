#ifndef _WRAPPERS_WRAPPER_BTCONTINUOUSCONVEXCOLLISION_H_
#define _WRAPPERS_WRAPPER_BTCONTINUOUSCONVEXCOLLISION_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/NarrowPhaseCollision/btContinuousConvexCollision.h>

class wrapper_btContinuousConvexCollision : public btContinuousConvexCollision, public luna_wrapper_base {

public:
		

	~wrapper_btContinuousConvexCollision() {
		logDEBUG3("Calling delete function for wrapper btContinuousConvexCollision");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btContinuousConvexCollision*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btContinuousConvexCollision(lua_State* L, lua_Table* dum, const btConvexShape * shapeA, const btConvexShape * shapeB, btVoronoiSimplexSolver * simplexSolver, btConvexPenetrationDepthSolver * penetrationDepthSolver) 
		: btContinuousConvexCollision(shapeA, shapeB, simplexSolver, penetrationDepthSolver), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btContinuousConvexCollision*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_btContinuousConvexCollision(lua_State* L, lua_Table* dum, const btConvexShape * shapeA, const btStaticPlaneShape * plane) 
		: btContinuousConvexCollision(shapeA, plane), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btContinuousConvexCollision*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool btContinuousConvexCollision::calcTimeOfImpact(const btTransform & fromA, const btTransform & toA, const btTransform & fromB, const btTransform & toB, btConvexCast::CastResult & result)
	bool calcTimeOfImpact(const btTransform & fromA, const btTransform & toA, const btTransform & fromB, const btTransform & toB, btConvexCast::CastResult & result) {
		if(_obj.pushFunction("calcTimeOfImpact")) {
			_obj.pushArg((btContinuousConvexCollision*)this);
			_obj.pushArg(&fromA);
			_obj.pushArg(&toA);
			_obj.pushArg(&fromB);
			_obj.pushArg(&toB);
			_obj.pushArg(&result);
			return (_obj.callFunction<bool>());
		}

		return btContinuousConvexCollision::calcTimeOfImpact(fromA, toA, fromB, toB, result);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

