#ifndef _WRAPPERS_WRAPPER_BTGIMPACTCOMPOUNDSHAPE_H_
#define _WRAPPERS_WRAPPER_BTGIMPACTCOMPOUNDSHAPE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/Gimpact/btGImpactShape.h>

class wrapper_btGImpactCompoundShape : public btGImpactCompoundShape, public luna_wrapper_base {

public:
		

	~wrapper_btGImpactCompoundShape() {
		logDEBUG3("Calling delete function for wrapper btGImpactCompoundShape");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btGImpactCompoundShape*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btGImpactCompoundShape(lua_State* L, lua_Table* dum, bool children_has_transform = true) 
		: btGImpactCompoundShape(children_has_transform), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btGImpactCompoundShape*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void btGImpactShapeInterface::calcLocalAABB()
	void calcLocalAABB() {
		if(_obj.pushFunction("calcLocalAABB")) {
			_obj.pushArg((btGImpactCompoundShape*)this);
			return (_obj.callFunction<void>());
		}

		return btGImpactCompoundShape::calcLocalAABB();
	};

public:
	// Public virtual methods:
	// void btCollisionShape::getBoundingSphere(btVector3 & center, float & radius) const
	void getBoundingSphere(btVector3 & center, float & radius) const {
		if(_obj.pushFunction("getBoundingSphere")) {
			_obj.pushArg((btGImpactCompoundShape*)this);
			_obj.pushArg(&center);
			_obj.pushArg(radius);
			return (_obj.callFunction<void>());
		}

		return btGImpactCompoundShape::getBoundingSphere(center, radius);
	};

	// float btCollisionShape::getAngularMotionDisc() const
	float getAngularMotionDisc() const {
		if(_obj.pushFunction("getAngularMotionDisc")) {
			_obj.pushArg((btGImpactCompoundShape*)this);
			return (_obj.callFunction<float>());
		}

		return btGImpactCompoundShape::getAngularMotionDisc();
	};

	// float btCollisionShape::getContactBreakingThreshold(float defaultContactThresholdFactor) const
	float getContactBreakingThreshold(float defaultContactThresholdFactor) const {
		if(_obj.pushFunction("getContactBreakingThreshold")) {
			_obj.pushArg((btGImpactCompoundShape*)this);
			_obj.pushArg(defaultContactThresholdFactor);
			return (_obj.callFunction<float>());
		}

		return btGImpactCompoundShape::getContactBreakingThreshold(defaultContactThresholdFactor);
	};

	// btVector3 btCollisionShape::getAnisotropicRollingFrictionDirection() const
	btVector3 getAnisotropicRollingFrictionDirection() const {
		if(_obj.pushFunction("getAnisotropicRollingFrictionDirection")) {
			_obj.pushArg((btGImpactCompoundShape*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btGImpactCompoundShape::getAnisotropicRollingFrictionDirection();
	};

	// int btCollisionShape::calculateSerializeBufferSize() const
	int calculateSerializeBufferSize() const {
		if(_obj.pushFunction("calculateSerializeBufferSize")) {
			_obj.pushArg((btGImpactCompoundShape*)this);
			return (_obj.callFunction<int>());
		}

		return btGImpactCompoundShape::calculateSerializeBufferSize();
	};

	// float btConcaveShape::getMargin() const
	float getMargin() const {
		if(_obj.pushFunction("getMargin")) {
			_obj.pushArg((btGImpactCompoundShape*)this);
			return (_obj.callFunction<float>());
		}

		return btGImpactCompoundShape::getMargin();
	};

	// void btGImpactShapeInterface::lockChildShapes() const
	void lockChildShapes() const {
		if(_obj.pushFunction("lockChildShapes")) {
			_obj.pushArg((btGImpactCompoundShape*)this);
			return (_obj.callFunction<void>());
		}

		return btGImpactCompoundShape::lockChildShapes();
	};

	// void btGImpactShapeInterface::unlockChildShapes() const
	void unlockChildShapes() const {
		if(_obj.pushFunction("unlockChildShapes")) {
			_obj.pushArg((btGImpactCompoundShape*)this);
			return (_obj.callFunction<void>());
		}

		return btGImpactCompoundShape::unlockChildShapes();
	};

	// void btGImpactShapeInterface::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getAabb")) {
			_obj.pushArg((btGImpactCompoundShape*)this);
			_obj.pushArg(&t);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btGImpactCompoundShape::getAabb(t, aabbMin, aabbMax);
	};

	// void btGImpactShapeInterface::postUpdate()
	void postUpdate() {
		if(_obj.pushFunction("postUpdate")) {
			_obj.pushArg((btGImpactCompoundShape*)this);
			return (_obj.callFunction<void>());
		}

		return btGImpactCompoundShape::postUpdate();
	};

	// int btGImpactShapeInterface::getShapeType() const
	int getShapeType() const {
		if(_obj.pushFunction("getShapeType")) {
			_obj.pushArg((btGImpactCompoundShape*)this);
			return (_obj.callFunction<int>());
		}

		return btGImpactCompoundShape::getShapeType();
	};

	// void btGImpactShapeInterface::setLocalScaling(const btVector3 & scaling)
	void setLocalScaling(const btVector3 & scaling) {
		if(_obj.pushFunction("setLocalScaling")) {
			_obj.pushArg((btGImpactCompoundShape*)this);
			_obj.pushArg(&scaling);
			return (_obj.callFunction<void>());
		}

		return btGImpactCompoundShape::setLocalScaling(scaling);
	};

	// const btVector3 & btGImpactShapeInterface::getLocalScaling() const
	const btVector3 & getLocalScaling() const {
		if(_obj.pushFunction("getLocalScaling")) {
			_obj.pushArg((btGImpactCompoundShape*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btGImpactCompoundShape::getLocalScaling();
	};

	// void btGImpactShapeInterface::setMargin(float margin)
	void setMargin(float margin) {
		if(_obj.pushFunction("setMargin")) {
			_obj.pushArg((btGImpactCompoundShape*)this);
			_obj.pushArg(margin);
			return (_obj.callFunction<void>());
		}

		return btGImpactCompoundShape::setMargin(margin);
	};

	// void btGImpactShapeInterface::rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btCollisionWorld::RayResultCallback & resultCallback) const
	void rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btCollisionWorld::RayResultCallback & resultCallback) const {
		if(_obj.pushFunction("rayTest")) {
			_obj.pushArg((btGImpactCompoundShape*)this);
			_obj.pushArg(&rayFrom);
			_obj.pushArg(&rayTo);
			_obj.pushArg(&resultCallback);
			return (_obj.callFunction<void>());
		}

		return btGImpactCompoundShape::rayTest(rayFrom, rayTo, resultCallback);
	};

	// void btGImpactShapeInterface::processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const
	void processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const {
		if(_obj.pushFunction("processAllTriangles")) {
			_obj.pushArg((btGImpactCompoundShape*)this);
			_obj.pushArg(callback);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btGImpactCompoundShape::processAllTriangles(callback, aabbMin, aabbMax);
	};

	// bool btGImpactCompoundShape::childrenHasTransform() const
	bool childrenHasTransform() const {
		if(_obj.pushFunction("childrenHasTransform")) {
			_obj.pushArg((btGImpactCompoundShape*)this);
			return (_obj.callFunction<bool>());
		}

		return btGImpactCompoundShape::childrenHasTransform();
	};

	// const btPrimitiveManagerBase * btGImpactCompoundShape::getPrimitiveManager() const
	const btPrimitiveManagerBase * getPrimitiveManager() const {
		if(_obj.pushFunction("getPrimitiveManager")) {
			_obj.pushArg((btGImpactCompoundShape*)this);
			return (_obj.callFunction<btPrimitiveManagerBase*>());
		}

		return btGImpactCompoundShape::getPrimitiveManager();
	};

	// int btGImpactCompoundShape::getNumChildShapes() const
	int getNumChildShapes() const {
		if(_obj.pushFunction("getNumChildShapes")) {
			_obj.pushArg((btGImpactCompoundShape*)this);
			return (_obj.callFunction<int>());
		}

		return btGImpactCompoundShape::getNumChildShapes();
	};

	// btCollisionShape * btGImpactCompoundShape::getChildShape(int index)
	btCollisionShape * getChildShape(int index) {
		if(_obj.pushFunction("getChildShape")) {
			_obj.pushArg((btGImpactCompoundShape*)this);
			_obj.pushArg(index);
			return (_obj.callFunction<btCollisionShape*>());
		}

		return btGImpactCompoundShape::getChildShape(index);
	};

	// const btCollisionShape * btGImpactCompoundShape::getChildShape(int index) const
	const btCollisionShape * getChildShape(int index) const {
		if(_obj.pushFunction("getChildShape")) {
			_obj.pushArg((btGImpactCompoundShape*)this);
			_obj.pushArg(index);
			return (_obj.callFunction<btCollisionShape*>());
		}

		return btGImpactCompoundShape::getChildShape(index);
	};

	// void btGImpactCompoundShape::getChildAabb(int child_index, const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getChildAabb(int child_index, const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getChildAabb")) {
			_obj.pushArg((btGImpactCompoundShape*)this);
			_obj.pushArg(child_index);
			_obj.pushArg(&t);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btGImpactCompoundShape::getChildAabb(child_index, t, aabbMin, aabbMax);
	};

	// btTransform btGImpactCompoundShape::getChildTransform(int index) const
	btTransform getChildTransform(int index) const {
		if(_obj.pushFunction("getChildTransform")) {
			_obj.pushArg((btGImpactCompoundShape*)this);
			_obj.pushArg(index);
			return *(_obj.callFunction<btTransform*>());
		}

		return btGImpactCompoundShape::getChildTransform(index);
	};

	// void btGImpactCompoundShape::setChildTransform(int index, const btTransform & transform)
	void setChildTransform(int index, const btTransform & transform) {
		if(_obj.pushFunction("setChildTransform")) {
			_obj.pushArg((btGImpactCompoundShape*)this);
			_obj.pushArg(index);
			_obj.pushArg(&transform);
			return (_obj.callFunction<void>());
		}

		return btGImpactCompoundShape::setChildTransform(index, transform);
	};

	// bool btGImpactCompoundShape::needsRetrieveTriangles() const
	bool needsRetrieveTriangles() const {
		if(_obj.pushFunction("needsRetrieveTriangles")) {
			_obj.pushArg((btGImpactCompoundShape*)this);
			return (_obj.callFunction<bool>());
		}

		return btGImpactCompoundShape::needsRetrieveTriangles();
	};

	// bool btGImpactCompoundShape::needsRetrieveTetrahedrons() const
	bool needsRetrieveTetrahedrons() const {
		if(_obj.pushFunction("needsRetrieveTetrahedrons")) {
			_obj.pushArg((btGImpactCompoundShape*)this);
			return (_obj.callFunction<bool>());
		}

		return btGImpactCompoundShape::needsRetrieveTetrahedrons();
	};

	// void btGImpactCompoundShape::getBulletTriangle(int prim_index, btTriangleShapeEx & triangle) const
	void getBulletTriangle(int prim_index, btTriangleShapeEx & triangle) const {
		if(_obj.pushFunction("getBulletTriangle")) {
			_obj.pushArg((btGImpactCompoundShape*)this);
			_obj.pushArg(prim_index);
			_obj.pushArg(&triangle);
			return (_obj.callFunction<void>());
		}

		return btGImpactCompoundShape::getBulletTriangle(prim_index, triangle);
	};

	// void btGImpactCompoundShape::getBulletTetrahedron(int prim_index, btTetrahedronShapeEx & tetrahedron) const
	void getBulletTetrahedron(int prim_index, btTetrahedronShapeEx & tetrahedron) const {
		if(_obj.pushFunction("getBulletTetrahedron")) {
			_obj.pushArg((btGImpactCompoundShape*)this);
			_obj.pushArg(prim_index);
			_obj.pushArg(&tetrahedron);
			return (_obj.callFunction<void>());
		}

		return btGImpactCompoundShape::getBulletTetrahedron(prim_index, tetrahedron);
	};

	// void btGImpactCompoundShape::calculateLocalInertia(float mass, btVector3 & inertia) const
	void calculateLocalInertia(float mass, btVector3 & inertia) const {
		if(_obj.pushFunction("calculateLocalInertia")) {
			_obj.pushArg((btGImpactCompoundShape*)this);
			_obj.pushArg(mass);
			_obj.pushArg(&inertia);
			return (_obj.callFunction<void>());
		}

		return btGImpactCompoundShape::calculateLocalInertia(mass, inertia);
	};

	// const char * btGImpactCompoundShape::getName() const
	const char * getName() const {
		if(_obj.pushFunction("getName")) {
			_obj.pushArg((btGImpactCompoundShape*)this);
			return (_obj.callFunction<const char*>());
		}

		return btGImpactCompoundShape::getName();
	};

	// eGIMPACT_SHAPE_TYPE btGImpactCompoundShape::getGImpactShapeType() const
	eGIMPACT_SHAPE_TYPE getGImpactShapeType() const {
		if(_obj.pushFunction("getGImpactShapeType")) {
			_obj.pushArg((btGImpactCompoundShape*)this);
			return (eGIMPACT_SHAPE_TYPE)(_obj.callFunction<int>());
		}

		return btGImpactCompoundShape::getGImpactShapeType();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

