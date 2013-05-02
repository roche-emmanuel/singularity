#ifndef _WRAPPERS_WRAPPER_SGT_TILESTORAGE_SLOT_H_
#define _WRAPPERS_WRAPPER_SGT_TILESTORAGE_SLOT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <producer/TileStorage.h>

class wrapper_sgt_TileStorage_Slot : public sgt::TileStorage::Slot, public luna_wrapper_base {

public:
		

	~wrapper_sgt_TileStorage_Slot() {
		logDEBUG3("Calling delete function for wrapper sgt_TileStorage_Slot");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((sgt::TileStorage::Slot*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_sgt_TileStorage_Slot(lua_State* L, lua_Table* dum, sgt::TileStorage * owner) 
		: sgt::TileStorage::Slot(owner), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((sgt::TileStorage::Slot*)this);
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
