#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>

#include <BulletCollision/BroadphaseCollision/btBroadphaseInterface.h>
#include <BulletCollision/BroadphaseCollision/btAxisSweep3.h>
#include <BulletCollision/Gimpact/btBoxCollision.h>
#include <BulletCollision/Gimpact/btGImpactQuantizedBvh.h>
#include <BulletDynamics/Dynamics/btActionInterface.h>
#include <BulletCollision/BroadphaseCollision/btCollisionAlgorithm.h>
#include <BulletCollision/CollisionDispatch/btActivatingCollisionAlgorithm.h>
#include <LinearMath/btGrahamScan2dConvexHull.h>
#include <BulletDynamics/ConstraintSolver/btTypedConstraint.h>
#include <BulletCollision/BroadphaseCollision/btBroadphaseProxy.h>
#include <LinearMath/btStackAlloc.h>
#include <BulletCollision/CollisionDispatch/btBox2dBox2dCollisionAlgorithm.h>
#include <BulletCollision/CollisionDispatch/btCollisionCreateFunc.h>
#include <BulletCollision/CollisionShapes/btCollisionShape.h>
#include <BulletCollision/CollisionShapes/btConvexShape.h>
#include <BulletCollision/CollisionShapes/btConvexInternalShape.h>
#include <BulletCollision/CollisionShapes/btPolyhedralConvexShape.h>
#include <BulletCollision/CollisionShapes/btBox2dShape.h>
#include <BulletCollision/CollisionDispatch/btBoxBoxCollisionAlgorithm.h>
#include <BulletCollision/NarrowPhaseCollision/btDiscreteCollisionDetectorInterface.h>
#include <BulletCollision/CollisionDispatch/btBoxBoxDetector.h>
#include <BulletCollision/CollisionShapes/btBoxShape.h>
#include <BulletCollision/CollisionShapes/btTetrahedronShape.h>
#include <BulletCollision/BroadphaseCollision/btQuantizedBvh.h>
#include <BulletCollision/Gimpact/btGImpactBvh.h>
#include <BulletCollision/CollisionShapes/btConcaveShape.h>
#include <BulletCollision/CollisionShapes/btTriangleMeshShape.h>
#include <BulletCollision/CollisionShapes/btBvhTriangleMeshShape.h>
#include <BulletCollision/CollisionShapes/btCapsuleShape.h>
#include <BulletDynamics/Character/btCharacterControllerInterface.h>
#include <BulletCollision/CollisionShapes/btStridingMeshInterface.h>
#include <LinearMath/btSerializer.h>
#include <LinearMath/btQuickprof.h>
#include <BulletCollision/CollisionDispatch/btCollisionConfiguration.h>
#include <BulletCollision/BroadphaseCollision/btDispatcher.h>
#include <BulletCollision/CollisionDispatch/btCollisionDispatcher.h>
#include <BulletCollision/CollisionDispatch/btCollisionObject.h>
#include <BulletCollision/CollisionDispatch/btCollisionObjectWrapper.h>
#include <BulletCollision/CollisionDispatch/btCollisionWorld.h>
#include <BulletCollision/CollisionDispatch/btCompoundCollisionAlgorithm.h>
#include <BulletCollision/CollisionShapes/btCompoundShape.h>
#include <BulletCollision/CollisionShapes/btConeShape.h>
#include <LinearMath/btScalar.h>
#include <BulletDynamics/ConstraintSolver/btConeTwistConstraint.h>
#include <BulletCollision/NarrowPhaseCollision/btManifoldPoint.h>
#include <BulletDynamics/ConstraintSolver/btPoint2PointConstraint.h>
#include <BulletDynamics/ConstraintSolver/btConstraintSolver.h>
#include <BulletDynamics/ConstraintSolver/btContactConstraint.h>
#include <BulletDynamics/ConstraintSolver/btContactSolverInfo.h>
#include <BulletCollision/NarrowPhaseCollision/btConvexCast.h>
#include <BulletCollision/NarrowPhaseCollision/btContinuousConvexCollision.h>
#include <BulletCollision/CollisionDispatch/btConvex2dConvex2dAlgorithm.h>
#include <BulletCollision/CollisionShapes/btConvex2dShape.h>
#include <BulletCollision/CollisionDispatch/btConvexConcaveCollisionAlgorithm.h>
#include <BulletCollision/CollisionDispatch/btConvexConvexAlgorithm.h>
#include <LinearMath/btConvexHullComputer.h>
#include <BulletCollision/CollisionShapes/btConvexHullShape.h>
#include <BulletCollision/NarrowPhaseCollision/btConvexPenetrationDepthSolver.h>
#include <BulletCollision/CollisionDispatch/btConvexPlaneCollisionAlgorithm.h>
#include <BulletCollision/CollisionShapes/btConvexPointCloudShape.h>
#include <BulletCollision/CollisionShapes/btConvexPolyhedron.h>
#include <LinearMath/btTransformUtil.h>
#include <BulletCollision/CollisionShapes/btTriangleCallback.h>
#include <BulletCollision/CollisionShapes/btConvexTriangleMeshShape.h>
#include <BulletCollision/CollisionShapes/btCylinderShape.h>
#include <BulletCollision/BroadphaseCollision/btDbvt.h>
#include <BulletCollision/BroadphaseCollision/btDbvtBroadphase.h>
#include <BulletCollision/CollisionDispatch/btDefaultCollisionConfiguration.h>
#include <LinearMath/btMotionState.h>
#include <LinearMath/btDefaultMotionState.h>
#include <BulletDynamics/Vehicle/btVehicleRaycaster.h>
#include <BulletDynamics/Vehicle/btRaycastVehicle.h>
#include <BulletDynamics/Dynamics/btDynamicsWorld.h>
#include <BulletDynamics/Dynamics/btDiscreteDynamicsWorld.h>
#include <BulletCollision/CollisionDispatch/btUnionFind.h>
#include <BulletCollision/CollisionDispatch/btEmptyCollisionAlgorithm.h>
#include <BulletCollision/CollisionShapes/btEmptyShape.h>
#include <BulletDynamics/ConstraintSolver/btGearConstraint.h>
#include <LinearMath/btList.h>
#include <BulletDynamics/ConstraintSolver/btGeneric6DofConstraint.h>
#include <BulletDynamics/ConstraintSolver/btGeneric6DofSpringConstraint.h>
#include <BulletCollision/Gimpact/btGenericPoolAllocator.h>
#include <LinearMath/btGeometryUtil.h>
#include <BulletCollision/CollisionDispatch/btGhostObject.h>
#include <BulletCollision/BroadphaseCollision/btOverlappingPairCallback.h>
#include <BulletCollision/Gimpact/btGImpactCollisionAlgorithm.h>
#include <BulletCollision/Gimpact/btGImpactShape.h>
#include <BulletCollision/NarrowPhaseCollision/btGjkConvexCast.h>
#include <BulletCollision/NarrowPhaseCollision/btGjkEpaPenetrationDepthSolver.h>
#include <BulletCollision/NarrowPhaseCollision/btGjkEpa2.h>
#include <BulletCollision/NarrowPhaseCollision/btGjkPairDetector.h>
#include <BulletCollision/BroadphaseCollision/btOverlappingPairCache.h>
#include <LinearMath/btHashMap.h>
#include <BulletCollision/CollisionShapes/btHeightfieldTerrainShape.h>
#include <BulletDynamics/ConstraintSolver/btHinge2Constraint.h>
#include <BulletDynamics/ConstraintSolver/btHingeConstraint.h>
#include <LinearMath/btIDebugDraw.h>
#include <BulletCollision/CollisionShapes/btTriangleIndexVertexArray.h>
#include <BulletDynamics/ConstraintSolver/btJacobianEntry.h>
#include <BulletDynamics/Character/btKinematicCharacterController.h>
#include <BulletCollision/CollisionDispatch/btManifoldResult.h>
#include <BulletCollision/CollisionShapes/btMaterial.h>
#include <BulletCollision/CollisionShapes/btTriangleIndexVertexMaterialArray.h>
#include <LinearMath/btMatrix3x3.h>
#include <BulletCollision/NarrowPhaseCollision/btMinkowskiPenetrationDepthSolver.h>
#include <BulletCollision/CollisionShapes/btMinkowskiSumShape.h>
#include <BulletCollision/CollisionShapes/btMultimaterialTriangleMeshShape.h>
#include <BulletCollision/BroadphaseCollision/btMultiSapBroadphase.h>
#include <BulletCollision/CollisionShapes/btMultiSphereShape.h>
#include <BulletCollision/CollisionShapes/btOptimizedBvh.h>
#include <BulletCollision/NarrowPhaseCollision/btPersistentManifold.h>
#include <LinearMath/btConvexHull.h>
#include <BulletCollision/NarrowPhaseCollision/btPointCollector.h>
#include <LinearMath/btPolarDecomposition.h>
#include <BulletCollision/NarrowPhaseCollision/btPolyhedralContactClipping.h>
#include <LinearMath/btPoolAllocator.h>
#include <BulletCollision/Gimpact/btTriangleShapeEx.h>
#include <LinearMath/btQuadWord.h>
#include <LinearMath/btQuaternion.h>
#include <BulletDynamics/Dynamics/btRigidBody.h>
#include <BulletCollision/CollisionShapes/btScaledBvhTriangleMeshShape.h>
#include <BulletDynamics/ConstraintSolver/btSequentialImpulseConstraintSolver.h>
#include <BulletCollision/CollisionShapes/btShapeHull.h>
#include <BulletCollision/BroadphaseCollision/btSimpleBroadphase.h>
#include <BulletDynamics/Dynamics/btSimpleDynamicsWorld.h>
#include <BulletCollision/CollisionDispatch/btSimulationIslandManager.h>
#include <BulletDynamics/ConstraintSolver/btSliderConstraint.h>
#include <BulletDynamics/ConstraintSolver/btSolve2LinearConstraint.h>
#include <BulletDynamics/ConstraintSolver/btSolverBody.h>
#include <BulletDynamics/ConstraintSolver/btSolverConstraint.h>
#include <BulletCollision/CollisionDispatch/btSphereBoxCollisionAlgorithm.h>
#include <BulletCollision/CollisionShapes/btSphereShape.h>
#include <BulletCollision/CollisionDispatch/btSphereSphereCollisionAlgorithm.h>
#include <BulletCollision/CollisionDispatch/btSphereTriangleCollisionAlgorithm.h>
#include <BulletCollision/CollisionShapes/btStaticPlaneShape.h>
#include <BulletCollision/NarrowPhaseCollision/btVoronoiSimplexSolver.h>
#include <BulletCollision/NarrowPhaseCollision/btSubSimplexConvexCast.h>
#include <LinearMath/btTransform.h>
#include <BulletCollision/CollisionShapes/btTriangleBuffer.h>
#include <BulletCollision/NarrowPhaseCollision/btRaycastCallback.h>
#include <BulletCollision/CollisionShapes/btTriangleInfoMap.h>
#include <BulletCollision/CollisionShapes/btTriangleMesh.h>
#include <BulletCollision/CollisionShapes/btTriangleShape.h>
#include <BulletCollision/CollisionShapes/btUniformScalingShape.h>
#include <BulletDynamics/ConstraintSolver/btUniversalConstraint.h>
#include <LinearMath/btVector3.h>
#include <BulletDynamics/Vehicle/btWheelInfo.h>
#include <BulletCollision/Gimpact/btContactProcessing.h>
#include <SampleRigidUpdater.h>
#include <BulletCollision/CollisionDispatch/SphereTriangleDetector.h>

// Class: btBroadphaseInterface
template<>
class LunaTraits< btBroadphaseInterface > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btBroadphaseInterface* _bind_ctor(lua_State *L);
	static void _bind_dtor(btBroadphaseInterface* obj);
	typedef btBroadphaseInterface parent_t;
	typedef btBroadphaseInterface base_t;
	static luna_ConverterType converters[];
};

// Class: bt32BitAxisSweep3
template<>
class LunaTraits< bt32BitAxisSweep3 > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static bt32BitAxisSweep3* _bind_ctor(lua_State *L);
	static void _bind_dtor(bt32BitAxisSweep3* obj);
	typedef btBroadphaseInterface parent_t;
	typedef bt32BitAxisSweep3 base_t;
	static luna_ConverterType converters[];
};

// Class: BT_BOX_BOX_TRANSFORM_CACHE
template<>
class LunaTraits< BT_BOX_BOX_TRANSFORM_CACHE > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static BT_BOX_BOX_TRANSFORM_CACHE* _bind_ctor(lua_State *L);
	static void _bind_dtor(BT_BOX_BOX_TRANSFORM_CACHE* obj);
	typedef BT_BOX_BOX_TRANSFORM_CACHE parent_t;
	typedef BT_BOX_BOX_TRANSFORM_CACHE base_t;
	static luna_ConverterType converters[];
};

// Class: BT_QUANTIZED_BVH_NODE
template<>
class LunaTraits< BT_QUANTIZED_BVH_NODE > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static BT_QUANTIZED_BVH_NODE* _bind_ctor(lua_State *L);
	static void _bind_dtor(BT_QUANTIZED_BVH_NODE* obj);
	typedef BT_QUANTIZED_BVH_NODE parent_t;
	typedef BT_QUANTIZED_BVH_NODE base_t;
	static luna_ConverterType converters[];
};

// Class: btAABB
template<>
class LunaTraits< btAABB > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btAABB* _bind_ctor(lua_State *L);
	static void _bind_dtor(btAABB* obj);
	typedef btAABB parent_t;
	typedef btAABB base_t;
	static luna_ConverterType converters[];
};

// Class: btActionInterface
template<>
class LunaTraits< btActionInterface > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btActionInterface* _bind_ctor(lua_State *L);
	static void _bind_dtor(btActionInterface* obj);
	typedef btActionInterface parent_t;
	typedef btActionInterface base_t;
	static luna_ConverterType converters[];
};

// Class: btCollisionAlgorithm
template<>
class LunaTraits< btCollisionAlgorithm > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btCollisionAlgorithm* _bind_ctor(lua_State *L);
	static void _bind_dtor(btCollisionAlgorithm* obj);
	typedef btCollisionAlgorithm parent_t;
	typedef btCollisionAlgorithm base_t;
	static luna_ConverterType converters[];
};

// Class: btActivatingCollisionAlgorithm
template<>
class LunaTraits< btActivatingCollisionAlgorithm > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btActivatingCollisionAlgorithm* _bind_ctor(lua_State *L);
	static void _bind_dtor(btActivatingCollisionAlgorithm* obj);
	typedef btCollisionAlgorithm parent_t;
	typedef btActivatingCollisionAlgorithm base_t;
	static luna_ConverterType converters[];
};

// Class: btAngleCompareFunc
template<>
class LunaTraits< btAngleCompareFunc > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btAngleCompareFunc* _bind_ctor(lua_State *L);
	static void _bind_dtor(btAngleCompareFunc* obj);
	typedef btAngleCompareFunc parent_t;
	typedef btAngleCompareFunc base_t;
	static luna_ConverterType converters[];
};

// Class: btAngularLimit
template<>
class LunaTraits< btAngularLimit > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btAngularLimit* _bind_ctor(lua_State *L);
	static void _bind_dtor(btAngularLimit* obj);
	typedef btAngularLimit parent_t;
	typedef btAngularLimit base_t;
	static luna_ConverterType converters[];
};

// Class: btAxisSweep3
template<>
class LunaTraits< btAxisSweep3 > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btAxisSweep3* _bind_ctor(lua_State *L);
	static void _bind_dtor(btAxisSweep3* obj);
	typedef btBroadphaseInterface parent_t;
	typedef btAxisSweep3 base_t;
	static luna_ConverterType converters[];
};

// Class: btBroadphaseProxy
template<>
class LunaTraits< btBroadphaseProxy > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btBroadphaseProxy* _bind_ctor(lua_State *L);
	static void _bind_dtor(btBroadphaseProxy* obj);
	typedef btBroadphaseProxy parent_t;
	typedef btBroadphaseProxy base_t;
	static luna_ConverterType converters[];
};

// Class: btBlock
template<>
class LunaTraits< btBlock > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btBlock* _bind_ctor(lua_State *L);
	static void _bind_dtor(btBlock* obj);
	typedef btBlock parent_t;
	typedef btBlock base_t;
	static luna_ConverterType converters[];
};

// Class: btBox2dBox2dCollisionAlgorithm
template<>
class LunaTraits< btBox2dBox2dCollisionAlgorithm > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btBox2dBox2dCollisionAlgorithm* _bind_ctor(lua_State *L);
	static void _bind_dtor(btBox2dBox2dCollisionAlgorithm* obj);
	typedef btCollisionAlgorithm parent_t;
	typedef btBox2dBox2dCollisionAlgorithm base_t;
	static luna_ConverterType converters[];
};

// Class: btCollisionAlgorithmCreateFunc
template<>
class LunaTraits< btCollisionAlgorithmCreateFunc > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btCollisionAlgorithmCreateFunc* _bind_ctor(lua_State *L);
	static void _bind_dtor(btCollisionAlgorithmCreateFunc* obj);
	typedef btCollisionAlgorithmCreateFunc parent_t;
	typedef btCollisionAlgorithmCreateFunc base_t;
	static luna_ConverterType converters[];
};

// Class: btBox2dBox2dCollisionAlgorithm::CreateFunc
template<>
class LunaTraits< btBox2dBox2dCollisionAlgorithm::CreateFunc > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btBox2dBox2dCollisionAlgorithm::CreateFunc* _bind_ctor(lua_State *L);
	static void _bind_dtor(btBox2dBox2dCollisionAlgorithm::CreateFunc* obj);
	typedef btCollisionAlgorithmCreateFunc parent_t;
	typedef btBox2dBox2dCollisionAlgorithm::CreateFunc base_t;
	static luna_ConverterType converters[];
};

// Class: btCollisionShape
template<>
class LunaTraits< btCollisionShape > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btCollisionShape* _bind_ctor(lua_State *L);
	static void _bind_dtor(btCollisionShape* obj);
	typedef btCollisionShape parent_t;
	typedef btCollisionShape base_t;
	static luna_ConverterType converters[];
};

// Class: btConvexShape
template<>
class LunaTraits< btConvexShape > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btConvexShape* _bind_ctor(lua_State *L);
	static void _bind_dtor(btConvexShape* obj);
	typedef btCollisionShape parent_t;
	typedef btConvexShape base_t;
	static luna_ConverterType converters[];
};

// Class: btConvexInternalShape
template<>
class LunaTraits< btConvexInternalShape > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btConvexInternalShape* _bind_ctor(lua_State *L);
	static void _bind_dtor(btConvexInternalShape* obj);
	typedef btCollisionShape parent_t;
	typedef btConvexInternalShape base_t;
	static luna_ConverterType converters[];
};

// Class: btPolyhedralConvexShape
template<>
class LunaTraits< btPolyhedralConvexShape > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btPolyhedralConvexShape* _bind_ctor(lua_State *L);
	static void _bind_dtor(btPolyhedralConvexShape* obj);
	typedef btCollisionShape parent_t;
	typedef btPolyhedralConvexShape base_t;
	static luna_ConverterType converters[];
};

// Class: btBox2dShape
template<>
class LunaTraits< btBox2dShape > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btBox2dShape* _bind_ctor(lua_State *L);
	static void _bind_dtor(btBox2dShape* obj);
	typedef btCollisionShape parent_t;
	typedef btBox2dShape base_t;
	static luna_ConverterType converters[];
};

// Class: btBoxBoxCollisionAlgorithm
template<>
class LunaTraits< btBoxBoxCollisionAlgorithm > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btBoxBoxCollisionAlgorithm* _bind_ctor(lua_State *L);
	static void _bind_dtor(btBoxBoxCollisionAlgorithm* obj);
	typedef btCollisionAlgorithm parent_t;
	typedef btBoxBoxCollisionAlgorithm base_t;
	static luna_ConverterType converters[];
};

// Class: btBoxBoxCollisionAlgorithm::CreateFunc
template<>
class LunaTraits< btBoxBoxCollisionAlgorithm::CreateFunc > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btBoxBoxCollisionAlgorithm::CreateFunc* _bind_ctor(lua_State *L);
	static void _bind_dtor(btBoxBoxCollisionAlgorithm::CreateFunc* obj);
	typedef btCollisionAlgorithmCreateFunc parent_t;
	typedef btBoxBoxCollisionAlgorithm::CreateFunc base_t;
	static luna_ConverterType converters[];
};

// Class: btDiscreteCollisionDetectorInterface
template<>
class LunaTraits< btDiscreteCollisionDetectorInterface > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btDiscreteCollisionDetectorInterface* _bind_ctor(lua_State *L);
	static void _bind_dtor(btDiscreteCollisionDetectorInterface* obj);
	typedef btDiscreteCollisionDetectorInterface parent_t;
	typedef btDiscreteCollisionDetectorInterface base_t;
	static luna_ConverterType converters[];
};

// Class: btBoxBoxDetector
template<>
class LunaTraits< btBoxBoxDetector > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btBoxBoxDetector* _bind_ctor(lua_State *L);
	static void _bind_dtor(btBoxBoxDetector* obj);
	typedef btDiscreteCollisionDetectorInterface parent_t;
	typedef btBoxBoxDetector base_t;
	static luna_ConverterType converters[];
};

// Class: btBoxShape
template<>
class LunaTraits< btBoxShape > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btBoxShape* _bind_ctor(lua_State *L);
	static void _bind_dtor(btBoxShape* obj);
	typedef btCollisionShape parent_t;
	typedef btBoxShape base_t;
	static luna_ConverterType converters[];
};

