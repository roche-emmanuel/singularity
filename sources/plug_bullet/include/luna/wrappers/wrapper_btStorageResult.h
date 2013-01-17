#ifndef _WRAPPERS_WRAPPER_BTSTORAGERESULT_H_
#define _WRAPPERS_WRAPPER_BTSTORAGERESULT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/NarrowPhaseCollision/btDiscreteCollisionDetectorInterface.h>

class wrapper_btStorageResult : public btStorageResult, public luna_wrapper_base {

public:
		

	~wrapper_btStorageResult() {
		logDEBUG3("Calling delete function for wrapper btStorageResult");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btStorageResult*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btStorageResult(lua_State* L, lua_Table* dum) 
		: btStorageResult(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btStorageResult*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btDiscreteCollisionDetectorInterface::Result::setShapeIdentifiersA(int partId0, int index0)
	void setShapeIdentifiersA(int partId0, int index0) {
		THROW_IF(!_obj.pushFunction("setShapeIdentifiersA"),"No implementation for abstract function btDiscreteCollisionDetectorInterface::Result::setShapeIdentifiersA");
		_obj.pushArg((btStorageResult*)this);
		_obj.pushArg(partId0);
		_obj.pushArg(index0);
		return (_obj.callFunction<void>());
	};

	// void btDiscreteCollisionDetectorInterface::Result::setShapeIdentifiersB(int partId1, int index1)
	void setShapeIdentifiersB(int partId1, int index1) {
		THROW_IF(!_obj.pushFunction("setShapeIdentifiersB"),"No implementation for abstract function btDiscreteCollisionDetectorInterface::Result::setShapeIdentifiersB");
		_obj.pushArg((btStorageResult*)this);
		_obj.pushArg(partId1);
		_obj.pushArg(index1);
		return (_obj.callFunction<void>());
	};

	// void btStorageResult::addContactPoint(const btVector3 & normalOnBInWorld, const btVector3 & pointInWorld, float depth)
	void addContactPoint(const btVector3 & normalOnBInWorld, const btVector3 & pointInWorld, float depth) {
		if(_obj.pushFunction("addContactPoint")) {
			_obj.pushArg((btStorageResult*)this);
			_obj.pushArg(&normalOnBInWorld);
			_obj.pushArg(&pointInWorld);
			_obj.pushArg(depth);
			return (_obj.callFunction<void>());
		}

		return btStorageResult::addContactPoint(normalOnBInWorld, pointInWorld, depth);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

