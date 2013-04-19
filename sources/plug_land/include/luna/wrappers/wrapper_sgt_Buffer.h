#ifndef _WRAPPERS_WRAPPER_SGT_BUFFER_H_
#define _WRAPPERS_WRAPPER_SGT_BUFFER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <core/Buffer.h>

class wrapper_sgt_Buffer : public sgt::Buffer, public luna_wrapper_base {

public:
		

	~wrapper_sgt_Buffer() {
		logDEBUG3("Calling delete function for wrapper sgt_Buffer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((sgt::Buffer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_sgt_Buffer(lua_State* L, lua_Table* dum) 
		: sgt::Buffer(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((sgt::Buffer*)this);
			_obj.callFunction<void>();
		}
	};

private:
	// Private virtual methods:
	// void sgt::Buffer::bind(int target) const
	void bind(int target) const {
		THROW_IF(!_obj.pushFunction("bind"),"No implementation for abstract function sgt::Buffer::bind");
		_obj.pushArg((sgt::Buffer*)this);
		_obj.pushArg(target);
		return (_obj.callFunction<void>());
	};

	// void * sgt::Buffer::data(int offset) const
	void * data(int offset) const {
		THROW_IF(!_obj.pushFunction("data"),"No implementation for abstract function sgt::Buffer::data");
		_obj.pushArg((sgt::Buffer*)this);
		_obj.pushArg(offset);
		return (_obj.callFunction<void*>());
	};

	// void sgt::Buffer::unbind(int target) const
	void unbind(int target) const {
		THROW_IF(!_obj.pushFunction("unbind"),"No implementation for abstract function sgt::Buffer::unbind");
		_obj.pushArg((sgt::Buffer*)this);
		_obj.pushArg(target);
		return (_obj.callFunction<void>());
	};

	// void sgt::Buffer::dirty() const
	void dirty() const {
		THROW_IF(!_obj.pushFunction("dirty"),"No implementation for abstract function sgt::Buffer::dirty");
		_obj.pushArg((sgt::Buffer*)this);
		return (_obj.callFunction<void>());
	};


	// Protected virtual methods:
public:
	// Public virtual methods:

	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

