#ifndef _WRAPPERS_WRAPPER_BTGIMPACTMESHSHAPEPART_H_
#define _WRAPPERS_WRAPPER_BTGIMPACTMESHSHAPEPART_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/Gimpact/btGImpactShape.h>

class wrapper_btGImpactMeshShapePart : public btGImpactMeshShapePart, public luna_wrapper_base {

public:
		

	~wrapper_btGImpactMeshShapePart() {
		logDEBUG3("Calling delete function for wrapper btGImpactMeshShapePart");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btGImpactMeshShapePart*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btGImpactMeshShapePart(lua_State* L, lua_Table* dum) 
		: btGImpactMeshShapePart(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btGImpactMeshShapePart*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_btGImpactMeshShapePart(lua_State* L, lua_Table* dum, btStridingMeshInterface * meshInterface, int part) 
		: btGImpactMeshShapePart(meshInterface, part), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btGImpactMeshShapePart*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void btGImpactShapeInterface::calcLocalAABB()
	void calcLocalAABB() {
		if(_obj.pushFunction("calcLocalAABB")) {
			_obj.pushArg((btGImpactMeshShapePart*)this);
			return (_obj.callFunction<void>());
		}

		return btGImpactMeshShapePart::calcLocalAABB();
	};

public:
	// Public virtual methods:
	// void btCollisionShape::getBoundingSphere(btVector3 & center, float & radius) const
	void getBoundingSphere(btVector3 & center, float & radius) const {
		if(_obj.pushFunction("getBoundingSphere")) {
			_obj.pushArg((btGImpactMeshShapePart*)this);
			_obj.pushArg(&center);
			_obj.pushArg(radius);
			return (_obj.callFunction<void>());
		}

		return btGImpactMeshShapePart::getBoundingSphere(center, radius);
	};

	// float btCollisionShape::getAngularMotionDisc() const
	float getAngularMotionDisc() const {
		if(_obj.pushFunction("getAngularMotionDisc")) {
			_obj.pushArg((btGImpactMeshShapePart*)this);
			return (_obj.callFunction<float>());
		}

		return btGImpactMeshShapePart::getAngularMotionDisc();
	};

	// float btCollisionShape::getContactBreakingThreshold(float defaultContactThresholdFactor) const
	float getContactBreakingThreshold(float defaultContactThresholdFactor) const {
		if(_obj.pushFunction("getContactBreakingThreshold")) {
			_obj.pushArg((btGImpactMeshShapePart*)this);
			_obj.pushArg(defaultContactThresholdFactor);
			return (_obj.callFunction<float>());
		}

		return btGImpactMeshShapePart::getContactBreakingThreshold(defaultContactThresholdFactor);
	};

	// btVector3 btCollisionShape::getAnisotropicRollingFrictionDirection() const
	btVector3 getAnisotropicRollingFrictionDirection() const {
		if(_obj.pushFunction("getAnisotropicRollingFrictionDirection")) {
			_obj.pushArg((btGImpactMeshShapePart*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btGImpactMeshShapePart::getAnisotropicRollingFrictionDirection();
	};

	// int btCollisionShape::calculateSerializeBufferSize() const
	int calculateSerializeBufferSize() const {
		if(_obj.pushFunction("calculateSerializeBufferSize")) {
			_obj.pushArg((btGImpactMeshShapePart*)this);
			return (_obj.callFunction<int>());
		}

		return btGImpactMeshShapePart::calculateSerializeBufferSize();
	};

	// void btGImpactShapeInterface::getChildAabb(int child_index, const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getChildAabb(int child_index, const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getChildAabb")) {
			_obj.pushArg((btGImpactMeshShapePart*)this);
			_obj.pushArg(child_index);
			_obj.pushArg(&t);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btGImpactMeshShapePart::getChildAabb(child_index, t, aabbMin, aabbMax);
	};

	// void btGImpactShapeInterface::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getAabb")) {
			_obj.pushArg((btGImpactMeshShapePart*)this);
			_obj.pushArg(&t);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btGImpactMeshShapePart::getAabb(t, aabbMin, aabbMax);
	};

	// void btGImpactShapeInterface::postUpdate()
	void postUpdate() {
		if(_obj.pushFunction("postUpdate")) {
			_obj.pushArg((btGImpactMeshShapePart*)this);
			return (_obj.callFunction<void>());
		}

		return btGImpactMeshShapePart::postUpdate();
	};

	// int btGImpactShapeInterface::getShapeType() const
	int getShapeType() const {
		if(_obj.pushFunction("getShapeType")) {
			_obj.pushArg((btGImpactMeshShapePart*)this);
			return (_obj.callFunction<int>());
		}

		return btGImpactMeshShapePart::getShapeType();
	};

	// void btGImpactShapeInterface::rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btCollisionWorld::RayResultCallback & resultCallback) const
	void rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btCollisionWorld::RayResultCallback & resultCallback) const {
		if(_obj.pushFunction("rayTest")) {
			_obj.pushArg((btGImpactMeshShapePart*)this);
			_obj.pushArg(&rayFrom);
			_obj.pushArg(&rayTo);
			_obj.pushArg(&resultCallback);
			return (_obj.callFunction<void>());
		}

		return btGImpactMeshShapePart::rayTest(rayFrom, rayTo, resultCallback);
	};

	// bool btGImpactMeshShapePart::childrenHasTransform() const
	bool childrenHasTransform() const {
		if(_obj.pushFunction("childrenHasTransform")) {
			_obj.pushArg((btGImpactMeshShapePart*)this);
			return (_obj.callFunction<bool>());
		}

		return btGImpactMeshShapePart::childrenHasTransform();
	};

	// void btGImpactMeshShapePart::lockChildShapes() const
	void lockChildShapes() const {
		if(_obj.pushFunction("lockChildShapes")) {
			_obj.pushArg((btGImpactMeshShapePart*)this);
			return (_obj.callFunction<void>());
		}

		return btGImpactMeshShapePart::lockChildShapes();
	};

	// void btGImpactMeshShapePart::unlockChildShapes() const
	void unlockChildShapes() const {
		if(_obj.pushFunction("unlockChildShapes")) {
			_obj.pushArg((btGImpactMeshShapePart*)this);
			return (_obj.callFunction<void>());
		}

		return btGImpactMeshShapePart::unlockChildShapes();
	};

	// int btGImpactMeshShapePart::getNumChildShapes() const
	int getNumChildShapes() const {
		if(_obj.pushFunction("getNumChildShapes")) {
			_obj.pushArg((btGImpactMeshShapePart*)this);
			return (_obj.callFunction<int>());
		}

		return btGImpactMeshShapePart::getNumChildShapes();
	};

	// btCollisionShape * btGImpactMeshShapePart::getChildShape(int index)
	btCollisionShape * getChildShape(int index) {
		if(_obj.pushFunction("getChildShape")) {
			_obj.pushArg((btGImpactMeshShapePart*)this);
			_obj.pushArg(index);
			return (_obj.callFunction<btCollisionShape*>());
		}

		return btGImpactMeshShapePart::getChildShape(index);
	};

	// const btCollisionShape * btGImpactMeshShapePart::getChildShape(int index) const
	const btCollisionShape * getChildShape(int index) const {
		if(_obj.pushFunction("getChildShape")) {
			_obj.pushArg((btGImpactMeshShapePart*)this);
			_obj.pushArg(index);
			return (_obj.callFunction<btCollisionShape*>());
		}

		return btGImpactMeshShapePart::getChildShape(index);
	};

	// btTransform btGImpactMeshShapePart::getChildTransform(int index) const
	btTransform getChildTransform(int index) const {
		if(_obj.pushFunction("getChildTransform")) {
			_obj.pushArg((btGImpactMeshShapePart*)this);
			_obj.pushArg(index);
			return *(_obj.callFunction<btTransform*>());
		}

		return btGImpactMeshShapePart::getChildTransform(index);
	};

	// void btGImpactMeshShapePart::setChildTransform(int index, const btTransform & transform)
	void setChildTransform(int index, const btTransform & transform) {
		if(_obj.pushFunction("setChildTransform")) {
			_obj.pushArg((btGImpactMeshShapePart*)this);
			_obj.pushArg(index);
			_obj.pushArg(&transform);
			return (_obj.callFunction<void>());
		}

		return btGImpactMeshShapePart::setChildTransform(index, transform);
	};

	// const btPrimitiveManagerBase * btGImpactMeshShapePart::getPrimitiveManager() const
	const btPrimitiveManagerBase * getPrimitiveManager() const {
		if(_obj.pushFunction("getPrimitiveManager")) {
			_obj.pushArg((btGImpactMeshShapePart*)this);
			return (_obj.callFunction<btPrimitiveManagerBase*>());
		}

		return btGImpactMeshShapePart::getPrimitiveManager();
	};

	// void btGImpactMeshShapePart::calculateLocalInertia(float mass, btVector3 & inertia) const
	void calculateLocalInertia(float mass, btVector3 & inertia) const {
		if(_obj.pushFunction("calculateLocalInertia")) {
			_obj.pushArg((btGImpactMeshShapePart*)this);
			_obj.pushArg(mass);
			_obj.pushArg(&inertia);
			return (_obj.callFunction<void>());
		}

		return btGImpactMeshShapePart::calculateLocalInertia(mass, inertia);
	};

	// const char * btGImpactMeshShapePart::getName() const
	const char * getName() const {
		if(_obj.pushFunction("getName")) {
			_obj.pushArg((btGImpactMeshShapePart*)this);
			return (_obj.callFunction<const char*>());
		}

		return btGImpactMeshShapePart::getName();
	};

	// eGIMPACT_SHAPE_TYPE btGImpactMeshShapePart::getGImpactShapeType() const
	eGIMPACT_SHAPE_TYPE getGImpactShapeType() const {
		if(_obj.pushFunction("getGImpactShapeType")) {
			_obj.pushArg((btGImpactMeshShapePart*)this);
			return (eGIMPACT_SHAPE_TYPE)(_obj.callFunction<int>());
		}

		return btGImpactMeshShapePart::getGImpactShapeType();
	};

	// bool btGImpactMeshShapePart::needsRetrieveTriangles() const
	bool needsRetrieveTriangles() const {
		if(_obj.pushFunction("needsRetrieveTriangles")) {
			_obj.pushArg((btGImpactMeshShapePart*)this);
			return (_obj.callFunction<bool>());
		}

		return btGImpactMeshShapePart::needsRetrieveTriangles();
	};

	// bool btGImpactMeshShapePart::needsRetrieveTetrahedrons() const
	bool needsRetrieveTetrahedrons() const {
		if(_obj.pushFunction("needsRetrieveTetrahedrons")) {
			_obj.pushArg((btGImpactMeshShapePart*)this);
			return (_obj.callFunction<bool>());
		}

		return btGImpactMeshShapePart::needsRetrieveTetrahedrons();
	};

	// void btGImpactMeshShapePart::getBulletTriangle(int prim_index, btTriangleShapeEx & triangle) const
	void getBulletTriangle(int prim_index, btTriangleShapeEx & triangle) const {
		if(_obj.pushFunction("getBulletTriangle")) {
			_obj.pushArg((btGImpactMeshShapePart*)this);
			_obj.pushArg(prim_index);
			_obj.pushArg(&triangle);
			return (_obj.callFunction<void>());
		}

		return btGImpactMeshShapePart::getBulletTriangle(prim_index, triangle);
	};

	// void btGImpactMeshShapePart::getBulletTetrahedron(int prim_index, btTetrahedronShapeEx & tetrahedron) const
	void getBulletTetrahedron(int prim_index, btTetrahedronShapeEx & tetrahedron) const {
		if(_obj.pushFunction("getBulletTetrahedron")) {
			_obj.pushArg((btGImpactMeshShapePart*)this);
			_obj.pushArg(prim_index);
			_obj.pushArg(&tetrahedron);
			return (_obj.callFunction<void>());
		}

		return btGImpactMeshShapePart::getBulletTetrahedron(prim_index, tetrahedron);
	};

	// void btGImpactMeshShapePart::setMargin(float margin)
	void setMargin(float margin) {
		if(_obj.pushFunction("setMargin")) {
			_obj.pushArg((btGImpactMeshShapePart*)this);
			_obj.pushArg(margin);
			return (_obj.callFunction<void>());
		}

		return btGImpactMeshShapePart::setMargin(margin);
	};

	// float btGImpactMeshShapePart::getMargin() const
	float getMargin() const {
		if(_obj.pushFunction("getMargin")) {
			_obj.pushArg((btGImpactMeshShapePart*)this);
			return (_obj.callFunction<float>());
		}

		return btGImpactMeshShapePart::getMargin();
	};

	// void btGImpactMeshShapePart::setLocalScaling(const btVector3 & scaling)
	void setLocalScaling(const btVector3 & scaling) {
		if(_obj.pushFunction("setLocalScaling")) {
			_obj.pushArg((btGImpactMeshShapePart*)this);
			_obj.pushArg(&scaling);
			return (_obj.callFunction<void>());
		}

		return btGImpactMeshShapePart::setLocalScaling(scaling);
	};

	// const btVector3 & btGImpactMeshShapePart::getLocalScaling() const
	const btVector3 & getLocalScaling() const {
		if(_obj.pushFunction("getLocalScaling")) {
			_obj.pushArg((btGImpactMeshShapePart*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btGImpactMeshShapePart::getLocalScaling();
	};

	// void btGImpactMeshShapePart::processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const
	void processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const {
		if(_obj.pushFunction("processAllTriangles")) {
			_obj.pushArg((btGImpactMeshShapePart*)this);
			_obj.pushArg(callback);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btGImpactMeshShapePart::processAllTriangles(callback, aabbMin, aabbMax);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

