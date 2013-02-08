#ifndef _WRAPPERS_WRAPPER_BTDEFAULTMOTIONSTATE_H_
#define _WRAPPERS_WRAPPER_BTDEFAULTMOTIONSTATE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <LinearMath/btDefaultMotionState.h>

class wrapper_btDefaultMotionState : public btDefaultMotionState, public luna_wrapper_base {

public:
		

	~wrapper_btDefaultMotionState() {
		logDEBUG3("Calling delete function for wrapper btDefaultMotionState");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btDefaultMotionState*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btDefaultMotionState(lua_State* L, lua_Table* dum, const btTransform & startTrans = btTransform::getIdentity (), const btTransform & centerOfMassOffset = btTransform::getIdentity ()) 
		: btDefaultMotionState(startTrans, centerOfMassOffset), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btDefaultMotionState*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btDefaultMotionState::getWorldTransform(btTransform & centerOfMassWorldTrans) const
	void getWorldTransform(btTransform & centerOfMassWorldTrans) const {
		if(_obj.pushFunction("getWorldTransform")) {
			_obj.pushArg((btDefaultMotionState*)this);
			_obj.pushArg(&centerOfMassWorldTrans);
			return (_obj.callFunction<void>());
		}

		return btDefaultMotionState::getWorldTransform(centerOfMassWorldTrans);
	};

	// void btDefaultMotionState::setWorldTransform(const btTransform & centerOfMassWorldTrans)
	void setWorldTransform(const btTransform & centerOfMassWorldTrans) {
		if(_obj.pushFunction("setWorldTransform")) {
			_obj.pushArg((btDefaultMotionState*)this);
			_obj.pushArg(&centerOfMassWorldTrans);
			return (_obj.callFunction<void>());
		}

		return btDefaultMotionState::setWorldTransform(centerOfMassWorldTrans);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

