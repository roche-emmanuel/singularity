#ifndef _WRAPPERS_WRAPPER_GIM_PRIMITIVE_MANAGER_PROTOTYPE_H_
#define _WRAPPERS_WRAPPER_GIM_PRIMITIVE_MANAGER_PROTOTYPE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/Gimpact/gim_box_set.h>

class wrapper_GIM_PRIMITIVE_MANAGER_PROTOTYPE : public GIM_PRIMITIVE_MANAGER_PROTOTYPE, public luna_wrapper_base {

public:
		

	~wrapper_GIM_PRIMITIVE_MANAGER_PROTOTYPE() {
		logDEBUG3("Calling delete function for wrapper GIM_PRIMITIVE_MANAGER_PROTOTYPE");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((GIM_PRIMITIVE_MANAGER_PROTOTYPE*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_GIM_PRIMITIVE_MANAGER_PROTOTYPE(lua_State* L, lua_Table* dum) 
		: GIM_PRIMITIVE_MANAGER_PROTOTYPE(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((GIM_PRIMITIVE_MANAGER_PROTOTYPE*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool GIM_PRIMITIVE_MANAGER_PROTOTYPE::is_trimesh()
	bool is_trimesh() {
		THROW_IF(!_obj.pushFunction("is_trimesh"),"No implementation for abstract function GIM_PRIMITIVE_MANAGER_PROTOTYPE::is_trimesh");
		_obj.pushArg((GIM_PRIMITIVE_MANAGER_PROTOTYPE*)this);
		return (_obj.callFunction<bool>());
	};

	// unsigned int GIM_PRIMITIVE_MANAGER_PROTOTYPE::get_primitive_count()
	unsigned int get_primitive_count() {
		THROW_IF(!_obj.pushFunction("get_primitive_count"),"No implementation for abstract function GIM_PRIMITIVE_MANAGER_PROTOTYPE::get_primitive_count");
		_obj.pushArg((GIM_PRIMITIVE_MANAGER_PROTOTYPE*)this);
		return (_obj.callFunction<unsigned int>());
	};

	// void GIM_PRIMITIVE_MANAGER_PROTOTYPE::get_primitive_box(unsigned int prim_index, GIM_AABB & primbox)
	void get_primitive_box(unsigned int prim_index, GIM_AABB & primbox) {
		THROW_IF(!_obj.pushFunction("get_primitive_box"),"No implementation for abstract function GIM_PRIMITIVE_MANAGER_PROTOTYPE::get_primitive_box");
		_obj.pushArg((GIM_PRIMITIVE_MANAGER_PROTOTYPE*)this);
		_obj.pushArg(prim_index);
		_obj.pushArg(&primbox);
		return (_obj.callFunction<void>());
	};

	// void GIM_PRIMITIVE_MANAGER_PROTOTYPE::get_primitive_triangle(unsigned int prim_index, GIM_TRIANGLE & triangle)
	void get_primitive_triangle(unsigned int prim_index, GIM_TRIANGLE & triangle) {
		THROW_IF(!_obj.pushFunction("get_primitive_triangle"),"No implementation for abstract function GIM_PRIMITIVE_MANAGER_PROTOTYPE::get_primitive_triangle");
		_obj.pushArg((GIM_PRIMITIVE_MANAGER_PROTOTYPE*)this);
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

