#ifndef _WRAPPERS_WRAPPER_SPK_BUFFERHANDLER_H_
#define _WRAPPERS_WRAPPER_SPK_BUFFERHANDLER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Core/SPK_BufferHandler.h>

class wrapper_SPK_BufferHandler : public SPK::BufferHandler, public luna_wrapper_base {

public:
		

	~wrapper_SPK_BufferHandler() {
		logDEBUG3("Calling delete function for wrapper SPK_BufferHandler");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((SPK::BufferHandler*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_SPK_BufferHandler(lua_State* L, lua_Table* dum) 
		: SPK::BufferHandler(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((SPK::BufferHandler*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// bool SPK::BufferHandler::checkBuffers(const SPK::Group & group)
	bool checkBuffers(const SPK::Group & group) {
		if(_obj.pushFunction("checkBuffers")) {
			_obj.pushArg((SPK::BufferHandler*)this);
			_obj.pushArg(&group);
			return (_obj.callFunction<bool>());
		}

		return BufferHandler::checkBuffers(group);
	};

public:
	// Public virtual methods:
	// void SPK::BufferHandler::createBuffers(const SPK::Group & group)
	void createBuffers(const SPK::Group & group) {
		if(_obj.pushFunction("createBuffers")) {
			_obj.pushArg((SPK::BufferHandler*)this);
			_obj.pushArg(&group);
			return (_obj.callFunction<void>());
		}

		return BufferHandler::createBuffers(group);
	};

	// void SPK::BufferHandler::destroyBuffers(const SPK::Group & group)
	void destroyBuffers(const SPK::Group & group) {
		if(_obj.pushFunction("destroyBuffers")) {
			_obj.pushArg((SPK::BufferHandler*)this);
			_obj.pushArg(&group);
			return (_obj.callFunction<void>());
		}

		return BufferHandler::destroyBuffers(group);
	};


	// Protected non-virtual methods:
	// bool SPK::BufferHandler::prepareBuffers(const SPK::Group & group)
	bool public_prepareBuffers(const SPK::Group & group) {
		return SPK::BufferHandler::prepareBuffers(group);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_prepareBuffers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31337102) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// bool SPK::BufferHandler::public_prepareBuffers(const SPK::Group & group)
	static int _bind_public_prepareBuffers(lua_State *L) {
		if (!_lg_typecheck_public_prepareBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::BufferHandler::public_prepareBuffers(const SPK::Group & group) function, expected prototype:\nbool SPK::BufferHandler::public_prepareBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::BufferHandler::public_prepareBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		wrapper_SPK_BufferHandler* self=Luna< SPK::BufferHandler >::checkSubType< wrapper_SPK_BufferHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::BufferHandler::public_prepareBuffers(const SPK::Group &). Got : '%s'",typeid(Luna< SPK::BufferHandler >::check(L,1)).name());
		}
		bool lret = self->public_prepareBuffers(group);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"prepareBuffers",_bind_public_prepareBuffers},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

