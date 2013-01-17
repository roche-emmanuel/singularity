#ifndef _WRAPPERS_WRAPPER_BTGIMPACTCOMPOUNDSHAPE_COMPOUNDPRIMITIVEMANAGER_H_
#define _WRAPPERS_WRAPPER_BTGIMPACTCOMPOUNDSHAPE_COMPOUNDPRIMITIVEMANAGER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/Gimpact/btGImpactShape.h>

class wrapper_btGImpactCompoundShape_CompoundPrimitiveManager : public btGImpactCompoundShape::CompoundPrimitiveManager, public luna_wrapper_base {

public:
		

	~wrapper_btGImpactCompoundShape_CompoundPrimitiveManager() {
		logDEBUG3("Calling delete function for wrapper btGImpactCompoundShape_CompoundPrimitiveManager");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btGImpactCompoundShape::CompoundPrimitiveManager*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btGImpactCompoundShape_CompoundPrimitiveManager(lua_State* L, lua_Table* dum, const btGImpactCompoundShape::CompoundPrimitiveManager & compound) 
		: btGImpactCompoundShape::CompoundPrimitiveManager(compound), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btGImpactCompoundShape::CompoundPrimitiveManager*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_btGImpactCompoundShape_CompoundPrimitiveManager(lua_State* L, lua_Table* dum, btGImpactCompoundShape * compoundShape) 
		: btGImpactCompoundShape::CompoundPrimitiveManager(compoundShape), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btGImpactCompoundShape::CompoundPrimitiveManager*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_btGImpactCompoundShape_CompoundPrimitiveManager(lua_State* L, lua_Table* dum) 
		: btGImpactCompoundShape::CompoundPrimitiveManager(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btGImpactCompoundShape::CompoundPrimitiveManager*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool btGImpactCompoundShape::CompoundPrimitiveManager::is_trimesh() const
	bool is_trimesh() const {
		if(_obj.pushFunction("is_trimesh")) {
			_obj.pushArg((btGImpactCompoundShape::CompoundPrimitiveManager*)this);
			return (_obj.callFunction<bool>());
		}

		return CompoundPrimitiveManager::is_trimesh();
	};

	// int btGImpactCompoundShape::CompoundPrimitiveManager::get_primitive_count() const
	int get_primitive_count() const {
		if(_obj.pushFunction("get_primitive_count")) {
			_obj.pushArg((btGImpactCompoundShape::CompoundPrimitiveManager*)this);
			return (_obj.callFunction<int>());
		}

		return CompoundPrimitiveManager::get_primitive_count();
	};

	// void btGImpactCompoundShape::CompoundPrimitiveManager::get_primitive_box(int prim_index, btAABB & primbox) const
	void get_primitive_box(int prim_index, btAABB & primbox) const {
		if(_obj.pushFunction("get_primitive_box")) {
			_obj.pushArg((btGImpactCompoundShape::CompoundPrimitiveManager*)this);
			_obj.pushArg(prim_index);
			_obj.pushArg(&primbox);
			return (_obj.callFunction<void>());
		}

		return CompoundPrimitiveManager::get_primitive_box(prim_index, primbox);
	};

	// void btGImpactCompoundShape::CompoundPrimitiveManager::get_primitive_triangle(int prim_index, btPrimitiveTriangle & triangle) const
	void get_primitive_triangle(int prim_index, btPrimitiveTriangle & triangle) const {
		if(_obj.pushFunction("get_primitive_triangle")) {
			_obj.pushArg((btGImpactCompoundShape::CompoundPrimitiveManager*)this);
			_obj.pushArg(prim_index);
			_obj.pushArg(&triangle);
			return (_obj.callFunction<void>());
		}

		return CompoundPrimitiveManager::get_primitive_triangle(prim_index, triangle);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

