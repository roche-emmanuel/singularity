#ifndef _WRAPPERS_WRAPPER_ORK_SCENEMANAGER_H_
#define _WRAPPERS_WRAPPER_ORK_SCENEMANAGER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"



class wrapper_ork_SceneManager : public ork::SceneManager, public luna_wrapper_base {

public:
		

	~wrapper_ork_SceneManager() {
		logDEBUG3("Calling delete function for wrapper ork_SceneManager");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::SceneManager*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_SceneManager(lua_State* L, lua_Table* dum) 
		: ork::SceneManager(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::SceneManager*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:

	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