// Class: btBroadphaseAabbCallback
template<>
class LunaTraits< btBroadphaseAabbCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btBroadphaseAabbCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(btBroadphaseAabbCallback* obj);
	typedef btBroadphaseAabbCallback parent_t;
	typedef btBroadphaseAabbCallback base_t;
	static luna_ConverterType converters[];
};

// Class: btBroadphasePair
template<>
class LunaTraits< btBroadphasePair > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btBroadphasePair* _bind_ctor(lua_State *L);
	static void _bind_dtor(btBroadphasePair* obj);
	typedef btBroadphasePair parent_t;
	typedef btBroadphasePair base_t;
	static luna_ConverterType converters[];
};

// Class: btBroadphasePairSortPredicate
template<>
class LunaTraits< btBroadphasePairSortPredicate > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btBroadphasePairSortPredicate* _bind_ctor(lua_State *L);
	static void _bind_dtor(btBroadphasePairSortPredicate* obj);
	typedef btBroadphasePairSortPredicate parent_t;
	typedef btBroadphasePairSortPredicate base_t;
	static luna_ConverterType converters[];
};

// Class: btBroadphaseRayCallback
template<>
class LunaTraits< btBroadphaseRayCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btBroadphaseRayCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(btBroadphaseRayCallback* obj);
	typedef btBroadphaseAabbCallback parent_t;
	typedef btBroadphaseRayCallback base_t;
	static luna_ConverterType converters[];
};

// Class: btPolyhedralConvexAabbCachingShape
template<>
class LunaTraits< btPolyhedralConvexAabbCachingShape > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btPolyhedralConvexAabbCachingShape* _bind_ctor(lua_State *L);
	static void _bind_dtor(btPolyhedralConvexAabbCachingShape* obj);
	typedef btCollisionShape parent_t;
	typedef btPolyhedralConvexAabbCachingShape base_t;
	static luna_ConverterType converters[];
};

// Class: btBU_Simplex1to4
template<>
class LunaTraits< btBU_Simplex1to4 > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btBU_Simplex1to4* _bind_ctor(lua_State *L);
	static void _bind_dtor(btBU_Simplex1to4* obj);
	typedef btCollisionShape parent_t;
	typedef btBU_Simplex1to4 base_t;
	static luna_ConverterType converters[];
};

// Class: btBvhSubtreeInfo
template<>
class LunaTraits< btBvhSubtreeInfo > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btBvhSubtreeInfo* _bind_ctor(lua_State *L);
	static void _bind_dtor(btBvhSubtreeInfo* obj);
	typedef btBvhSubtreeInfo parent_t;
	typedef btBvhSubtreeInfo base_t;
	static luna_ConverterType converters[];
};

// Class: btBvhSubtreeInfoData
template<>
class LunaTraits< btBvhSubtreeInfoData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btBvhSubtreeInfoData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btBvhSubtreeInfoData* obj);
	typedef btBvhSubtreeInfoData parent_t;
	typedef btBvhSubtreeInfoData base_t;
	static luna_ConverterType converters[];
};

// Class: btBvhTree
template<>
class LunaTraits< btBvhTree > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btBvhTree* _bind_ctor(lua_State *L);
	static void _bind_dtor(btBvhTree* obj);
	typedef btBvhTree parent_t;
	typedef btBvhTree base_t;
	static luna_ConverterType converters[];
};

// Class: btConcaveShape
template<>
class LunaTraits< btConcaveShape > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btConcaveShape* _bind_ctor(lua_State *L);
	static void _bind_dtor(btConcaveShape* obj);
	typedef btCollisionShape parent_t;
	typedef btConcaveShape base_t;
	static luna_ConverterType converters[];
};

// Class: btTriangleMeshShape
template<>
class LunaTraits< btTriangleMeshShape > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btTriangleMeshShape* _bind_ctor(lua_State *L);
	static void _bind_dtor(btTriangleMeshShape* obj);
	typedef btCollisionShape parent_t;
	typedef btTriangleMeshShape base_t;
	static luna_ConverterType converters[];
};

// Class: btBvhTriangleMeshShape
template<>
class LunaTraits< btBvhTriangleMeshShape > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btBvhTriangleMeshShape* _bind_ctor(lua_State *L);
	static void _bind_dtor(btBvhTriangleMeshShape* obj);
	typedef btCollisionShape parent_t;
	typedef btBvhTriangleMeshShape base_t;
	static luna_ConverterType converters[];
};

// Class: btCapsuleShape
template<>
class LunaTraits< btCapsuleShape > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btCapsuleShape* _bind_ctor(lua_State *L);
	static void _bind_dtor(btCapsuleShape* obj);
	typedef btCollisionShape parent_t;
	typedef btCapsuleShape base_t;
	static luna_ConverterType converters[];
};

// Class: btCapsuleShapeData
template<>
class LunaTraits< btCapsuleShapeData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btCapsuleShapeData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btCapsuleShapeData* obj);
	typedef btCapsuleShapeData parent_t;
	typedef btCapsuleShapeData base_t;
	static luna_ConverterType converters[];
};

// Class: btCapsuleShapeX
template<>
class LunaTraits< btCapsuleShapeX > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btCapsuleShapeX* _bind_ctor(lua_State *L);
	static void _bind_dtor(btCapsuleShapeX* obj);
	typedef btCollisionShape parent_t;
	typedef btCapsuleShapeX base_t;
	static luna_ConverterType converters[];
};

// Class: btCapsuleShapeZ
template<>
class LunaTraits< btCapsuleShapeZ > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btCapsuleShapeZ* _bind_ctor(lua_State *L);
	static void _bind_dtor(btCapsuleShapeZ* obj);
	typedef btCollisionShape parent_t;
	typedef btCapsuleShapeZ base_t;
	static luna_ConverterType converters[];
};

// Class: btCharacterControllerInterface
template<>
class LunaTraits< btCharacterControllerInterface > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btCharacterControllerInterface* _bind_ctor(lua_State *L);
	static void _bind_dtor(btCharacterControllerInterface* obj);
	typedef btActionInterface parent_t;
	typedef btCharacterControllerInterface base_t;
	static luna_ConverterType converters[];
};

// Class: btCharIndexTripletData
template<>
class LunaTraits< btCharIndexTripletData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btCharIndexTripletData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btCharIndexTripletData* obj);
	typedef btCharIndexTripletData parent_t;
	typedef btCharIndexTripletData base_t;
	static luna_ConverterType converters[];
};

// Class: btChunk
template<>
class LunaTraits< btChunk > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btChunk* _bind_ctor(lua_State *L);
	static void _bind_dtor(btChunk* obj);
	typedef btChunk parent_t;
	typedef btChunk base_t;
	static luna_ConverterType converters[];
};

// Class: btClock
template<>
class LunaTraits< btClock > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btClock* _bind_ctor(lua_State *L);
	static void _bind_dtor(btClock* obj);
	typedef btClock parent_t;
	typedef btClock base_t;
	static luna_ConverterType converters[];
};

// Class: btCollisionAlgorithmConstructionInfo
template<>
class LunaTraits< btCollisionAlgorithmConstructionInfo > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btCollisionAlgorithmConstructionInfo* _bind_ctor(lua_State *L);
	static void _bind_dtor(btCollisionAlgorithmConstructionInfo* obj);
	typedef btCollisionAlgorithmConstructionInfo parent_t;
	typedef btCollisionAlgorithmConstructionInfo base_t;
	static luna_ConverterType converters[];
};

// Class: btCollisionConfiguration
template<>
class LunaTraits< btCollisionConfiguration > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btCollisionConfiguration* _bind_ctor(lua_State *L);
	static void _bind_dtor(btCollisionConfiguration* obj);
	typedef btCollisionConfiguration parent_t;
	typedef btCollisionConfiguration base_t;
	static luna_ConverterType converters[];
};

// Class: btDispatcher
template<>
class LunaTraits< btDispatcher > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btDispatcher* _bind_ctor(lua_State *L);
	static void _bind_dtor(btDispatcher* obj);
	typedef btDispatcher parent_t;
	typedef btDispatcher base_t;
	static luna_ConverterType converters[];
};

// Class: btCollisionDispatcher
template<>
class LunaTraits< btCollisionDispatcher > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btCollisionDispatcher* _bind_ctor(lua_State *L);
	static void _bind_dtor(btCollisionDispatcher* obj);
	typedef btDispatcher parent_t;
	typedef btCollisionDispatcher base_t;
	static luna_ConverterType converters[];
};

// Class: btCollisionObject
template<>
class LunaTraits< btCollisionObject > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btCollisionObject* _bind_ctor(lua_State *L);
	static void _bind_dtor(btCollisionObject* obj);
	typedef btCollisionObject parent_t;
	typedef btCollisionObject base_t;
	static luna_ConverterType converters[];
};

// Class: btCollisionObjectDoubleData
template<>
class LunaTraits< btCollisionObjectDoubleData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btCollisionObjectDoubleData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btCollisionObjectDoubleData* obj);
	typedef btCollisionObjectDoubleData parent_t;
	typedef btCollisionObjectDoubleData base_t;
	static luna_ConverterType converters[];
};

// Class: btCollisionObjectFloatData
template<>
class LunaTraits< btCollisionObjectFloatData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btCollisionObjectFloatData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btCollisionObjectFloatData* obj);
	typedef btCollisionObjectFloatData parent_t;
	typedef btCollisionObjectFloatData base_t;
	static luna_ConverterType converters[];
};

// Class: btCollisionObjectWrapper
template<>
class LunaTraits< btCollisionObjectWrapper > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btCollisionObjectWrapper* _bind_ctor(lua_State *L);
	static void _bind_dtor(btCollisionObjectWrapper* obj);
	typedef btCollisionObjectWrapper parent_t;
	typedef btCollisionObjectWrapper base_t;
	static luna_ConverterType converters[];
};

// Class: btCollisionShapeData
template<>
class LunaTraits< btCollisionShapeData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btCollisionShapeData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btCollisionShapeData* obj);
	typedef btCollisionShapeData parent_t;
	typedef btCollisionShapeData base_t;
	static luna_ConverterType converters[];
};

// Class: btCollisionWorld
template<>
class LunaTraits< btCollisionWorld > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btCollisionWorld* _bind_ctor(lua_State *L);
	static void _bind_dtor(btCollisionWorld* obj);
	typedef btCollisionWorld parent_t;
	typedef btCollisionWorld base_t;
	static luna_ConverterType converters[];
};

// Class: btCollisionWorld::RayResultCallback
template<>
class LunaTraits< btCollisionWorld::RayResultCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btCollisionWorld::RayResultCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(btCollisionWorld::RayResultCallback* obj);
	typedef btCollisionWorld::RayResultCallback parent_t;
	typedef btCollisionWorld::RayResultCallback base_t;
	static luna_ConverterType converters[];
};

// Class: btCollisionWorld::AllHitsRayResultCallback
template<>
class LunaTraits< btCollisionWorld::AllHitsRayResultCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btCollisionWorld::AllHitsRayResultCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(btCollisionWorld::AllHitsRayResultCallback* obj);
	typedef btCollisionWorld::RayResultCallback parent_t;
	typedef btCollisionWorld::AllHitsRayResultCallback base_t;
	static luna_ConverterType converters[];
};

// Class: btCollisionWorld::ConvexResultCallback
template<>
class LunaTraits< btCollisionWorld::ConvexResultCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btCollisionWorld::ConvexResultCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(btCollisionWorld::ConvexResultCallback* obj);
	typedef btCollisionWorld::ConvexResultCallback parent_t;
	typedef btCollisionWorld::ConvexResultCallback base_t;
	static luna_ConverterType converters[];
};

// Class: btCollisionWorld::ClosestConvexResultCallback
template<>
class LunaTraits< btCollisionWorld::ClosestConvexResultCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btCollisionWorld::ClosestConvexResultCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(btCollisionWorld::ClosestConvexResultCallback* obj);
	typedef btCollisionWorld::ConvexResultCallback parent_t;
	typedef btCollisionWorld::ClosestConvexResultCallback base_t;
	static luna_ConverterType converters[];
};

// Class: btCollisionWorld::ClosestRayResultCallback
template<>
class LunaTraits< btCollisionWorld::ClosestRayResultCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btCollisionWorld::ClosestRayResultCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(btCollisionWorld::ClosestRayResultCallback* obj);
	typedef btCollisionWorld::RayResultCallback parent_t;
	typedef btCollisionWorld::ClosestRayResultCallback base_t;
	static luna_ConverterType converters[];
};

// Class: btCollisionWorld::ContactResultCallback
template<>
class LunaTraits< btCollisionWorld::ContactResultCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btCollisionWorld::ContactResultCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(btCollisionWorld::ContactResultCallback* obj);
	typedef btCollisionWorld::ContactResultCallback parent_t;
	typedef btCollisionWorld::ContactResultCallback base_t;
	static luna_ConverterType converters[];
};

// Class: btCollisionWorld::LocalConvexResult
template<>
class LunaTraits< btCollisionWorld::LocalConvexResult > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btCollisionWorld::LocalConvexResult* _bind_ctor(lua_State *L);
	static void _bind_dtor(btCollisionWorld::LocalConvexResult* obj);
	typedef btCollisionWorld::LocalConvexResult parent_t;
	typedef btCollisionWorld::LocalConvexResult base_t;
	static luna_ConverterType converters[];
};

// Class: btCollisionWorld::LocalRayResult
template<>
class LunaTraits< btCollisionWorld::LocalRayResult > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btCollisionWorld::LocalRayResult* _bind_ctor(lua_State *L);
	static void _bind_dtor(btCollisionWorld::LocalRayResult* obj);
	typedef btCollisionWorld::LocalRayResult parent_t;
	typedef btCollisionWorld::LocalRayResult base_t;
	static luna_ConverterType converters[];
};

// Class: btCollisionWorld::LocalShapeInfo
template<>
class LunaTraits< btCollisionWorld::LocalShapeInfo > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btCollisionWorld::LocalShapeInfo* _bind_ctor(lua_State *L);
	static void _bind_dtor(btCollisionWorld::LocalShapeInfo* obj);
	typedef btCollisionWorld::LocalShapeInfo parent_t;
	typedef btCollisionWorld::LocalShapeInfo base_t;
	static luna_ConverterType converters[];
};

// Class: btCompoundCollisionAlgorithm
template<>
class LunaTraits< btCompoundCollisionAlgorithm > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btCompoundCollisionAlgorithm* _bind_ctor(lua_State *L);
	static void _bind_dtor(btCompoundCollisionAlgorithm* obj);
	typedef btCollisionAlgorithm parent_t;
	typedef btCompoundCollisionAlgorithm base_t;
	static luna_ConverterType converters[];
};

// Class: btCompoundCollisionAlgorithm::CreateFunc
template<>
class LunaTraits< btCompoundCollisionAlgorithm::CreateFunc > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btCompoundCollisionAlgorithm::CreateFunc* _bind_ctor(lua_State *L);
	static void _bind_dtor(btCompoundCollisionAlgorithm::CreateFunc* obj);
	typedef btCollisionAlgorithmCreateFunc parent_t;
	typedef btCompoundCollisionAlgorithm::CreateFunc base_t;
	static luna_ConverterType converters[];
};

// Class: btCompoundCollisionAlgorithm::SwappedCreateFunc
template<>
class LunaTraits< btCompoundCollisionAlgorithm::SwappedCreateFunc > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btCompoundCollisionAlgorithm::SwappedCreateFunc* _bind_ctor(lua_State *L);
	static void _bind_dtor(btCompoundCollisionAlgorithm::SwappedCreateFunc* obj);
	typedef btCollisionAlgorithmCreateFunc parent_t;
	typedef btCompoundCollisionAlgorithm::SwappedCreateFunc base_t;
	static luna_ConverterType converters[];
};

// Class: btCompoundShape
template<>
class LunaTraits< btCompoundShape > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btCompoundShape* _bind_ctor(lua_State *L);
	static void _bind_dtor(btCompoundShape* obj);
	typedef btCollisionShape parent_t;
	typedef btCompoundShape base_t;
	static luna_ConverterType converters[];
};

// Class: btCompoundShapeChild
template<>
class LunaTraits< btCompoundShapeChild > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btCompoundShapeChild* _bind_ctor(lua_State *L);
	static void _bind_dtor(btCompoundShapeChild* obj);
	typedef btCompoundShapeChild parent_t;
	typedef btCompoundShapeChild base_t;
	static luna_ConverterType converters[];
};

// Class: btCompoundShapeChildData
template<>
class LunaTraits< btCompoundShapeChildData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btCompoundShapeChildData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btCompoundShapeChildData* obj);
	typedef btCompoundShapeChildData parent_t;
	typedef btCompoundShapeChildData base_t;
	static luna_ConverterType converters[];
};

// Class: btCompoundShapeData
template<>
class LunaTraits< btCompoundShapeData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btCompoundShapeData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btCompoundShapeData* obj);
	typedef btCompoundShapeData parent_t;
	typedef btCompoundShapeData base_t;
	static luna_ConverterType converters[];
};

// Class: btConeShape
template<>
class LunaTraits< btConeShape > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btConeShape* _bind_ctor(lua_State *L);
	static void _bind_dtor(btConeShape* obj);
	typedef btCollisionShape parent_t;
	typedef btConeShape base_t;
	static luna_ConverterType converters[];
};

// Class: btConeShapeX
template<>
class LunaTraits< btConeShapeX > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btConeShapeX* _bind_ctor(lua_State *L);
	static void _bind_dtor(btConeShapeX* obj);
	typedef btCollisionShape parent_t;
	typedef btConeShapeX base_t;
	static luna_ConverterType converters[];
};

// Class: btConeShapeZ
template<>
class LunaTraits< btConeShapeZ > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btConeShapeZ* _bind_ctor(lua_State *L);
	static void _bind_dtor(btConeShapeZ* obj);
	typedef btCollisionShape parent_t;
	typedef btConeShapeZ base_t;
	static luna_ConverterType converters[];
};

// Class: btTypedObject
template<>
class LunaTraits< btTypedObject > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btTypedObject* _bind_ctor(lua_State *L);
	static void _bind_dtor(btTypedObject* obj);
	typedef btTypedObject parent_t;
	typedef btTypedObject base_t;
	static luna_ConverterType converters[];
};

// Class: btTypedConstraint
template<>
class LunaTraits< btTypedConstraint > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btTypedConstraint* _bind_ctor(lua_State *L);
	static void _bind_dtor(btTypedConstraint* obj);
	typedef btTypedObject parent_t;
	typedef btTypedConstraint base_t;
	static luna_ConverterType converters[];
};

// Class: btConeTwistConstraint
template<>
class LunaTraits< btConeTwistConstraint > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btConeTwistConstraint* _bind_ctor(lua_State *L);
	static void _bind_dtor(btConeTwistConstraint* obj);
	typedef btTypedObject parent_t;
	typedef btConeTwistConstraint base_t;
	static luna_ConverterType converters[];
};

// Class: btConeTwistConstraintData
template<>
class LunaTraits< btConeTwistConstraintData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btConeTwistConstraintData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btConeTwistConstraintData* obj);
	typedef btConeTwistConstraintData parent_t;
	typedef btConeTwistConstraintData base_t;
	static luna_ConverterType converters[];
};

// Class: btConstraintRow
template<>
class LunaTraits< btConstraintRow > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btConstraintRow* _bind_ctor(lua_State *L);
	static void _bind_dtor(btConstraintRow* obj);
	typedef btConstraintRow parent_t;
	typedef btConstraintRow base_t;
	static luna_ConverterType converters[];
};

// Class: btConstraintSetting
template<>
class LunaTraits< btConstraintSetting > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btConstraintSetting* _bind_ctor(lua_State *L);
	static void _bind_dtor(btConstraintSetting* obj);
	typedef btConstraintSetting parent_t;
	typedef btConstraintSetting base_t;
	static luna_ConverterType converters[];
};

// Class: btConstraintSolver
template<>
class LunaTraits< btConstraintSolver > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btConstraintSolver* _bind_ctor(lua_State *L);
	static void _bind_dtor(btConstraintSolver* obj);
	typedef btConstraintSolver parent_t;
	typedef btConstraintSolver base_t;
	static luna_ConverterType converters[];
};

// Class: btContactConstraint
template<>
class LunaTraits< btContactConstraint > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btContactConstraint* _bind_ctor(lua_State *L);
	static void _bind_dtor(btContactConstraint* obj);
	typedef btTypedObject parent_t;
	typedef btContactConstraint base_t;
	static luna_ConverterType converters[];
};

// Class: btContactSolverInfoData
template<>
class LunaTraits< btContactSolverInfoData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btContactSolverInfoData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btContactSolverInfoData* obj);
	typedef btContactSolverInfoData parent_t;
	typedef btContactSolverInfoData base_t;
	static luna_ConverterType converters[];
};

// Class: btContactSolverInfo
template<>
class LunaTraits< btContactSolverInfo > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btContactSolverInfo* _bind_ctor(lua_State *L);
	static void _bind_dtor(btContactSolverInfo* obj);
	typedef btContactSolverInfoData parent_t;
	typedef btContactSolverInfo base_t;
	static luna_ConverterType converters[];
};

// Class: btContactSolverInfoDoubleData
template<>
class LunaTraits< btContactSolverInfoDoubleData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btContactSolverInfoDoubleData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btContactSolverInfoDoubleData* obj);
	typedef btContactSolverInfoDoubleData parent_t;
	typedef btContactSolverInfoDoubleData base_t;
	static luna_ConverterType converters[];
};

