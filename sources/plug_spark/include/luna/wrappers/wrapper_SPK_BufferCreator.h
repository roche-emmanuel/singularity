#ifndef _WRAPPERS_WRAPPER_SPK_BUFFERCREATOR_H_
#define _WRAPPERS_WRAPPER_SPK_BUFFERCREATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Core/SPK_Buffer.h>

class wrapper_SPK_BufferCreator : public SPK::BufferCreator, public luna_wrapper_base {

public:
		

	~wrapper_SPK_BufferCreator() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	

private:
	// Private virtual methods:
	// SPK::Buffer * SPK::BufferCreator::createBuffer(size_t nbParticles, const SPK::Group & group) const
	SPK::Buffer * createBuffer(size_t nbParticles, const SPK::Group & group) const {
		THROW_IF(!_obj.pushFunction("createBuffer"),"No implementation for abstract function SPK::BufferCreator::createBuffer");
		_obj.pushArg(nbParticles);
		_obj.pushArg(&group);
		return (_obj.callFunction<SPK::Buffer*>());
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

