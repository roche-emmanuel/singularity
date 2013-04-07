#ifndef _WRAPPERS_WRAPPER_BTGIMPACTSHAPEINTERFACE_H_
#define _WRAPPERS_WRAPPER_BTGIMPACTSHAPEINTERFACE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/Gimpact/btGImpactShape.h>

class wrapper_btGImpactShapeInterface : public btGImpactShapeInterface, public luna_wrapper_base {

public:
		

	~wrapper_btGImpactShapeInterface() {
		logDEBUG3("Calling delete function for wrapper btGImpactShapeInterface");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btGImpactShapeInterface*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btGImpactShapeInterface(lua_State* L, lua_Table* dum) 
		: btGImpactShapeInterface(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btGImpactShapeInterface*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void btGImpactShapeInterface::calcLocalAABB()
	void calcLocalAABB() {
		if(_obj.pushFunction("calcLocalAABB")) {
			_obj.pushArg((btGImpactShapeInterface*)this);
			return (_obj.callFunction<void>());
		}

		return btGImpactShapeInterface::calcLocalAABB();
	};

public:
	// Public virtual methods:
	// void btCollisionShape::getBoundingSphere(btVector3 & center, float & radius) const
	void getBoundingSphere(btVector3 & center, float & radius) const {
		if(_obj.pushFunction("getBoundingSphere")) {
			_obj.pushArg((btGImpactShapeInterface*)this);
			_obj.pushArg(&center);
			_obj.pushArg(radius);
			return (_obj.callFunction<void>());
		}

		return btGImpactShapeInterface::getBoundingSphere(center, radius);
	};

	// float btCollisionShape::getAngularMotionDisc() const
	float getAngularMotionDisc() const {
		if(_obj.pushFunction("getAngularMotionDisc")) {
			_obj.pushArg((btGImpactShapeInterface*)this);
			return (_obj.callFunction<float>());
		}

		return btGImpactShapeInterface::getAngularMotionDisc();
	};

	// float btCollisionShape::getContactBreakingThreshold(float defaultContactThresholdFactor) const
	float getContactBreakingThreshold(float defaultContactThresholdFactor) const {
		if(_obj.pushFunction("getContactBreakingThreshold")) {
			_obj.pushArg((btGImpactShapeInterface*)this);
			_obj.pushArg(defaultContactThresholdFactor);
			return (_obj.callFunction<float>());
		}

		return btGImpactShapeInterface::getContactBreakingThreshold(defaultContactThresholdFactor);
	};

	// void btCollisionShape::calculateLocalInertia(float mass, btVector3 & inertia) const
	void calculateLocalInertia(float mass, btVector3 & inertia) const {
		THROW_IF(!_obj.pushFunction("calculateLocalInertia"),"No implementation for abstract function btCollisionShape::calculateLocalInertia");
		_obj.pushArg((btGImpactShapeInterface*)this);
		_obj.pushArg(mass);
		_obj.pushArg(&inertia);
		return (_obj.callFunction<void>());
	};

	// const char * btCollisionShape::getName() const
	const char * getName() const {
		THROW_IF(!_obj.pushFunction("getName"),"No implementation for abstract function btCollisionShape::getName");
		_obj.pushArg((btGImpactShapeInterface*)this);
		return (_obj.callFunction<const char*>());
	};

	// btVector3 btCollisionShape::getAnisotropicRollingFrictionDirection() const
	btVector3 getAnisotropicRollingFrictionDirection() const {
		if(_obj.pushFunction("getAnisotropicRollingFrictionDirection")) {
			_obj.pushArg((btGImpactShapeInterface*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btGImpactShapeInterface::getAnisotropicRollingFrictionDirection();
	};

	// int btCollisionShape::calculateSerializeBufferSize() const
	int calculateSerializeBufferSize() const {
		if(_obj.pushFunction("calculateSerializeBufferSize")) {
			_obj.pushArg((btGImpactShapeInterface*)this);
			return (_obj.callFunction<int>());
		}

		return btGImpactShapeInterface::calculateSerializeBufferSize();
	};

	// float btConcaveShape::getMargin() const
	float getMargin() const {
		if(_obj.pushFunction("getMargin")) {
			_obj.pushArg((btGImpactShapeInterface*)this);
			return (_obj.callFunction<float>());
		}

		return btGImpactShapeInterface::getMargin();
	};

	// eGIMPACT_SHAPE_TYPE btGImpactShapeInterface::getGImpactShapeType() const
	eGIMPACT_SHAPE_TYPE getGImpactShapeType() const {
		THROW_IF(!_obj.pushFunction("getGImpactShapeType"),"No implementation for abstract function btGImpactShapeInterface::getGImpactShapeType");
		_obj.pushArg((btGImpactShapeInterface*)this);
		return (eGIMPACT_SHAPE_TYPE)(_obj.callFunction<int>());
	};

	// const btPrimitiveManagerBase * btGImpactShapeInterface::getPrimitiveManager() const
	const btPrimitiveManagerBase * getPrimitiveManager() const {
		THROW_IF(!_obj.pushFunction("getPrimitiveManager"),"No implementation for abstract function btGImpactShapeInterface::getPrimitiveManager");
		_obj.pushArg((btGImpactShapeInterface*)this);
		return (_obj.callFunction<btPrimitiveManagerBase*>());
	};

	// int btGImpactShapeInterface::getNumChildShapes() const
	int getNumChildShapes() const {
		THROW_IF(!_obj.pushFunction("getNumChildShapes"),"No implementation for abstract function btGImpactShapeInterface::getNumChildShapes");
		_obj.pushArg((btGImpactShapeInterface*)this);
		return (_obj.callFunction<int>());
	};

	// bool btGImpactShapeInterface::childrenHasTransform() const
	bool childrenHasTransform() const {
		THROW_IF(!_obj.pushFunction("childrenHasTransform"),"No implementation for abstract function btGImpactShapeInterface::childrenHasTransform");
		_obj.pushArg((btGImpactShapeInterface*)this);
		return (_obj.callFunction<bool>());
	};

	// bool btGImpactShapeInterface::needsRetrieveTriangles() const
	bool needsRetrieveTriangles() const {
		THROW_IF(!_obj.pushFunction("needsRetrieveTriangles"),"No implementation for abstract function btGImpactShapeInterface::needsRetrieveTriangles");
		_obj.pushArg((btGImpactShapeInterface*)this);
		return (_obj.callFunction<bool>());
	};

	// bool btGImpactShapeInterface::needsRetrieveTetrahedrons() const
	bool needsRetrieveTetrahedrons() const {
		THROW_IF(!_obj.pushFunction("needsRetrieveTetrahedrons"),"No implementation for abstract function btGImpactShapeInterface::needsRetrieveTetrahedrons");
		_obj.pushArg((btGImpactShapeInterface*)this);
		return (_obj.callFunction<bool>());
	};

	// void btGImpactShapeInterface::getBulletTriangle(int prim_index, btTriangleShapeEx & triangle) const
	void getBulletTriangle(int prim_index, btTriangleShapeEx & triangle) const {
		THROW_IF(!_obj.pushFunction("getBulletTriangle"),"No implementation for abstract function btGImpactShapeInterface::getBulletTriangle");
		_obj.pushArg((btGImpactShapeInterface*)this);
		_obj.pushArg(prim_index);
		_obj.pushArg(&triangle);
		return (_obj.callFunction<void>());
	};

	// void btGImpactShapeInterface::getBulletTetrahedron(int prim_index, btTetrahedronShapeEx & tetrahedron) const
	void getBulletTetrahedron(int prim_index, btTetrahedronShapeEx & tetrahedron) const {
		THROW_IF(!_obj.pushFunction("getBulletTetrahedron"),"No implementation for abstract function btGImpactShapeInterface::getBulletTetrahedron");
		_obj.pushArg((btGImpactShapeInterface*)this);
		_obj.pushArg(prim_index);
		_obj.pushArg(&tetrahedron);
		return (_obj.callFunction<void>());
	};

	// void btGImpactShapeInterface::lockChildShapes() const
	void lockChildShapes() const {
		if(_obj.pushFunction("lockChildShapes")) {
			_obj.pushArg((btGImpactShapeInterface*)this);
			return (_obj.callFunction<void>());
		}

		return btGImpactShapeInterface::lockChildShapes();
	};

	// void btGImpactShapeInterface::unlockChildShapes() const
	void unlockChildShapes() const {
		if(_obj.pushFunction("unlockChildShapes")) {
			_obj.pushArg((btGImpactShapeInterface*)this);
			return (_obj.callFunction<void>());
		}

		return btGImpactShapeInterface::unlockChildShapes();
	};

	// void btGImpactShapeInterface::getChildAabb(int child_index, const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getChildAabb(int child_index, const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getChildAabb")) {
			_obj.pushArg((btGImpactShapeInterface*)this);
			_obj.pushArg(child_index);
			_obj.pushArg(&t);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btGImpactShapeInterface::getChildAabb(child_index, t, aabbMin, aabbMax);
	};

	// btCollisionShape * btGImpactShapeInterface::getChildShape(int index)
	btCollisionShape * getChildShape(int index) {
		THROW_IF(!_obj.pushFunction("getChildShape"),"No implementation for abstract function btGImpactShapeInterface::getChildShape");
		_obj.pushArg((btGImpactShapeInterface*)this);
		_obj.pushArg(index);
		return (_obj.callFunction<btCollisionShape*>());
	};

	// const btCollisionShape * btGImpactShapeInterface::getChildShape(int index) const
	const btCollisionShape * getChildShape(int index) const {
		THROW_IF(!_obj.pushFunction("getChildShape"),"No implementation for abstract function btGImpactShapeInterface::getChildShape");
		_obj.pushArg((btGImpactShapeInterface*)this);
		_obj.pushArg(index);
		return (_obj.callFunction<btCollisionShape*>());
	};

	// btTransform btGImpactShapeInterface::getChildTransform(int index) const
	btTransform getChildTransform(int index) const {
		THROW_IF(!_obj.pushFunction("getChildTransform"),"No implementation for abstract function btGImpactShapeInterface::getChildTransform");
		_obj.pushArg((btGImpactShapeInterface*)this);
		_obj.pushArg(index);
		return *(_obj.callFunction<btTransform*>());
	};

	// void btGImpactShapeInterface::setChildTransform(int index, const btTransform & transform)
	void setChildTransform(int index, const btTransform & transform) {
		THROW_IF(!_obj.pushFunction("setChildTransform"),"No implementation for abstract function btGImpactShapeInterface::setChildTransform");
		_obj.pushArg((btGImpactShapeInterface*)this);
		_obj.pushArg(index);
		_obj.pushArg(&transform);
		return (_obj.callFunction<void>());
	};

	// void btGImpactShapeInterface::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getAabb")) {
			_obj.pushArg((btGImpactShapeInterface*)this);
			_obj.pushArg(&t);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btGImpactShapeInterface::getAabb(t, aabbMin, aabbMax);
	};

	// void btGImpactShapeInterface::postUpdate()
	void postUpdate() {
		if(_obj.pushFunction("postUpdate")) {
			_obj.pushArg((btGImpactShapeInterface*)this);
			return (_obj.callFunction<void>());
		}

		return btGImpactShapeInterface::postUpdate();
	};

	// int btGImpactShapeInterface::getShapeType() const
	int getShapeType() const {
		if(_obj.pushFunction("getShapeType")) {
			_obj.pushArg((btGImpactShapeInterface*)this);
			return (_obj.callFunction<int>());
		}

		return btGImpactShapeInterface::getShapeType();
	};

	// void btGImpactShapeInterface::setLocalScaling(const btVector3 & scaling)
	void setLocalScaling(const btVector3 & scaling) {
		if(_obj.pushFunction("setLocalScaling")) {
			_obj.pushArg((btGImpactShapeInterface*)this);
			_obj.pushArg(&scaling);
			return (_obj.callFunction<void>());
		}

		return btGImpactShapeInterface::setLocalScaling(scaling);
	};

	// const btVector3 & btGImpactShapeInterface::getLocalScaling() const
	const btVector3 & getLocalScaling() const {
		if(_obj.pushFunction("getLocalScaling")) {
			_obj.pushArg((btGImpactShapeInterface*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btGImpactShapeInterface::getLocalScaling();
	};

	// void btGImpactShapeInterface::setMargin(float margin)
	void setMargin(float margin) {
		if(_obj.pushFunction("setMargin")) {
			_obj.pushArg((btGImpactShapeInterface*)this);
			_obj.pushArg(margin);
			return (_obj.callFunction<void>());
		}

		return btGImpactShapeInterface::setMargin(margin);
	};

	// void btGImpactShapeInterface::rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btCollisionWorld::RayResultCallback & resultCallback) const
	void rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btCollisionWorld::RayResultCallback & resultCallback) const {
		if(_obj.pushFunction("rayTest")) {
			_obj.pushArg((btGImpactShapeInterface*)this);
			_obj.pushArg(&rayFrom);
			_obj.pushArg(&rayTo);
			_obj.pushArg(&resultCallback);
			return (_obj.callFunction<void>());
		}

		return btGImpactShapeInterface::rayTest(rayFrom, rayTo, resultCallback);
	};

	// void btGImpactShapeInterface::processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const
	void processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const {
		if(_obj.pushFunction("processAllTriangles")) {
			_obj.pushArg((btGImpactShapeInterface*)this);
			_obj.pushArg(callback);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btGImpactShapeInterface::processAllTriangles(callback, aabbMin, aabbMax);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