// Class: btContactSolverInfoFloatData
template<>
class LunaTraits< btContactSolverInfoFloatData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btContactSolverInfoFloatData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btContactSolverInfoFloatData* obj);
	typedef btContactSolverInfoFloatData parent_t;
	typedef btContactSolverInfoFloatData base_t;
	static luna_ConverterType converters[];
};

// Class: btConvexCast
template<>
class LunaTraits< btConvexCast > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btConvexCast* _bind_ctor(lua_State *L);
	static void _bind_dtor(btConvexCast* obj);
	typedef btConvexCast parent_t;
	typedef btConvexCast base_t;
	static luna_ConverterType converters[];
};

// Class: btContinuousConvexCollision
template<>
class LunaTraits< btContinuousConvexCollision > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btContinuousConvexCollision* _bind_ctor(lua_State *L);
	static void _bind_dtor(btContinuousConvexCollision* obj);
	typedef btConvexCast parent_t;
	typedef btContinuousConvexCollision base_t;
	static luna_ConverterType converters[];
};

// Class: btConvex2dConvex2dAlgorithm
template<>
class LunaTraits< btConvex2dConvex2dAlgorithm > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btConvex2dConvex2dAlgorithm* _bind_ctor(lua_State *L);
	static void _bind_dtor(btConvex2dConvex2dAlgorithm* obj);
	typedef btCollisionAlgorithm parent_t;
	typedef btConvex2dConvex2dAlgorithm base_t;
	static luna_ConverterType converters[];
};

// Class: btConvex2dConvex2dAlgorithm::CreateFunc
template<>
class LunaTraits< btConvex2dConvex2dAlgorithm::CreateFunc > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btConvex2dConvex2dAlgorithm::CreateFunc* _bind_ctor(lua_State *L);
	static void _bind_dtor(btConvex2dConvex2dAlgorithm::CreateFunc* obj);
	typedef btCollisionAlgorithmCreateFunc parent_t;
	typedef btConvex2dConvex2dAlgorithm::CreateFunc base_t;
	static luna_ConverterType converters[];
};

// Class: btConvex2dShape
template<>
class LunaTraits< btConvex2dShape > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btConvex2dShape* _bind_ctor(lua_State *L);
	static void _bind_dtor(btConvex2dShape* obj);
	typedef btCollisionShape parent_t;
	typedef btConvex2dShape base_t;
	static luna_ConverterType converters[];
};

// Class: btConvexCast::CastResult
template<>
class LunaTraits< btConvexCast::CastResult > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btConvexCast::CastResult* _bind_ctor(lua_State *L);
	static void _bind_dtor(btConvexCast::CastResult* obj);
	typedef btConvexCast::CastResult parent_t;
	typedef btConvexCast::CastResult base_t;
	static luna_ConverterType converters[];
};

// Class: btConvexConcaveCollisionAlgorithm
template<>
class LunaTraits< btConvexConcaveCollisionAlgorithm > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btConvexConcaveCollisionAlgorithm* _bind_ctor(lua_State *L);
	static void _bind_dtor(btConvexConcaveCollisionAlgorithm* obj);
	typedef btCollisionAlgorithm parent_t;
	typedef btConvexConcaveCollisionAlgorithm base_t;
	static luna_ConverterType converters[];
};

// Class: btConvexConcaveCollisionAlgorithm::CreateFunc
template<>
class LunaTraits< btConvexConcaveCollisionAlgorithm::CreateFunc > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btConvexConcaveCollisionAlgorithm::CreateFunc* _bind_ctor(lua_State *L);
	static void _bind_dtor(btConvexConcaveCollisionAlgorithm::CreateFunc* obj);
	typedef btCollisionAlgorithmCreateFunc parent_t;
	typedef btConvexConcaveCollisionAlgorithm::CreateFunc base_t;
	static luna_ConverterType converters[];
};

// Class: btConvexConcaveCollisionAlgorithm::SwappedCreateFunc
template<>
class LunaTraits< btConvexConcaveCollisionAlgorithm::SwappedCreateFunc > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btConvexConcaveCollisionAlgorithm::SwappedCreateFunc* _bind_ctor(lua_State *L);
	static void _bind_dtor(btConvexConcaveCollisionAlgorithm::SwappedCreateFunc* obj);
	typedef btCollisionAlgorithmCreateFunc parent_t;
	typedef btConvexConcaveCollisionAlgorithm::SwappedCreateFunc base_t;
	static luna_ConverterType converters[];
};

// Class: btConvexConvexAlgorithm
template<>
class LunaTraits< btConvexConvexAlgorithm > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btConvexConvexAlgorithm* _bind_ctor(lua_State *L);
	static void _bind_dtor(btConvexConvexAlgorithm* obj);
	typedef btCollisionAlgorithm parent_t;
	typedef btConvexConvexAlgorithm base_t;
	static luna_ConverterType converters[];
};

// Class: btConvexConvexAlgorithm::CreateFunc
template<>
class LunaTraits< btConvexConvexAlgorithm::CreateFunc > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btConvexConvexAlgorithm::CreateFunc* _bind_ctor(lua_State *L);
	static void _bind_dtor(btConvexConvexAlgorithm::CreateFunc* obj);
	typedef btCollisionAlgorithmCreateFunc parent_t;
	typedef btConvexConvexAlgorithm::CreateFunc base_t;
	static luna_ConverterType converters[];
};

// Class: btConvexHullComputer
template<>
class LunaTraits< btConvexHullComputer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btConvexHullComputer* _bind_ctor(lua_State *L);
	static void _bind_dtor(btConvexHullComputer* obj);
	typedef btConvexHullComputer parent_t;
	typedef btConvexHullComputer base_t;
	static luna_ConverterType converters[];
};

// Class: btConvexHullComputer::Edge
template<>
class LunaTraits< btConvexHullComputer::Edge > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btConvexHullComputer::Edge* _bind_ctor(lua_State *L);
	static void _bind_dtor(btConvexHullComputer::Edge* obj);
	typedef btConvexHullComputer::Edge parent_t;
	typedef btConvexHullComputer::Edge base_t;
	static luna_ConverterType converters[];
};

// Class: btConvexHullShape
template<>
class LunaTraits< btConvexHullShape > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btConvexHullShape* _bind_ctor(lua_State *L);
	static void _bind_dtor(btConvexHullShape* obj);
	typedef btCollisionShape parent_t;
	typedef btConvexHullShape base_t;
	static luna_ConverterType converters[];
};

// Class: btConvexHullShapeData
template<>
class LunaTraits< btConvexHullShapeData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btConvexHullShapeData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btConvexHullShapeData* obj);
	typedef btConvexHullShapeData parent_t;
	typedef btConvexHullShapeData base_t;
	static luna_ConverterType converters[];
};

// Class: btConvexInternalAabbCachingShape
template<>
class LunaTraits< btConvexInternalAabbCachingShape > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btConvexInternalAabbCachingShape* _bind_ctor(lua_State *L);
	static void _bind_dtor(btConvexInternalAabbCachingShape* obj);
	typedef btCollisionShape parent_t;
	typedef btConvexInternalAabbCachingShape base_t;
	static luna_ConverterType converters[];
};

// Class: btConvexInternalShapeData
template<>
class LunaTraits< btConvexInternalShapeData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btConvexInternalShapeData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btConvexInternalShapeData* obj);
	typedef btConvexInternalShapeData parent_t;
	typedef btConvexInternalShapeData base_t;
	static luna_ConverterType converters[];
};

// Class: btConvexPenetrationDepthSolver
template<>
class LunaTraits< btConvexPenetrationDepthSolver > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btConvexPenetrationDepthSolver* _bind_ctor(lua_State *L);
	static void _bind_dtor(btConvexPenetrationDepthSolver* obj);
	typedef btConvexPenetrationDepthSolver parent_t;
	typedef btConvexPenetrationDepthSolver base_t;
	static luna_ConverterType converters[];
};

// Class: btConvexPlaneCollisionAlgorithm
template<>
class LunaTraits< btConvexPlaneCollisionAlgorithm > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btConvexPlaneCollisionAlgorithm* _bind_ctor(lua_State *L);
	static void _bind_dtor(btConvexPlaneCollisionAlgorithm* obj);
	typedef btCollisionAlgorithm parent_t;
	typedef btConvexPlaneCollisionAlgorithm base_t;
	static luna_ConverterType converters[];
};

// Class: btConvexPlaneCollisionAlgorithm::CreateFunc
template<>
class LunaTraits< btConvexPlaneCollisionAlgorithm::CreateFunc > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btConvexPlaneCollisionAlgorithm::CreateFunc* _bind_ctor(lua_State *L);
	static void _bind_dtor(btConvexPlaneCollisionAlgorithm::CreateFunc* obj);
	typedef btCollisionAlgorithmCreateFunc parent_t;
	typedef btConvexPlaneCollisionAlgorithm::CreateFunc base_t;
	static luna_ConverterType converters[];
};

// Class: btConvexPointCloudShape
template<>
class LunaTraits< btConvexPointCloudShape > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btConvexPointCloudShape* _bind_ctor(lua_State *L);
	static void _bind_dtor(btConvexPointCloudShape* obj);
	typedef btCollisionShape parent_t;
	typedef btConvexPointCloudShape base_t;
	static luna_ConverterType converters[];
};

// Class: btConvexPolyhedron
template<>
class LunaTraits< btConvexPolyhedron > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btConvexPolyhedron* _bind_ctor(lua_State *L);
	static void _bind_dtor(btConvexPolyhedron* obj);
	typedef btConvexPolyhedron parent_t;
	typedef btConvexPolyhedron base_t;
	static luna_ConverterType converters[];
};

// Class: btConvexSeparatingDistanceUtil
template<>
class LunaTraits< btConvexSeparatingDistanceUtil > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btConvexSeparatingDistanceUtil* _bind_ctor(lua_State *L);
	static void _bind_dtor(btConvexSeparatingDistanceUtil* obj);
	typedef btConvexSeparatingDistanceUtil parent_t;
	typedef btConvexSeparatingDistanceUtil base_t;
	static luna_ConverterType converters[];
};

// Class: btTriangleCallback
template<>
class LunaTraits< btTriangleCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btTriangleCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(btTriangleCallback* obj);
	typedef btTriangleCallback parent_t;
	typedef btTriangleCallback base_t;
	static luna_ConverterType converters[];
};

// Class: btConvexTriangleCallback
template<>
class LunaTraits< btConvexTriangleCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btConvexTriangleCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(btConvexTriangleCallback* obj);
	typedef btTriangleCallback parent_t;
	typedef btConvexTriangleCallback base_t;
	static luna_ConverterType converters[];
};

// Class: btConvexTriangleMeshShape
template<>
class LunaTraits< btConvexTriangleMeshShape > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btConvexTriangleMeshShape* _bind_ctor(lua_State *L);
	static void _bind_dtor(btConvexTriangleMeshShape* obj);
	typedef btCollisionShape parent_t;
	typedef btConvexTriangleMeshShape base_t;
	static luna_ConverterType converters[];
};

// Class: btCylinderShape
template<>
class LunaTraits< btCylinderShape > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btCylinderShape* _bind_ctor(lua_State *L);
	static void _bind_dtor(btCylinderShape* obj);
	typedef btCollisionShape parent_t;
	typedef btCylinderShape base_t;
	static luna_ConverterType converters[];
};

// Class: btCylinderShapeData
template<>
class LunaTraits< btCylinderShapeData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btCylinderShapeData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btCylinderShapeData* obj);
	typedef btCylinderShapeData parent_t;
	typedef btCylinderShapeData base_t;
	static luna_ConverterType converters[];
};

// Class: btCylinderShapeX
template<>
class LunaTraits< btCylinderShapeX > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btCylinderShapeX* _bind_ctor(lua_State *L);
	static void _bind_dtor(btCylinderShapeX* obj);
	typedef btCollisionShape parent_t;
	typedef btCylinderShapeX base_t;
	static luna_ConverterType converters[];
};

// Class: btCylinderShapeZ
template<>
class LunaTraits< btCylinderShapeZ > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btCylinderShapeZ* _bind_ctor(lua_State *L);
	static void _bind_dtor(btCylinderShapeZ* obj);
	typedef btCollisionShape parent_t;
	typedef btCylinderShapeZ base_t;
	static luna_ConverterType converters[];
};

// Class: btDbvt
template<>
class LunaTraits< btDbvt > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btDbvt* _bind_ctor(lua_State *L);
	static void _bind_dtor(btDbvt* obj);
	typedef btDbvt parent_t;
	typedef btDbvt base_t;
	static luna_ConverterType converters[];
};

// Class: btDbvt::IClone
template<>
class LunaTraits< btDbvt::IClone > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btDbvt::IClone* _bind_ctor(lua_State *L);
	static void _bind_dtor(btDbvt::IClone* obj);
	typedef btDbvt::IClone parent_t;
	typedef btDbvt::IClone base_t;
	static luna_ConverterType converters[];
};

// Class: btDbvt::ICollide
template<>
class LunaTraits< btDbvt::ICollide > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btDbvt::ICollide* _bind_ctor(lua_State *L);
	static void _bind_dtor(btDbvt::ICollide* obj);
	typedef btDbvt::ICollide parent_t;
	typedef btDbvt::ICollide base_t;
	static luna_ConverterType converters[];
};

// Class: btDbvt::IWriter
template<>
class LunaTraits< btDbvt::IWriter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btDbvt::IWriter* _bind_ctor(lua_State *L);
	static void _bind_dtor(btDbvt::IWriter* obj);
	typedef btDbvt::IWriter parent_t;
	typedef btDbvt::IWriter base_t;
	static luna_ConverterType converters[];
};

// Class: btDbvt::sStkCLN
template<>
class LunaTraits< btDbvt::sStkCLN > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btDbvt::sStkCLN* _bind_ctor(lua_State *L);
	static void _bind_dtor(btDbvt::sStkCLN* obj);
	typedef btDbvt::sStkCLN parent_t;
	typedef btDbvt::sStkCLN base_t;
	static luna_ConverterType converters[];
};

// Class: btDbvt::sStkNN
template<>
class LunaTraits< btDbvt::sStkNN > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btDbvt::sStkNN* _bind_ctor(lua_State *L);
	static void _bind_dtor(btDbvt::sStkNN* obj);
	typedef btDbvt::sStkNN parent_t;
	typedef btDbvt::sStkNN base_t;
	static luna_ConverterType converters[];
};

// Class: btDbvt::sStkNP
template<>
class LunaTraits< btDbvt::sStkNP > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btDbvt::sStkNP* _bind_ctor(lua_State *L);
	static void _bind_dtor(btDbvt::sStkNP* obj);
	typedef btDbvt::sStkNP parent_t;
	typedef btDbvt::sStkNP base_t;
	static luna_ConverterType converters[];
};

// Class: btDbvt::sStkNPS
template<>
class LunaTraits< btDbvt::sStkNPS > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btDbvt::sStkNPS* _bind_ctor(lua_State *L);
	static void _bind_dtor(btDbvt::sStkNPS* obj);
	typedef btDbvt::sStkNPS parent_t;
	typedef btDbvt::sStkNPS base_t;
	static luna_ConverterType converters[];
};

// Class: btDbvtAabbMm
template<>
class LunaTraits< btDbvtAabbMm > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btDbvtAabbMm* _bind_ctor(lua_State *L);
	static void _bind_dtor(btDbvtAabbMm* obj);
	typedef btDbvtAabbMm parent_t;
	typedef btDbvtAabbMm base_t;
	static luna_ConverterType converters[];
};

// Class: btDbvtBroadphase
template<>
class LunaTraits< btDbvtBroadphase > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btDbvtBroadphase* _bind_ctor(lua_State *L);
	static void _bind_dtor(btDbvtBroadphase* obj);
	typedef btBroadphaseInterface parent_t;
	typedef btDbvtBroadphase base_t;
	static luna_ConverterType converters[];
};

// Class: btDbvtNode
template<>
class LunaTraits< btDbvtNode > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btDbvtNode* _bind_ctor(lua_State *L);
	static void _bind_dtor(btDbvtNode* obj);
	typedef btDbvtNode parent_t;
	typedef btDbvtNode base_t;
	static luna_ConverterType converters[];
};

// Class: btDbvtProxy
template<>
class LunaTraits< btDbvtProxy > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btDbvtProxy* _bind_ctor(lua_State *L);
	static void _bind_dtor(btDbvtProxy* obj);
	typedef btBroadphaseProxy parent_t;
	typedef btDbvtProxy base_t;
	static luna_ConverterType converters[];
};

// Class: btDefaultCollisionConfiguration
template<>
class LunaTraits< btDefaultCollisionConfiguration > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btDefaultCollisionConfiguration* _bind_ctor(lua_State *L);
	static void _bind_dtor(btDefaultCollisionConfiguration* obj);
	typedef btCollisionConfiguration parent_t;
	typedef btDefaultCollisionConfiguration base_t;
	static luna_ConverterType converters[];
};

// Class: btDefaultCollisionConstructionInfo
template<>
class LunaTraits< btDefaultCollisionConstructionInfo > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btDefaultCollisionConstructionInfo* _bind_ctor(lua_State *L);
	static void _bind_dtor(btDefaultCollisionConstructionInfo* obj);
	typedef btDefaultCollisionConstructionInfo parent_t;
	typedef btDefaultCollisionConstructionInfo base_t;
	static luna_ConverterType converters[];
};

// Class: btMotionState
template<>
class LunaTraits< btMotionState > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btMotionState* _bind_ctor(lua_State *L);
	static void _bind_dtor(btMotionState* obj);
	typedef btMotionState parent_t;
	typedef btMotionState base_t;
	static luna_ConverterType converters[];
};

// Class: btDefaultMotionState
template<>
class LunaTraits< btDefaultMotionState > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btDefaultMotionState* _bind_ctor(lua_State *L);
	static void _bind_dtor(btDefaultMotionState* obj);
	typedef btMotionState parent_t;
	typedef btDefaultMotionState base_t;
	static luna_ConverterType converters[];
};

// Class: btSerializer
template<>
class LunaTraits< btSerializer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btSerializer* _bind_ctor(lua_State *L);
	static void _bind_dtor(btSerializer* obj);
	typedef btSerializer parent_t;
	typedef btSerializer base_t;
	static luna_ConverterType converters[];
};

// Class: btDefaultSerializer
template<>
class LunaTraits< btDefaultSerializer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btDefaultSerializer* _bind_ctor(lua_State *L);
	static void _bind_dtor(btDefaultSerializer* obj);
	typedef btSerializer parent_t;
	typedef btDefaultSerializer base_t;
	static luna_ConverterType converters[];
};

// Class: btVehicleRaycaster
template<>
class LunaTraits< btVehicleRaycaster > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btVehicleRaycaster* _bind_ctor(lua_State *L);
	static void _bind_dtor(btVehicleRaycaster* obj);
	typedef btVehicleRaycaster parent_t;
	typedef btVehicleRaycaster base_t;
	static luna_ConverterType converters[];
};

// Class: btDefaultVehicleRaycaster
template<>
class LunaTraits< btDefaultVehicleRaycaster > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btDefaultVehicleRaycaster* _bind_ctor(lua_State *L);
	static void _bind_dtor(btDefaultVehicleRaycaster* obj);
	typedef btVehicleRaycaster parent_t;
	typedef btDefaultVehicleRaycaster base_t;
	static luna_ConverterType converters[];
};

// Class: btDiscreteCollisionDetectorInterface::ClosestPointInput
template<>
class LunaTraits< btDiscreteCollisionDetectorInterface::ClosestPointInput > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btDiscreteCollisionDetectorInterface::ClosestPointInput* _bind_ctor(lua_State *L);
	static void _bind_dtor(btDiscreteCollisionDetectorInterface::ClosestPointInput* obj);
	typedef btDiscreteCollisionDetectorInterface::ClosestPointInput parent_t;
	typedef btDiscreteCollisionDetectorInterface::ClosestPointInput base_t;
	static luna_ConverterType converters[];
};

// Class: btDiscreteCollisionDetectorInterface::Result
template<>
class LunaTraits< btDiscreteCollisionDetectorInterface::Result > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btDiscreteCollisionDetectorInterface::Result* _bind_ctor(lua_State *L);
	static void _bind_dtor(btDiscreteCollisionDetectorInterface::Result* obj);
	typedef btDiscreteCollisionDetectorInterface::Result parent_t;
	typedef btDiscreteCollisionDetectorInterface::Result base_t;
	static luna_ConverterType converters[];
};

// Class: btDynamicsWorld
template<>
class LunaTraits< btDynamicsWorld > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btDynamicsWorld* _bind_ctor(lua_State *L);
	static void _bind_dtor(btDynamicsWorld* obj);
	typedef btCollisionWorld parent_t;
	typedef btDynamicsWorld base_t;
	static luna_ConverterType converters[];
};

// Class: btDiscreteDynamicsWorld
template<>
class LunaTraits< btDiscreteDynamicsWorld > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btDiscreteDynamicsWorld* _bind_ctor(lua_State *L);
	static void _bind_dtor(btDiscreteDynamicsWorld* obj);
	typedef btCollisionWorld parent_t;
	typedef btDiscreteDynamicsWorld base_t;
	static luna_ConverterType converters[];
};

