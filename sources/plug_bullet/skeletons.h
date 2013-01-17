#ifndef _bullet_SKELETONS_H_
#define _bullet_SKELETONS_H_

class bt32BitAxisSweep3: public btAxisSweep3Internal {
};

class BT_BOX_BOX_TRANSFORM_CACHE {
};

class BT_QUANTIZED_BVH_NODE {
};

class btAABB {
};

class btActionInterface {
};

class btActivatingCollisionAlgorithm: public btCollisionAlgorithm {
};

class btAlignedAllocator {
public:
	class rebind {
	public:
		class other {
		};

	};

};

class btAlignedObjectArray {
public:
	class less {
	};

};

class btAngleCompareFunc {
};

class btAngularLimit {
};

class btAxisSweep3: public btAxisSweep3Internal {
};

class btAxisSweep3Internal: public btBroadphaseInterface {
public:
	class Edge {
	};

	class Handle: public btBroadphaseProxy {
	};

};

class btBlock {
};

class btBox2dBox2dCollisionAlgorithm: public btActivatingCollisionAlgorithm {
public:
	class CreateFunc: public btCollisionAlgorithmCreateFunc {
	};

};

class btBox2dShape: public btPolyhedralConvexShape {
};

class btBoxBoxCollisionAlgorithm: public btActivatingCollisionAlgorithm {
public:
	class CreateFunc: public btCollisionAlgorithmCreateFunc {
	};

};

class btBoxBoxDetector: public btDiscreteCollisionDetectorInterface {
};

class btBoxShape: public btPolyhedralConvexShape {
};

class btBroadphaseAabbCallback {
};

class btBroadphaseInterface {
};

class btBroadphasePair {
};

class btBroadphasePairSortPredicate {
};

class btBroadphaseProxy {
};

class btBroadphaseRayCallback: public btBroadphaseAabbCallback {
};

class btBU_Simplex1to4: public btPolyhedralConvexAabbCachingShape {
};

class btBvhSubtreeInfo {
};

class btBvhSubtreeInfoData {
};

class btBvhTree {
};

class btBvhTriangleMeshShape: public btTriangleMeshShape {
};

class btCapsuleShape: public btConvexInternalShape {
};

class btCapsuleShapeData {
};

class btCapsuleShapeX: public btCapsuleShape {
};

class btCapsuleShapeZ: public btCapsuleShape {
};

class btCharacterControllerInterface: public btActionInterface {
};

class btCharIndexTripletData {
};

class btChunk {
};

class btClock {
};

class btCollisionAlgorithm {
};

class btCollisionAlgorithmConstructionInfo {
};

class btCollisionAlgorithmCreateFunc {
};

class btCollisionConfiguration {
};

class btCollisionDispatcher: public btDispatcher {
};

class btCollisionObject {
};

class btCollisionObjectDoubleData {
};

class btCollisionObjectFloatData {
};

class btCollisionObjectWrapper {
};

class btCollisionShape {
};

class btCollisionShapeData {
};

class btCollisionWorld {
public:
	class AllHitsRayResultCallback: public btCollisionWorld::RayResultCallback {
	};

	class ClosestConvexResultCallback: public btCollisionWorld::ConvexResultCallback {
	};

	class ClosestRayResultCallback: public btCollisionWorld::RayResultCallback {
	};

	class ContactResultCallback {
	};

	class ConvexResultCallback {
	};

	class LocalConvexResult {
	};

	class LocalRayResult {
	};

	class LocalShapeInfo {
	};

	class RayResultCallback {
	};

};

class btCompoundCollisionAlgorithm: public btActivatingCollisionAlgorithm {
public:
	class CreateFunc: public btCollisionAlgorithmCreateFunc {
	};

	class SwappedCreateFunc: public btCollisionAlgorithmCreateFunc {
	};

};

class btCompoundShape: public btCollisionShape {
};

class btCompoundShapeChild {
};

class btCompoundShapeChildData {
};

class btCompoundShapeData {
};

class btConcaveShape: public btCollisionShape {
};

class btConeShape: public btConvexInternalShape {
};

class btConeShapeX: public btConeShape {
};

class btConeShapeZ: public btConeShape {
};

class btConeTwistConstraint: public btTypedConstraint {
};

class btConeTwistConstraintData {
};

class btConstraintRow {
};

class btConstraintSetting {
};

class btConstraintSolver {
};

class btContactArray: public btAlignedObjectArray {
};

class btContactConstraint: public btTypedConstraint {
};

class btContactSolverInfo: public btContactSolverInfoData {
};

class btContactSolverInfoData {
};

class btContactSolverInfoDoubleData {
};

class btContactSolverInfoFloatData {
};

