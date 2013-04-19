#ifndef _WRAPPERS_WRAPPER_SGT_CPUBUFFER_H_
#define _WRAPPERS_WRAPPER_SGT_CPUBUFFER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <core/CPUBuffer.h>

class wrapper_sgt_CPUBuffer : public sgt::CPUBuffer, public luna_wrapper_base {

public:
		

	~wrapper_sgt_CPUBuffer() {
		logDEBUG3("Calling delete function for wrapper sgt_CPUBuffer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((sgt::CPUBuffer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void sgt::CPUBuffer::bind(int target) const
	void bind(int target) const {
		if(_obj.pushFunction("bind")) {
			_obj.pushArg((sgt::CPUBuffer*)this);
			_obj.pushArg(target);
			return (_obj.callFunction<void>());
		}

		return CPUBuffer::bind(target);
	};

	// void * sgt::CPUBuffer::data(int offset) const
	void * data(int offset) const {
		if(_obj.pushFunction("data")) {
			_obj.pushArg((sgt::CPUBuffer*)this);
			_obj.pushArg(offset);
			return (_obj.callFunction<void*>());
		}

		return CPUBuffer::data(offset);
	};

	// void sgt::CPUBuffer::unbind(int target) const
	void unbind(int target) const {
		if(_obj.pushFunction("unbind")) {
			_obj.pushArg((sgt::CPUBuffer*)this);
			_obj.pushArg(target);
			return (_obj.callFunction<void>());
		}

		return CPUBuffer::unbind(target);
	};

	// void sgt::CPUBuffer::dirty() const
	void dirty() const {
		if(_obj.pushFunction("dirty")) {
			_obj.pushArg((sgt::CPUBuffer*)this);
			return (_obj.callFunction<void>());
		}

		return CPUBuffer::dirty();
	};

public:
	// Public virtual methods:

	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

