#ifndef _WRAPPERS_WRAPPER_BTTRIANGLEINDEXVERTEXARRAY_H_
#define _WRAPPERS_WRAPPER_BTTRIANGLEINDEXVERTEXARRAY_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/CollisionShapes/btTriangleIndexVertexArray.h>

class wrapper_btTriangleIndexVertexArray : public btTriangleIndexVertexArray, public luna_wrapper_base {

public:
		

	~wrapper_btTriangleIndexVertexArray() {
		logDEBUG3("Calling delete function for wrapper btTriangleIndexVertexArray");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btTriangleIndexVertexArray*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btTriangleIndexVertexArray(lua_State* L, lua_Table* dum) 
		: btTriangleIndexVertexArray(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btTriangleIndexVertexArray*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_btTriangleIndexVertexArray(lua_State* L, lua_Table* dum, int numTriangles, int * triangleIndexBase, int triangleIndexStride, int numVertices, float * vertexBase, int vertexStride) 
		: btTriangleIndexVertexArray(numTriangles, triangleIndexBase, triangleIndexStride, numVertices, vertexBase, vertexStride), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btTriangleIndexVertexArray*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btStridingMeshInterface::InternalProcessAllTriangles(btInternalTriangleIndexCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const
	void InternalProcessAllTriangles(btInternalTriangleIndexCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const {
		if(_obj.pushFunction("InternalProcessAllTriangles")) {
			_obj.pushArg((btTriangleIndexVertexArray*)this);
			_obj.pushArg(callback);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btTriangleIndexVertexArray::InternalProcessAllTriangles(callback, aabbMin, aabbMax);
	};

	// int btStridingMeshInterface::calculateSerializeBufferSize() const
	int calculateSerializeBufferSize() const {
		if(_obj.pushFunction("calculateSerializeBufferSize")) {
			_obj.pushArg((btTriangleIndexVertexArray*)this);
			return (_obj.callFunction<int>());
		}

		return btTriangleIndexVertexArray::calculateSerializeBufferSize();
	};

	// void btTriangleIndexVertexArray::unLockVertexBase(int subpart)
	void unLockVertexBase(int subpart) {
		if(_obj.pushFunction("unLockVertexBase")) {
			_obj.pushArg((btTriangleIndexVertexArray*)this);
			_obj.pushArg(subpart);
			return (_obj.callFunction<void>());
		}

		return btTriangleIndexVertexArray::unLockVertexBase(subpart);
	};

	// void btTriangleIndexVertexArray::unLockReadOnlyVertexBase(int subpart) const
	void unLockReadOnlyVertexBase(int subpart) const {
		if(_obj.pushFunction("unLockReadOnlyVertexBase")) {
			_obj.pushArg((btTriangleIndexVertexArray*)this);
			_obj.pushArg(subpart);
			return (_obj.callFunction<void>());
		}

		return btTriangleIndexVertexArray::unLockReadOnlyVertexBase(subpart);
	};

	// int btTriangleIndexVertexArray::getNumSubParts() const
	int getNumSubParts() const {
		if(_obj.pushFunction("getNumSubParts")) {
			_obj.pushArg((btTriangleIndexVertexArray*)this);
			return (_obj.callFunction<int>());
		}

		return btTriangleIndexVertexArray::getNumSubParts();
	};

	// void btTriangleIndexVertexArray::preallocateVertices(int numverts)
	void preallocateVertices(int numverts) {
		if(_obj.pushFunction("preallocateVertices")) {
			_obj.pushArg((btTriangleIndexVertexArray*)this);
			_obj.pushArg(numverts);
			return (_obj.callFunction<void>());
		}

		return btTriangleIndexVertexArray::preallocateVertices(numverts);
	};

	// void btTriangleIndexVertexArray::preallocateIndices(int numindices)
	void preallocateIndices(int numindices) {
		if(_obj.pushFunction("preallocateIndices")) {
			_obj.pushArg((btTriangleIndexVertexArray*)this);
			_obj.pushArg(numindices);
			return (_obj.callFunction<void>());
		}

		return btTriangleIndexVertexArray::preallocateIndices(numindices);
	};

	// bool btTriangleIndexVertexArray::hasPremadeAabb() const
	bool hasPremadeAabb() const {
		if(_obj.pushFunction("hasPremadeAabb")) {
			_obj.pushArg((btTriangleIndexVertexArray*)this);
			return (_obj.callFunction<bool>());
		}

		return btTriangleIndexVertexArray::hasPremadeAabb();
	};

	// void btTriangleIndexVertexArray::setPremadeAabb(const btVector3 & aabbMin, const btVector3 & aabbMax) const
	void setPremadeAabb(const btVector3 & aabbMin, const btVector3 & aabbMax) const {
		if(_obj.pushFunction("setPremadeAabb")) {
			_obj.pushArg((btTriangleIndexVertexArray*)this);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btTriangleIndexVertexArray::setPremadeAabb(aabbMin, aabbMax);
	};

	// void btTriangleIndexVertexArray::getPremadeAabb(btVector3 * aabbMin, btVector3 * aabbMax) const
	void getPremadeAabb(btVector3 * aabbMin, btVector3 * aabbMax) const {
		if(_obj.pushFunction("getPremadeAabb")) {
			_obj.pushArg((btTriangleIndexVertexArray*)this);
			_obj.pushArg(aabbMin);
			_obj.pushArg(aabbMax);
			return (_obj.callFunction<void>());
		}

		return btTriangleIndexVertexArray::getPremadeAabb(aabbMin, aabbMax);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