class btContinuousConvexCollision: public btConvexCast {
};

class btConvex2dConvex2dAlgorithm: public btActivatingCollisionAlgorithm {
public:
	class CreateFunc: public btCollisionAlgorithmCreateFunc {
	};

};

class btConvex2dShape: public btConvexShape {
};

class btConvexCast {
public:
	class CastResult {
	};

};

class btConvexConcaveCollisionAlgorithm: public btActivatingCollisionAlgorithm {
public:
	class CreateFunc: public btCollisionAlgorithmCreateFunc {
	};

	class SwappedCreateFunc: public btCollisionAlgorithmCreateFunc {
	};

};

class btConvexConvexAlgorithm: public btActivatingCollisionAlgorithm {
public:
	class CreateFunc: public btCollisionAlgorithmCreateFunc {
	};

};

class btConvexHullComputer {
public:
	class Edge {
	};

};

class btConvexHullShape: public btPolyhedralConvexAabbCachingShape {
};

class btConvexHullShapeData {
};

class btConvexInternalAabbCachingShape: public btConvexInternalShape {
};

class btConvexInternalShape: public btConvexShape {
};

class btConvexInternalShapeData {
};

class btConvexPenetrationDepthSolver {
};

class btConvexPlaneCollisionAlgorithm: public btCollisionAlgorithm {
public:
	class CreateFunc: public btCollisionAlgorithmCreateFunc {
	};

};

class btConvexPointCloudShape: public btPolyhedralConvexAabbCachingShape {
};

class btConvexPolyhedron {
};

class btConvexSeparatingDistanceUtil {
};

class btConvexShape: public btCollisionShape {
};

class btConvexTriangleCallback: public btTriangleCallback {
};

class btConvexTriangleMeshShape: public btPolyhedralConvexAabbCachingShape {
};

class btCylinderShape: public btConvexInternalShape {
};

class btCylinderShapeData {
};

class btCylinderShapeX: public btCylinderShape {
};

class btCylinderShapeZ: public btCylinderShape {
};

class btDbvt {
public:
	class IClone {
	};

	class ICollide {
	};

	class IWriter {
	};

	class sStkCLN {
	};

	class sStkNN {
	};

	class sStkNP {
	};

	class sStkNPS {
	};

};

class btDbvtAabbMm {
};

class btDbvtBroadphase: public btBroadphaseInterface {
};

class btDbvtNode {
};

class btDbvtProxy: public btBroadphaseProxy {
};

class btDefaultCollisionConfiguration: public btCollisionConfiguration {
};

class btDefaultCollisionConstructionInfo {
};

class btDefaultMotionState: public btMotionState {
};

class btDefaultSerializer: public btSerializer {
};

class btDefaultVehicleRaycaster: public btVehicleRaycaster {
};

class btDiscreteCollisionDetectorInterface {
public:
	class ClosestPointInput {
	};

	class Result {
	};

};

class btDiscreteDynamicsWorld: public btDynamicsWorld {
};

class btDispatcher {
};

class btDispatcherInfo {
};

class btDynamicsWorld: public btCollisionWorld {
};

class btDynamicsWorldDoubleData {
};

class btDynamicsWorldFloatData {
};

class btElement {
};

class btEmptyAlgorithm: public btCollisionAlgorithm {
public:
	class CreateFunc: public btCollisionAlgorithmCreateFunc {
	};

};

class btEmptyShape: public btConcaveShape {
};

class btFace {
};

class btGearConstraint: public btTypedConstraint {
};

class btGEN_Link {
};

class btGEN_List {
};

class btGeneric6DofConstraint: public btTypedConstraint {
};

class btGeneric6DofConstraintData {
};

class btGeneric6DofSpringConstraint: public btGeneric6DofConstraint {
};

class btGeneric6DofSpringConstraintData {
};

class btGenericMemoryPool {
};

class btGenericPoolAllocator {
};

class btGeometryUtil {
};

class btGhostObject: public btCollisionObject {
};

class btGhostPairCallback: public btOverlappingPairCallback {
};

class btGImpactBvh {
};

class btGImpactCollisionAlgorithm: public btActivatingCollisionAlgorithm {
public:
	class CreateFunc: public btCollisionAlgorithmCreateFunc {
	};

};

class btGImpactCompoundShape: public btGImpactShapeInterface {
public:
	class CompoundPrimitiveManager: public btPrimitiveManagerBase {
	};

};

class btGImpactMeshShape: public btGImpactShapeInterface {
};

class btGImpactMeshShapeData {
};

class btGImpactMeshShapePart: public btGImpactShapeInterface {
public:
	class TrimeshPrimitiveManager: public btPrimitiveManagerBase {
	};

};

class btGImpactQuantizedBvh {
};

