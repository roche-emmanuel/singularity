#ifndef _WRAPPERS_WRAPPER_BTTRIANGLEBUFFER_H_
#define _WRAPPERS_WRAPPER_BTTRIANGLEBUFFER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/CollisionShapes/btTriangleBuffer.h>

class wrapper_btTriangleBuffer : public btTriangleBuffer, public luna_wrapper_base {

public:
		

	~wrapper_btTriangleBuffer() {
		logDEBUG3("Calling delete function for wrapper btTriangleBuffer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btTriangleBuffer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btTriangleBuffer(lua_State* L, lua_Table* dum) 
		: btTriangleBuffer(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btTriangleBuffer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btTriangleBuffer::processTriangle(btVector3 * triangle, int partId, int triangleIndex)
	void processTriangle(btVector3 * triangle, int partId, int triangleIndex) {
		if(_obj.pushFunction("processTriangle")) {
			_obj.pushArg((btTriangleBuffer*)this);
			_obj.pushArg(triangle);
			_obj.pushArg(partId);
			_obj.pushArg(triangleIndex);
			return (_obj.callFunction<void>());
		}

		return btTriangleBuffer::processTriangle(triangle, partId, triangleIndex);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