// Class: btDispatcherInfo
template<>
class LunaTraits< btDispatcherInfo > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btDispatcherInfo* _bind_ctor(lua_State *L);
	static void _bind_dtor(btDispatcherInfo* obj);
	typedef btDispatcherInfo parent_t;
	typedef btDispatcherInfo base_t;
	static luna_ConverterType converters[];
};

// Class: btDynamicsWorldDoubleData
template<>
class LunaTraits< btDynamicsWorldDoubleData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btDynamicsWorldDoubleData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btDynamicsWorldDoubleData* obj);
	typedef btDynamicsWorldDoubleData parent_t;
	typedef btDynamicsWorldDoubleData base_t;
	static luna_ConverterType converters[];
};

// Class: btDynamicsWorldFloatData
template<>
class LunaTraits< btDynamicsWorldFloatData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btDynamicsWorldFloatData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btDynamicsWorldFloatData* obj);
	typedef btDynamicsWorldFloatData parent_t;
	typedef btDynamicsWorldFloatData base_t;
	static luna_ConverterType converters[];
};

// Class: btElement
template<>
class LunaTraits< btElement > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btElement* _bind_ctor(lua_State *L);
	static void _bind_dtor(btElement* obj);
	typedef btElement parent_t;
	typedef btElement base_t;
	static luna_ConverterType converters[];
};

// Class: btEmptyAlgorithm
template<>
class LunaTraits< btEmptyAlgorithm > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btEmptyAlgorithm* _bind_ctor(lua_State *L);
	static void _bind_dtor(btEmptyAlgorithm* obj);
	typedef btCollisionAlgorithm parent_t;
	typedef btEmptyAlgorithm base_t;
	static luna_ConverterType converters[];
};

// Class: btEmptyAlgorithm::CreateFunc
template<>
class LunaTraits< btEmptyAlgorithm::CreateFunc > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btEmptyAlgorithm::CreateFunc* _bind_ctor(lua_State *L);
	static void _bind_dtor(btEmptyAlgorithm::CreateFunc* obj);
	typedef btCollisionAlgorithmCreateFunc parent_t;
	typedef btEmptyAlgorithm::CreateFunc base_t;
	static luna_ConverterType converters[];
};

// Class: btEmptyShape
template<>
class LunaTraits< btEmptyShape > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btEmptyShape* _bind_ctor(lua_State *L);
	static void _bind_dtor(btEmptyShape* obj);
	typedef btCollisionShape parent_t;
	typedef btEmptyShape base_t;
	static luna_ConverterType converters[];
};

// Class: btFace
template<>
class LunaTraits< btFace > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btFace* _bind_ctor(lua_State *L);
	static void _bind_dtor(btFace* obj);
	typedef btFace parent_t;
	typedef btFace base_t;
	static luna_ConverterType converters[];
};

// Class: btGearConstraint
template<>
class LunaTraits< btGearConstraint > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btGearConstraint* _bind_ctor(lua_State *L);
	static void _bind_dtor(btGearConstraint* obj);
	typedef btTypedObject parent_t;
	typedef btGearConstraint base_t;
	static luna_ConverterType converters[];
};

// Class: btGEN_Link
template<>
class LunaTraits< btGEN_Link > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btGEN_Link* _bind_ctor(lua_State *L);
	static void _bind_dtor(btGEN_Link* obj);
	typedef btGEN_Link parent_t;
	typedef btGEN_Link base_t;
	static luna_ConverterType converters[];
};

// Class: btGEN_List
template<>
class LunaTraits< btGEN_List > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btGEN_List* _bind_ctor(lua_State *L);
	static void _bind_dtor(btGEN_List* obj);
	typedef btGEN_List parent_t;
	typedef btGEN_List base_t;
	static luna_ConverterType converters[];
};

// Class: btGeneric6DofConstraint
template<>
class LunaTraits< btGeneric6DofConstraint > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btGeneric6DofConstraint* _bind_ctor(lua_State *L);
	static void _bind_dtor(btGeneric6DofConstraint* obj);
	typedef btTypedObject parent_t;
	typedef btGeneric6DofConstraint base_t;
	static luna_ConverterType converters[];
};

// Class: btGeneric6DofConstraintData
template<>
class LunaTraits< btGeneric6DofConstraintData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btGeneric6DofConstraintData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btGeneric6DofConstraintData* obj);
	typedef btGeneric6DofConstraintData parent_t;
	typedef btGeneric6DofConstraintData base_t;
	static luna_ConverterType converters[];
};

// Class: btGeneric6DofSpringConstraint
template<>
class LunaTraits< btGeneric6DofSpringConstraint > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btGeneric6DofSpringConstraint* _bind_ctor(lua_State *L);
	static void _bind_dtor(btGeneric6DofSpringConstraint* obj);
	typedef btTypedObject parent_t;
	typedef btGeneric6DofSpringConstraint base_t;
	static luna_ConverterType converters[];
};

// Class: btGeneric6DofSpringConstraintData
template<>
class LunaTraits< btGeneric6DofSpringConstraintData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btGeneric6DofSpringConstraintData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btGeneric6DofSpringConstraintData* obj);
	typedef btGeneric6DofSpringConstraintData parent_t;
	typedef btGeneric6DofSpringConstraintData base_t;
	static luna_ConverterType converters[];
};

// Class: btGenericMemoryPool
template<>
class LunaTraits< btGenericMemoryPool > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btGenericMemoryPool* _bind_ctor(lua_State *L);
	static void _bind_dtor(btGenericMemoryPool* obj);
	typedef btGenericMemoryPool parent_t;
	typedef btGenericMemoryPool base_t;
	static luna_ConverterType converters[];
};

// Class: btGenericPoolAllocator
template<>
class LunaTraits< btGenericPoolAllocator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btGenericPoolAllocator* _bind_ctor(lua_State *L);
	static void _bind_dtor(btGenericPoolAllocator* obj);
	typedef btGenericPoolAllocator parent_t;
	typedef btGenericPoolAllocator base_t;
	static luna_ConverterType converters[];
};

// Class: btGeometryUtil
template<>
class LunaTraits< btGeometryUtil > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btGeometryUtil* _bind_ctor(lua_State *L);
	static void _bind_dtor(btGeometryUtil* obj);
	typedef btGeometryUtil parent_t;
	typedef btGeometryUtil base_t;
	static luna_ConverterType converters[];
};

// Class: btGhostObject
template<>
class LunaTraits< btGhostObject > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btGhostObject* _bind_ctor(lua_State *L);
	static void _bind_dtor(btGhostObject* obj);
	typedef btCollisionObject parent_t;
	typedef btGhostObject base_t;
	static luna_ConverterType converters[];
};

// Class: btOverlappingPairCallback
template<>
class LunaTraits< btOverlappingPairCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btOverlappingPairCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(btOverlappingPairCallback* obj);
	typedef btOverlappingPairCallback parent_t;
	typedef btOverlappingPairCallback base_t;
	static luna_ConverterType converters[];
};

// Class: btGhostPairCallback
template<>
class LunaTraits< btGhostPairCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btGhostPairCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(btGhostPairCallback* obj);
	typedef btOverlappingPairCallback parent_t;
	typedef btGhostPairCallback base_t;
	static luna_ConverterType converters[];
};

// Class: btGImpactBvh
template<>
class LunaTraits< btGImpactBvh > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btGImpactBvh* _bind_ctor(lua_State *L);
	static void _bind_dtor(btGImpactBvh* obj);
	typedef btGImpactBvh parent_t;
	typedef btGImpactBvh base_t;
	static luna_ConverterType converters[];
};

// Class: btGImpactCollisionAlgorithm
template<>
class LunaTraits< btGImpactCollisionAlgorithm > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btGImpactCollisionAlgorithm* _bind_ctor(lua_State *L);
	static void _bind_dtor(btGImpactCollisionAlgorithm* obj);
	typedef btCollisionAlgorithm parent_t;
	typedef btGImpactCollisionAlgorithm base_t;
	static luna_ConverterType converters[];
};

// Class: btGImpactCollisionAlgorithm::CreateFunc
template<>
class LunaTraits< btGImpactCollisionAlgorithm::CreateFunc > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btGImpactCollisionAlgorithm::CreateFunc* _bind_ctor(lua_State *L);
	static void _bind_dtor(btGImpactCollisionAlgorithm::CreateFunc* obj);
	typedef btCollisionAlgorithmCreateFunc parent_t;
	typedef btGImpactCollisionAlgorithm::CreateFunc base_t;
	static luna_ConverterType converters[];
};

// Class: btGImpactShapeInterface
template<>
class LunaTraits< btGImpactShapeInterface > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btGImpactShapeInterface* _bind_ctor(lua_State *L);
	static void _bind_dtor(btGImpactShapeInterface* obj);
	typedef btCollisionShape parent_t;
	typedef btGImpactShapeInterface base_t;
	static luna_ConverterType converters[];
};

// Class: btGImpactCompoundShape
template<>
class LunaTraits< btGImpactCompoundShape > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btGImpactCompoundShape* _bind_ctor(lua_State *L);
	static void _bind_dtor(btGImpactCompoundShape* obj);
	typedef btCollisionShape parent_t;
	typedef btGImpactCompoundShape base_t;
	static luna_ConverterType converters[];
};

// Class: btPrimitiveManagerBase
template<>
class LunaTraits< btPrimitiveManagerBase > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btPrimitiveManagerBase* _bind_ctor(lua_State *L);
	static void _bind_dtor(btPrimitiveManagerBase* obj);
	typedef btPrimitiveManagerBase parent_t;
	typedef btPrimitiveManagerBase base_t;
	static luna_ConverterType converters[];
};

// Class: btGImpactCompoundShape::CompoundPrimitiveManager
template<>
class LunaTraits< btGImpactCompoundShape::CompoundPrimitiveManager > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btGImpactCompoundShape::CompoundPrimitiveManager* _bind_ctor(lua_State *L);
	static void _bind_dtor(btGImpactCompoundShape::CompoundPrimitiveManager* obj);
	typedef btPrimitiveManagerBase parent_t;
	typedef btGImpactCompoundShape::CompoundPrimitiveManager base_t;
	static luna_ConverterType converters[];
};

// Class: btGImpactMeshShape
template<>
class LunaTraits< btGImpactMeshShape > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btGImpactMeshShape* _bind_ctor(lua_State *L);
	static void _bind_dtor(btGImpactMeshShape* obj);
	typedef btCollisionShape parent_t;
	typedef btGImpactMeshShape base_t;
	static luna_ConverterType converters[];
};

// Class: btGImpactMeshShapeData
template<>
class LunaTraits< btGImpactMeshShapeData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btGImpactMeshShapeData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btGImpactMeshShapeData* obj);
	typedef btGImpactMeshShapeData parent_t;
	typedef btGImpactMeshShapeData base_t;
	static luna_ConverterType converters[];
};

// Class: btGImpactMeshShapePart
template<>
class LunaTraits< btGImpactMeshShapePart > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btGImpactMeshShapePart* _bind_ctor(lua_State *L);
	static void _bind_dtor(btGImpactMeshShapePart* obj);
	typedef btCollisionShape parent_t;
	typedef btGImpactMeshShapePart base_t;
	static luna_ConverterType converters[];
};

// Class: btGImpactMeshShapePart::TrimeshPrimitiveManager
template<>
class LunaTraits< btGImpactMeshShapePart::TrimeshPrimitiveManager > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btGImpactMeshShapePart::TrimeshPrimitiveManager* _bind_ctor(lua_State *L);
	static void _bind_dtor(btGImpactMeshShapePart::TrimeshPrimitiveManager* obj);
	typedef btPrimitiveManagerBase parent_t;
	typedef btGImpactMeshShapePart::TrimeshPrimitiveManager base_t;
	static luna_ConverterType converters[];
};

// Class: btGImpactQuantizedBvh
template<>
class LunaTraits< btGImpactQuantizedBvh > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btGImpactQuantizedBvh* _bind_ctor(lua_State *L);
	static void _bind_dtor(btGImpactQuantizedBvh* obj);
	typedef btGImpactQuantizedBvh parent_t;
	typedef btGImpactQuantizedBvh base_t;
	static luna_ConverterType converters[];
};

// Class: btGjkConvexCast
template<>
class LunaTraits< btGjkConvexCast > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btGjkConvexCast* _bind_ctor(lua_State *L);
	static void _bind_dtor(btGjkConvexCast* obj);
	typedef btConvexCast parent_t;
	typedef btGjkConvexCast base_t;
	static luna_ConverterType converters[];
};

// Class: btGjkEpaPenetrationDepthSolver
template<>
class LunaTraits< btGjkEpaPenetrationDepthSolver > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btGjkEpaPenetrationDepthSolver* _bind_ctor(lua_State *L);
	static void _bind_dtor(btGjkEpaPenetrationDepthSolver* obj);
	typedef btConvexPenetrationDepthSolver parent_t;
	typedef btGjkEpaPenetrationDepthSolver base_t;
	static luna_ConverterType converters[];
};

// Class: btGjkEpaSolver2
template<>
class LunaTraits< btGjkEpaSolver2 > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btGjkEpaSolver2* _bind_ctor(lua_State *L);
	static void _bind_dtor(btGjkEpaSolver2* obj);
	typedef btGjkEpaSolver2 parent_t;
	typedef btGjkEpaSolver2 base_t;
	static luna_ConverterType converters[];
};

// Class: btGjkEpaSolver2::sResults
template<>
class LunaTraits< btGjkEpaSolver2::sResults > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btGjkEpaSolver2::sResults* _bind_ctor(lua_State *L);
	static void _bind_dtor(btGjkEpaSolver2::sResults* obj);
	typedef btGjkEpaSolver2::sResults parent_t;
	typedef btGjkEpaSolver2::sResults base_t;
	static luna_ConverterType converters[];
};

// Class: btGjkPairDetector
template<>
class LunaTraits< btGjkPairDetector > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btGjkPairDetector* _bind_ctor(lua_State *L);
	static void _bind_dtor(btGjkPairDetector* obj);
	typedef btDiscreteCollisionDetectorInterface parent_t;
	typedef btGjkPairDetector base_t;
	static luna_ConverterType converters[];
};

// Class: btOverlappingPairCache
template<>
class LunaTraits< btOverlappingPairCache > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btOverlappingPairCache* _bind_ctor(lua_State *L);
	static void _bind_dtor(btOverlappingPairCache* obj);
	typedef btOverlappingPairCallback parent_t;
	typedef btOverlappingPairCache base_t;
	static luna_ConverterType converters[];
};

// Class: btHashedOverlappingPairCache
template<>
class LunaTraits< btHashedOverlappingPairCache > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btHashedOverlappingPairCache* _bind_ctor(lua_State *L);
	static void _bind_dtor(btHashedOverlappingPairCache* obj);
	typedef btOverlappingPairCallback parent_t;
	typedef btHashedOverlappingPairCache base_t;
	static luna_ConverterType converters[];
};

// Class: btHashInt
template<>
class LunaTraits< btHashInt > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btHashInt* _bind_ctor(lua_State *L);
	static void _bind_dtor(btHashInt* obj);
	typedef btHashInt parent_t;
	typedef btHashInt base_t;
	static luna_ConverterType converters[];
};

// Class: btHashPtr
template<>
class LunaTraits< btHashPtr > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btHashPtr* _bind_ctor(lua_State *L);
	static void _bind_dtor(btHashPtr* obj);
	typedef btHashPtr parent_t;
	typedef btHashPtr base_t;
	static luna_ConverterType converters[];
};

// Class: btHashString
template<>
class LunaTraits< btHashString > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btHashString* _bind_ctor(lua_State *L);
	static void _bind_dtor(btHashString* obj);
	typedef btHashString parent_t;
	typedef btHashString base_t;
	static luna_ConverterType converters[];
};

// Class: btHeightfieldTerrainShape
template<>
class LunaTraits< btHeightfieldTerrainShape > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btHeightfieldTerrainShape* _bind_ctor(lua_State *L);
	static void _bind_dtor(btHeightfieldTerrainShape* obj);
	typedef btCollisionShape parent_t;
	typedef btHeightfieldTerrainShape base_t;
	static luna_ConverterType converters[];
};

// Class: btHinge2Constraint
template<>
class LunaTraits< btHinge2Constraint > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btHinge2Constraint* _bind_ctor(lua_State *L);
	static void _bind_dtor(btHinge2Constraint* obj);
	typedef btTypedObject parent_t;
	typedef btHinge2Constraint base_t;
	static luna_ConverterType converters[];
};

// Class: btHingeConstraint
template<>
class LunaTraits< btHingeConstraint > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btHingeConstraint* _bind_ctor(lua_State *L);
	static void _bind_dtor(btHingeConstraint* obj);
	typedef btTypedObject parent_t;
	typedef btHingeConstraint base_t;
	static luna_ConverterType converters[];
};

// Class: btHingeConstraintDoubleData
template<>
class LunaTraits< btHingeConstraintDoubleData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btHingeConstraintDoubleData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btHingeConstraintDoubleData* obj);
	typedef btHingeConstraintDoubleData parent_t;
	typedef btHingeConstraintDoubleData base_t;
	static luna_ConverterType converters[];
};

// Class: btHingeConstraintFloatData
template<>
class LunaTraits< btHingeConstraintFloatData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btHingeConstraintFloatData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btHingeConstraintFloatData* obj);
	typedef btHingeConstraintFloatData parent_t;
	typedef btHingeConstraintFloatData base_t;
	static luna_ConverterType converters[];
};

// Class: btIDebugDraw
template<>
class LunaTraits< btIDebugDraw > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btIDebugDraw* _bind_ctor(lua_State *L);
	static void _bind_dtor(btIDebugDraw* obj);
	typedef btIDebugDraw parent_t;
	typedef btIDebugDraw base_t;
	static luna_ConverterType converters[];
};

// Class: btIndexedMesh
template<>
class LunaTraits< btIndexedMesh > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btIndexedMesh* _bind_ctor(lua_State *L);
	static void _bind_dtor(btIndexedMesh* obj);
	typedef btIndexedMesh parent_t;
	typedef btIndexedMesh base_t;
	static luna_ConverterType converters[];
};

// Class: btInternalTriangleIndexCallback
template<>
class LunaTraits< btInternalTriangleIndexCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btInternalTriangleIndexCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(btInternalTriangleIndexCallback* obj);
	typedef btInternalTriangleIndexCallback parent_t;
	typedef btInternalTriangleIndexCallback base_t;
	static luna_ConverterType converters[];
};

// Class: btIntIndexData
template<>
class LunaTraits< btIntIndexData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btIntIndexData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btIntIndexData* obj);
	typedef btIntIndexData parent_t;
	typedef btIntIndexData base_t;
	static luna_ConverterType converters[];
};

// Class: btJacobianEntry
template<>
class LunaTraits< btJacobianEntry > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btJacobianEntry* _bind_ctor(lua_State *L);
	static void _bind_dtor(btJacobianEntry* obj);
	typedef btJacobianEntry parent_t;
	typedef btJacobianEntry base_t;
	static luna_ConverterType converters[];
};

// Class: btJointFeedback
template<>
class LunaTraits< btJointFeedback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btJointFeedback* _bind_ctor(lua_State *L);
	static void _bind_dtor(btJointFeedback* obj);
	typedef btJointFeedback parent_t;
	typedef btJointFeedback base_t;
	static luna_ConverterType converters[];
};

// Class: btKinematicCharacterController
template<>
class LunaTraits< btKinematicCharacterController > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btKinematicCharacterController* _bind_ctor(lua_State *L);
	static void _bind_dtor(btKinematicCharacterController* obj);
	typedef btActionInterface parent_t;
	typedef btKinematicCharacterController base_t;
	static luna_ConverterType converters[];
};

// Class: btManifoldPoint
template<>
class LunaTraits< btManifoldPoint > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btManifoldPoint* _bind_ctor(lua_State *L);
	static void _bind_dtor(btManifoldPoint* obj);
	typedef btManifoldPoint parent_t;
	typedef btManifoldPoint base_t;
	static luna_ConverterType converters[];
};

// Class: btManifoldResult
template<>
class LunaTraits< btManifoldResult > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btManifoldResult* _bind_ctor(lua_State *L);
	static void _bind_dtor(btManifoldResult* obj);
	typedef btDiscreteCollisionDetectorInterface::Result parent_t;
	typedef btManifoldResult base_t;
	static luna_ConverterType converters[];
};

// Class: btMaterial
template<>
class LunaTraits< btMaterial > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btMaterial* _bind_ctor(lua_State *L);
	static void _bind_dtor(btMaterial* obj);
	typedef btMaterial parent_t;
	typedef btMaterial base_t;
	static luna_ConverterType converters[];
};

// Class: btMaterialProperties
template<>
class LunaTraits< btMaterialProperties > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btMaterialProperties* _bind_ctor(lua_State *L);
	static void _bind_dtor(btMaterialProperties* obj);
	typedef btMaterialProperties parent_t;
	typedef btMaterialProperties base_t;
	static luna_ConverterType converters[];
};

// Class: btMatrix3x3
template<>
class LunaTraits< btMatrix3x3 > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btMatrix3x3* _bind_ctor(lua_State *L);
	static void _bind_dtor(btMatrix3x3* obj);
	typedef btMatrix3x3 parent_t;
	typedef btMatrix3x3 base_t;
	static luna_ConverterType converters[];
};

// Class: btMatrix3x3DoubleData
template<>
class LunaTraits< btMatrix3x3DoubleData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btMatrix3x3DoubleData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btMatrix3x3DoubleData* obj);
	typedef btMatrix3x3DoubleData parent_t;
	typedef btMatrix3x3DoubleData base_t;
	static luna_ConverterType converters[];
};

