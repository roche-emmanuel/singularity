#ifndef _WRAPPERS_WRAPPER_BTCONVEXCAST_CASTRESULT_H_
#define _WRAPPERS_WRAPPER_BTCONVEXCAST_CASTRESULT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/NarrowPhaseCollision/btConvexCast.h>

class wrapper_btConvexCast_CastResult : public btConvexCast::CastResult, public luna_wrapper_base {

public:
		

	~wrapper_btConvexCast_CastResult() {
		logDEBUG3("Calling delete function for wrapper btConvexCast_CastResult");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btConvexCast::CastResult*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btConvexCast_CastResult(lua_State* L, lua_Table* dum) 
		: btConvexCast::CastResult(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btConvexCast::CastResult*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btConvexCast::CastResult::DebugDraw(float fraction)
	void DebugDraw(float fraction) {
		if(_obj.pushFunction("DebugDraw")) {
			_obj.pushArg((btConvexCast::CastResult*)this);
			_obj.pushArg(fraction);
			return (_obj.callFunction<void>());
		}

		return CastResult::DebugDraw(fraction);
	};

	// void btConvexCast::CastResult::drawCoordSystem(const btTransform & trans)
	void drawCoordSystem(const btTransform & trans) {
		if(_obj.pushFunction("drawCoordSystem")) {
			_obj.pushArg((btConvexCast::CastResult*)this);
			_obj.pushArg(&trans);
			return (_obj.callFunction<void>());
		}

		return CastResult::drawCoordSystem(trans);
	};

	// void btConvexCast::CastResult::reportFailure(int errNo, int numIterations)
	void reportFailure(int errNo, int numIterations) {
		if(_obj.pushFunction("reportFailure")) {
			_obj.pushArg((btConvexCast::CastResult*)this);
			_obj.pushArg(errNo);
			_obj.pushArg(numIterations);
			return (_obj.callFunction<void>());
		}

		return CastResult::reportFailure(errNo, numIterations);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

