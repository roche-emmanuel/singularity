#ifndef _WRAPPERS_WRAPPER_BTPRIMITIVEMANAGERBASE_H_
#define _WRAPPERS_WRAPPER_BTPRIMITIVEMANAGERBASE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/Gimpact/btGImpactBvh.h>

class wrapper_btPrimitiveManagerBase : public btPrimitiveManagerBase, public luna_wrapper_base {

public:
		

	~wrapper_btPrimitiveManagerBase() {
		logDEBUG3("Calling delete function for wrapper btPrimitiveManagerBase");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btPrimitiveManagerBase*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btPrimitiveManagerBase(lua_State* L, lua_Table* dum) 
		: btPrimitiveManagerBase(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btPrimitiveManagerBase*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool btPrimitiveManagerBase::is_trimesh() const
	bool is_trimesh() const {
		THROW_IF(!_obj.pushFunction("is_trimesh"),"No implementation for abstract function btPrimitiveManagerBase::is_trimesh");
		_obj.pushArg((btPrimitiveManagerBase*)this);
		return (_obj.callFunction<bool>());
	};

	// int btPrimitiveManagerBase::get_primitive_count() const
	int get_primitive_count() const {
		THROW_IF(!_obj.pushFunction("get_primitive_count"),"No implementation for abstract function btPrimitiveManagerBase::get_primitive_count");
		_obj.pushArg((btPrimitiveManagerBase*)this);
		return (_obj.callFunction<int>());
	};

	// void btPrimitiveManagerBase::get_primitive_box(int prim_index, btAABB & primbox) const
	void get_primitive_box(int prim_index, btAABB & primbox) const {
		THROW_IF(!_obj.pushFunction("get_primitive_box"),"No implementation for abstract function btPrimitiveManagerBase::get_primitive_box");
		_obj.pushArg((btPrimitiveManagerBase*)this);
		_obj.pushArg(prim_index);
		_obj.pushArg(&primbox);
		return (_obj.callFunction<void>());
	};

	// void btPrimitiveManagerBase::get_primitive_triangle(int prim_index, btPrimitiveTriangle & triangle) const
	void get_primitive_triangle(int prim_index, btPrimitiveTriangle & triangle) const {
		THROW_IF(!_obj.pushFunction("get_primitive_triangle"),"No implementation for abstract function btPrimitiveManagerBase::get_primitive_triangle");
		_obj.pushArg((btPrimitiveManagerBase*)this);
		_obj.pushArg(prim_index);
		_obj.pushArg(&triangle);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