// Class: btMatrix3x3FloatData
template<>
class LunaTraits< btMatrix3x3FloatData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btMatrix3x3FloatData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btMatrix3x3FloatData* obj);
	typedef btMatrix3x3FloatData parent_t;
	typedef btMatrix3x3FloatData base_t;
	static luna_ConverterType converters[];
};

// Class: btMeshPartData
template<>
class LunaTraits< btMeshPartData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btMeshPartData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btMeshPartData* obj);
	typedef btMeshPartData parent_t;
	typedef btMeshPartData base_t;
	static luna_ConverterType converters[];
};

// Class: btMinkowskiPenetrationDepthSolver
template<>
class LunaTraits< btMinkowskiPenetrationDepthSolver > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btMinkowskiPenetrationDepthSolver* _bind_ctor(lua_State *L);
	static void _bind_dtor(btMinkowskiPenetrationDepthSolver* obj);
	typedef btConvexPenetrationDepthSolver parent_t;
	typedef btMinkowskiPenetrationDepthSolver base_t;
	static luna_ConverterType converters[];
};

// Class: btMinkowskiSumShape
template<>
class LunaTraits< btMinkowskiSumShape > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btMinkowskiSumShape* _bind_ctor(lua_State *L);
	static void _bind_dtor(btMinkowskiSumShape* obj);
	typedef btCollisionShape parent_t;
	typedef btMinkowskiSumShape base_t;
	static luna_ConverterType converters[];
};

// Class: btMultimaterialTriangleMeshShape
template<>
class LunaTraits< btMultimaterialTriangleMeshShape > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btMultimaterialTriangleMeshShape* _bind_ctor(lua_State *L);
	static void _bind_dtor(btMultimaterialTriangleMeshShape* obj);
	typedef btCollisionShape parent_t;
	typedef btMultimaterialTriangleMeshShape base_t;
	static luna_ConverterType converters[];
};

// Class: btMultiSapBroadphase
template<>
class LunaTraits< btMultiSapBroadphase > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btMultiSapBroadphase* _bind_ctor(lua_State *L);
	static void _bind_dtor(btMultiSapBroadphase* obj);
	typedef btBroadphaseInterface parent_t;
	typedef btMultiSapBroadphase base_t;
	static luna_ConverterType converters[];
};

// Class: btMultiSapBroadphase::btMultiSapProxy
template<>
class LunaTraits< btMultiSapBroadphase::btMultiSapProxy > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btMultiSapBroadphase::btMultiSapProxy* _bind_ctor(lua_State *L);
	static void _bind_dtor(btMultiSapBroadphase::btMultiSapProxy* obj);
	typedef btBroadphaseProxy parent_t;
	typedef btMultiSapBroadphase::btMultiSapProxy base_t;
	static luna_ConverterType converters[];
};

// Class: btMultiSphereShape
template<>
class LunaTraits< btMultiSphereShape > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btMultiSphereShape* _bind_ctor(lua_State *L);
	static void _bind_dtor(btMultiSphereShape* obj);
	typedef btCollisionShape parent_t;
	typedef btMultiSphereShape base_t;
	static luna_ConverterType converters[];
};

// Class: btMultiSphereShapeData
template<>
class LunaTraits< btMultiSphereShapeData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btMultiSphereShapeData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btMultiSphereShapeData* obj);
	typedef btMultiSphereShapeData parent_t;
	typedef btMultiSphereShapeData base_t;
	static luna_ConverterType converters[];
};

// Class: btNodeOverlapCallback
template<>
class LunaTraits< btNodeOverlapCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btNodeOverlapCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(btNodeOverlapCallback* obj);
	typedef btNodeOverlapCallback parent_t;
	typedef btNodeOverlapCallback base_t;
	static luna_ConverterType converters[];
};

// Class: btNullPairCache
template<>
class LunaTraits< btNullPairCache > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btNullPairCache* _bind_ctor(lua_State *L);
	static void _bind_dtor(btNullPairCache* obj);
	typedef btOverlappingPairCallback parent_t;
	typedef btNullPairCache base_t;
	static luna_ConverterType converters[];
};

// Class: btQuantizedBvh
template<>
class LunaTraits< btQuantizedBvh > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btQuantizedBvh* _bind_ctor(lua_State *L);
	static void _bind_dtor(btQuantizedBvh* obj);
	typedef btQuantizedBvh parent_t;
	typedef btQuantizedBvh base_t;
	static luna_ConverterType converters[];
};

// Class: btOptimizedBvh
template<>
class LunaTraits< btOptimizedBvh > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btOptimizedBvh* _bind_ctor(lua_State *L);
	static void _bind_dtor(btOptimizedBvh* obj);
	typedef btQuantizedBvh parent_t;
	typedef btOptimizedBvh base_t;
	static luna_ConverterType converters[];
};

// Class: btOptimizedBvhNode
template<>
class LunaTraits< btOptimizedBvhNode > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btOptimizedBvhNode* _bind_ctor(lua_State *L);
	static void _bind_dtor(btOptimizedBvhNode* obj);
	typedef btOptimizedBvhNode parent_t;
	typedef btOptimizedBvhNode base_t;
	static luna_ConverterType converters[];
};

// Class: btOptimizedBvhNodeDoubleData
template<>
class LunaTraits< btOptimizedBvhNodeDoubleData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btOptimizedBvhNodeDoubleData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btOptimizedBvhNodeDoubleData* obj);
	typedef btOptimizedBvhNodeDoubleData parent_t;
	typedef btOptimizedBvhNodeDoubleData base_t;
	static luna_ConverterType converters[];
};

// Class: btOptimizedBvhNodeFloatData
template<>
class LunaTraits< btOptimizedBvhNodeFloatData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btOptimizedBvhNodeFloatData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btOptimizedBvhNodeFloatData* obj);
	typedef btOptimizedBvhNodeFloatData parent_t;
	typedef btOptimizedBvhNodeFloatData base_t;
	static luna_ConverterType converters[];
};

// Class: btOverlapCallback
template<>
class LunaTraits< btOverlapCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btOverlapCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(btOverlapCallback* obj);
	typedef btOverlapCallback parent_t;
	typedef btOverlapCallback base_t;
	static luna_ConverterType converters[];
};

// Class: btOverlapFilterCallback
template<>
class LunaTraits< btOverlapFilterCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btOverlapFilterCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(btOverlapFilterCallback* obj);
	typedef btOverlapFilterCallback parent_t;
	typedef btOverlapFilterCallback base_t;
	static luna_ConverterType converters[];
};

// Class: btPairCachingGhostObject
template<>
class LunaTraits< btPairCachingGhostObject > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btPairCachingGhostObject* _bind_ctor(lua_State *L);
	static void _bind_dtor(btPairCachingGhostObject* obj);
	typedef btCollisionObject parent_t;
	typedef btPairCachingGhostObject base_t;
	static luna_ConverterType converters[];
};

// Class: btPersistentManifold
template<>
class LunaTraits< btPersistentManifold > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btPersistentManifold* _bind_ctor(lua_State *L);
	static void _bind_dtor(btPersistentManifold* obj);
	typedef btTypedObject parent_t;
	typedef btPersistentManifold base_t;
	static luna_ConverterType converters[];
};

// Class: btPlane
template<>
class LunaTraits< btPlane > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btPlane* _bind_ctor(lua_State *L);
	static void _bind_dtor(btPlane* obj);
	typedef btPlane parent_t;
	typedef btPlane base_t;
	static luna_ConverterType converters[];
};

// Class: btPoint2PointConstraint
template<>
class LunaTraits< btPoint2PointConstraint > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btPoint2PointConstraint* _bind_ctor(lua_State *L);
	static void _bind_dtor(btPoint2PointConstraint* obj);
	typedef btTypedObject parent_t;
	typedef btPoint2PointConstraint base_t;
	static luna_ConverterType converters[];
};

// Class: btPoint2PointConstraintDoubleData
template<>
class LunaTraits< btPoint2PointConstraintDoubleData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btPoint2PointConstraintDoubleData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btPoint2PointConstraintDoubleData* obj);
	typedef btPoint2PointConstraintDoubleData parent_t;
	typedef btPoint2PointConstraintDoubleData base_t;
	static luna_ConverterType converters[];
};

// Class: btPoint2PointConstraintFloatData
template<>
class LunaTraits< btPoint2PointConstraintFloatData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btPoint2PointConstraintFloatData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btPoint2PointConstraintFloatData* obj);
	typedef btPoint2PointConstraintFloatData parent_t;
	typedef btPoint2PointConstraintFloatData base_t;
	static luna_ConverterType converters[];
};

// Class: btPointCollector
template<>
class LunaTraits< btPointCollector > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btPointCollector* _bind_ctor(lua_State *L);
	static void _bind_dtor(btPointCollector* obj);
	typedef btDiscreteCollisionDetectorInterface::Result parent_t;
	typedef btPointCollector base_t;
	static luna_ConverterType converters[];
};

// Class: btPointerUid
template<>
class LunaTraits< btPointerUid > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btPointerUid* _bind_ctor(lua_State *L);
	static void _bind_dtor(btPointerUid* obj);
	typedef btPointerUid parent_t;
	typedef btPointerUid base_t;
	static luna_ConverterType converters[];
};

// Class: btPolarDecomposition
template<>
class LunaTraits< btPolarDecomposition > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btPolarDecomposition* _bind_ctor(lua_State *L);
	static void _bind_dtor(btPolarDecomposition* obj);
	typedef btPolarDecomposition parent_t;
	typedef btPolarDecomposition base_t;
	static luna_ConverterType converters[];
};

// Class: btPolyhedralContactClipping
template<>
class LunaTraits< btPolyhedralContactClipping > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btPolyhedralContactClipping* _bind_ctor(lua_State *L);
	static void _bind_dtor(btPolyhedralContactClipping* obj);
	typedef btPolyhedralContactClipping parent_t;
	typedef btPolyhedralContactClipping base_t;
	static luna_ConverterType converters[];
};

// Class: btPoolAllocator
template<>
class LunaTraits< btPoolAllocator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btPoolAllocator* _bind_ctor(lua_State *L);
	static void _bind_dtor(btPoolAllocator* obj);
	typedef btPoolAllocator parent_t;
	typedef btPoolAllocator base_t;
	static luna_ConverterType converters[];
};

// Class: btPositionAndRadius
template<>
class LunaTraits< btPositionAndRadius > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btPositionAndRadius* _bind_ctor(lua_State *L);
	static void _bind_dtor(btPositionAndRadius* obj);
	typedef btPositionAndRadius parent_t;
	typedef btPositionAndRadius base_t;
	static luna_ConverterType converters[];
};

// Class: btPrimitiveTriangle
template<>
class LunaTraits< btPrimitiveTriangle > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btPrimitiveTriangle* _bind_ctor(lua_State *L);
	static void _bind_dtor(btPrimitiveTriangle* obj);
	typedef btPrimitiveTriangle parent_t;
	typedef btPrimitiveTriangle base_t;
	static luna_ConverterType converters[];
};

// Class: btQuadWord
template<>
class LunaTraits< btQuadWord > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btQuadWord* _bind_ctor(lua_State *L);
	static void _bind_dtor(btQuadWord* obj);
	typedef btQuadWord parent_t;
	typedef btQuadWord base_t;
	static luna_ConverterType converters[];
};

// Class: btQuantizedBvhDoubleData
template<>
class LunaTraits< btQuantizedBvhDoubleData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btQuantizedBvhDoubleData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btQuantizedBvhDoubleData* obj);
	typedef btQuantizedBvhDoubleData parent_t;
	typedef btQuantizedBvhDoubleData base_t;
	static luna_ConverterType converters[];
};

// Class: btQuantizedBvhFloatData
template<>
class LunaTraits< btQuantizedBvhFloatData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btQuantizedBvhFloatData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btQuantizedBvhFloatData* obj);
	typedef btQuantizedBvhFloatData parent_t;
	typedef btQuantizedBvhFloatData base_t;
	static luna_ConverterType converters[];
};

// Class: btQuantizedBvhNode
template<>
class LunaTraits< btQuantizedBvhNode > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btQuantizedBvhNode* _bind_ctor(lua_State *L);
	static void _bind_dtor(btQuantizedBvhNode* obj);
	typedef btQuantizedBvhNode parent_t;
	typedef btQuantizedBvhNode base_t;
	static luna_ConverterType converters[];
};

// Class: btQuantizedBvhNodeData
template<>
class LunaTraits< btQuantizedBvhNodeData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btQuantizedBvhNodeData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btQuantizedBvhNodeData* obj);
	typedef btQuantizedBvhNodeData parent_t;
	typedef btQuantizedBvhNodeData base_t;
	static luna_ConverterType converters[];
};

// Class: btQuantizedBvhTree
template<>
class LunaTraits< btQuantizedBvhTree > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btQuantizedBvhTree* _bind_ctor(lua_State *L);
	static void _bind_dtor(btQuantizedBvhTree* obj);
	typedef btQuantizedBvhTree parent_t;
	typedef btQuantizedBvhTree base_t;
	static luna_ConverterType converters[];
};

// Class: btQuaternion
template<>
class LunaTraits< btQuaternion > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btQuaternion* _bind_ctor(lua_State *L);
	static void _bind_dtor(btQuaternion* obj);
	typedef btQuadWord parent_t;
	typedef btQuaternion base_t;
	static luna_ConverterType converters[];
};

// Class: btRaycastVehicle
template<>
class LunaTraits< btRaycastVehicle > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btRaycastVehicle* _bind_ctor(lua_State *L);
	static void _bind_dtor(btRaycastVehicle* obj);
	typedef btActionInterface parent_t;
	typedef btRaycastVehicle base_t;
	static luna_ConverterType converters[];
};

// Class: btRaycastVehicle::btVehicleTuning
template<>
class LunaTraits< btRaycastVehicle::btVehicleTuning > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btRaycastVehicle::btVehicleTuning* _bind_ctor(lua_State *L);
	static void _bind_dtor(btRaycastVehicle::btVehicleTuning* obj);
	typedef btRaycastVehicle::btVehicleTuning parent_t;
	typedef btRaycastVehicle::btVehicleTuning base_t;
	static luna_ConverterType converters[];
};

// Class: btRigidBody
template<>
class LunaTraits< btRigidBody > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btRigidBody* _bind_ctor(lua_State *L);
	static void _bind_dtor(btRigidBody* obj);
	typedef btCollisionObject parent_t;
	typedef btRigidBody base_t;
	static luna_ConverterType converters[];
};

// Class: btRigidBody::btRigidBodyConstructionInfo
template<>
class LunaTraits< btRigidBody::btRigidBodyConstructionInfo > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btRigidBody::btRigidBodyConstructionInfo* _bind_ctor(lua_State *L);
	static void _bind_dtor(btRigidBody::btRigidBodyConstructionInfo* obj);
	typedef btRigidBody::btRigidBodyConstructionInfo parent_t;
	typedef btRigidBody::btRigidBodyConstructionInfo base_t;
	static luna_ConverterType converters[];
};

// Class: btRigidBodyDoubleData
template<>
class LunaTraits< btRigidBodyDoubleData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btRigidBodyDoubleData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btRigidBodyDoubleData* obj);
	typedef btRigidBodyDoubleData parent_t;
	typedef btRigidBodyDoubleData base_t;
	static luna_ConverterType converters[];
};

// Class: btRigidBodyFloatData
template<>
class LunaTraits< btRigidBodyFloatData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btRigidBodyFloatData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btRigidBodyFloatData* obj);
	typedef btRigidBodyFloatData parent_t;
	typedef btRigidBodyFloatData base_t;
	static luna_ConverterType converters[];
};

// Class: btRotationalLimitMotor
template<>
class LunaTraits< btRotationalLimitMotor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btRotationalLimitMotor* _bind_ctor(lua_State *L);
	static void _bind_dtor(btRotationalLimitMotor* obj);
	typedef btRotationalLimitMotor parent_t;
	typedef btRotationalLimitMotor base_t;
	static luna_ConverterType converters[];
};

// Class: btScaledBvhTriangleMeshShape
template<>
class LunaTraits< btScaledBvhTriangleMeshShape > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btScaledBvhTriangleMeshShape* _bind_ctor(lua_State *L);
	static void _bind_dtor(btScaledBvhTriangleMeshShape* obj);
	typedef btCollisionShape parent_t;
	typedef btScaledBvhTriangleMeshShape base_t;
	static luna_ConverterType converters[];
};

// Class: btScaledTriangleMeshShapeData
template<>
class LunaTraits< btScaledTriangleMeshShapeData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btScaledTriangleMeshShapeData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btScaledTriangleMeshShapeData* obj);
	typedef btScaledTriangleMeshShapeData parent_t;
	typedef btScaledTriangleMeshShapeData base_t;
	static luna_ConverterType converters[];
};

// Class: btSequentialImpulseConstraintSolver
template<>
class LunaTraits< btSequentialImpulseConstraintSolver > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btSequentialImpulseConstraintSolver* _bind_ctor(lua_State *L);
	static void _bind_dtor(btSequentialImpulseConstraintSolver* obj);
	typedef btConstraintSolver parent_t;
	typedef btSequentialImpulseConstraintSolver base_t;
	static luna_ConverterType converters[];
};

// Class: btShapeHull
template<>
class LunaTraits< btShapeHull > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btShapeHull* _bind_ctor(lua_State *L);
	static void _bind_dtor(btShapeHull* obj);
	typedef btShapeHull parent_t;
	typedef btShapeHull base_t;
	static luna_ConverterType converters[];
};

// Class: btShortIntIndexData
template<>
class LunaTraits< btShortIntIndexData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btShortIntIndexData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btShortIntIndexData* obj);
	typedef btShortIntIndexData parent_t;
	typedef btShortIntIndexData base_t;
	static luna_ConverterType converters[];
};

// Class: btShortIntIndexTripletData
template<>
class LunaTraits< btShortIntIndexTripletData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btShortIntIndexTripletData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btShortIntIndexTripletData* obj);
	typedef btShortIntIndexTripletData parent_t;
	typedef btShortIntIndexTripletData base_t;
	static luna_ConverterType converters[];
};

// Class: btSimpleBroadphase
template<>
class LunaTraits< btSimpleBroadphase > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btSimpleBroadphase* _bind_ctor(lua_State *L);
	static void _bind_dtor(btSimpleBroadphase* obj);
	typedef btBroadphaseInterface parent_t;
	typedef btSimpleBroadphase base_t;
	static luna_ConverterType converters[];
};

// Class: btSimpleBroadphaseProxy
template<>
class LunaTraits< btSimpleBroadphaseProxy > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btSimpleBroadphaseProxy* _bind_ctor(lua_State *L);
	static void _bind_dtor(btSimpleBroadphaseProxy* obj);
	typedef btBroadphaseProxy parent_t;
	typedef btSimpleBroadphaseProxy base_t;
	static luna_ConverterType converters[];
};

// Class: btSimpleDynamicsWorld
template<>
class LunaTraits< btSimpleDynamicsWorld > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btSimpleDynamicsWorld* _bind_ctor(lua_State *L);
	static void _bind_dtor(btSimpleDynamicsWorld* obj);
	typedef btCollisionWorld parent_t;
	typedef btSimpleDynamicsWorld base_t;
	static luna_ConverterType converters[];
};

// Class: btSimulationIslandManager
template<>
class LunaTraits< btSimulationIslandManager > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btSimulationIslandManager* _bind_ctor(lua_State *L);
	static void _bind_dtor(btSimulationIslandManager* obj);
	typedef btSimulationIslandManager parent_t;
	typedef btSimulationIslandManager base_t;
	static luna_ConverterType converters[];
};

// Class: btSimulationIslandManager::IslandCallback
template<>
class LunaTraits< btSimulationIslandManager::IslandCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btSimulationIslandManager::IslandCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(btSimulationIslandManager::IslandCallback* obj);
	typedef btSimulationIslandManager::IslandCallback parent_t;
	typedef btSimulationIslandManager::IslandCallback base_t;
	static luna_ConverterType converters[];
};

// Class: btSliderConstraint
template<>
class LunaTraits< btSliderConstraint > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btSliderConstraint* _bind_ctor(lua_State *L);
	static void _bind_dtor(btSliderConstraint* obj);
	typedef btTypedObject parent_t;
	typedef btSliderConstraint base_t;
	static luna_ConverterType converters[];
};

// Class: btSliderConstraintData
template<>
class LunaTraits< btSliderConstraintData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btSliderConstraintData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btSliderConstraintData* obj);
	typedef btSliderConstraintData parent_t;
	typedef btSliderConstraintData base_t;
	static luna_ConverterType converters[];
};

// Class: btSolve2LinearConstraint
template<>
class LunaTraits< btSolve2LinearConstraint > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btSolve2LinearConstraint* _bind_ctor(lua_State *L);
	static void _bind_dtor(btSolve2LinearConstraint* obj);
	typedef btSolve2LinearConstraint parent_t;
	typedef btSolve2LinearConstraint base_t;
	static luna_ConverterType converters[];
};

// Class: btSolverBody
template<>
class LunaTraits< btSolverBody > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btSolverBody* _bind_ctor(lua_State *L);
	static void _bind_dtor(btSolverBody* obj);
	typedef btSolverBody parent_t;
	typedef btSolverBody base_t;
	static luna_ConverterType converters[];
};

