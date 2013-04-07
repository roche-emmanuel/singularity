#ifndef _WRAPPERS_WRAPPER_BTGIMPACTMESHSHAPEPART_TRIMESHPRIMITIVEMANAGER_H_
#define _WRAPPERS_WRAPPER_BTGIMPACTMESHSHAPEPART_TRIMESHPRIMITIVEMANAGER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/Gimpact/btGImpactShape.h>

class wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager : public btGImpactMeshShapePart::TrimeshPrimitiveManager, public luna_wrapper_base {

public:
		

	~wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager() {
		logDEBUG3("Calling delete function for wrapper btGImpactMeshShapePart_TrimeshPrimitiveManager");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btGImpactMeshShapePart::TrimeshPrimitiveManager*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager(lua_State* L, lua_Table* dum) 
		: btGImpactMeshShapePart::TrimeshPrimitiveManager(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btGImpactMeshShapePart::TrimeshPrimitiveManager*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager(lua_State* L, lua_Table* dum, const btGImpactMeshShapePart::TrimeshPrimitiveManager & manager) 
		: btGImpactMeshShapePart::TrimeshPrimitiveManager(manager), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btGImpactMeshShapePart::TrimeshPrimitiveManager*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager(lua_State* L, lua_Table* dum, btStridingMeshInterface * meshInterface, int part) 
		: btGImpactMeshShapePart::TrimeshPrimitiveManager(meshInterface, part), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btGImpactMeshShapePart::TrimeshPrimitiveManager*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool btGImpactMeshShapePart::TrimeshPrimitiveManager::is_trimesh() const
	bool is_trimesh() const {
		if(_obj.pushFunction("is_trimesh")) {
			_obj.pushArg((btGImpactMeshShapePart::TrimeshPrimitiveManager*)this);
			return (_obj.callFunction<bool>());
		}

		return TrimeshPrimitiveManager::is_trimesh();
	};

	// int btGImpactMeshShapePart::TrimeshPrimitiveManager::get_primitive_count() const
	int get_primitive_count() const {
		if(_obj.pushFunction("get_primitive_count")) {
			_obj.pushArg((btGImpactMeshShapePart::TrimeshPrimitiveManager*)this);
			return (_obj.callFunction<int>());
		}

		return TrimeshPrimitiveManager::get_primitive_count();
	};

	// void btGImpactMeshShapePart::TrimeshPrimitiveManager::get_primitive_box(int prim_index, btAABB & primbox) const
	void get_primitive_box(int prim_index, btAABB & primbox) const {
		if(_obj.pushFunction("get_primitive_box")) {
			_obj.pushArg((btGImpactMeshShapePart::TrimeshPrimitiveManager*)this);
			_obj.pushArg(prim_index);
			_obj.pushArg(&primbox);
			return (_obj.callFunction<void>());
		}

		return TrimeshPrimitiveManager::get_primitive_box(prim_index, primbox);
	};

	// void btGImpactMeshShapePart::TrimeshPrimitiveManager::get_primitive_triangle(int prim_index, btPrimitiveTriangle & triangle) const
	void get_primitive_triangle(int prim_index, btPrimitiveTriangle & triangle) const {
		if(_obj.pushFunction("get_primitive_triangle")) {
			_obj.pushArg((btGImpactMeshShapePart::TrimeshPrimitiveManager*)this);
			_obj.pushArg(prim_index);
			_obj.pushArg(&triangle);
			return (_obj.callFunction<void>());
		}

		return TrimeshPrimitiveManager::get_primitive_triangle(prim_index, triangle);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

