#ifndef _WRAPPERS_WRAPPER_ORK_UNIFORMSUBROUTINE_H_
#define _WRAPPERS_WRAPPER_ORK_UNIFORMSUBROUTINE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/render/Uniform.h>

class wrapper_ork_UniformSubroutine : public ork::UniformSubroutine, public luna_wrapper_base {

public:
		

	~wrapper_ork_UniformSubroutine() {
		logDEBUG3("Calling delete function for wrapper ork_UniformSubroutine");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::UniformSubroutine*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::UniformSubroutine::setValue()
	void setValue() {
		if(_obj.pushFunction("setValue")) {
			_obj.pushArg((ork::UniformSubroutine*)this);
			return (_obj.callFunction<void>());
		}

		return UniformSubroutine::setValue();
	};

public:
	// Public virtual methods:
	// ork::UniformType ork::UniformSubroutine::getType() const
	ork::UniformType getType() const {
		if(_obj.pushFunction("getType")) {
			_obj.pushArg((ork::UniformSubroutine*)this);
			return (ork::UniformType)(_obj.callFunction<int>());
		}

		return UniformSubroutine::getType();
	};

	// void ork::UniformSubroutine::setValue(ptr< Value > v)
	void setValue(ptr< Value > v) {
		if(_obj.pushFunction("setValue")) {
			_obj.pushArg((ork::UniformSubroutine*)this);
			_obj.pushArg((Value*)v.get());
			return (_obj.callFunction<void>());
		}

		return UniformSubroutine::setValue(v);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