// Class: btSolverConstraint
template<>
class LunaTraits< btSolverConstraint > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btSolverConstraint* _bind_ctor(lua_State *L);
	static void _bind_dtor(btSolverConstraint* obj);
	typedef btSolverConstraint parent_t;
	typedef btSolverConstraint base_t;
	static luna_ConverterType converters[];
};

// Class: btSortedOverlappingPairCache
template<>
class LunaTraits< btSortedOverlappingPairCache > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btSortedOverlappingPairCache* _bind_ctor(lua_State *L);
	static void _bind_dtor(btSortedOverlappingPairCache* obj);
	typedef btOverlappingPairCallback parent_t;
	typedef btSortedOverlappingPairCache base_t;
	static luna_ConverterType converters[];
};

// Class: btSphereBoxCollisionAlgorithm
template<>
class LunaTraits< btSphereBoxCollisionAlgorithm > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btSphereBoxCollisionAlgorithm* _bind_ctor(lua_State *L);
	static void _bind_dtor(btSphereBoxCollisionAlgorithm* obj);
	typedef btCollisionAlgorithm parent_t;
	typedef btSphereBoxCollisionAlgorithm base_t;
	static luna_ConverterType converters[];
};

// Class: btSphereBoxCollisionAlgorithm::CreateFunc
template<>
class LunaTraits< btSphereBoxCollisionAlgorithm::CreateFunc > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btSphereBoxCollisionAlgorithm::CreateFunc* _bind_ctor(lua_State *L);
	static void _bind_dtor(btSphereBoxCollisionAlgorithm::CreateFunc* obj);
	typedef btCollisionAlgorithmCreateFunc parent_t;
	typedef btSphereBoxCollisionAlgorithm::CreateFunc base_t;
	static luna_ConverterType converters[];
};

// Class: btSphereShape
template<>
class LunaTraits< btSphereShape > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btSphereShape* _bind_ctor(lua_State *L);
	static void _bind_dtor(btSphereShape* obj);
	typedef btCollisionShape parent_t;
	typedef btSphereShape base_t;
	static luna_ConverterType converters[];
};

// Class: btSphereSphereCollisionAlgorithm
template<>
class LunaTraits< btSphereSphereCollisionAlgorithm > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btSphereSphereCollisionAlgorithm* _bind_ctor(lua_State *L);
	static void _bind_dtor(btSphereSphereCollisionAlgorithm* obj);
	typedef btCollisionAlgorithm parent_t;
	typedef btSphereSphereCollisionAlgorithm base_t;
	static luna_ConverterType converters[];
};

// Class: btSphereSphereCollisionAlgorithm::CreateFunc
template<>
class LunaTraits< btSphereSphereCollisionAlgorithm::CreateFunc > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btSphereSphereCollisionAlgorithm::CreateFunc* _bind_ctor(lua_State *L);
	static void _bind_dtor(btSphereSphereCollisionAlgorithm::CreateFunc* obj);
	typedef btCollisionAlgorithmCreateFunc parent_t;
	typedef btSphereSphereCollisionAlgorithm::CreateFunc base_t;
	static luna_ConverterType converters[];
};

// Class: btSphereTriangleCollisionAlgorithm
template<>
class LunaTraits< btSphereTriangleCollisionAlgorithm > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btSphereTriangleCollisionAlgorithm* _bind_ctor(lua_State *L);
	static void _bind_dtor(btSphereTriangleCollisionAlgorithm* obj);
	typedef btCollisionAlgorithm parent_t;
	typedef btSphereTriangleCollisionAlgorithm base_t;
	static luna_ConverterType converters[];
};

// Class: btSphereTriangleCollisionAlgorithm::CreateFunc
template<>
class LunaTraits< btSphereTriangleCollisionAlgorithm::CreateFunc > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btSphereTriangleCollisionAlgorithm::CreateFunc* _bind_ctor(lua_State *L);
	static void _bind_dtor(btSphereTriangleCollisionAlgorithm::CreateFunc* obj);
	typedef btCollisionAlgorithmCreateFunc parent_t;
	typedef btSphereTriangleCollisionAlgorithm::CreateFunc base_t;
	static luna_ConverterType converters[];
};

// Class: btStackAlloc
template<>
class LunaTraits< btStackAlloc > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btStackAlloc* _bind_ctor(lua_State *L);
	static void _bind_dtor(btStackAlloc* obj);
	typedef btStackAlloc parent_t;
	typedef btStackAlloc base_t;
	static luna_ConverterType converters[];
};

// Class: btStaticPlaneShape
template<>
class LunaTraits< btStaticPlaneShape > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btStaticPlaneShape* _bind_ctor(lua_State *L);
	static void _bind_dtor(btStaticPlaneShape* obj);
	typedef btCollisionShape parent_t;
	typedef btStaticPlaneShape base_t;
	static luna_ConverterType converters[];
};

// Class: btStaticPlaneShapeData
template<>
class LunaTraits< btStaticPlaneShapeData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btStaticPlaneShapeData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btStaticPlaneShapeData* obj);
	typedef btStaticPlaneShapeData parent_t;
	typedef btStaticPlaneShapeData base_t;
	static luna_ConverterType converters[];
};

// Class: btStorageResult
template<>
class LunaTraits< btStorageResult > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btStorageResult* _bind_ctor(lua_State *L);
	static void _bind_dtor(btStorageResult* obj);
	typedef btDiscreteCollisionDetectorInterface::Result parent_t;
	typedef btStorageResult base_t;
	static luna_ConverterType converters[];
};

// Class: btStridingMeshInterface
template<>
class LunaTraits< btStridingMeshInterface > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btStridingMeshInterface* _bind_ctor(lua_State *L);
	static void _bind_dtor(btStridingMeshInterface* obj);
	typedef btStridingMeshInterface parent_t;
	typedef btStridingMeshInterface base_t;
	static luna_ConverterType converters[];
};

// Class: btStridingMeshInterfaceData
template<>
class LunaTraits< btStridingMeshInterfaceData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btStridingMeshInterfaceData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btStridingMeshInterfaceData* obj);
	typedef btStridingMeshInterfaceData parent_t;
	typedef btStridingMeshInterfaceData base_t;
	static luna_ConverterType converters[];
};

// Class: btSubSimplexClosestResult
template<>
class LunaTraits< btSubSimplexClosestResult > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btSubSimplexClosestResult* _bind_ctor(lua_State *L);
	static void _bind_dtor(btSubSimplexClosestResult* obj);
	typedef btSubSimplexClosestResult parent_t;
	typedef btSubSimplexClosestResult base_t;
	static luna_ConverterType converters[];
};

// Class: btSubsimplexConvexCast
template<>
class LunaTraits< btSubsimplexConvexCast > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btSubsimplexConvexCast* _bind_ctor(lua_State *L);
	static void _bind_dtor(btSubsimplexConvexCast* obj);
	typedef btConvexCast parent_t;
	typedef btSubsimplexConvexCast base_t;
	static luna_ConverterType converters[];
};

// Class: btTetrahedronShapeEx
template<>
class LunaTraits< btTetrahedronShapeEx > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btTetrahedronShapeEx* _bind_ctor(lua_State *L);
	static void _bind_dtor(btTetrahedronShapeEx* obj);
	typedef btCollisionShape parent_t;
	typedef btTetrahedronShapeEx base_t;
	static luna_ConverterType converters[];
};

// Class: btTransform
template<>
class LunaTraits< btTransform > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btTransform* _bind_ctor(lua_State *L);
	static void _bind_dtor(btTransform* obj);
	typedef btTransform parent_t;
	typedef btTransform base_t;
	static luna_ConverterType converters[];
};

// Class: btTransformDoubleData
template<>
class LunaTraits< btTransformDoubleData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btTransformDoubleData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btTransformDoubleData* obj);
	typedef btTransformDoubleData parent_t;
	typedef btTransformDoubleData base_t;
	static luna_ConverterType converters[];
};

// Class: btTransformFloatData
template<>
class LunaTraits< btTransformFloatData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btTransformFloatData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btTransformFloatData* obj);
	typedef btTransformFloatData parent_t;
	typedef btTransformFloatData base_t;
	static luna_ConverterType converters[];
};

// Class: btTransformUtil
template<>
class LunaTraits< btTransformUtil > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btTransformUtil* _bind_ctor(lua_State *L);
	static void _bind_dtor(btTransformUtil* obj);
	typedef btTransformUtil parent_t;
	typedef btTransformUtil base_t;
	static luna_ConverterType converters[];
};

// Class: btTranslationalLimitMotor
template<>
class LunaTraits< btTranslationalLimitMotor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btTranslationalLimitMotor* _bind_ctor(lua_State *L);
	static void _bind_dtor(btTranslationalLimitMotor* obj);
	typedef btTranslationalLimitMotor parent_t;
	typedef btTranslationalLimitMotor base_t;
	static luna_ConverterType converters[];
};

// Class: btTriangle
template<>
class LunaTraits< btTriangle > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btTriangle* _bind_ctor(lua_State *L);
	static void _bind_dtor(btTriangle* obj);
	typedef btTriangle parent_t;
	typedef btTriangle base_t;
	static luna_ConverterType converters[];
};

// Class: btTriangleBuffer
template<>
class LunaTraits< btTriangleBuffer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btTriangleBuffer* _bind_ctor(lua_State *L);
	static void _bind_dtor(btTriangleBuffer* obj);
	typedef btTriangleCallback parent_t;
	typedef btTriangleBuffer base_t;
	static luna_ConverterType converters[];
};

// Class: btTriangleConvexcastCallback
template<>
class LunaTraits< btTriangleConvexcastCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btTriangleConvexcastCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(btTriangleConvexcastCallback* obj);
	typedef btTriangleCallback parent_t;
	typedef btTriangleConvexcastCallback base_t;
	static luna_ConverterType converters[];
};

// Class: btTriangleIndexVertexArray
template<>
class LunaTraits< btTriangleIndexVertexArray > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btTriangleIndexVertexArray* _bind_ctor(lua_State *L);
	static void _bind_dtor(btTriangleIndexVertexArray* obj);
	typedef btStridingMeshInterface parent_t;
	typedef btTriangleIndexVertexArray base_t;
	static luna_ConverterType converters[];
};

// Class: btTriangleIndexVertexMaterialArray
template<>
class LunaTraits< btTriangleIndexVertexMaterialArray > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btTriangleIndexVertexMaterialArray* _bind_ctor(lua_State *L);
	static void _bind_dtor(btTriangleIndexVertexMaterialArray* obj);
	typedef btStridingMeshInterface parent_t;
	typedef btTriangleIndexVertexMaterialArray base_t;
	static luna_ConverterType converters[];
};

// Class: btTriangleInfo
template<>
class LunaTraits< btTriangleInfo > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btTriangleInfo* _bind_ctor(lua_State *L);
	static void _bind_dtor(btTriangleInfo* obj);
	typedef btTriangleInfo parent_t;
	typedef btTriangleInfo base_t;
	static luna_ConverterType converters[];
};

// Class: btTriangleInfoData
template<>
class LunaTraits< btTriangleInfoData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btTriangleInfoData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btTriangleInfoData* obj);
	typedef btTriangleInfoData parent_t;
	typedef btTriangleInfoData base_t;
	static luna_ConverterType converters[];
};

// Class: btTriangleInfoMapData
template<>
class LunaTraits< btTriangleInfoMapData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btTriangleInfoMapData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btTriangleInfoMapData* obj);
	typedef btTriangleInfoMapData parent_t;
	typedef btTriangleInfoMapData base_t;
	static luna_ConverterType converters[];
};

// Class: btTriangleMesh
template<>
class LunaTraits< btTriangleMesh > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btTriangleMesh* _bind_ctor(lua_State *L);
	static void _bind_dtor(btTriangleMesh* obj);
	typedef btStridingMeshInterface parent_t;
	typedef btTriangleMesh base_t;
	static luna_ConverterType converters[];
};

// Class: btTriangleMeshShapeData
template<>
class LunaTraits< btTriangleMeshShapeData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btTriangleMeshShapeData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btTriangleMeshShapeData* obj);
	typedef btTriangleMeshShapeData parent_t;
	typedef btTriangleMeshShapeData base_t;
	static luna_ConverterType converters[];
};

// Class: btTriangleRaycastCallback
template<>
class LunaTraits< btTriangleRaycastCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btTriangleRaycastCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(btTriangleRaycastCallback* obj);
	typedef btTriangleCallback parent_t;
	typedef btTriangleRaycastCallback base_t;
	static luna_ConverterType converters[];
};

// Class: btTriangleShape
template<>
class LunaTraits< btTriangleShape > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btTriangleShape* _bind_ctor(lua_State *L);
	static void _bind_dtor(btTriangleShape* obj);
	typedef btCollisionShape parent_t;
	typedef btTriangleShape base_t;
	static luna_ConverterType converters[];
};

// Class: btTriangleShapeEx
template<>
class LunaTraits< btTriangleShapeEx > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btTriangleShapeEx* _bind_ctor(lua_State *L);
	static void _bind_dtor(btTriangleShapeEx* obj);
	typedef btCollisionShape parent_t;
	typedef btTriangleShapeEx base_t;
	static luna_ConverterType converters[];
};

// Class: btTypedConstraint::btConstraintInfo1
template<>
class LunaTraits< btTypedConstraint::btConstraintInfo1 > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btTypedConstraint::btConstraintInfo1* _bind_ctor(lua_State *L);
	static void _bind_dtor(btTypedConstraint::btConstraintInfo1* obj);
	typedef btTypedConstraint::btConstraintInfo1 parent_t;
	typedef btTypedConstraint::btConstraintInfo1 base_t;
	static luna_ConverterType converters[];
};

// Class: btTypedConstraint::btConstraintInfo2
template<>
class LunaTraits< btTypedConstraint::btConstraintInfo2 > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btTypedConstraint::btConstraintInfo2* _bind_ctor(lua_State *L);
	static void _bind_dtor(btTypedConstraint::btConstraintInfo2* obj);
	typedef btTypedConstraint::btConstraintInfo2 parent_t;
	typedef btTypedConstraint::btConstraintInfo2 base_t;
	static luna_ConverterType converters[];
};

// Class: btTypedConstraintData
template<>
class LunaTraits< btTypedConstraintData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btTypedConstraintData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btTypedConstraintData* obj);
	typedef btTypedConstraintData parent_t;
	typedef btTypedConstraintData base_t;
	static luna_ConverterType converters[];
};

// Class: btUniformScalingShape
template<>
class LunaTraits< btUniformScalingShape > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btUniformScalingShape* _bind_ctor(lua_State *L);
	static void _bind_dtor(btUniformScalingShape* obj);
	typedef btCollisionShape parent_t;
	typedef btUniformScalingShape base_t;
	static luna_ConverterType converters[];
};

// Class: btUnionFind
template<>
class LunaTraits< btUnionFind > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btUnionFind* _bind_ctor(lua_State *L);
	static void _bind_dtor(btUnionFind* obj);
	typedef btUnionFind parent_t;
	typedef btUnionFind base_t;
	static luna_ConverterType converters[];
};

// Class: btUniversalConstraint
template<>
class LunaTraits< btUniversalConstraint > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btUniversalConstraint* _bind_ctor(lua_State *L);
	static void _bind_dtor(btUniversalConstraint* obj);
	typedef btTypedObject parent_t;
	typedef btUniversalConstraint base_t;
	static luna_ConverterType converters[];
};

// Class: btUsageBitfield
template<>
class LunaTraits< btUsageBitfield > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btUsageBitfield* _bind_ctor(lua_State *L);
	static void _bind_dtor(btUsageBitfield* obj);
	typedef btUsageBitfield parent_t;
	typedef btUsageBitfield base_t;
	static luna_ConverterType converters[];
};

// Class: btVector3
template<>
class LunaTraits< btVector3 > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btVector3* _bind_ctor(lua_State *L);
	static void _bind_dtor(btVector3* obj);
	typedef btVector3 parent_t;
	typedef btVector3 base_t;
	static luna_ConverterType converters[];
};

// Class: btVector3DoubleData
template<>
class LunaTraits< btVector3DoubleData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btVector3DoubleData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btVector3DoubleData* obj);
	typedef btVector3DoubleData parent_t;
	typedef btVector3DoubleData base_t;
	static luna_ConverterType converters[];
};

// Class: btVector3FloatData
template<>
class LunaTraits< btVector3FloatData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btVector3FloatData* _bind_ctor(lua_State *L);
	static void _bind_dtor(btVector3FloatData* obj);
	typedef btVector3FloatData parent_t;
	typedef btVector3FloatData base_t;
	static luna_ConverterType converters[];
};

// Class: btVector4
template<>
class LunaTraits< btVector4 > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btVector4* _bind_ctor(lua_State *L);
	static void _bind_dtor(btVector4* obj);
	typedef btVector3 parent_t;
	typedef btVector4 base_t;
	static luna_ConverterType converters[];
};

// Class: btVehicleRaycaster::btVehicleRaycasterResult
template<>
class LunaTraits< btVehicleRaycaster::btVehicleRaycasterResult > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btVehicleRaycaster::btVehicleRaycasterResult* _bind_ctor(lua_State *L);
	static void _bind_dtor(btVehicleRaycaster::btVehicleRaycasterResult* obj);
	typedef btVehicleRaycaster::btVehicleRaycasterResult parent_t;
	typedef btVehicleRaycaster::btVehicleRaycasterResult base_t;
	static luna_ConverterType converters[];
};

// Class: btVoronoiSimplexSolver
template<>
class LunaTraits< btVoronoiSimplexSolver > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btVoronoiSimplexSolver* _bind_ctor(lua_State *L);
	static void _bind_dtor(btVoronoiSimplexSolver* obj);
	typedef btVoronoiSimplexSolver parent_t;
	typedef btVoronoiSimplexSolver base_t;
	static luna_ConverterType converters[];
};

// Class: btWheelInfo
template<>
class LunaTraits< btWheelInfo > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btWheelInfo* _bind_ctor(lua_State *L);
	static void _bind_dtor(btWheelInfo* obj);
	typedef btWheelInfo parent_t;
	typedef btWheelInfo base_t;
	static luna_ConverterType converters[];
};

// Class: btWheelInfo::RaycastInfo
template<>
class LunaTraits< btWheelInfo::RaycastInfo > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btWheelInfo::RaycastInfo* _bind_ctor(lua_State *L);
	static void _bind_dtor(btWheelInfo::RaycastInfo* obj);
	typedef btWheelInfo::RaycastInfo parent_t;
	typedef btWheelInfo::RaycastInfo base_t;
	static luna_ConverterType converters[];
};

// Class: btWheelInfoConstructionInfo
template<>
class LunaTraits< btWheelInfoConstructionInfo > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btWheelInfoConstructionInfo* _bind_ctor(lua_State *L);
	static void _bind_dtor(btWheelInfoConstructionInfo* obj);
	typedef btWheelInfoConstructionInfo parent_t;
	typedef btWheelInfoConstructionInfo base_t;
	static luna_ConverterType converters[];
};

// Class: ConvexH
template<>
class LunaTraits< ConvexH > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ConvexH* _bind_ctor(lua_State *L);
	static void _bind_dtor(ConvexH* obj);
	typedef ConvexH parent_t;
	typedef ConvexH base_t;
	static luna_ConverterType converters[];
};

// Class: ConvexH::HalfEdge
template<>
class LunaTraits< ConvexH::HalfEdge > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ConvexH::HalfEdge* _bind_ctor(lua_State *L);
	static void _bind_dtor(ConvexH::HalfEdge* obj);
	typedef ConvexH::HalfEdge parent_t;
	typedef ConvexH::HalfEdge base_t;
	static luna_ConverterType converters[];
};

// Class: CProfileIterator
template<>
class LunaTraits< CProfileIterator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static CProfileIterator* _bind_ctor(lua_State *L);
	static void _bind_dtor(CProfileIterator* obj);
	typedef CProfileIterator parent_t;
	typedef CProfileIterator base_t;
	static luna_ConverterType converters[];
};

// Class: CProfileManager
template<>
class LunaTraits< CProfileManager > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static CProfileManager* _bind_ctor(lua_State *L);
	static void _bind_dtor(CProfileManager* obj);
	typedef CProfileManager parent_t;
	typedef CProfileManager base_t;
	static luna_ConverterType converters[];
};

// Class: CProfileNode
template<>
class LunaTraits< CProfileNode > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static CProfileNode* _bind_ctor(lua_State *L);
	static void _bind_dtor(CProfileNode* obj);
	typedef CProfileNode parent_t;
	typedef CProfileNode base_t;
	static luna_ConverterType converters[];
};

// Class: CProfileSample
template<>
class LunaTraits< CProfileSample > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static CProfileSample* _bind_ctor(lua_State *L);
	static void _bind_dtor(CProfileSample* obj);
	typedef CProfileSample parent_t;
	typedef CProfileSample base_t;
	static luna_ConverterType converters[];
};

// Class: GIM_BVH_DATA
template<>
class LunaTraits< GIM_BVH_DATA > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static GIM_BVH_DATA* _bind_ctor(lua_State *L);
	static void _bind_dtor(GIM_BVH_DATA* obj);
	typedef GIM_BVH_DATA parent_t;
	typedef GIM_BVH_DATA base_t;
	static luna_ConverterType converters[];
};

