#ifndef _WRAPPERS_WRAPPER_SGT_DEFORMATION_H_
#define _WRAPPERS_WRAPPER_SGT_DEFORMATION_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <terrain/Deformation.h>

class wrapper_sgt_Deformation : public sgt::Deformation, public luna_wrapper_base {

public:
		

	~wrapper_sgt_Deformation() {
		logDEBUG3("Calling delete function for wrapper sgt_Deformation");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((sgt::Deformation*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_sgt_Deformation(lua_State* L, lua_Table* dum) 
		: sgt::Deformation(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((sgt::Deformation*)this);
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

