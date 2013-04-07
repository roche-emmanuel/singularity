#ifndef _WRAPPERS_WRAPPER_BTDBVT_ICOLLIDE_H_
#define _WRAPPERS_WRAPPER_BTDBVT_ICOLLIDE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/BroadphaseCollision/btDbvt.h>

class wrapper_btDbvt_ICollide : public btDbvt::ICollide, public luna_wrapper_base {

public:
		

	~wrapper_btDbvt_ICollide() {
		logDEBUG3("Calling delete function for wrapper btDbvt_ICollide");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btDbvt::ICollide*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btDbvt_ICollide(lua_State* L, lua_Table* dum) 
		: btDbvt::ICollide(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btDbvt::ICollide*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btDbvt::ICollide::Process(const btDbvtNode * arg1, const btDbvtNode * arg2)
	void Process(const btDbvtNode * arg1, const btDbvtNode * arg2) {
		if(_obj.pushFunction("Process")) {
			_obj.pushArg((btDbvt::ICollide*)this);
			_obj.pushArg(arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<void>());
		}

		return ICollide::Process(arg1, arg2);
	};

	// void btDbvt::ICollide::Process(const btDbvtNode * arg1)
	void Process(const btDbvtNode * arg1) {
		if(_obj.pushFunction("Process")) {
			_obj.pushArg((btDbvt::ICollide*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return ICollide::Process(arg1);
	};

	// void btDbvt::ICollide::Process(const btDbvtNode * n, float arg2)
	void Process(const btDbvtNode * n, float arg2) {
		if(_obj.pushFunction("Process")) {
			_obj.pushArg((btDbvt::ICollide*)this);
			_obj.pushArg(n);
			_obj.pushArg(arg2);
			return (_obj.callFunction<void>());
		}

		return ICollide::Process(n, arg2);
	};

	// bool btDbvt::ICollide::Descent(const btDbvtNode * arg1)
	bool Descent(const btDbvtNode * arg1) {
		if(_obj.pushFunction("Descent")) {
			_obj.pushArg((btDbvt::ICollide*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<bool>());
		}

		return ICollide::Descent(arg1);
	};

	// bool btDbvt::ICollide::AllLeaves(const btDbvtNode * arg1)
	bool AllLeaves(const btDbvtNode * arg1) {
		if(_obj.pushFunction("AllLeaves")) {
			_obj.pushArg((btDbvt::ICollide*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<bool>());
		}

		return ICollide::AllLeaves(arg1);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

