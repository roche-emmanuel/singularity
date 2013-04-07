#ifndef _WRAPPERS_WRAPPER_BTSTRIDINGMESHINTERFACE_H_
#define _WRAPPERS_WRAPPER_BTSTRIDINGMESHINTERFACE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/CollisionShapes/btStridingMeshInterface.h>

class wrapper_btStridingMeshInterface : public btStridingMeshInterface, public luna_wrapper_base {

public:
		

	~wrapper_btStridingMeshInterface() {
		logDEBUG3("Calling delete function for wrapper btStridingMeshInterface");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btStridingMeshInterface*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btStridingMeshInterface(lua_State* L, lua_Table* dum) 
		: btStridingMeshInterface(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btStridingMeshInterface*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btStridingMeshInterface::InternalProcessAllTriangles(btInternalTriangleIndexCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const
	void InternalProcessAllTriangles(btInternalTriangleIndexCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const {
		if(_obj.pushFunction("InternalProcessAllTriangles")) {
			_obj.pushArg((btStridingMeshInterface*)this);
			_obj.pushArg(callback);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btStridingMeshInterface::InternalProcessAllTriangles(callback, aabbMin, aabbMax);
	};

	// void btStridingMeshInterface::unLockVertexBase(int subpart)
	void unLockVertexBase(int subpart) {
		THROW_IF(!_obj.pushFunction("unLockVertexBase"),"No implementation for abstract function btStridingMeshInterface::unLockVertexBase");
		_obj.pushArg((btStridingMeshInterface*)this);
		_obj.pushArg(subpart);
		return (_obj.callFunction<void>());
	};

	// void btStridingMeshInterface::unLockReadOnlyVertexBase(int subpart) const
	void unLockReadOnlyVertexBase(int subpart) const {
		THROW_IF(!_obj.pushFunction("unLockReadOnlyVertexBase"),"No implementation for abstract function btStridingMeshInterface::unLockReadOnlyVertexBase");
		_obj.pushArg((btStridingMeshInterface*)this);
		_obj.pushArg(subpart);
		return (_obj.callFunction<void>());
	};

	// int btStridingMeshInterface::getNumSubParts() const
	int getNumSubParts() const {
		THROW_IF(!_obj.pushFunction("getNumSubParts"),"No implementation for abstract function btStridingMeshInterface::getNumSubParts");
		_obj.pushArg((btStridingMeshInterface*)this);
		return (_obj.callFunction<int>());
	};

	// void btStridingMeshInterface::preallocateVertices(int numverts)
	void preallocateVertices(int numverts) {
		THROW_IF(!_obj.pushFunction("preallocateVertices"),"No implementation for abstract function btStridingMeshInterface::preallocateVertices");
		_obj.pushArg((btStridingMeshInterface*)this);
		_obj.pushArg(numverts);
		return (_obj.callFunction<void>());
	};

	// void btStridingMeshInterface::preallocateIndices(int numindices)
	void preallocateIndices(int numindices) {
		THROW_IF(!_obj.pushFunction("preallocateIndices"),"No implementation for abstract function btStridingMeshInterface::preallocateIndices");
		_obj.pushArg((btStridingMeshInterface*)this);
		_obj.pushArg(numindices);
		return (_obj.callFunction<void>());
	};

	// bool btStridingMeshInterface::hasPremadeAabb() const
	bool hasPremadeAabb() const {
		if(_obj.pushFunction("hasPremadeAabb")) {
			_obj.pushArg((btStridingMeshInterface*)this);
			return (_obj.callFunction<bool>());
		}

		return btStridingMeshInterface::hasPremadeAabb();
	};

	// void btStridingMeshInterface::setPremadeAabb(const btVector3 & aabbMin, const btVector3 & aabbMax) const
	void setPremadeAabb(const btVector3 & aabbMin, const btVector3 & aabbMax) const {
		if(_obj.pushFunction("setPremadeAabb")) {
			_obj.pushArg((btStridingMeshInterface*)this);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btStridingMeshInterface::setPremadeAabb(aabbMin, aabbMax);
	};

	// void btStridingMeshInterface::getPremadeAabb(btVector3 * aabbMin, btVector3 * aabbMax) const
	void getPremadeAabb(btVector3 * aabbMin, btVector3 * aabbMax) const {
		if(_obj.pushFunction("getPremadeAabb")) {
			_obj.pushArg((btStridingMeshInterface*)this);
			_obj.pushArg(aabbMin);
			_obj.pushArg(aabbMax);
			return (_obj.callFunction<void>());
		}

		return btStridingMeshInterface::getPremadeAabb(aabbMin, aabbMax);
	};

	// int btStridingMeshInterface::calculateSerializeBufferSize() const
	int calculateSerializeBufferSize() const {
		if(_obj.pushFunction("calculateSerializeBufferSize")) {
			_obj.pushArg((btStridingMeshInterface*)this);
			return (_obj.callFunction<int>());
		}

		return btStridingMeshInterface::calculateSerializeBufferSize();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


public:
// void btStridingMeshInterface::getLockedVertexIndexBase(unsigned char ** vertexbase, int & numverts, PHY_ScalarType & type, int & stride, unsigned char ** indexbase, int & indexstride, int & numfaces, PHY_ScalarType & indicestype, int subpart = 0)
void getLockedVertexIndexBase(unsigned char **, int &, PHY_ScalarType &, int &, unsigned char **, int &, int &, PHY_ScalarType &, int) {
	THROW_IF(true,"The function call void btStridingMeshInterface::getLockedVertexIndexBase(unsigned char **, int &, PHY_ScalarType &, int &, unsigned char **, int &, int &, PHY_ScalarType &, int) is not implemented in wrapper.");
};

public:
// void btStridingMeshInterface::getLockedReadOnlyVertexIndexBase(const unsigned char ** vertexbase, int & numverts, PHY_ScalarType & type, int & stride, const unsigned char ** indexbase, int & indexstride, int & numfaces, PHY_ScalarType & indicestype, int subpart = 0) const
void getLockedReadOnlyVertexIndexBase(const unsigned char **, int &, PHY_ScalarType &, int &, const unsigned char **, int &, int &, PHY_ScalarType &, int) const {
	THROW_IF(true,"The function call void btStridingMeshInterface::getLockedReadOnlyVertexIndexBase(const unsigned char **, int &, PHY_ScalarType &, int &, const unsigned char **, int &, int &, PHY_ScalarType &, int) const is not implemented in wrapper.");
};

};




#endif

