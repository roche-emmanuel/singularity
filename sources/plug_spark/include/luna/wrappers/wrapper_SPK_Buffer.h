#ifndef _WRAPPERS_WRAPPER_SPK_BUFFER_H_
#define _WRAPPERS_WRAPPER_SPK_BUFFER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Core/SPK_Buffer.h>

class wrapper_SPK_Buffer : public SPK::Buffer, public luna_wrapper_base {

public:
		

	~wrapper_SPK_Buffer() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_SPK_Buffer(lua_State* L, lua_Table* dum) : SPK::Buffer(), luna_wrapper_base(L) { register_protected_methods(L); };

private:
	// Private virtual methods:
	// void SPK::Buffer::swap(size_t index0, size_t index1)
	void swap(size_t index0, size_t index1) {
		THROW_IF(!_obj.pushFunction("swap"),"No implementation for abstract function SPK::Buffer::swap");
		_obj.pushArg(index0);
		_obj.pushArg(index1);
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
