#ifndef _WRAPPERS_WRAPPER_BTINTERNALTRIANGLEINDEXCALLBACK_H_
#define _WRAPPERS_WRAPPER_BTINTERNALTRIANGLEINDEXCALLBACK_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/CollisionShapes/btTriangleCallback.h>

class wrapper_btInternalTriangleIndexCallback : public btInternalTriangleIndexCallback, public luna_wrapper_base {

public:
		

	~wrapper_btInternalTriangleIndexCallback() {
		logDEBUG3("Calling delete function for wrapper btInternalTriangleIndexCallback");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btInternalTriangleIndexCallback*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btInternalTriangleIndexCallback(lua_State* L, lua_Table* dum) 
		: btInternalTriangleIndexCallback(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btInternalTriangleIndexCallback*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btInternalTriangleIndexCallback::internalProcessTriangleIndex(btVector3 * triangle, int partId, int triangleIndex)
	void internalProcessTriangleIndex(btVector3 * triangle, int partId, int triangleIndex) {
		THROW_IF(!_obj.pushFunction("internalProcessTriangleIndex"),"No implementation for abstract function btInternalTriangleIndexCallback::internalProcessTriangleIndex");
		_obj.pushArg((btInternalTriangleIndexCallback*)this);
		_obj.pushArg(triangle);
		_obj.pushArg(partId);
		_obj.pushArg(triangleIndex);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

