#ifndef _WRAPPERS_WRAPPER_BTDBVT_ICLONE_H_
#define _WRAPPERS_WRAPPER_BTDBVT_ICLONE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/BroadphaseCollision/btDbvt.h>

class wrapper_btDbvt_IClone : public btDbvt::IClone, public luna_wrapper_base {

public:
		

	~wrapper_btDbvt_IClone() {
		logDEBUG3("Calling delete function for wrapper btDbvt_IClone");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btDbvt::IClone*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btDbvt_IClone(lua_State* L, lua_Table* dum) 
		: btDbvt::IClone(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btDbvt::IClone*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btDbvt::IClone::CloneLeaf(btDbvtNode * arg1)
	void CloneLeaf(btDbvtNode * arg1) {
		if(_obj.pushFunction("CloneLeaf")) {
			_obj.pushArg((btDbvt::IClone*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return IClone::CloneLeaf(arg1);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

