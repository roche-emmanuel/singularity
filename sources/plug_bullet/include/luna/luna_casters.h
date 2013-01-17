#ifndef _LUNA_CASTERS_H_
#define _LUNA_CASTERS_H_

#include <plug_common.h>

template <typename dstType>
struct luna_caster<BT_BOX_BOX_TRANSFORM_CACHE,dstType> {
	static inline dstType* cast(BT_BOX_BOX_TRANSFORM_CACHE* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<BT_QUANTIZED_BVH_NODE,dstType> {
	static inline dstType* cast(BT_QUANTIZED_BVH_NODE* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btAABB,dstType> {
	static inline dstType* cast(btAABB* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btAngleCompareFunc,dstType> {
	static inline dstType* cast(btAngleCompareFunc* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btAngularLimit,dstType> {
	static inline dstType* cast(btAngularLimit* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btBroadphaseProxy,dstType> {
	static inline dstType* cast(btBroadphaseProxy* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btBlock,dstType> {
	static inline dstType* cast(btBlock* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btBroadphasePair,dstType> {
	static inline dstType* cast(btBroadphasePair* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btBroadphasePairSortPredicate,dstType> {
	static inline dstType* cast(btBroadphasePairSortPredicate* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btBvhSubtreeInfo,dstType> {
	static inline dstType* cast(btBvhSubtreeInfo* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btBvhSubtreeInfoData,dstType> {
	static inline dstType* cast(btBvhSubtreeInfoData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btBvhTree,dstType> {
	static inline dstType* cast(btBvhTree* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btCapsuleShapeData,dstType> {
	static inline dstType* cast(btCapsuleShapeData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btCharIndexTripletData,dstType> {
	static inline dstType* cast(btCharIndexTripletData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btChunk,dstType> {
	static inline dstType* cast(btChunk* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btClock,dstType> {
	static inline dstType* cast(btClock* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btCollisionAlgorithmConstructionInfo,dstType> {
	static inline dstType* cast(btCollisionAlgorithmConstructionInfo* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btCollisionObjectDoubleData,dstType> {
	static inline dstType* cast(btCollisionObjectDoubleData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btCollisionObjectFloatData,dstType> {
	static inline dstType* cast(btCollisionObjectFloatData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btCollisionObjectWrapper,dstType> {
	static inline dstType* cast(btCollisionObjectWrapper* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btCollisionShapeData,dstType> {
	static inline dstType* cast(btCollisionShapeData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btCollisionWorld::LocalConvexResult,dstType> {
	static inline dstType* cast(btCollisionWorld::LocalConvexResult* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btCollisionWorld::LocalRayResult,dstType> {
	static inline dstType* cast(btCollisionWorld::LocalRayResult* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btCollisionWorld::LocalShapeInfo,dstType> {
	static inline dstType* cast(btCollisionWorld::LocalShapeInfo* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btCompoundShapeChild,dstType> {
	static inline dstType* cast(btCompoundShapeChild* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btCompoundShapeChildData,dstType> {
	static inline dstType* cast(btCompoundShapeChildData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btCompoundShapeData,dstType> {
	static inline dstType* cast(btCompoundShapeData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btTypedObject,dstType> {
	static inline dstType* cast(btTypedObject* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btConeTwistConstraintData,dstType> {
	static inline dstType* cast(btConeTwistConstraintData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btConstraintRow,dstType> {
	static inline dstType* cast(btConstraintRow* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btConstraintSetting,dstType> {
	static inline dstType* cast(btConstraintSetting* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btContactSolverInfoData,dstType> {
	static inline dstType* cast(btContactSolverInfoData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btContactSolverInfo,dstType> {
	static inline dstType* cast(btContactSolverInfo* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btContactSolverInfoDoubleData,dstType> {
	static inline dstType* cast(btContactSolverInfoDoubleData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btContactSolverInfoFloatData,dstType> {
	static inline dstType* cast(btContactSolverInfoFloatData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btConvexHullComputer,dstType> {
	static inline dstType* cast(btConvexHullComputer* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btConvexHullComputer::Edge,dstType> {
	static inline dstType* cast(btConvexHullComputer::Edge* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btConvexHullShapeData,dstType> {
	static inline dstType* cast(btConvexHullShapeData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btConvexInternalShapeData,dstType> {
	static inline dstType* cast(btConvexInternalShapeData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btConvexSeparatingDistanceUtil,dstType> {
	static inline dstType* cast(btConvexSeparatingDistanceUtil* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btCylinderShapeData,dstType> {
	static inline dstType* cast(btCylinderShapeData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btDbvt,dstType> {
	static inline dstType* cast(btDbvt* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btDbvt::sStkCLN,dstType> {
	static inline dstType* cast(btDbvt::sStkCLN* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btDbvt::sStkNN,dstType> {
	static inline dstType* cast(btDbvt::sStkNN* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btDbvt::sStkNP,dstType> {
	static inline dstType* cast(btDbvt::sStkNP* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btDbvt::sStkNPS,dstType> {
	static inline dstType* cast(btDbvt::sStkNPS* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btDbvtAabbMm,dstType> {
	static inline dstType* cast(btDbvtAabbMm* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btDbvtNode,dstType> {
	static inline dstType* cast(btDbvtNode* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btDbvtProxy,dstType> {
	static inline dstType* cast(btDbvtProxy* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btDefaultCollisionConstructionInfo,dstType> {
	static inline dstType* cast(btDefaultCollisionConstructionInfo* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btDiscreteCollisionDetectorInterface::ClosestPointInput,dstType> {
	static inline dstType* cast(btDiscreteCollisionDetectorInterface::ClosestPointInput* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btDispatcherInfo,dstType> {
	static inline dstType* cast(btDispatcherInfo* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btDynamicsWorldDoubleData,dstType> {
	static inline dstType* cast(btDynamicsWorldDoubleData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btDynamicsWorldFloatData,dstType> {
	static inline dstType* cast(btDynamicsWorldFloatData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btElement,dstType> {
	static inline dstType* cast(btElement* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btFace,dstType> {
	static inline dstType* cast(btFace* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btGEN_Link,dstType> {
	static inline dstType* cast(btGEN_Link* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btGEN_List,dstType> {
	static inline dstType* cast(btGEN_List* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btGeneric6DofConstraintData,dstType> {
	static inline dstType* cast(btGeneric6DofConstraintData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btGeneric6DofSpringConstraintData,dstType> {
	static inline dstType* cast(btGeneric6DofSpringConstraintData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btGenericMemoryPool,dstType> {
	static inline dstType* cast(btGenericMemoryPool* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btGeometryUtil,dstType> {
	static inline dstType* cast(btGeometryUtil* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btGImpactBvh,dstType> {
	static inline dstType* cast(btGImpactBvh* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btGImpactMeshShapeData,dstType> {
	static inline dstType* cast(btGImpactMeshShapeData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btGImpactQuantizedBvh,dstType> {
	static inline dstType* cast(btGImpactQuantizedBvh* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btGjkEpaSolver2,dstType> {
	static inline dstType* cast(btGjkEpaSolver2* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btGjkEpaSolver2::sResults,dstType> {
	static inline dstType* cast(btGjkEpaSolver2::sResults* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btHashInt,dstType> {
	static inline dstType* cast(btHashInt* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btHashPtr,dstType> {
	static inline dstType* cast(btHashPtr* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btHashString,dstType> {
	static inline dstType* cast(btHashString* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btHingeConstraintDoubleData,dstType> {
	static inline dstType* cast(btHingeConstraintDoubleData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btHingeConstraintFloatData,dstType> {
	static inline dstType* cast(btHingeConstraintFloatData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btIndexedMesh,dstType> {
	static inline dstType* cast(btIndexedMesh* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btIntIndexData,dstType> {
	static inline dstType* cast(btIntIndexData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btJacobianEntry,dstType> {
	static inline dstType* cast(btJacobianEntry* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btJointFeedback,dstType> {
	static inline dstType* cast(btJointFeedback* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btManifoldPoint,dstType> {
	static inline dstType* cast(btManifoldPoint* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btMaterial,dstType> {
	static inline dstType* cast(btMaterial* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btMaterialProperties,dstType> {
	static inline dstType* cast(btMaterialProperties* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btMatrix3x3,dstType> {
	static inline dstType* cast(btMatrix3x3* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btMatrix3x3DoubleData,dstType> {
	static inline dstType* cast(btMatrix3x3DoubleData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btMatrix3x3FloatData,dstType> {
	static inline dstType* cast(btMatrix3x3FloatData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btMeshPartData,dstType> {
	static inline dstType* cast(btMeshPartData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btMultiSapBroadphase::btMultiSapProxy,dstType> {
	static inline dstType* cast(btMultiSapBroadphase::btMultiSapProxy* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btMultiSphereShapeData,dstType> {
	static inline dstType* cast(btMultiSphereShapeData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btOptimizedBvhNode,dstType> {
	static inline dstType* cast(btOptimizedBvhNode* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btOptimizedBvhNodeDoubleData,dstType> {
	static inline dstType* cast(btOptimizedBvhNodeDoubleData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btOptimizedBvhNodeFloatData,dstType> {
	static inline dstType* cast(btOptimizedBvhNodeFloatData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btPersistentManifold,dstType> {
	static inline dstType* cast(btPersistentManifold* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btPlane,dstType> {
	static inline dstType* cast(btPlane* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btPoint2PointConstraintDoubleData,dstType> {
	static inline dstType* cast(btPoint2PointConstraintDoubleData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btPoint2PointConstraintFloatData,dstType> {
	static inline dstType* cast(btPoint2PointConstraintFloatData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btPointerUid,dstType> {
	static inline dstType* cast(btPointerUid* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btPolarDecomposition,dstType> {
	static inline dstType* cast(btPolarDecomposition* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btPolyhedralContactClipping,dstType> {
	static inline dstType* cast(btPolyhedralContactClipping* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btPoolAllocator,dstType> {
	static inline dstType* cast(btPoolAllocator* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btPositionAndRadius,dstType> {
	static inline dstType* cast(btPositionAndRadius* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btPrimitiveTriangle,dstType> {
	static inline dstType* cast(btPrimitiveTriangle* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btQuadWord,dstType> {
	static inline dstType* cast(btQuadWord* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btQuantizedBvhDoubleData,dstType> {
	static inline dstType* cast(btQuantizedBvhDoubleData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btQuantizedBvhFloatData,dstType> {
	static inline dstType* cast(btQuantizedBvhFloatData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btQuantizedBvhNode,dstType> {
	static inline dstType* cast(btQuantizedBvhNode* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btQuantizedBvhNodeData,dstType> {
	static inline dstType* cast(btQuantizedBvhNodeData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btQuantizedBvhTree,dstType> {
	static inline dstType* cast(btQuantizedBvhTree* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btQuaternion,dstType> {
	static inline dstType* cast(btQuaternion* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btRaycastVehicle::btVehicleTuning,dstType> {
	static inline dstType* cast(btRaycastVehicle::btVehicleTuning* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btRigidBody::btRigidBodyConstructionInfo,dstType> {
	static inline dstType* cast(btRigidBody::btRigidBodyConstructionInfo* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btRigidBodyDoubleData,dstType> {
	static inline dstType* cast(btRigidBodyDoubleData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btRigidBodyFloatData,dstType> {
	static inline dstType* cast(btRigidBodyFloatData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btRotationalLimitMotor,dstType> {
	static inline dstType* cast(btRotationalLimitMotor* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btScaledTriangleMeshShapeData,dstType> {
	static inline dstType* cast(btScaledTriangleMeshShapeData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btShapeHull,dstType> {
	static inline dstType* cast(btShapeHull* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btShortIntIndexData,dstType> {
	static inline dstType* cast(btShortIntIndexData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btShortIntIndexTripletData,dstType> {
	static inline dstType* cast(btShortIntIndexTripletData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btSimpleBroadphaseProxy,dstType> {
	static inline dstType* cast(btSimpleBroadphaseProxy* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btSliderConstraintData,dstType> {
	static inline dstType* cast(btSliderConstraintData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btSolve2LinearConstraint,dstType> {
	static inline dstType* cast(btSolve2LinearConstraint* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btSolverBody,dstType> {
	static inline dstType* cast(btSolverBody* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btSolverConstraint,dstType> {
	static inline dstType* cast(btSolverConstraint* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btStackAlloc,dstType> {
	static inline dstType* cast(btStackAlloc* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btStaticPlaneShapeData,dstType> {
	static inline dstType* cast(btStaticPlaneShapeData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btStridingMeshInterfaceData,dstType> {
	static inline dstType* cast(btStridingMeshInterfaceData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btSubSimplexClosestResult,dstType> {
	static inline dstType* cast(btSubSimplexClosestResult* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btTransform,dstType> {
	static inline dstType* cast(btTransform* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btTransformDoubleData,dstType> {
	static inline dstType* cast(btTransformDoubleData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btTransformFloatData,dstType> {
	static inline dstType* cast(btTransformFloatData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btTransformUtil,dstType> {
	static inline dstType* cast(btTransformUtil* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btTranslationalLimitMotor,dstType> {
	static inline dstType* cast(btTranslationalLimitMotor* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btTriangle,dstType> {
	static inline dstType* cast(btTriangle* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btTriangleInfo,dstType> {
	static inline dstType* cast(btTriangleInfo* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btTriangleInfoData,dstType> {
	static inline dstType* cast(btTriangleInfoData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btTriangleInfoMapData,dstType> {
	static inline dstType* cast(btTriangleInfoMapData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btTriangleMeshShapeData,dstType> {
	static inline dstType* cast(btTriangleMeshShapeData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btTypedConstraint::btConstraintInfo1,dstType> {
	static inline dstType* cast(btTypedConstraint::btConstraintInfo1* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btTypedConstraint::btConstraintInfo2,dstType> {
	static inline dstType* cast(btTypedConstraint::btConstraintInfo2* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btTypedConstraintData,dstType> {
	static inline dstType* cast(btTypedConstraintData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btUnionFind,dstType> {
	static inline dstType* cast(btUnionFind* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btUsageBitfield,dstType> {
	static inline dstType* cast(btUsageBitfield* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btVector3,dstType> {
	static inline dstType* cast(btVector3* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btVector3DoubleData,dstType> {
	static inline dstType* cast(btVector3DoubleData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btVector3FloatData,dstType> {
	static inline dstType* cast(btVector3FloatData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btVector4,dstType> {
	static inline dstType* cast(btVector4* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btVehicleRaycaster::btVehicleRaycasterResult,dstType> {
	static inline dstType* cast(btVehicleRaycaster::btVehicleRaycasterResult* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btVoronoiSimplexSolver,dstType> {
	static inline dstType* cast(btVoronoiSimplexSolver* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btWheelInfo,dstType> {
	static inline dstType* cast(btWheelInfo* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btWheelInfo::RaycastInfo,dstType> {
	static inline dstType* cast(btWheelInfo::RaycastInfo* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btWheelInfoConstructionInfo,dstType> {
	static inline dstType* cast(btWheelInfoConstructionInfo* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ConvexH,dstType> {
	static inline dstType* cast(ConvexH* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ConvexH::HalfEdge,dstType> {
	static inline dstType* cast(ConvexH::HalfEdge* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<CProfileIterator,dstType> {
	static inline dstType* cast(CProfileIterator* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<CProfileManager,dstType> {
	static inline dstType* cast(CProfileManager* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<CProfileNode,dstType> {
	static inline dstType* cast(CProfileNode* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<CProfileSample,dstType> {
	static inline dstType* cast(CProfileSample* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<GIM_BVH_DATA,dstType> {
	static inline dstType* cast(GIM_BVH_DATA* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<GIM_BVH_TREE_NODE,dstType> {
	static inline dstType* cast(GIM_BVH_TREE_NODE* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<GIM_CONTACT,dstType> {
	static inline dstType* cast(GIM_CONTACT* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<GIM_PAIR,dstType> {
	static inline dstType* cast(GIM_PAIR* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<GIM_TRIANGLE_CONTACT,dstType> {
	static inline dstType* cast(GIM_TRIANGLE_CONTACT* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<GrahamVector3,dstType> {
	static inline dstType* cast(GrahamVector3* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<HullDesc,dstType> {
	static inline dstType* cast(HullDesc* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<HullLibrary,dstType> {
	static inline dstType* cast(HullLibrary* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<HullResult,dstType> {
	static inline dstType* cast(HullResult* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<int4,dstType> {
	static inline dstType* cast(int4* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<PHullResult,dstType> {
	static inline dstType* cast(PHullResult* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgGA::GUIEventHandler,dstType> {
	static inline dstType* cast(osgGA::GUIEventHandler* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SampleRigidUpdater,dstType> {
	static inline dstType* cast(SampleRigidUpdater* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Vec3f,dstType> {
	static inline dstType* cast(osg::Vec3f* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btAlignedObjectArray< btPersistentManifold * >,dstType> {
	static inline dstType* cast(btAlignedObjectArray< btPersistentManifold * >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btAlignedObjectArray< btCollisionObject * >,dstType> {
	static inline dstType* cast(btAlignedObjectArray< btCollisionObject * >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btAlignedObjectArray< unsigned int >,dstType> {
	static inline dstType* cast(btAlignedObjectArray< unsigned int >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btAlignedObjectArray< btDbvtProxy * >,dstType> {
	static inline dstType* cast(btAlignedObjectArray< btDbvtProxy * >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btAlignedObjectArray< btBroadphaseInterface * >,dstType> {
	static inline dstType* cast(btAlignedObjectArray< btBroadphaseInterface * >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btAlignedObjectArray< btBroadphasePair >,dstType> {
	static inline dstType* cast(btAlignedObjectArray< btBroadphasePair >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btAlignedObjectArray< btVector3 >,dstType> {
	static inline dstType* cast(btAlignedObjectArray< btVector3 >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btAlignedObjectArray< btOptimizedBvhNode >,dstType> {
	static inline dstType* cast(btAlignedObjectArray< btOptimizedBvhNode >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btAlignedObjectArray< btQuantizedBvhNode >,dstType> {
	static inline dstType* cast(btAlignedObjectArray< btQuantizedBvhNode >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btAlignedObjectArray< btBvhSubtreeInfo >,dstType> {
	static inline dstType* cast(btAlignedObjectArray< btBvhSubtreeInfo >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btAlignedObjectArray< btSolverConstraint >,dstType> {
	static inline dstType* cast(btAlignedObjectArray< btSolverConstraint >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btAlignedObjectArray< btIndexedMesh >,dstType> {
	static inline dstType* cast(btAlignedObjectArray< btIndexedMesh >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btAlignedObjectArray< btMaterialProperties >,dstType> {
	static inline dstType* cast(btAlignedObjectArray< btMaterialProperties >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<btHashMap< btHashInt, btTriangleInfo >,dstType> {
	static inline dstType* cast(btHashMap< btHashInt, btTriangleInfo >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};


#endif