// Class: GIM_BVH_TREE_NODE
template<>
class LunaTraits< GIM_BVH_TREE_NODE > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static GIM_BVH_TREE_NODE* _bind_ctor(lua_State *L);
	static void _bind_dtor(GIM_BVH_TREE_NODE* obj);
	typedef GIM_BVH_TREE_NODE parent_t;
	typedef GIM_BVH_TREE_NODE base_t;
	static luna_ConverterType converters[];
};

// Class: GIM_CONTACT
template<>
class LunaTraits< GIM_CONTACT > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static GIM_CONTACT* _bind_ctor(lua_State *L);
	static void _bind_dtor(GIM_CONTACT* obj);
	typedef GIM_CONTACT parent_t;
	typedef GIM_CONTACT base_t;
	static luna_ConverterType converters[];
};

// Class: GIM_PAIR
template<>
class LunaTraits< GIM_PAIR > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static GIM_PAIR* _bind_ctor(lua_State *L);
	static void _bind_dtor(GIM_PAIR* obj);
	typedef GIM_PAIR parent_t;
	typedef GIM_PAIR base_t;
	static luna_ConverterType converters[];
};

// Class: GIM_TRIANGLE_CONTACT
template<>
class LunaTraits< GIM_TRIANGLE_CONTACT > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static GIM_TRIANGLE_CONTACT* _bind_ctor(lua_State *L);
	static void _bind_dtor(GIM_TRIANGLE_CONTACT* obj);
	typedef GIM_TRIANGLE_CONTACT parent_t;
	typedef GIM_TRIANGLE_CONTACT base_t;
	static luna_ConverterType converters[];
};

// Class: GrahamVector3
template<>
class LunaTraits< GrahamVector3 > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static GrahamVector3* _bind_ctor(lua_State *L);
	static void _bind_dtor(GrahamVector3* obj);
	typedef btVector3 parent_t;
	typedef GrahamVector3 base_t;
	static luna_ConverterType converters[];
};

// Class: HullDesc
template<>
class LunaTraits< HullDesc > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static HullDesc* _bind_ctor(lua_State *L);
	static void _bind_dtor(HullDesc* obj);
	typedef HullDesc parent_t;
	typedef HullDesc base_t;
	static luna_ConverterType converters[];
};

// Class: HullLibrary
template<>
class LunaTraits< HullLibrary > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static HullLibrary* _bind_ctor(lua_State *L);
	static void _bind_dtor(HullLibrary* obj);
	typedef HullLibrary parent_t;
	typedef HullLibrary base_t;
	static luna_ConverterType converters[];
};

// Class: HullResult
template<>
class LunaTraits< HullResult > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static HullResult* _bind_ctor(lua_State *L);
	static void _bind_dtor(HullResult* obj);
	typedef HullResult parent_t;
	typedef HullResult base_t;
	static luna_ConverterType converters[];
};

// Class: int4
template<>
class LunaTraits< int4 > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static int4* _bind_ctor(lua_State *L);
	static void _bind_dtor(int4* obj);
	typedef int4 parent_t;
	typedef int4 base_t;
	static luna_ConverterType converters[];
};

// Class: PHullResult
template<>
class LunaTraits< PHullResult > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static PHullResult* _bind_ctor(lua_State *L);
	static void _bind_dtor(PHullResult* obj);
	typedef PHullResult parent_t;
	typedef PHullResult base_t;
	static luna_ConverterType converters[];
};

// Class: osgGA::GUIEventHandler
template<>
class LunaTraits< osgGA::GUIEventHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgGA::GUIEventHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgGA::GUIEventHandler* obj);
	typedef osg::Referenced parent_t;
	typedef osgGA::GUIEventHandler base_t;
	static luna_ConverterType converters[];
};

// Class: SampleRigidUpdater
template<>
class LunaTraits< SampleRigidUpdater > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SampleRigidUpdater* _bind_ctor(lua_State *L);
	static void _bind_dtor(SampleRigidUpdater* obj);
	typedef osg::Referenced parent_t;
	typedef SampleRigidUpdater base_t;
	static luna_ConverterType converters[];
};

// Class: SphereTriangleDetector
template<>
class LunaTraits< SphereTriangleDetector > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SphereTriangleDetector* _bind_ctor(lua_State *L);
	static void _bind_dtor(SphereTriangleDetector* obj);
	typedef btDiscreteCollisionDetectorInterface parent_t;
	typedef SphereTriangleDetector base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Vec3f
template<>
class LunaTraits< osg::Vec3f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Vec3f* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Vec3f* obj);
	typedef osg::Vec3f parent_t;
	typedef osg::Vec3f base_t;
	static luna_ConverterType converters[];
};

// Class: btAlignedObjectArray< btPersistentManifold * >
template<>
class LunaTraits< btAlignedObjectArray< btPersistentManifold * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btAlignedObjectArray< btPersistentManifold * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(btAlignedObjectArray< btPersistentManifold * >* obj);
	typedef btAlignedObjectArray< btPersistentManifold * > parent_t;
	typedef btAlignedObjectArray< btPersistentManifold * > base_t;
	static luna_ConverterType converters[];
};

// Class: btAlignedObjectArray< btCollisionObject * >
template<>
class LunaTraits< btAlignedObjectArray< btCollisionObject * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btAlignedObjectArray< btCollisionObject * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(btAlignedObjectArray< btCollisionObject * >* obj);
	typedef btAlignedObjectArray< btCollisionObject * > parent_t;
	typedef btAlignedObjectArray< btCollisionObject * > base_t;
	static luna_ConverterType converters[];
};

// Class: btAlignedObjectArray< unsigned int >
template<>
class LunaTraits< btAlignedObjectArray< unsigned int > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btAlignedObjectArray< unsigned int >* _bind_ctor(lua_State *L);
	static void _bind_dtor(btAlignedObjectArray< unsigned int >* obj);
	typedef btAlignedObjectArray< unsigned int > parent_t;
	typedef btAlignedObjectArray< unsigned int > base_t;
	static luna_ConverterType converters[];
};

// Class: btAlignedObjectArray< btDbvtProxy * >
template<>
class LunaTraits< btAlignedObjectArray< btDbvtProxy * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btAlignedObjectArray< btDbvtProxy * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(btAlignedObjectArray< btDbvtProxy * >* obj);
	typedef btAlignedObjectArray< btDbvtProxy * > parent_t;
	typedef btAlignedObjectArray< btDbvtProxy * > base_t;
	static luna_ConverterType converters[];
};

// Class: btAlignedObjectArray< btBroadphaseInterface * >
template<>
class LunaTraits< btAlignedObjectArray< btBroadphaseInterface * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btAlignedObjectArray< btBroadphaseInterface * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(btAlignedObjectArray< btBroadphaseInterface * >* obj);
	typedef btAlignedObjectArray< btBroadphaseInterface * > parent_t;
	typedef btAlignedObjectArray< btBroadphaseInterface * > base_t;
	static luna_ConverterType converters[];
};

// Class: btAlignedObjectArray< btBroadphasePair >
template<>
class LunaTraits< btAlignedObjectArray< btBroadphasePair > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btAlignedObjectArray< btBroadphasePair >* _bind_ctor(lua_State *L);
	static void _bind_dtor(btAlignedObjectArray< btBroadphasePair >* obj);
	typedef btAlignedObjectArray< btBroadphasePair > parent_t;
	typedef btAlignedObjectArray< btBroadphasePair > base_t;
	static luna_ConverterType converters[];
};

// Class: btAlignedObjectArray< btVector3 >
template<>
class LunaTraits< btAlignedObjectArray< btVector3 > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btAlignedObjectArray< btVector3 >* _bind_ctor(lua_State *L);
	static void _bind_dtor(btAlignedObjectArray< btVector3 >* obj);
	typedef btAlignedObjectArray< btVector3 > parent_t;
	typedef btAlignedObjectArray< btVector3 > base_t;
	static luna_ConverterType converters[];
};

// Class: btAlignedObjectArray< btOptimizedBvhNode >
template<>
class LunaTraits< btAlignedObjectArray< btOptimizedBvhNode > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btAlignedObjectArray< btOptimizedBvhNode >* _bind_ctor(lua_State *L);
	static void _bind_dtor(btAlignedObjectArray< btOptimizedBvhNode >* obj);
	typedef btAlignedObjectArray< btOptimizedBvhNode > parent_t;
	typedef btAlignedObjectArray< btOptimizedBvhNode > base_t;
	static luna_ConverterType converters[];
};

// Class: btAlignedObjectArray< btQuantizedBvhNode >
template<>
class LunaTraits< btAlignedObjectArray< btQuantizedBvhNode > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btAlignedObjectArray< btQuantizedBvhNode >* _bind_ctor(lua_State *L);
	static void _bind_dtor(btAlignedObjectArray< btQuantizedBvhNode >* obj);
	typedef btAlignedObjectArray< btQuantizedBvhNode > parent_t;
	typedef btAlignedObjectArray< btQuantizedBvhNode > base_t;
	static luna_ConverterType converters[];
};

// Class: btAlignedObjectArray< btBvhSubtreeInfo >
template<>
class LunaTraits< btAlignedObjectArray< btBvhSubtreeInfo > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btAlignedObjectArray< btBvhSubtreeInfo >* _bind_ctor(lua_State *L);
	static void _bind_dtor(btAlignedObjectArray< btBvhSubtreeInfo >* obj);
	typedef btAlignedObjectArray< btBvhSubtreeInfo > parent_t;
	typedef btAlignedObjectArray< btBvhSubtreeInfo > base_t;
	static luna_ConverterType converters[];
};

// Class: btAlignedObjectArray< btSolverConstraint >
template<>
class LunaTraits< btAlignedObjectArray< btSolverConstraint > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btAlignedObjectArray< btSolverConstraint >* _bind_ctor(lua_State *L);
	static void _bind_dtor(btAlignedObjectArray< btSolverConstraint >* obj);
	typedef btAlignedObjectArray< btSolverConstraint > parent_t;
	typedef btAlignedObjectArray< btSolverConstraint > base_t;
	static luna_ConverterType converters[];
};

// Class: btAlignedObjectArray< btIndexedMesh >
template<>
class LunaTraits< btAlignedObjectArray< btIndexedMesh > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btAlignedObjectArray< btIndexedMesh >* _bind_ctor(lua_State *L);
	static void _bind_dtor(btAlignedObjectArray< btIndexedMesh >* obj);
	typedef btAlignedObjectArray< btIndexedMesh > parent_t;
	typedef btAlignedObjectArray< btIndexedMesh > base_t;
	static luna_ConverterType converters[];
};

// Class: btAlignedObjectArray< btMaterialProperties >
template<>
class LunaTraits< btAlignedObjectArray< btMaterialProperties > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btAlignedObjectArray< btMaterialProperties >* _bind_ctor(lua_State *L);
	static void _bind_dtor(btAlignedObjectArray< btMaterialProperties >* obj);
	typedef btAlignedObjectArray< btMaterialProperties > parent_t;
	typedef btAlignedObjectArray< btMaterialProperties > base_t;
	static luna_ConverterType converters[];
};

// Class: btHashMap< btHashInt, btTriangleInfo >
template<>
class LunaTraits< btHashMap< btHashInt, btTriangleInfo > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btHashMap< btHashInt, btTriangleInfo >* _bind_ctor(lua_State *L);
	static void _bind_dtor(btHashMap< btHashInt, btTriangleInfo >* obj);
	typedef btHashMap< btHashInt, btTriangleInfo > parent_t;
	typedef btHashMap< btHashInt, btTriangleInfo > base_t;
	static luna_ConverterType converters[];
};


// Mapped type: btAlignedObjectArray< int >
template<>
class LunaTraits< btAlignedObjectArray< int > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btAlignedObjectArray< int >* _bind_ctor(lua_State *L);
	static void _bind_dtor(btAlignedObjectArray< int >* obj);
	typedef btAlignedObjectArray< int > parent_t;
	typedef btAlignedObjectArray< int > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: btAlignedObjectArray< const btCollisionObject * >
template<>
class LunaTraits< btAlignedObjectArray< const btCollisionObject * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btAlignedObjectArray< const btCollisionObject * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(btAlignedObjectArray< const btCollisionObject * >* obj);
	typedef btAlignedObjectArray< const btCollisionObject * > parent_t;
	typedef btAlignedObjectArray< const btCollisionObject * > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: btAlignedObjectArray< float >
template<>
class LunaTraits< btAlignedObjectArray< float > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btAlignedObjectArray< float >* _bind_ctor(lua_State *L);
	static void _bind_dtor(btAlignedObjectArray< float >* obj);
	typedef btAlignedObjectArray< float > parent_t;
	typedef btAlignedObjectArray< float > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: btAlignedObjectArray< btConvexHullComputer::Edge >
template<>
class LunaTraits< btAlignedObjectArray< btConvexHullComputer::Edge > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btAlignedObjectArray< btConvexHullComputer::Edge >* _bind_ctor(lua_State *L);
	static void _bind_dtor(btAlignedObjectArray< btConvexHullComputer::Edge >* obj);
	typedef btAlignedObjectArray< btConvexHullComputer::Edge > parent_t;
	typedef btAlignedObjectArray< btConvexHullComputer::Edge > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: btAlignedObjectArray< btFace >
template<>
class LunaTraits< btAlignedObjectArray< btFace > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btAlignedObjectArray< btFace >* _bind_ctor(lua_State *L);
	static void _bind_dtor(btAlignedObjectArray< btFace >* obj);
	typedef btAlignedObjectArray< btFace > parent_t;
	typedef btAlignedObjectArray< btFace > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: btAlignedObjectArray< const btDbvtNode * >
template<>
class LunaTraits< btAlignedObjectArray< const btDbvtNode * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btAlignedObjectArray< const btDbvtNode * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(btAlignedObjectArray< const btDbvtNode * >* obj);
	typedef btAlignedObjectArray< const btDbvtNode * > parent_t;
	typedef btAlignedObjectArray< const btDbvtNode * > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: btAlignedObjectArray< btDbvt::sStkNPS >
template<>
class LunaTraits< btAlignedObjectArray< btDbvt::sStkNPS > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btAlignedObjectArray< btDbvt::sStkNPS >* _bind_ctor(lua_State *L);
	static void _bind_dtor(btAlignedObjectArray< btDbvt::sStkNPS >* obj);
	typedef btAlignedObjectArray< btDbvt::sStkNPS > parent_t;
	typedef btAlignedObjectArray< btDbvt::sStkNPS > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: btAlignedObjectArray< btDbvt::sStkNN >
template<>
class LunaTraits< btAlignedObjectArray< btDbvt::sStkNN > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btAlignedObjectArray< btDbvt::sStkNN >* _bind_ctor(lua_State *L);
	static void _bind_dtor(btAlignedObjectArray< btDbvt::sStkNN >* obj);
	typedef btAlignedObjectArray< btDbvt::sStkNN > parent_t;
	typedef btAlignedObjectArray< btDbvt::sStkNN > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: btAlignedObjectArray< ConvexH::HalfEdge >
template<>
class LunaTraits< btAlignedObjectArray< ConvexH::HalfEdge > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btAlignedObjectArray< ConvexH::HalfEdge >* _bind_ctor(lua_State *L);
	static void _bind_dtor(btAlignedObjectArray< ConvexH::HalfEdge >* obj);
	typedef btAlignedObjectArray< ConvexH::HalfEdge > parent_t;
	typedef btAlignedObjectArray< ConvexH::HalfEdge > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: btAlignedObjectArray< btPlane >
template<>
class LunaTraits< btAlignedObjectArray< btPlane > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btAlignedObjectArray< btPlane >* _bind_ctor(lua_State *L);
	static void _bind_dtor(btAlignedObjectArray< btPlane >* obj);
	typedef btAlignedObjectArray< btPlane > parent_t;
	typedef btAlignedObjectArray< btPlane > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: btAlignedObjectArray< GrahamVector3 >
template<>
class LunaTraits< btAlignedObjectArray< GrahamVector3 > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static btAlignedObjectArray< GrahamVector3 >* _bind_ctor(lua_State *L);
	static void _bind_dtor(btAlignedObjectArray< GrahamVector3 >* obj);
	typedef btAlignedObjectArray< GrahamVector3 > parent_t;
	typedef btAlignedObjectArray< GrahamVector3 > base_t;
	static luna_ConverterType converters[];
};


// Referenced external: void
template<>
class LunaTraits< void > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static void* _bind_ctor(lua_State *L);
	static void _bind_dtor(void* obj);
	typedef void parent_t;
	typedef void base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osg::Referenced
template<>
class LunaTraits< osg::Referenced > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Referenced* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Referenced* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Referenced base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osg::Group
template<>
class LunaTraits< osg::Group > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Group* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Group* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Group base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osg::Box
template<>
class LunaTraits< osg::Box > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Box* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Box* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Box base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osg::Sphere
template<>
class LunaTraits< osg::Sphere > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Sphere* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Sphere* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Sphere base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osgGA::GUIEventAdapter
template<>
class LunaTraits< osgGA::GUIEventAdapter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgGA::GUIEventAdapter* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgGA::GUIEventAdapter* obj);
	typedef osg::Referenced parent_t;
	typedef osgGA::GUIEventAdapter base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osgGA::GUIActionAdapter
template<>
class LunaTraits< osgGA::GUIActionAdapter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgGA::GUIActionAdapter* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgGA::GUIActionAdapter* obj);
	typedef osgGA::GUIActionAdapter parent_t;
	typedef osgGA::GUIActionAdapter base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaType< 25261840 > {
public:
	typedef btBroadphaseInterface type;
	
};

template<>
class LunaType< 92922844 > {
public:
	typedef BT_BOX_BOX_TRANSFORM_CACHE type;
	
};

template<>
class LunaType< 72681009 > {
public:
	typedef BT_QUANTIZED_BVH_NODE type;
	
};

template<>
class LunaType< 14786052 > {
public:
	typedef btAABB type;
	
};

template<>
class LunaType< 91159321 > {
public:
	typedef btActionInterface type;
	
};

template<>
class LunaType< 17890858 > {
public:
	typedef btCollisionAlgorithm type;
	
};

template<>
class LunaType< 86058940 > {
public:
	typedef btAngleCompareFunc type;
	
};

template<>
class LunaType< 79899735 > {
public:
	typedef btAngularLimit type;
	
};

template<>
class LunaType< 44086089 > {
public:
	typedef btBroadphaseProxy type;
	
};

template<>
class LunaType< 60616493 > {
public:
	typedef btBlock type;
	
};

template<>
class LunaType< 67911425 > {
public:
	typedef btCollisionAlgorithmCreateFunc type;
	
};

template<>
class LunaType< 58243831 > {
public:
	typedef btCollisionShape type;
	
};

template<>
class LunaType< 36160911 > {
public:
	typedef btDiscreteCollisionDetectorInterface type;
	
};

template<>
class LunaType< 52132875 > {
public:
	typedef btBroadphaseAabbCallback type;
	
};

template<>
class LunaType< 82050774 > {
public:
	typedef btBroadphasePair type;
	
};

template<>
class LunaType< 69662040 > {
public:
	typedef btBroadphasePairSortPredicate type;
	
};

template<>
class LunaType< 75797632 > {
public:
	typedef btBvhSubtreeInfo type;
	
};

template<>
class LunaType< 95109631 > {
public:
	typedef btBvhSubtreeInfoData type;
	
};

template<>
class LunaType< 31835023 > {
public:
	typedef btBvhTree type;
	
};

template<>
class LunaType< 48452508 > {
public:
	typedef btCapsuleShapeData type;
	
};

template<>
class LunaType< 66220201 > {
public:
	typedef btCharIndexTripletData type;
	
};

template<>
class LunaType< 61426957 > {
public:
	typedef btChunk type;
	
};

template<>
class LunaType< 61540014 > {
public:
	typedef btClock type;
	
};

template<>
class LunaType< 61780402 > {
public:
	typedef btCollisionAlgorithmConstructionInfo type;
	
};

template<>
class LunaType< 31901746 > {
public:
	typedef btCollisionConfiguration type;
	
};

template<>
class LunaType< 71097681 > {
public:
	typedef btDispatcher type;
	
};

template<>
class LunaType< 85758361 > {
public:
	typedef btCollisionObject type;
	
};

template<>
class LunaType< 73944842 > {
public:
	typedef btCollisionObjectDoubleData type;
	
};

template<>
class LunaType< 5462649 > {
public:
	typedef btCollisionObjectFloatData type;
	
};

template<>
class LunaType< 32391296 > {
public:
	typedef btCollisionObjectWrapper type;
	
};

template<>
class LunaType< 94025107 > {
public:
	typedef btCollisionShapeData type;
	
};

template<>
class LunaType< 62162664 > {
public:
	typedef btCollisionWorld type;
	
};

template<>
class LunaType< 44790882 > {
public:
	typedef btCollisionWorld::RayResultCallback type;
	
};

template<>
class LunaType< 18279310 > {
public:
	typedef btCollisionWorld::ConvexResultCallback type;
	
};

template<>
class LunaType< 79983320 > {
public:
	typedef btCollisionWorld::ContactResultCallback type;
	
};

template<>
class LunaType< 34210430 > {
public:
	typedef btCollisionWorld::LocalConvexResult type;
	
};

template<>
class LunaType< 32139575 > {
public:
	typedef btCollisionWorld::LocalRayResult type;
	
};

template<>
class LunaType< 68696671 > {
public:
	typedef btCollisionWorld::LocalShapeInfo type;
	
};

template<>
class LunaType< 8868405 > {
public:
	typedef btCompoundShapeChild type;
	
};

template<>
class LunaType< 58634217 > {
public:
	typedef btCompoundShapeChildData type;
	
};

