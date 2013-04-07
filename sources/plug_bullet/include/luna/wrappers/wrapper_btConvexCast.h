#ifndef _WRAPPERS_WRAPPER_BTCONVEXCAST_H_
#define _WRAPPERS_WRAPPER_BTCONVEXCAST_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/NarrowPhaseCollision/btConvexCast.h>

class wrapper_btConvexCast : public btConvexCast, public luna_wrapper_base {

public:
		

	~wrapper_btConvexCast() {
		logDEBUG3("Calling delete function for wrapper btConvexCast");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btConvexCast*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btConvexCast(lua_State* L, lua_Table* dum) 
		: btConvexCast(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btConvexCast*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool btConvexCast::calcTimeOfImpact(const btTransform & fromA, const btTransform & toA, const btTransform & fromB, const btTransform & toB, btConvexCast::CastResult & result)
	bool calcTimeOfImpact(const btTransform & fromA, const btTransform & toA, const btTransform & fromB, const btTransform & toB, btConvexCast::CastResult & result) {
		THROW_IF(!_obj.pushFunction("calcTimeOfImpact"),"No implementation for abstract function btConvexCast::calcTimeOfImpact");
		_obj.pushArg((btConvexCast*)this);
		_obj.pushArg(&fromA);
		_obj.pushArg(&toA);
		_obj.pushArg(&fromB);
		_obj.pushArg(&toB);
		_obj.pushArg(&result);
		return (_obj.callFunction<bool>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

