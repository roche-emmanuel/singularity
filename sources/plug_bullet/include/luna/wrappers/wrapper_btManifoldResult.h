#ifndef _WRAPPERS_WRAPPER_BTMANIFOLDRESULT_H_
#define _WRAPPERS_WRAPPER_BTMANIFOLDRESULT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/CollisionDispatch/btManifoldResult.h>

class wrapper_btManifoldResult : public btManifoldResult, public luna_wrapper_base {

public:
		

	~wrapper_btManifoldResult() {
		logDEBUG3("Calling delete function for wrapper btManifoldResult");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btManifoldResult*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btManifoldResult(lua_State* L, lua_Table* dum) 
		: btManifoldResult(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btManifoldResult*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_btManifoldResult(lua_State* L, lua_Table* dum, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap) 
		: btManifoldResult(body0Wrap, body1Wrap), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btManifoldResult*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btManifoldResult::setShapeIdentifiersA(int partId0, int index0)
	void setShapeIdentifiersA(int partId0, int index0) {
		if(_obj.pushFunction("setShapeIdentifiersA")) {
			_obj.pushArg((btManifoldResult*)this);
			_obj.pushArg(partId0);
			_obj.pushArg(index0);
			return (_obj.callFunction<void>());
		}

		return btManifoldResult::setShapeIdentifiersA(partId0, index0);
	};

	// void btManifoldResult::setShapeIdentifiersB(int partId1, int index1)
	void setShapeIdentifiersB(int partId1, int index1) {
		if(_obj.pushFunction("setShapeIdentifiersB")) {
			_obj.pushArg((btManifoldResult*)this);
			_obj.pushArg(partId1);
			_obj.pushArg(index1);
			return (_obj.callFunction<void>());
		}

		return btManifoldResult::setShapeIdentifiersB(partId1, index1);
	};

	// void btManifoldResult::addContactPoint(const btVector3 & normalOnBInWorld, const btVector3 & pointInWorld, float depth)
	void addContactPoint(const btVector3 & normalOnBInWorld, const btVector3 & pointInWorld, float depth) {
		if(_obj.pushFunction("addContactPoint")) {
			_obj.pushArg((btManifoldResult*)this);
			_obj.pushArg(&normalOnBInWorld);
			_obj.pushArg(&pointInWorld);
			_obj.pushArg(depth);
			return (_obj.callFunction<void>());
		}

		return btManifoldResult::addContactPoint(normalOnBInWorld, pointInWorld, depth);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

