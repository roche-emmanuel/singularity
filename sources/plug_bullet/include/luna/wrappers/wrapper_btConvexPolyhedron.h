#ifndef _WRAPPERS_WRAPPER_BTCONVEXPOLYHEDRON_H_
#define _WRAPPERS_WRAPPER_BTCONVEXPOLYHEDRON_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/CollisionShapes/btConvexPolyhedron.h>

class wrapper_btConvexPolyhedron : public btConvexPolyhedron, public luna_wrapper_base {

public:
		

	~wrapper_btConvexPolyhedron() {
		logDEBUG3("Calling delete function for wrapper btConvexPolyhedron");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btConvexPolyhedron*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btConvexPolyhedron(lua_State* L, lua_Table* dum) 
		: btConvexPolyhedron(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btConvexPolyhedron*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:

	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