template<>
class LunaType< 55148189 > {
public:
	typedef btCompoundShapeData type;
	
};

template<>
class LunaType< 66271199 > {
public:
	typedef btTypedObject type;
	
};

template<>
class LunaType< 59805690 > {
public:
	typedef btConeTwistConstraintData type;
	
};

template<>
class LunaType< 47364139 > {
public:
	typedef btConstraintRow type;
	
};

template<>
class LunaType< 71995903 > {
public:
	typedef btConstraintSetting type;
	
};

template<>
class LunaType< 53256621 > {
public:
	typedef btConstraintSolver type;
	
};

template<>
class LunaType< 5410878 > {
public:
	typedef btContactSolverInfoData type;
	
};

template<>
class LunaType< 29375914 > {
public:
	typedef btContactSolverInfoDoubleData type;
	
};

template<>
class LunaType< 97541958 > {
public:
	typedef btContactSolverInfoFloatData type;
	
};

template<>
class LunaType< 76300448 > {
public:
	typedef btConvexCast type;
	
};

template<>
class LunaType< 12958328 > {
public:
	typedef btConvexCast::CastResult type;
	
};

template<>
class LunaType< 73459805 > {
public:
	typedef btConvexHullComputer type;
	
};

template<>
class LunaType< 45120957 > {
public:
	typedef btConvexHullComputer::Edge type;
	
};

template<>
class LunaType< 77818044 > {
public:
	typedef btConvexHullShapeData type;
	
};

template<>
class LunaType< 7968673 > {
public:
	typedef btConvexInternalShapeData type;
	
};

template<>
class LunaType< 62802517 > {
public:
	typedef btConvexPenetrationDepthSolver type;
	
};

template<>
class LunaType< 75798226 > {
public:
	typedef btConvexPolyhedron type;
	
};

template<>
class LunaType< 41446546 > {
public:
	typedef btConvexSeparatingDistanceUtil type;
	
};

template<>
class LunaType< 46793426 > {
public:
	typedef btTriangleCallback type;
	
};

template<>
class LunaType< 72584776 > {
public:
	typedef btCylinderShapeData type;
	
};

template<>
class LunaType< 14908800 > {
public:
	typedef btDbvt type;
	
};

template<>
class LunaType< 8781183 > {
public:
	typedef btDbvt::IClone type;
	
};

template<>
class LunaType< 21779918 > {
public:
	typedef btDbvt::ICollide type;
	
};

template<>
class LunaType< 50167833 > {
public:
	typedef btDbvt::IWriter type;
	
};

template<>
class LunaType< 12660308 > {
public:
	typedef btDbvt::sStkCLN type;
	
};

template<>
class LunaType< 26215193 > {
public:
	typedef btDbvt::sStkNN type;
	
};

template<>
class LunaType< 26215195 > {
public:
	typedef btDbvt::sStkNP type;
	
};

template<>
class LunaType< 12671008 > {
public:
	typedef btDbvt::sStkNPS type;
	
};

template<>
class LunaType< 88504824 > {
public:
	typedef btDbvtAabbMm type;
	
};

template<>
class LunaType< 91335778 > {
public:
	typedef btDbvtNode type;
	
};

template<>
class LunaType< 82853014 > {
public:
	typedef btDefaultCollisionConstructionInfo type;
	
};

template<>
class LunaType< 40784278 > {
public:
	typedef btMotionState type;
	
};

template<>
class LunaType< 75337529 > {
public:
	typedef btSerializer type;
	
};

template<>
class LunaType< 79998095 > {
public:
	typedef btVehicleRaycaster type;
	
};

template<>
class LunaType< 99215612 > {
public:
	typedef btDiscreteCollisionDetectorInterface::ClosestPointInput type;
	
};

template<>
class LunaType< 25324514 > {
public:
	typedef btDiscreteCollisionDetectorInterface::Result type;
	
};

template<>
class LunaType< 95201256 > {
public:
	typedef btDispatcherInfo type;
	
};

template<>
class LunaType< 73649389 > {
public:
	typedef btDynamicsWorldDoubleData type;
	
};

template<>
class LunaType< 53873546 > {
public:
	typedef btDynamicsWorldFloatData type;
	
};

template<>
class LunaType< 6016384 > {
public:
	typedef btElement type;
	
};

template<>
class LunaType< 14966817 > {
public:
	typedef btFace type;
	
};

template<>
class LunaType< 26941337 > {
public:
	typedef btGEN_Link type;
	
};

template<>
class LunaType< 26941501 > {
public:
	typedef btGEN_List type;
	
};

template<>
class LunaType< 56103271 > {
public:
	typedef btGeneric6DofConstraintData type;
	
};

template<>
class LunaType< 39358732 > {
public:
	typedef btGeneric6DofSpringConstraintData type;
	
};

template<>
class LunaType< 388204 > {
public:
	typedef btGenericMemoryPool type;
	
};

template<>
class LunaType< 74113773 > {
public:
	typedef btGenericPoolAllocator type;
	
};

template<>
class LunaType< 18233367 > {
public:
	typedef btGeometryUtil type;
	
};

template<>
class LunaType< 78133027 > {
public:
	typedef btOverlappingPairCallback type;
	
};

template<>
class LunaType< 28787205 > {
public:
	typedef btGImpactBvh type;
	
};

template<>
class LunaType< 85935800 > {
public:
	typedef btPrimitiveManagerBase type;
	
};

template<>
class LunaType< 48029312 > {
public:
	typedef btGImpactMeshShapeData type;
	
};

template<>
class LunaType< 38624328 > {
public:
	typedef btGImpactQuantizedBvh type;
	
};

template<>
class LunaType< 4650462 > {
public:
	typedef btGjkEpaSolver2 type;
	
};

template<>
class LunaType< 71238194 > {
public:
	typedef btGjkEpaSolver2::sResults type;
	
};

template<>
class LunaType< 66360021 > {
public:
	typedef btHashInt type;
	
};

template<>
class LunaType< 66366932 > {
public:
	typedef btHashPtr type;
	
};

template<>
class LunaType< 23064786 > {
public:
	typedef btHashString type;
	
};

template<>
class LunaType< 26872192 > {
public:
	typedef btHingeConstraintDoubleData type;
	
};

template<>
class LunaType< 29781387 > {
public:
	typedef btHingeConstraintFloatData type;
	
};

template<>
class LunaType< 63441741 > {
public:
	typedef btIDebugDraw type;
	
};

template<>
class LunaType< 78051397 > {
public:
	typedef btIndexedMesh type;
	
};

template<>
class LunaType< 59503577 > {
public:
	typedef btInternalTriangleIndexCallback type;
	
};

template<>
class LunaType< 39554929 > {
public:
	typedef btIntIndexData type;
	
};

template<>
class LunaType< 49949186 > {
public:
	typedef btJacobianEntry type;
	
};

template<>
class LunaType< 18466422 > {
public:
	typedef btJointFeedback type;
	
};

template<>
class LunaType< 55239733 > {
public:
	typedef btManifoldPoint type;
	
};

template<>
class LunaType< 47294335 > {
public:
	typedef btMaterial type;
	
};

template<>
class LunaType< 67602617 > {
public:
	typedef btMaterialProperties type;
	
};

template<>
class LunaType< 30394543 > {
public:
	typedef btMatrix3x3 type;
	
};

template<>
class LunaType< 48479346 > {
public:
	typedef btMatrix3x3DoubleData type;
	
};

template<>
class LunaType< 4769007 > {
public:
	typedef btMatrix3x3FloatData type;
	
};

template<>
class LunaType< 75941957 > {
public:
	typedef btMeshPartData type;
	
};

template<>
class LunaType< 69068888 > {
public:
	typedef btMultiSphereShapeData type;
	
};

template<>
class LunaType< 47895716 > {
public:
	typedef btNodeOverlapCallback type;
	
};

template<>
class LunaType< 63725098 > {
public:
	typedef btQuantizedBvh type;
	
};

template<>
class LunaType< 89043823 > {
public:
	typedef btOptimizedBvhNode type;
	
};

template<>
class LunaType< 92362319 > {
public:
	typedef btOptimizedBvhNodeDoubleData type;
	
};

template<>
class LunaType< 22170580 > {
public:
	typedef btOptimizedBvhNodeFloatData type;
	
};

template<>
class LunaType< 83643253 > {
public:
	typedef btOverlapCallback type;
	
};

template<>
class LunaType< 50236777 > {
public:
	typedef btOverlapFilterCallback type;
	
};

template<>
class LunaType< 73532668 > {
public:
	typedef btPlane type;
	
};

template<>
class LunaType< 21299109 > {
public:
	typedef btPoint2PointConstraintDoubleData type;
	
};

template<>
class LunaType< 16600347 > {
public:
	typedef btPoint2PointConstraintFloatData type;
	
};

template<>
class LunaType< 86408151 > {
public:
	typedef btPointerUid type;
	
};

template<>
class LunaType< 82164365 > {
public:
	typedef btPolarDecomposition type;
	
};

template<>
class LunaType< 48512951 > {
public:
	typedef btPolyhedralContactClipping type;
	
};

template<>
class LunaType< 19742987 > {
public:
	typedef btPoolAllocator type;
	
};

template<>
class LunaType< 22563878 > {
public:
	typedef btPositionAndRadius type;
	
};

template<>
class LunaType< 79712881 > {
public:
	typedef btPrimitiveTriangle type;
	
};

template<>
class LunaType< 2139400 > {
public:
	typedef btQuadWord type;
	
};

template<>
class LunaType< 27343504 > {
public:
	typedef btQuantizedBvhDoubleData type;
	
};

template<>
class LunaType< 49199970 > {
public:
	typedef btQuantizedBvhFloatData type;
	
};

template<>
class LunaType< 59813041 > {
public:
	typedef btQuantizedBvhNode type;
	
};

template<>
class LunaType< 91047799 > {
public:
	typedef btQuantizedBvhNodeData type;
	
};

template<>
class LunaType< 59994701 > {
public:
	typedef btQuantizedBvhTree type;
	
};

template<>
class LunaType< 91513369 > {
public:
	typedef btRaycastVehicle::btVehicleTuning type;
	
};

template<>
class LunaType< 13789036 > {
public:
	typedef btRigidBody::btRigidBodyConstructionInfo type;
	
};

template<>
class LunaType< 50557776 > {
public:
	typedef btRigidBodyDoubleData type;
	
};

template<>
class LunaType< 1580424 > {
public:
	typedef btRigidBodyFloatData type;
	
};

template<>
class LunaType< 86737843 > {
public:
	typedef btRotationalLimitMotor type;
	
};

template<>
class LunaType< 52810247 > {
public:
	typedef btScaledTriangleMeshShapeData type;
	
};

template<>
class LunaType< 39611939 > {
public:
	typedef btShapeHull type;
	
};

template<>
class LunaType< 8692805 > {
public:
	typedef btShortIntIndexData type;
	
};

template<>
class LunaType< 10920434 > {
public:
	typedef btShortIntIndexTripletData type;
	
};

template<>
class LunaType< 80381571 > {
public:
	typedef btSimulationIslandManager type;
	
};

template<>
class LunaType< 56758259 > {
public:
	typedef btSimulationIslandManager::IslandCallback type;
	
};

template<>
class LunaType< 62504021 > {
public:
	typedef btSliderConstraintData type;
	
};

template<>
class LunaType< 34428590 > {
public:
	typedef btSolve2LinearConstraint type;
	
};

template<>
class LunaType< 65712094 > {
public:
	typedef btSolverBody type;
	
};

template<>
class LunaType< 67106554 > {
public:
	typedef btSolverConstraint type;
	
};

template<>
class LunaType< 46980417 > {
public:
	typedef btStackAlloc type;
	
};

template<>
class LunaType< 36910585 > {
public:
	typedef btStaticPlaneShapeData type;
	
};

template<>
class LunaType< 56402633 > {
public:
	typedef btStridingMeshInterface type;
	
};

template<>
class LunaType< 5637632 > {
public:
	typedef btStridingMeshInterfaceData type;
	
};

template<>
class LunaType< 75923500 > {
public:
	typedef btSubSimplexClosestResult type;
	
};

template<>
class LunaType< 13247377 > {
public:
	typedef btTransform type;
	
};

template<>
class LunaType< 10173309 > {
public:
	typedef btTransformDoubleData type;
	
};

template<>
class LunaType< 93855928 > {
public:
	typedef btTransformFloatData type;
	
};

template<>
class LunaType< 32029898 > {
public:
	typedef btTransformUtil type;
	
};

template<>
class LunaType< 31464826 > {
public:
	typedef btTranslationalLimitMotor type;
	
};

template<>
class LunaType< 4403420 > {
public:
	typedef btTriangle type;
	
};

template<>
class LunaType< 52667016 > {
public:
	typedef btTriangleInfo type;
	
};

template<>
class LunaType< 90100326 > {
public:
	typedef btTriangleInfoData type;
	
};

template<>
class LunaType< 61372357 > {
public:
	typedef btTriangleInfoMapData type;
	
};

template<>
class LunaType< 3729562 > {
public:
	typedef btTriangleMeshShapeData type;
	
};

template<>
class LunaType< 17243935 > {
public:
	typedef btTypedConstraint::btConstraintInfo1 type;
	
};

template<>
class LunaType< 17243936 > {
public:
	typedef btTypedConstraint::btConstraintInfo2 type;
	
};

template<>
class LunaType< 98838043 > {
public:
	typedef btTypedConstraintData type;
	
};

template<>
class LunaType< 76872649 > {
public:
	typedef btUnionFind type;
	
};

template<>
class LunaType< 61938597 > {
public:
	typedef btUsageBitfield type;
	
};

template<>
class LunaType< 91544891 > {
public:
	typedef btVector3 type;
	
};

template<>
class LunaType< 89582070 > {
public:
	typedef btVector3DoubleData type;
	
};

template<>
class LunaType< 96449857 > {
public:
	typedef btVector3FloatData type;
	
};

template<>
class LunaType< 50443956 > {
public:
	typedef btVehicleRaycaster::btVehicleRaycasterResult type;
	
};

template<>
class LunaType< 95428271 > {
public:
	typedef btVoronoiSimplexSolver type;
	
};

template<>
class LunaType< 45065223 > {
public:
	typedef btWheelInfo type;
	
};

template<>
class LunaType< 75375071 > {
public:
	typedef btWheelInfo::RaycastInfo type;
	
};

template<>
class LunaType< 65660504 > {
public:
	typedef btWheelInfoConstructionInfo type;
	
};

template<>
class LunaType< 45782120 > {
public:
	typedef ConvexH type;
	
};

template<>
class LunaType< 71871586 > {
public:
	typedef ConvexH::HalfEdge type;
	
};

template<>
class LunaType< 52791109 > {
public:
	typedef CProfileIterator type;
	
};

template<>
class LunaType< 47831987 > {
public:
	typedef CProfileManager type;
	
};

template<>
class LunaType< 82492271 > {
public:
	typedef CProfileNode type;
	
};

template<>
class LunaType< 5560690 > {
public:
	typedef CProfileSample type;
	
};

template<>
class LunaType< 56409546 > {
public:
	typedef GIM_BVH_DATA type;
	
};

template<>
class LunaType< 61018423 > {
public:
	typedef GIM_BVH_TREE_NODE type;
	
};

template<>
class LunaType< 87678210 > {
public:
	typedef GIM_CONTACT type;
	
};

template<>
class LunaType< 77876536 > {
public:
	typedef GIM_PAIR type;
	
};

template<>
class LunaType< 87059149 > {
public:
	typedef GIM_TRIANGLE_CONTACT type;
	
};

template<>
class LunaType< 39835770 > {
public:
	typedef HullDesc type;
	
};

template<>
class LunaType< 46706140 > {
public:
	typedef HullLibrary type;
	
};

template<>
class LunaType< 83000358 > {
public:
	typedef HullResult type;
	
};

template<>
class LunaType< 3237413 > {
public:
	typedef int4 type;
	
};

template<>
class LunaType< 89946505 > {
public:
	typedef PHullResult type;
	
};

template<>
class LunaType< 29676225 > {
public:
	typedef osgGA::GUIEventHandler type;
	
};

template<>
class LunaType< 92303204 > {
public:
	typedef osg::Vec3f type;
	
};

template<>
class LunaType< 41484542 > {
public:
	typedef btManifoldArray type;
	
};

template<>
class LunaType< 87640574 > {
public:
	typedef btCollisionObjectArray type;
	
};

template<>
class LunaType< 91893113 > {
public:
	typedef TUIntArray type;
	
};

template<>
class LunaType< 95716660 > {
public:
	typedef btDbvtProxyArray type;
	
};

template<>
class LunaType< 20651267 > {
public:
	typedef btSapBroadphaseArray type;
	
};

template<>
class LunaType< 62294931 > {
public:
	typedef btBroadphasePairArray type;
	
};

template<>
class LunaType< 99189047 > {
public:
	typedef btVertexArray type;
	
};

template<>
class LunaType< 2344043 > {
public:
	typedef NodeArray type;
	
};

template<>
class LunaType< 35364651 > {
public:
	typedef QuantizedNodeArray type;
	
};

template<>
class LunaType< 21710151 > {
public:
	typedef BvhSubtreeInfoArray type;
	
};

template<>
class LunaType< 1318117 > {
public:
	typedef btConstraintArray type;
	
};

template<>
class LunaType< 130016 > {
public:
	typedef IndexedMeshArray type;
	
};

template<>
class LunaType< 1065200 > {
public:
	typedef MaterialArray type;
	
};

template<>
class LunaType< 37055534 > {
public:
	typedef btInternalTriangleInfoMap type;
	
};

template<>
class LunaType< 9763203 > {
public:
	typedef btAlignedObjectArray< btPersistentManifold * > type;
	
};

template<>
class LunaType< 68676713 > {
public:
	typedef btAlignedObjectArray< btCollisionObject * > type;
	
};

template<>
class LunaType< 90753422 > {
public:
	typedef btAlignedObjectArray< unsigned int > type;
	
};

template<>
class LunaType< 74064597 > {
public:
	typedef btAlignedObjectArray< btDbvtProxy * > type;
	
};

template<>
class LunaType< 42019633 > {
public:
	typedef btAlignedObjectArray< btBroadphaseInterface * > type;
	
};

template<>
class LunaType< 25976098 > {
public:
	typedef btAlignedObjectArray< btBroadphasePair > type;
	
};

template<>
class LunaType< 89770050 > {
public:
	typedef btAlignedObjectArray< btVector3 > type;
	
};

template<>
class LunaType< 66511587 > {
public:
	typedef btAlignedObjectArray< btOptimizedBvhNode > type;
	
};

template<>
class LunaType< 98719195 > {
public:
	typedef btAlignedObjectArray< btQuantizedBvhNode > type;
	
};

template<>
class LunaType< 82300513 > {
public:
	typedef btAlignedObjectArray< btBvhSubtreeInfo > type;
	
};

template<>
class LunaType< 36629303 > {
public:
	typedef btAlignedObjectArray< btSolverConstraint > type;
	
};

template<>
class LunaType< 93970761 > {
public:
	typedef btAlignedObjectArray< btIndexedMesh > type;
	
};

template<>
class LunaType< 81043876 > {
public:
	typedef btAlignedObjectArray< btMaterialProperties > type;
	
};

template<>
class LunaType< 67655647 > {
public:
	typedef btHashMap< btHashInt, btTriangleInfo > type;
	
};

template<>
class LunaType< 41950488 > {
public:
	typedef btAlignedObjectArray< int > type;
	
};

template<>
class LunaType< 48517590 > {
public:
	typedef btAlignedObjectArray< const btCollisionObject * > type;
	
};

template<>
class LunaType< 92010878 > {
public:
	typedef btAlignedObjectArray< float > type;
	
};

template<>
class LunaType< 4979927 > {
public:
	typedef btAlignedObjectArray< btConvexHullComputer::Edge > type;
	
};

template<>
class LunaType< 27702431 > {
public:
	typedef btAlignedObjectArray< btFace > type;
	
};

template<>
class LunaType< 275816 > {
public:
	typedef btAlignedObjectArray< const btDbvtNode * > type;
	
};

template<>
class LunaType< 91616889 > {
public:
	typedef btAlignedObjectArray< btDbvt::sStkNPS > type;
	
};

template<>
class LunaType< 64242255 > {
public:
	typedef btAlignedObjectArray< btDbvt::sStkNN > type;
	
};

template<>
class LunaType< 99531310 > {
public:
	typedef btAlignedObjectArray< ConvexH::HalfEdge > type;
	
};

template<>
class LunaType< 47216343 > {
public:
	typedef btAlignedObjectArray< btPlane > type;
	
};

template<>
class LunaType< 78781161 > {
public:
	typedef btAlignedObjectArray< GrahamVector3 > type;
	
};

template<>
class LunaType< 3625364 > {
public:
	typedef void type;
	
};

template<>
class LunaType< 50169651 > {
public:
	typedef osg::Referenced type;
	
};

template<>
class LunaType< 78851260 > {
public:
	typedef osg::Group type;
	
};

template<>
class LunaType< 67090692 > {
public:
	typedef osg::Box type;
	
};

template<>
class LunaType< 85867783 > {
public:
	typedef osg::Sphere type;
	
};

template<>
class LunaType< 91398620 > {
public:
	typedef osgGA::GUIEventAdapter type;
	
};

template<>
class LunaType< 85302998 > {
public:
	typedef osgGA::GUIActionAdapter type;
	
};


#endif

