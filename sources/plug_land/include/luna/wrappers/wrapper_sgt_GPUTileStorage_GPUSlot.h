#ifndef _WRAPPERS_WRAPPER_SGT_GPUTILESTORAGE_GPUSLOT_H_
#define _WRAPPERS_WRAPPER_SGT_GPUTILESTORAGE_GPUSLOT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <producer/GPUTileStorage.h>

class wrapper_sgt_GPUTileStorage_GPUSlot : public sgt::GPUTileStorage::GPUSlot, public luna_wrapper_base {

public:
		

	~wrapper_sgt_GPUTileStorage_GPUSlot() {
		logDEBUG3("Calling delete function for wrapper sgt_GPUTileStorage_GPUSlot");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((sgt::GPUTileStorage::GPUSlot*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_sgt_GPUTileStorage_GPUSlot(lua_State* L, lua_Table* dum, sgt::TileStorage * owner, int index, osg::Texture2DArray * t, int l) 
		: sgt::GPUTileStorage::GPUSlot(owner, index, t, l), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((sgt::GPUTileStorage::GPUSlot*)this);
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