class btGImpactShapeInterface: public btConcaveShape {
};

class btGjkConvexCast: public btConvexCast {
};

class btGjkEpaPenetrationDepthSolver: public btConvexPenetrationDepthSolver {
};

class btGjkEpaSolver2 {
public:
	class sResults {
	};

};

class btGjkPairDetector: public btDiscreteCollisionDetectorInterface {
};

class btHashedOverlappingPairCache: public btOverlappingPairCache {
};

class btHashInt {
};

class btHashKey {
};

class btHashKeyPtr {
};

class btHashMap {
};

class btHashPtr {
};

class btHashString {
};

class btHeightfieldTerrainShape: public btConcaveShape {
};

class btHinge2Constraint: public btGeneric6DofSpringConstraint {
};

class btHingeConstraint: public btTypedConstraint {
};

class btHingeConstraintDoubleData {
};

class btHingeConstraintFloatData {
};

class btIDebugDraw {
};

class btIndexedMesh {
};

class btInternalTriangleIndexCallback {
};

class btIntIndexData {
};

class btJacobianEntry {
};

class btJointFeedback {
};

class btKinematicCharacterController: public btCharacterControllerInterface {
};

class btManifoldPoint {
};

class btManifoldResult: public btDiscreteCollisionDetectorInterface::Result {
};

class btMaterial {
};

class btMaterialProperties {
};

class btMatrix3x3 {
};

class btMatrix3x3DoubleData {
};

class btMatrix3x3FloatData {
};

class btMeshPartData {
};

class btMinkowskiPenetrationDepthSolver: public btConvexPenetrationDepthSolver {
};

class btMinkowskiSumShape: public btConvexInternalShape {
};

class btMotionState {
};

class btMultimaterialTriangleMeshShape: public btBvhTriangleMeshShape {
};

class btMultiSapBroadphase: public btBroadphaseInterface {
public:
	class btBridgeProxy {
	};

	class btMultiSapProxy: public btBroadphaseProxy {
	};

};

class btMultiSphereShape: public btConvexInternalAabbCachingShape {
};

class btMultiSphereShapeData {
};

class btNodeOverlapCallback {
};

class btNullPairCache: public btOverlappingPairCache {
};

class btOptimizedBvh: public btQuantizedBvh {
};

class btOptimizedBvhNode {
};

class btOptimizedBvhNodeDoubleData {
};

class btOptimizedBvhNodeFloatData {
};

class btOverlapCallback {
};

class btOverlapFilterCallback {
};

class btOverlappingPairCache: public btOverlappingPairCallback {
};

class btOverlappingPairCallback {
};

class btPairCachingGhostObject: public btGhostObject {
};

class btPairSet: public btAlignedObjectArray {
};

class btPersistentManifold: public btTypedObject {
};

class btPlane {
};

class btPoint2PointConstraint: public btTypedConstraint {
};

class btPoint2PointConstraintDoubleData {
};

class btPoint2PointConstraintFloatData {
};

class btPointCollector: public btDiscreteCollisionDetectorInterface::Result {
};

class btPointerUid {
};

class btPolarDecomposition {
};

class btPolyhedralContactClipping {
};

class btPolyhedralConvexAabbCachingShape: public btPolyhedralConvexShape {
};

class btPolyhedralConvexShape: public btConvexInternalShape {
};

class btPoolAllocator {
};

class btPositionAndRadius {
};

class btPrimitiveManagerBase {
};

class btPrimitiveTriangle {
};

class btQuadWord {
};

class btQuantizedBvh {
};

class btQuantizedBvhDoubleData {
};

class btQuantizedBvhFloatData {
};

class btQuantizedBvhNode {
};

class btQuantizedBvhNodeData {
};

class btQuantizedBvhTree {
};

class btQuaternion: public btQuadWord {
};

class btRaycastVehicle: public btActionInterface {
public:
	class btVehicleTuning {
	};

};

class btRigidBody: public btCollisionObject {
public:
	class btRigidBodyConstructionInfo {
	};

};

class btRigidBodyDoubleData {
};

class btRigidBodyFloatData {
};

class btRotationalLimitMotor {
};

class btScaledBvhTriangleMeshShape: public btConcaveShape {
};

class btScaledTriangleMeshShapeData {
};

class btSequentialImpulseConstraintSolver: public btConstraintSolver {
};

class btSerializer {
};

class btShapeHull {
};

class btShortIntIndexData {
};

class btShortIntIndexTripletData {
};

class btSimpleBroadphase: public btBroadphaseInterface {
};

class btSimpleBroadphaseProxy: public btBroadphaseProxy {
};

class btSimpleDynamicsWorld: public btDynamicsWorld {
};

