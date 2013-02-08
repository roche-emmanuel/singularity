#ifndef _WRAPPERS_WRAPPER_BTGJKCONVEXCAST_H_
#define _WRAPPERS_WRAPPER_BTGJKCONVEXCAST_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/NarrowPhaseCollision/btGjkConvexCast.h>

class wrapper_btGjkConvexCast : public btGjkConvexCast, public luna_wrapper_base {

public:
		

	~wrapper_btGjkConvexCast() {
		logDEBUG3("Calling delete function for wrapper btGjkConvexCast");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btGjkConvexCast*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btGjkConvexCast(lua_State* L, lua_Table* dum, const btConvexShape * convexA, const btConvexShape * convexB, btVoronoiSimplexSolver * simplexSolver) 
		: btGjkConvexCast(convexA, convexB, simplexSolver), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btGjkConvexCast*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool btGjkConvexCast::calcTimeOfImpact(const btTransform & fromA, const btTransform & toA, const btTransform & fromB, const btTransform & toB, btConvexCast::CastResult & result)
	bool calcTimeOfImpact(const btTransform & fromA, const btTransform & toA, const btTransform & fromB, const btTransform & toB, btConvexCast::CastResult & result) {
		if(_obj.pushFunction("calcTimeOfImpact")) {
			_obj.pushArg((btGjkConvexCast*)this);
			_obj.pushArg(&fromA);
			_obj.pushArg(&toA);
			_obj.pushArg(&fromB);
			_obj.pushArg(&toB);
			_obj.pushArg(&result);
			return (_obj.callFunction<bool>());
		}

		return btGjkConvexCast::calcTimeOfImpact(fromA, toA, fromB, toB, result);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

