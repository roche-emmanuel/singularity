#ifndef _WRAPPERS_WRAPPER_BTTRIANGLEINDEXVERTEXMATERIALARRAY_H_
#define _WRAPPERS_WRAPPER_BTTRIANGLEINDEXVERTEXMATERIALARRAY_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/CollisionShapes/btTriangleIndexVertexMaterialArray.h>

class wrapper_btTriangleIndexVertexMaterialArray : public btTriangleIndexVertexMaterialArray, public luna_wrapper_base {

public:
		

	~wrapper_btTriangleIndexVertexMaterialArray() {
		logDEBUG3("Calling delete function for wrapper btTriangleIndexVertexMaterialArray");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btTriangleIndexVertexMaterialArray*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btTriangleIndexVertexMaterialArray(lua_State* L, lua_Table* dum) 
		: btTriangleIndexVertexMaterialArray(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btTriangleIndexVertexMaterialArray*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_btTriangleIndexVertexMaterialArray(lua_State* L, lua_Table* dum, int numTriangles, int * triangleIndexBase, int triangleIndexStride, int numVertices, float * vertexBase, int vertexStride, int numMaterials, unsigned char * materialBase, int materialStride, int * triangleMaterialsBase, int materialIndexStride) 
		: btTriangleIndexVertexMaterialArray(numTriangles, triangleIndexBase, triangleIndexStride, numVertices, vertexBase, vertexStride, numMaterials, materialBase, materialStride, triangleMaterialsBase, materialIndexStride), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btTriangleIndexVertexMaterialArray*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btStridingMeshInterface::InternalProcessAllTriangles(btInternalTriangleIndexCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const
	void InternalProcessAllTriangles(btInternalTriangleIndexCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const {
		if(_obj.pushFunction("InternalProcessAllTriangles")) {
			_obj.pushArg((btTriangleIndexVertexMaterialArray*)this);
			_obj.pushArg(callback);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btTriangleIndexVertexMaterialArray::InternalProcessAllTriangles(callback, aabbMin, aabbMax);
	};

	// int btStridingMeshInterface::calculateSerializeBufferSize() const
	int calculateSerializeBufferSize() const {
		if(_obj.pushFunction("calculateSerializeBufferSize")) {
			_obj.pushArg((btTriangleIndexVertexMaterialArray*)this);
			return (_obj.callFunction<int>());
		}

		return btTriangleIndexVertexMaterialArray::calculateSerializeBufferSize();
	};

	// void btTriangleIndexVertexArray::unLockVertexBase(int subpart)
	void unLockVertexBase(int subpart) {
		if(_obj.pushFunction("unLockVertexBase")) {
			_obj.pushArg((btTriangleIndexVertexMaterialArray*)this);
			_obj.pushArg(subpart);
			return (_obj.callFunction<void>());
		}

		return btTriangleIndexVertexMaterialArray::unLockVertexBase(subpart);
	};

	// void btTriangleIndexVertexArray::unLockReadOnlyVertexBase(int subpart) const
	void unLockReadOnlyVertexBase(int subpart) const {
		if(_obj.pushFunction("unLockReadOnlyVertexBase")) {
			_obj.pushArg((btTriangleIndexVertexMaterialArray*)this);
			_obj.pushArg(subpart);
			return (_obj.callFunction<void>());
		}

		return btTriangleIndexVertexMaterialArray::unLockReadOnlyVertexBase(subpart);
	};

	// int btTriangleIndexVertexArray::getNumSubParts() const
	int getNumSubParts() const {
		if(_obj.pushFunction("getNumSubParts")) {
			_obj.pushArg((btTriangleIndexVertexMaterialArray*)this);
			return (_obj.callFunction<int>());
		}

		return btTriangleIndexVertexMaterialArray::getNumSubParts();
	};

	// void btTriangleIndexVertexArray::preallocateVertices(int numverts)
	void preallocateVertices(int numverts) {
		if(_obj.pushFunction("preallocateVertices")) {
			_obj.pushArg((btTriangleIndexVertexMaterialArray*)this);
			_obj.pushArg(numverts);
			return (_obj.callFunction<void>());
		}

		return btTriangleIndexVertexMaterialArray::preallocateVertices(numverts);
	};

	// void btTriangleIndexVertexArray::preallocateIndices(int numindices)
	void preallocateIndices(int numindices) {
		if(_obj.pushFunction("preallocateIndices")) {
			_obj.pushArg((btTriangleIndexVertexMaterialArray*)this);
			_obj.pushArg(numindices);
			return (_obj.callFunction<void>());
		}

		return btTriangleIndexVertexMaterialArray::preallocateIndices(numindices);
	};

	// bool btTriangleIndexVertexArray::hasPremadeAabb() const
	bool hasPremadeAabb() const {
		if(_obj.pushFunction("hasPremadeAabb")) {
			_obj.pushArg((btTriangleIndexVertexMaterialArray*)this);
			return (_obj.callFunction<bool>());
		}

		return btTriangleIndexVertexMaterialArray::hasPremadeAabb();
	};

	// void btTriangleIndexVertexArray::setPremadeAabb(const btVector3 & aabbMin, const btVector3 & aabbMax) const
	void setPremadeAabb(const btVector3 & aabbMin, const btVector3 & aabbMax) const {
		if(_obj.pushFunction("setPremadeAabb")) {
			_obj.pushArg((btTriangleIndexVertexMaterialArray*)this);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btTriangleIndexVertexMaterialArray::setPremadeAabb(aabbMin, aabbMax);
	};

	// void btTriangleIndexVertexArray::getPremadeAabb(btVector3 * aabbMin, btVector3 * aabbMax) const
	void getPremadeAabb(btVector3 * aabbMin, btVector3 * aabbMax) const {
		if(_obj.pushFunction("getPremadeAabb")) {
			_obj.pushArg((btTriangleIndexVertexMaterialArray*)this);
			_obj.pushArg(aabbMin);
			_obj.pushArg(aabbMax);
			return (_obj.callFunction<void>());
		}

		return btTriangleIndexVertexMaterialArray::getPremadeAabb(aabbMin, aabbMax);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