class btSimulationIslandManager {
public:
	class IslandCallback {
	};

};

class btSliderConstraint: public btTypedConstraint {
};

class btSliderConstraintData {
};

class btSolve2LinearConstraint {
};

class btSolverBody {
};

class btSolverConstraint {
};

class btSortedOverlappingPairCache: public btOverlappingPairCache {
};

class btSphereBoxCollisionAlgorithm: public btActivatingCollisionAlgorithm {
public:
	class CreateFunc: public btCollisionAlgorithmCreateFunc {
	};

};

class btSphereShape: public btConvexInternalShape {
};

class btSphereSphereCollisionAlgorithm: public btActivatingCollisionAlgorithm {
public:
	class CreateFunc: public btCollisionAlgorithmCreateFunc {
	};

};

class btSphereTriangleCollisionAlgorithm: public btActivatingCollisionAlgorithm {
public:
	class CreateFunc: public btCollisionAlgorithmCreateFunc {
	};

};

class btStackAlloc {
};

class btStaticPlaneShape: public btConcaveShape {
};

class btStaticPlaneShapeData {
};

class btStorageResult: public btDiscreteCollisionDetectorInterface::Result {
};

class btStridingMeshInterface {
};

class btStridingMeshInterfaceData {
};

class btSubSimplexClosestResult {
};

class btSubsimplexConvexCast: public btConvexCast {
};

class btTetrahedronShapeEx: public btBU_Simplex1to4 {
};

class btTransform {
};

class btTransformDoubleData {
};

class btTransformFloatData {
};

class btTransformUtil {
};

class btTranslationalLimitMotor {
};

class btTriangle {
};

class btTriangleBuffer: public btTriangleCallback {
};

class btTriangleCallback {
};

class btTriangleConvexcastCallback: public btTriangleCallback {
};

class btTriangleIndexVertexArray: public btStridingMeshInterface {
};

class btTriangleIndexVertexMaterialArray: public btTriangleIndexVertexArray {
};

class btTriangleInfo {
};

class btTriangleInfoData {
};

class btTriangleInfoMap: public btHashMap {
};

class btTriangleInfoMapData {
};

class btTriangleMesh: public btTriangleIndexVertexArray {
};

class btTriangleMeshShape: public btConcaveShape {
};

class btTriangleMeshShapeData {
};

class btTriangleRaycastCallback: public btTriangleCallback {
};

class btTriangleShape: public btPolyhedralConvexShape {
};

class btTriangleShapeEx: public btTriangleShape {
};

class btTypedConstraint: public btTypedObject {
public:
	class btConstraintInfo1 {
	};

	class btConstraintInfo2 {
	};

};

class btTypedConstraintData {
};

class btTypedObject {
};

class btUniformScalingShape: public btConvexShape {
};

class btUnionFind {
};

class btUniversalConstraint: public btGeneric6DofConstraint {
};

class btUsageBitfield {
};

class btVector3 {
};

class btVector3DoubleData {
};

class btVector3FloatData {
};

class btVector4: public btVector3 {
};

class btVehicleRaycaster {
public:
	class btVehicleRaycasterResult {
	};

};

class btVoronoiSimplexSolver {
};

class btWheelInfo {
public:
	class RaycastInfo {
	};

};

class btWheelInfoConstructionInfo {
};

class ConvexH {
public:
	class HalfEdge {
	};

};

class CProfileIterator {
};

class CProfileManager {
};

class CProfileNode {
};

class CProfileSample {
};

class GIM_BVH_DATA {
};

class GIM_BVH_DATA_ARRAY: public btAlignedObjectArray {
};

class GIM_BVH_TREE_NODE {
};

class GIM_BVH_TREE_NODE_ARRAY: public btAlignedObjectArray {
};

class GIM_CONTACT {
};

class GIM_PAIR {
};

class GIM_QUANTIZED_BVH_NODE_ARRAY: public btAlignedObjectArray {
};

class GIM_TRIANGLE_CONTACT {
};

class GrahamVector3: public btVector3 {
};

class HullDesc {
};

class HullLibrary {
};

class HullResult {
};

class int4 {
};

class PHullResult {
};

class SphereTriangleDetector: public btDiscreteCollisionDetectorInterface {
};

class btManifoldArray {
};

class btCollisionObjectArray {
};

class TUIntArray {
};

class btDbvtProxyArray {
};

class btSapBroadphaseArray {
};

class btBroadphasePairArray {
};

class btVertexArray {
};

class NodeArray {
};

class QuantizedNodeArray {
};

class BvhSubtreeInfoArray {
};

class btConstraintArray {
};

class IndexedMeshArray {
};

class MaterialArray {
};

class btInternalTriangleInfoMap {
};


#endif
