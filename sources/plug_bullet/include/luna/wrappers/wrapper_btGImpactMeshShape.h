#ifndef _WRAPPERS_WRAPPER_BTGIMPACTMESHSHAPE_H_
#define _WRAPPERS_WRAPPER_BTGIMPACTMESHSHAPE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/Gimpact/btGImpactShape.h>

class wrapper_btGImpactMeshShape : public btGImpactMeshShape, public luna_wrapper_base {

public:
		

	~wrapper_btGImpactMeshShape() {
		logDEBUG3("Calling delete function for wrapper btGImpactMeshShape");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btGImpactMeshShape*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btGImpactMeshShape(lua_State* L, lua_Table* dum, btStridingMeshInterface * meshInterface) 
		: btGImpactMeshShape(meshInterface), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btGImpactMeshShape*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void btGImpactMeshShape::calcLocalAABB()
	void calcLocalAABB() {
		if(_obj.pushFunction("calcLocalAABB")) {
			_obj.pushArg((btGImpactMeshShape*)this);
			return (_obj.callFunction<void>());
		}

		return btGImpactMeshShape::calcLocalAABB();
	};

public:
	// Public virtual methods:
	// void btCollisionShape::getBoundingSphere(btVector3 & center, float & radius) const
	void getBoundingSphere(btVector3 & center, float & radius) const {
		if(_obj.pushFunction("getBoundingSphere")) {
			_obj.pushArg((btGImpactMeshShape*)this);
			_obj.pushArg(&center);
			_obj.pushArg(radius);
			return (_obj.callFunction<void>());
		}

		return btGImpactMeshShape::getBoundingSphere(center, radius);
	};

	// float btCollisionShape::getAngularMotionDisc() const
	float getAngularMotionDisc() const {
		if(_obj.pushFunction("getAngularMotionDisc")) {
			_obj.pushArg((btGImpactMeshShape*)this);
			return (_obj.callFunction<float>());
		}

		return btGImpactMeshShape::getAngularMotionDisc();
	};

	// float btCollisionShape::getContactBreakingThreshold(float defaultContactThresholdFactor) const
	float getContactBreakingThreshold(float defaultContactThresholdFactor) const {
		if(_obj.pushFunction("getContactBreakingThreshold")) {
			_obj.pushArg((btGImpactMeshShape*)this);
			_obj.pushArg(defaultContactThresholdFactor);
			return (_obj.callFunction<float>());
		}

		return btGImpactMeshShape::getContactBreakingThreshold(defaultContactThresholdFactor);
	};

	// btVector3 btCollisionShape::getAnisotropicRollingFrictionDirection() const
	btVector3 getAnisotropicRollingFrictionDirection() const {
		if(_obj.pushFunction("getAnisotropicRollingFrictionDirection")) {
			_obj.pushArg((btGImpactMeshShape*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btGImpactMeshShape::getAnisotropicRollingFrictionDirection();
	};

	// float btConcaveShape::getMargin() const
	float getMargin() const {
		if(_obj.pushFunction("getMargin")) {
			_obj.pushArg((btGImpactMeshShape*)this);
			return (_obj.callFunction<float>());
		}

		return btGImpactMeshShape::getMargin();
	};

	// void btGImpactShapeInterface::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getAabb")) {
			_obj.pushArg((btGImpactMeshShape*)this);
			_obj.pushArg(&t);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btGImpactMeshShape::getAabb(t, aabbMin, aabbMax);
	};

	// int btGImpactShapeInterface::getShapeType() const
	int getShapeType() const {
		if(_obj.pushFunction("getShapeType")) {
			_obj.pushArg((btGImpactMeshShape*)this);
			return (_obj.callFunction<int>());
		}

		return btGImpactMeshShape::getShapeType();
	};

	// const btVector3 & btGImpactShapeInterface::getLocalScaling() const
	const btVector3 & getLocalScaling() const {
		if(_obj.pushFunction("getLocalScaling")) {
			_obj.pushArg((btGImpactMeshShape*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btGImpactMeshShape::getLocalScaling();
	};

	// void btGImpactMeshShape::setLocalScaling(const btVector3 & scaling)
	void setLocalScaling(const btVector3 & scaling) {
		if(_obj.pushFunction("setLocalScaling")) {
			_obj.pushArg((btGImpactMeshShape*)this);
			_obj.pushArg(&scaling);
			return (_obj.callFunction<void>());
		}

		return btGImpactMeshShape::setLocalScaling(scaling);
	};

	// void btGImpactMeshShape::setMargin(float margin)
	void setMargin(float margin) {
		if(_obj.pushFunction("setMargin")) {
			_obj.pushArg((btGImpactMeshShape*)this);
			_obj.pushArg(margin);
			return (_obj.callFunction<void>());
		}

		return btGImpactMeshShape::setMargin(margin);
	};

	// void btGImpactMeshShape::postUpdate()
	void postUpdate() {
		if(_obj.pushFunction("postUpdate")) {
			_obj.pushArg((btGImpactMeshShape*)this);
			return (_obj.callFunction<void>());
		}

		return btGImpactMeshShape::postUpdate();
	};

	// void btGImpactMeshShape::calculateLocalInertia(float mass, btVector3 & inertia) const
	void calculateLocalInertia(float mass, btVector3 & inertia) const {
		if(_obj.pushFunction("calculateLocalInertia")) {
			_obj.pushArg((btGImpactMeshShape*)this);
			_obj.pushArg(mass);
			_obj.pushArg(&inertia);
			return (_obj.callFunction<void>());
		}

		return btGImpactMeshShape::calculateLocalInertia(mass, inertia);
	};

	// const btPrimitiveManagerBase * btGImpactMeshShape::getPrimitiveManager() const
	const btPrimitiveManagerBase * getPrimitiveManager() const {
		if(_obj.pushFunction("getPrimitiveManager")) {
			_obj.pushArg((btGImpactMeshShape*)this);
			return (_obj.callFunction<btPrimitiveManagerBase*>());
		}

		return btGImpactMeshShape::getPrimitiveManager();
	};

	// int btGImpactMeshShape::getNumChildShapes() const
	int getNumChildShapes() const {
		if(_obj.pushFunction("getNumChildShapes")) {
			_obj.pushArg((btGImpactMeshShape*)this);
			return (_obj.callFunction<int>());
		}

		return btGImpactMeshShape::getNumChildShapes();
	};

	// bool btGImpactMeshShape::childrenHasTransform() const
	bool childrenHasTransform() const {
		if(_obj.pushFunction("childrenHasTransform")) {
			_obj.pushArg((btGImpactMeshShape*)this);
			return (_obj.callFunction<bool>());
		}

		return btGImpactMeshShape::childrenHasTransform();
	};

	// bool btGImpactMeshShape::needsRetrieveTriangles() const
	bool needsRetrieveTriangles() const {
		if(_obj.pushFunction("needsRetrieveTriangles")) {
			_obj.pushArg((btGImpactMeshShape*)this);
			return (_obj.callFunction<bool>());
		}

		return btGImpactMeshShape::needsRetrieveTriangles();
	};

	// bool btGImpactMeshShape::needsRetrieveTetrahedrons() const
	bool needsRetrieveTetrahedrons() const {
		if(_obj.pushFunction("needsRetrieveTetrahedrons")) {
			_obj.pushArg((btGImpactMeshShape*)this);
			return (_obj.callFunction<bool>());
		}

		return btGImpactMeshShape::needsRetrieveTetrahedrons();
	};

	// void btGImpactMeshShape::getBulletTriangle(int prim_index, btTriangleShapeEx & triangle) const
	void getBulletTriangle(int prim_index, btTriangleShapeEx & triangle) const {
		if(_obj.pushFunction("getBulletTriangle")) {
			_obj.pushArg((btGImpactMeshShape*)this);
			_obj.pushArg(prim_index);
			_obj.pushArg(&triangle);
			return (_obj.callFunction<void>());
		}

		return btGImpactMeshShape::getBulletTriangle(prim_index, triangle);
	};

	// void btGImpactMeshShape::getBulletTetrahedron(int prim_index, btTetrahedronShapeEx & tetrahedron) const
	void getBulletTetrahedron(int prim_index, btTetrahedronShapeEx & tetrahedron) const {
		if(_obj.pushFunction("getBulletTetrahedron")) {
			_obj.pushArg((btGImpactMeshShape*)this);
			_obj.pushArg(prim_index);
			_obj.pushArg(&tetrahedron);
			return (_obj.callFunction<void>());
		}

		return btGImpactMeshShape::getBulletTetrahedron(prim_index, tetrahedron);
	};

	// void btGImpactMeshShape::lockChildShapes() const
	void lockChildShapes() const {
		if(_obj.pushFunction("lockChildShapes")) {
			_obj.pushArg((btGImpactMeshShape*)this);
			return (_obj.callFunction<void>());
		}

		return btGImpactMeshShape::lockChildShapes();
	};

	// void btGImpactMeshShape::unlockChildShapes() const
	void unlockChildShapes() const {
		if(_obj.pushFunction("unlockChildShapes")) {
			_obj.pushArg((btGImpactMeshShape*)this);
			return (_obj.callFunction<void>());
		}

		return btGImpactMeshShape::unlockChildShapes();
	};

	// void btGImpactMeshShape::getChildAabb(int child_index, const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getChildAabb(int child_index, const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getChildAabb")) {
			_obj.pushArg((btGImpactMeshShape*)this);
			_obj.pushArg(child_index);
			_obj.pushArg(&t);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btGImpactMeshShape::getChildAabb(child_index, t, aabbMin, aabbMax);
	};

	// btCollisionShape * btGImpactMeshShape::getChildShape(int index)
	btCollisionShape * getChildShape(int index) {
		if(_obj.pushFunction("getChildShape")) {
			_obj.pushArg((btGImpactMeshShape*)this);
			_obj.pushArg(index);
			return (_obj.callFunction<btCollisionShape*>());
		}

		return btGImpactMeshShape::getChildShape(index);
	};

	// const btCollisionShape * btGImpactMeshShape::getChildShape(int index) const
	const btCollisionShape * getChildShape(int index) const {
		if(_obj.pushFunction("getChildShape")) {
			_obj.pushArg((btGImpactMeshShape*)this);
			_obj.pushArg(index);
			return (_obj.callFunction<btCollisionShape*>());
		}

		return btGImpactMeshShape::getChildShape(index);
	};

	// btTransform btGImpactMeshShape::getChildTransform(int index) const
	btTransform getChildTransform(int index) const {
		if(_obj.pushFunction("getChildTransform")) {
			_obj.pushArg((btGImpactMeshShape*)this);
			_obj.pushArg(index);
			return *(_obj.callFunction<btTransform*>());
		}

		return btGImpactMeshShape::getChildTransform(index);
	};

	// void btGImpactMeshShape::setChildTransform(int index, const btTransform & transform)
	void setChildTransform(int index, const btTransform & transform) {
		if(_obj.pushFunction("setChildTransform")) {
			_obj.pushArg((btGImpactMeshShape*)this);
			_obj.pushArg(index);
			_obj.pushArg(&transform);
			return (_obj.callFunction<void>());
		}

		return btGImpactMeshShape::setChildTransform(index, transform);
	};

	// eGIMPACT_SHAPE_TYPE btGImpactMeshShape::getGImpactShapeType() const
	eGIMPACT_SHAPE_TYPE getGImpactShapeType() const {
		if(_obj.pushFunction("getGImpactShapeType")) {
			_obj.pushArg((btGImpactMeshShape*)this);
			return (eGIMPACT_SHAPE_TYPE)(_obj.callFunction<int>());
		}

		return btGImpactMeshShape::getGImpactShapeType();
	};

	// const char * btGImpactMeshShape::getName() const
	const char * getName() const {
		if(_obj.pushFunction("getName")) {
			_obj.pushArg((btGImpactMeshShape*)this);
			return (_obj.callFunction<const char*>());
		}

		return btGImpactMeshShape::getName();
	};

	// void btGImpactMeshShape::rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btCollisionWorld::RayResultCallback & resultCallback) const
	void rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btCollisionWorld::RayResultCallback & resultCallback) const {
		if(_obj.pushFunction("rayTest")) {
			_obj.pushArg((btGImpactMeshShape*)this);
			_obj.pushArg(&rayFrom);
			_obj.pushArg(&rayTo);
			_obj.pushArg(&resultCallback);
			return (_obj.callFunction<void>());
		}

		return btGImpactMeshShape::rayTest(rayFrom, rayTo, resultCallback);
	};

	// void btGImpactMeshShape::processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const
	void processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const {
		if(_obj.pushFunction("processAllTriangles")) {
			_obj.pushArg((btGImpactMeshShape*)this);
			_obj.pushArg(callback);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btGImpactMeshShape::processAllTriangles(callback, aabbMin, aabbMax);
	};

	// int btGImpactMeshShape::calculateSerializeBufferSize() const
	int calculateSerializeBufferSize() const {
		if(_obj.pushFunction("calculateSerializeBufferSize")) {
			_obj.pushArg((btGImpactMeshShape*)this);
			return (_obj.callFunction<int>());
		}

		return btGImpactMeshShape::calculateSerializeBufferSize();
	};


	// Protected non-virtual methods:
	// void btGImpactMeshShape::buildMeshParts(btStridingMeshInterface * meshInterface)
	void public_buildMeshParts(btStridingMeshInterface * meshInterface) {
		return btGImpactMeshShape::buildMeshParts(meshInterface);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_buildMeshParts(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56402633)) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void btGImpactMeshShape::public_buildMeshParts(btStridingMeshInterface * meshInterface)
	static int _bind_public_buildMeshParts(lua_State *L) {
		if (!_lg_typecheck_public_buildMeshParts(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShape::public_buildMeshParts(btStridingMeshInterface * meshInterface) function, expected prototype:\nvoid btGImpactMeshShape::public_buildMeshParts(btStridingMeshInterface * meshInterface)\nClass arguments details:\narg 1 ID = 56402633\n\n%s",luna_dumpStack(L).c_str());
		}

		btStridingMeshInterface* meshInterface=(Luna< btStridingMeshInterface >::check(L,2));

		wrapper_btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< wrapper_btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShape::public_buildMeshParts(btStridingMeshInterface *). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_buildMeshParts(meshInterface);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"buildMeshParts",_bind_public_buildMeshParts},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

