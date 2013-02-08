#ifndef _WRAPPERS_WRAPPER_BTTRIANGLEMESH_H_
#define _WRAPPERS_WRAPPER_BTTRIANGLEMESH_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/CollisionShapes/btTriangleMesh.h>

class wrapper_btTriangleMesh : public btTriangleMesh, public luna_wrapper_base {

public:
		

	~wrapper_btTriangleMesh() {
		logDEBUG3("Calling delete function for wrapper btTriangleMesh");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btTriangleMesh*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btTriangleMesh(lua_State* L, lua_Table* dum, bool use32bitIndices = true, bool use4componentVertices = true) 
		: btTriangleMesh(use32bitIndices, use4componentVertices), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btTriangleMesh*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btStridingMeshInterface::InternalProcessAllTriangles(btInternalTriangleIndexCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const
	void InternalProcessAllTriangles(btInternalTriangleIndexCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const {
		if(_obj.pushFunction("InternalProcessAllTriangles")) {
			_obj.pushArg((btTriangleMesh*)this);
			_obj.pushArg(callback);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btTriangleMesh::InternalProcessAllTriangles(callback, aabbMin, aabbMax);
	};

	// int btStridingMeshInterface::calculateSerializeBufferSize() const
	int calculateSerializeBufferSize() const {
		if(_obj.pushFunction("calculateSerializeBufferSize")) {
			_obj.pushArg((btTriangleMesh*)this);
			return (_obj.callFunction<int>());
		}

		return btTriangleMesh::calculateSerializeBufferSize();
	};

	// void btTriangleIndexVertexArray::unLockVertexBase(int subpart)
	void unLockVertexBase(int subpart) {
		if(_obj.pushFunction("unLockVertexBase")) {
			_obj.pushArg((btTriangleMesh*)this);
			_obj.pushArg(subpart);
			return (_obj.callFunction<void>());
		}

		return btTriangleMesh::unLockVertexBase(subpart);
	};

	// void btTriangleIndexVertexArray::unLockReadOnlyVertexBase(int subpart) const
	void unLockReadOnlyVertexBase(int subpart) const {
		if(_obj.pushFunction("unLockReadOnlyVertexBase")) {
			_obj.pushArg((btTriangleMesh*)this);
			_obj.pushArg(subpart);
			return (_obj.callFunction<void>());
		}

		return btTriangleMesh::unLockReadOnlyVertexBase(subpart);
	};

	// int btTriangleIndexVertexArray::getNumSubParts() const
	int getNumSubParts() const {
		if(_obj.pushFunction("getNumSubParts")) {
			_obj.pushArg((btTriangleMesh*)this);
			return (_obj.callFunction<int>());
		}

		return btTriangleMesh::getNumSubParts();
	};

	// bool btTriangleIndexVertexArray::hasPremadeAabb() const
	bool hasPremadeAabb() const {
		if(_obj.pushFunction("hasPremadeAabb")) {
			_obj.pushArg((btTriangleMesh*)this);
			return (_obj.callFunction<bool>());
		}

		return btTriangleMesh::hasPremadeAabb();
	};

	// void btTriangleIndexVertexArray::setPremadeAabb(const btVector3 & aabbMin, const btVector3 & aabbMax) const
	void setPremadeAabb(const btVector3 & aabbMin, const btVector3 & aabbMax) const {
		if(_obj.pushFunction("setPremadeAabb")) {
			_obj.pushArg((btTriangleMesh*)this);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btTriangleMesh::setPremadeAabb(aabbMin, aabbMax);
	};

	// void btTriangleIndexVertexArray::getPremadeAabb(btVector3 * aabbMin, btVector3 * aabbMax) const
	void getPremadeAabb(btVector3 * aabbMin, btVector3 * aabbMax) const {
		if(_obj.pushFunction("getPremadeAabb")) {
			_obj.pushArg((btTriangleMesh*)this);
			_obj.pushArg(aabbMin);
			_obj.pushArg(aabbMax);
			return (_obj.callFunction<void>());
		}

		return btTriangleMesh::getPremadeAabb(aabbMin, aabbMax);
	};

	// void btTriangleMesh::preallocateVertices(int numverts)
	void preallocateVertices(int numverts) {
		if(_obj.pushFunction("preallocateVertices")) {
			_obj.pushArg((btTriangleMesh*)this);
			_obj.pushArg(numverts);
			return (_obj.callFunction<void>());
		}

		return btTriangleMesh::preallocateVertices(numverts);
	};

	// void btTriangleMesh::preallocateIndices(int numindices)
	void preallocateIndices(int numindices) {
		if(_obj.pushFunction("preallocateIndices")) {
			_obj.pushArg((btTriangleMesh*)this);
			_obj.pushArg(numindices);
			return (_obj.callFunction<void>());
		}

		return btTriangleMesh::preallocateIndices(numindices);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

